/***** spin: msc_tcl.c *****/

/* Copyright (c) 1997-2014 by Lucent Technologies, Bell Laboratories.     */
/* All Rights Reserved.  This software is for educational purposes only.  */
/* No guarantee whatsoever is expressed or implied by the distribution of */
/* this code.  Permission is given to distribute this code provided that  */
/* this introductory message is not removed and no monies are exchanged.  */
/* Software written by Gerard J. Holzmann.  For tool documentation see:   */
/*             http://spinroot.com/                                       */
/* Send all bug-reports and/or questions to: bugs@spinroot.com            */

#include "spin.h"
#include "version.h"
#include <stdlib.h>

#define MW	500	/* page width */
#define RH	100	/* right margin */
#define WW	 80	/* distance between process lines */
#define HH	 12	/* vertical distance between steps */

static int	MH = 600;	/* anticipated page-length */
static FILE	*pfd;
static char	**I;		/* initial procs */
static int	*D,*R;		/* maps between depth (stepnr) and ldepth (msc-step) */
static short	*M;		/* x location of each box at index y */
static short	*T;		/* y index of match for each box at index y */
static char	**L;		/* text labels */
static int	ProcLine[256];	/* active processes */
static int	UsedLine[256];	/* process line has at least one entry */
static int	ldepth = 1;
static int	maxx, TotSteps = 2*4096; /* max nr of steps for simulation output */
static float	Scaler = (float) 1.0;

static int	xscale = 2;
static int	yscale = 1;
static int	no_box;

extern int	ntrail, s_trail, pno, depth;
extern Symbol	*oFname;

extern void	exit(int);
extern void	putpostlude(void);

static void	putpages(void);

static void
psline(int x0, int y0, int x1, int y1, char *color)
{	char *side = "last";

	if (x0 == x1)	/* gridline */
	{	fprintf(pfd, ".c create line %d %d %d %d -fill %s -tags grid\n",
			xscale*(x0+1)*WW-20, yscale*y0+20,
			xscale*(x1+1)*WW-20, yscale*y1+20, color);
		fprintf(pfd, ".c lower grid\n");
	} else
	{	fprintf(pfd, ".c create line %d %d %d %d -fill %s ",
			xscale*(x0+1)*WW-20, yscale*y0+20+10,
			xscale*(x1+1)*WW-20, yscale*y1+20-10, color);
		if (strcmp(color, "red") == 0)
		{	side = "both";
		}
		fprintf(pfd, "-arrow %s -arrowshape {5 5 5} -tags mesg\n", side);
		fprintf(pfd, ".c raise mesg\n");
	}
}

static void
colbox(int ix, int iy, int w, int h, char *color)
{	int x = ix*WW;
	int y = iy*HH;

	if (ix < 0 || ix > 255)
	{	fatal("msc_tcl: unexpected\n", (char *) 0);
	}

	if (ProcLine[ix] < iy)
	{	/* if (ProcLine[ix] > 0) */
		{	psline(ix-1, ProcLine[ix]*HH+HH+4,
			       ix-1, iy*HH-HH, "lightgrey");
		}
		fprintf(pfd, "# ProcLine[%d] from %d to %d (Used %d nobox %d)\n",
			ix, ProcLine[ix], iy, UsedLine[ix], no_box);
		ProcLine[ix] = iy;
	} else
	{	fprintf(pfd, "# ProcLine[%d] stays at %d (Used %d nobox %d)\n",
			ix, ProcLine[ix], UsedLine[ix], no_box);
	}

	if (UsedLine[ix])
	{	no_box = 2;
	}

	if (strcmp(color, "black") == 0)
	{	if (no_box == 0)	/* shadow */
		{	fprintf(pfd, ".c create rectangle %d %d %d %d -fill black\n",
				xscale*x-(xscale*4*w/3)-20+4, (yscale*y-10)+20+2,
				xscale*x+(xscale*4*w/3)-20,   (yscale*y+10)+20+2);
		}
	} else
	{	if (no_box == 0)	/* box with outline */
		{	fprintf(pfd, ".c create rectangle %d %d %d %d -fill ivory\n",
				xscale*x-(xscale*4*w/3)-20, (yscale*y-10)+20,
				xscale*x+(xscale*4*w/3)-20, (yscale*y+10)+20);
			UsedLine[ix]++;
		} else			/* no outline */
		{	fprintf(pfd, ".c create rectangle %d %d %d %d -fill white -width 0\n",
				xscale*x-(xscale*4*w/3)-20, (yscale*y-10)+20,
				xscale*x+(xscale*4*w/3)-20, (yscale*y+10)+20);
	}	}
	if (no_box > 0)
	{	no_box--;
	}
}

static void
stepnumber(int i)
{	int y = (yscale*i*HH) + 20;

	fprintf(pfd, ".c create text %d %d -fill #eef -text \"%d\"\n",
		-10+(xscale*WW)/2, y, i);

	/* horizontal dashed grid line */
	fprintf(pfd, ".c create line %d %d %d %d -fill #eef -dash {6 4}\n",
		-20+WW*xscale, y, (maxx+1)*WW*xscale-20, y);
}

static void
spitbox(int ix, int y, char *s)
{	float bw;	/* box width */
	char d[256], *t, *z;
	int a, i, x = ix+1;
	char *color = "black";

	if (y > 0)
	{	stepnumber(y);
	}

	bw = (float)1.8*(float)strlen(s);	/* guess at default font width */
	colbox(x, y, (int) (bw+1.0), 5, "black");
	if (s[0] == '~')
	{	switch (s[1]) {
		default :
		case 'R': color = "red";   break;
		case 'B': color = "blue";  break;
		case 'G': color = "green"; break;
		}
		s += 2;
	} else if (strchr(s, '!'))
	{	color = "ivory";
	} else if (strchr(s, '?'))
	{	color = "azure";
	} else
	{	color = "pink";
		if (sscanf(s, "%d:%250s", &a, d) == 2
		&&  a >= 0 && a < TotSteps)
		{	if (!I[a]  || strlen(I[a]) <= strlen(s))
			{	I[a] = (char *) emalloc((int) strlen(s)+1);
			}
			strcpy(I[a], s);
	}	}

	colbox(x, y, (int) bw, 4, color);

	z = t = (char *) emalloc(2*strlen(s)+1);

	for (i = 0; i < strlen(s); i++)
	{	if (s[i] == '\n')
		{	continue;
		}
		if (s[i] == '[' || s[i] == ']')
		{	*t++ = '\\';
		}
		*t++ = s[i];
	}

	fprintf(pfd, ".c create text %d %d -text \"%s\"\n",
		xscale*x*WW-20, yscale*y*HH+20, z);
}

static void
putpages(void)
{	int i, lasti=0; float nmh;

	if (maxx*xscale*WW > MW-RH/2)
	{	Scaler = (float) (MW-RH/2) / (float) (maxx*xscale*WW);
		nmh = (float) MH; nmh /= Scaler; MH = (int) nmh;
		fprintf(pfd, "# Scaler %f, MH %d\n", Scaler, MH);
	}
	if (ldepth >= TotSteps)
	{	ldepth = TotSteps-1;
	}

/* W: (maxx+2)*xscale*WW  */
/* H: ldepth*HH*yscale+50 */

	fprintf(pfd, "canvas .c -width 800 -height 800 \\\n");
	fprintf(pfd, "	-scrollregion {0c -1c 30c 100c} \\\n");
	fprintf(pfd, "	-xscrollcommand \".hscroll set\" \\\n");
	fprintf(pfd, "	-yscrollcommand \".vscroll set\" \\\n");
	fprintf(pfd, "	-bg white -relief raised -bd 2\n");

	fprintf(pfd, "scrollbar .vscroll -relief sunken ");
	fprintf(pfd, " -command \".c yview\"\n");
	fprintf(pfd, "scrollbar .hscroll -relief sunken -orient horiz ");
	fprintf(pfd, " -command \".c xview\"\n");

	fprintf(pfd, "pack append . \\\n");
	fprintf(pfd, "	.vscroll {right filly} \\\n");
	fprintf(pfd, "	.hscroll {bottom fillx} \\\n");
	fprintf(pfd, "	.c {top expand fill}\n");

	fprintf(pfd, ".c yview moveto 0\n");

	for (i = TotSteps-1; i >= 0; i--)
	{	if (I[i])
		{	spitbox(i, -1, I[i]);
	}	}

	for (i = 0; i <= ldepth; i++)
	{	if (!M[i] && !L[i])
		{	continue;	/* no box */
		}
		if (T[i] > 0)		/* arrow */
		{	if (T[i] == i)	/* rv handshake */
			{	psline(	M[lasti], lasti*HH,
					M[i],     i*HH,
					"red");
			} else
			{	psline(	M[i],     i*HH,
					M[T[i]],  T[i]*HH,
					"blue");
		}	}
		if (L[i])
		{	spitbox(M[i], i, L[i]);
			lasti = i;
	}	}
}

static void
putbox(int x)
{
	if (ldepth >= TotSteps)
	{	fprintf(stderr, "max length of %d steps exceeded - ps file truncated\n",
			TotSteps);
		putpostlude();
	}
	M[ldepth] = x;
	if (x > maxx)
	{	maxx = x;
		fprintf(pfd, "# maxx %d\n", x);
	}
}

/* functions called externally: */

extern int WhatSeed(void);

void
putpostlude(void)
{	char cmd[512];

	putpages();
	fprintf(pfd, ".c lower grid\n");
	fprintf(pfd, ".c raise mesg\n");
	fclose(pfd);

	fprintf(stderr, "seed used: -n%d\n", WhatSeed());
	sprintf(cmd, "wish -f %s.tcl &", oFname?oFname->name:"msc");
	fprintf(stderr, "%s\n", cmd);
	(void) unlink("pan.pre");
	exit (system(cmd));
}

void
putprelude(void)
{	char snap[256]; FILE *fd;

	sprintf(snap, "%s.tcl", oFname?oFname->name:"msc");
	if (!(pfd = fopen(snap, MFLAGS)))
	{	fatal("cannot create file '%s'", snap);
	}
	if (s_trail)
	{	if (ntrail)
		sprintf(snap, "%s%d.trail", oFname?oFname->name:"msc", ntrail);
		else
		sprintf(snap, "%s.trail", oFname?oFname->name:"msc");
		if (!(fd = fopen(snap, "r")))
		{	snap[strlen(snap)-2] = '\0';
			if (!(fd = fopen(snap, "r")))
				fatal("cannot open trail file", (char *) 0);
		}
		TotSteps = 1;
		while (fgets(snap, 256, fd)) TotSteps++;
		fclose(fd);
	}
	TotSteps += 10;
	R = (int   *) emalloc(TotSteps * sizeof(int));
	D = (int   *) emalloc(TotSteps * sizeof(int));
	M = (short *) emalloc(TotSteps * sizeof(short));
	T = (short *) emalloc(TotSteps * sizeof(short));
	L = (char **) emalloc(TotSteps * sizeof(char *));
	I = (char **) emalloc(TotSteps * sizeof(char *));
}

void
putarrow(int from, int to)
{
	/* from rv if from == to */
	/* which means that D[from] == D[to] */
	/* which means that T[x] == x */

	if (from    < TotSteps
	&&  to      < TotSteps
	&   D[from] < TotSteps)
	{	T[D[from]] = D[to];
	}
}

void
pstext(int x, char *s)
{	char *tmp = emalloc((int) strlen(s)+1);

	strcpy(tmp, s);
	if (depth == 0)
	{	I[x] = tmp;
	} else
	{	if (depth >= TotSteps || ldepth >= TotSteps)
		{	fprintf(stderr, "spin: error: max nr of %d steps exceeded\n",
				TotSteps);
			fatal("use -uN to limit steps", (char *) 0);
		}
		putbox(x);
		D[depth] = ldepth;
		R[ldepth] = depth;
		L[ldepth] = tmp;
		ldepth += 2;
	}
}

void
dotag(FILE *fd, char *s)
{	extern int columns, notabs; extern RunList *X;
	int i = (!strncmp(s, "MSC: ", 5))?5:0;
	int pid = s_trail ? pno : (X?X->pid:0);

	if (columns == 2)
	{	pstext(pid, &s[i]);
	} else
	{	if (!notabs)
		{	printf("  ");
			for (i = 0; i <= pid; i++)
			{	printf("    ");
		}	}
		fprintf(fd, "%s", s);
		fflush(fd);
	}
}
