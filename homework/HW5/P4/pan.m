#define rand	pan_rand
#define pthread_equal(a,b)	((a)==(b))
#if defined(HAS_CODE) && defined(VERBOSE)
	#ifdef BFS_PAR
		bfs_printf("Pr: %d Tr: %d\n", II, t->forw);
	#else
		cpu_printf("Pr: %d Tr: %d\n", II, t->forw);
	#endif
#endif
	switch (t->forw) {
	default: Uerror("bad forward move");
	case 0:	/* if without executable clauses */
		continue;
	case 1: /* generic 'goto' or 'skip' */
		IfNotBlocked
		_m = 3; goto P999;
	case 2: /* generic 'else' */
		IfNotBlocked
		if (trpt->o_pm&1) continue;
		_m = 3; goto P999;

		 /* CLAIM fair */
	case 3: // STATE 1 - _spin_nvr.tmp:13 - [(!(crit[3]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported1 = 0;
			if (verbose && !reported1)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported1 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported1 = 0;
			if (verbose && !reported1)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported1 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][1] = 1;
		if (!( !(((int)now.crit[3]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 4: // STATE 3 - _spin_nvr.tmp:14 - [(!(crit[2]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported3 = 0;
			if (verbose && !reported3)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported3 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported3 = 0;
			if (verbose && !reported3)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported3 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][3] = 1;
		if (!( !(((int)now.crit[2]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 5: // STATE 5 - _spin_nvr.tmp:15 - [(!(crit[1]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported5 = 0;
			if (verbose && !reported5)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported5 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported5 = 0;
			if (verbose && !reported5)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported5 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][5] = 1;
		if (!( !(((int)now.crit[1]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 6: // STATE 7 - _spin_nvr.tmp:16 - [(!(crit[0]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported7 = 0;
			if (verbose && !reported7)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported7 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported7 = 0;
			if (verbose && !reported7)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported7 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][7] = 1;
		if (!( !(((int)now.crit[0]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 7: // STATE 12 - _spin_nvr.tmp:21 - [(!(crit[3]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported12 = 0;
			if (verbose && !reported12)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported12 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported12 = 0;
			if (verbose && !reported12)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported12 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][12] = 1;
		if (!( !(((int)now.crit[3]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 8: // STATE 17 - _spin_nvr.tmp:26 - [(!(crit[2]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported17 = 0;
			if (verbose && !reported17)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported17 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported17 = 0;
			if (verbose && !reported17)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported17 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][17] = 1;
		if (!( !(((int)now.crit[2]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 9: // STATE 22 - _spin_nvr.tmp:31 - [(!(crit[1]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported22 = 0;
			if (verbose && !reported22)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported22 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported22 = 0;
			if (verbose && !reported22)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported22 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][22] = 1;
		if (!( !(((int)now.crit[1]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 10: // STATE 27 - _spin_nvr.tmp:36 - [(!(crit[0]))] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported27 = 0;
			if (verbose && !reported27)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported27 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported27 = 0;
			if (verbose && !reported27)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported27 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][27] = 1;
		if (!( !(((int)now.crit[0]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 11: // STATE 32 - _spin_nvr.tmp:38 - [-end-] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported32 = 0;
			if (verbose && !reported32)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported32 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported32 = 0;
			if (verbose && !reported32)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported32 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[2][32] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* CLAIM mutex */
	case 12: // STATE 1 - _spin_nvr.tmp:3 - [(!(((((crit[0]+crit[1])+crit[2])+crit[3])<=1)))] (6:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported1 = 0;
			if (verbose && !reported1)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported1 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported1 = 0;
			if (verbose && !reported1)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported1 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[1][1] = 1;
		if (!( !(((((((int)now.crit[0])+((int)now.crit[1]))+((int)now.crit[2]))+((int)now.crit[3]))<=1))))
			continue;
		/* merge: assert(!(!(((((crit[0]+crit[1])+crit[2])+crit[3])<=1))))(0, 2, 6) */
		reached[1][2] = 1;
		spin_assert( !( !(((((((int)now.crit[0])+((int)now.crit[1]))+((int)now.crit[2]))+((int)now.crit[3]))<=1))), " !( !(((((crit[0]+crit[1])+crit[2])+crit[3])<=1)))", II, tt, t);
		/* merge: .(goto)(0, 7, 6) */
		reached[1][7] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 13: // STATE 10 - _spin_nvr.tmp:8 - [-end-] (0:0:0 - 1)
		
#if defined(VERI) && !defined(NP)
#if NCLAIMS>1
		{	static int reported10 = 0;
			if (verbose && !reported10)
			{	int nn = (int) ((Pclaim *)pptr(0))->_n;
				printf("depth %ld: Claim %s (%d), state %d (line %d)\n",
					depth, procname[spin_c_typ[nn]], nn, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported10 = 1;
				fflush(stdout);
		}	}
#else
		{	static int reported10 = 0;
			if (verbose && !reported10)
			{	printf("depth %d: Claim, state %d (line %d)\n",
					(int) depth, (int) ((Pclaim *)pptr(0))->_p, src_claim[ (int) ((Pclaim *)pptr(0))->_p ]);
				reported10 = 1;
				fflush(stdout);
		}	}
#endif
#endif
		reached[1][10] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */

		 /* PROC bakery */
	case 14: // STATE 1 - bakery.pml:29 - [enter[_pid] = 1] (0:0:1 - 1)
		IfNotBlocked
		reached[0][1] = 1;
		(trpt+1)->bup.oval = ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = 1;
#ifdef VAR_RANGES
		logval("enter[_pid]", ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 15: // STATE 2 - bakery.pml:34 - [((i<4))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][2] = 1;
		if (!((((P0 *)this)->_1_1_i<4)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 16: // STATE 3 - bakery.pml:34 - [((num[i]>max))] (12:0:3 - 1)
		IfNotBlocked
		reached[0][3] = 1;
		if (!((now.num[ Index(((P0 *)this)->_1_1_i, 4) ]>((P0 *)this)->_1_1_max)))
			continue;
		if (TstOnly) return 1; /* TT */
		/* dead 1: _1_1_max */  (trpt+1)->bup.ovals = grab_ints(3);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->_1_1_max;
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->_1_1_max = 0;
		/* merge: max = num[i](12, 4, 12) */
		reached[0][4] = 1;
		(trpt+1)->bup.ovals[1] = ((P0 *)this)->_1_1_max;
		((P0 *)this)->_1_1_max = now.num[ Index(((P0 *)this)->_1_1_i, 4) ];
#ifdef VAR_RANGES
		logval("bakery:max", ((P0 *)this)->_1_1_max);
#endif
		;
		/* merge: .(goto)(12, 7, 12) */
		reached[0][7] = 1;
		;
		/* merge: i = (i+1)(12, 8, 12) */
		reached[0][8] = 1;
		(trpt+1)->bup.ovals[2] = ((P0 *)this)->_1_1_i;
		((P0 *)this)->_1_1_i = (((P0 *)this)->_1_1_i+1);
#ifdef VAR_RANGES
		logval("bakery:i", ((P0 *)this)->_1_1_i);
#endif
		;
		/* merge: .(goto)(0, 13, 12) */
		reached[0][13] = 1;
		;
		_m = 3; goto P999; /* 4 */
	case 17: // STATE 8 - bakery.pml:35 - [i = (i+1)] (0:12:1 - 3)
		IfNotBlocked
		reached[0][8] = 1;
		(trpt+1)->bup.oval = ((P0 *)this)->_1_1_i;
		((P0 *)this)->_1_1_i = (((P0 *)this)->_1_1_i+1);
#ifdef VAR_RANGES
		logval("bakery:i", ((P0 *)this)->_1_1_i);
#endif
		;
		/* merge: .(goto)(0, 13, 12) */
		reached[0][13] = 1;
		;
		_m = 3; goto P999; /* 1 */
	case 18: // STATE 9 - bakery.pml:36 - [((i==4))] (24:0:4 - 1)
		IfNotBlocked
		reached[0][9] = 1;
		if (!((((P0 *)this)->_1_1_i==4)))
			continue;
		if (TstOnly) return 1; /* TT */
		/* dead 1: _1_1_i */  (trpt+1)->bup.ovals = grab_ints(4);
		(trpt+1)->bup.ovals[0] = ((P0 *)this)->_1_1_i;
#ifdef HAS_CODE
		if (!readtrail)
#endif
			((P0 *)this)->_1_1_i = 0;
		/* merge: i = 0(24, 10, 24) */
		reached[0][10] = 1;
		(trpt+1)->bup.ovals[1] = ((P0 *)this)->_1_1_i;
		((P0 *)this)->_1_1_i = 0;
#ifdef VAR_RANGES
		logval("bakery:i", ((P0 *)this)->_1_1_i);
#endif
		;
		/* merge: goto :b1(24, 11, 24) */
		reached[0][11] = 1;
		;
		/* merge: num[_pid] = (1+max)(24, 15, 24) */
		reached[0][15] = 1;
		(trpt+1)->bup.ovals[2] = now.num[ Index(((int)((P0 *)this)->_pid), 4) ];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = (1+((P0 *)this)->_1_1_max);
#ifdef VAR_RANGES
		logval("num[_pid]", now.num[ Index(((int)((P0 *)this)->_pid), 4) ]);
#endif
		;
		/* merge: enter[_pid] = 0(24, 16, 24) */
		reached[0][16] = 1;
		(trpt+1)->bup.ovals[3] = ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = 0;
#ifdef VAR_RANGES
		logval("enter[_pid]", ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: .(goto)(0, 25, 24) */
		reached[0][25] = 1;
		;
		_m = 3; goto P999; /* 5 */
	case 19: // STATE 15 - bakery.pml:42 - [num[_pid] = (1+max)] (0:24:2 - 3)
		IfNotBlocked
		reached[0][15] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = now.num[ Index(((int)((P0 *)this)->_pid), 4) ];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = (1+((P0 *)this)->_1_1_max);
#ifdef VAR_RANGES
		logval("num[_pid]", now.num[ Index(((int)((P0 *)this)->_pid), 4) ]);
#endif
		;
		/* merge: enter[_pid] = 0(24, 16, 24) */
		reached[0][16] = 1;
		(trpt+1)->bup.ovals[1] = ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = 0;
#ifdef VAR_RANGES
		logval("enter[_pid]", ((int)now.enter[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: .(goto)(0, 25, 24) */
		reached[0][25] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 20: // STATE 17 - bakery.pml:49 - [((j<4))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][17] = 1;
		if (!((((P0 *)this)->_1_1_j<4)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 21: // STATE 18 - bakery.pml:50 - [(!(enter[j]))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][18] = 1;
		if (!( !(((int)now.enter[ Index(((P0 *)this)->_1_1_j, 4) ]))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 22: // STATE 19 - bakery.pml:51 - [(((num[j]==0)||!(((num[j]<num[_pid])||((num[j]==num[_pid])&&(j<_pid))))))] (24:0:1 - 1)
		IfNotBlocked
		reached[0][19] = 1;
		if (!(((now.num[ Index(((P0 *)this)->_1_1_j, 4) ]==0)|| !(((now.num[ Index(((P0 *)this)->_1_1_j, 4) ]<now.num[ Index(((int)((P0 *)this)->_pid), 4) ])||((now.num[ Index(((P0 *)this)->_1_1_j, 4) ]==now.num[ Index(((int)((P0 *)this)->_pid), 4) ])&&(((P0 *)this)->_1_1_j<((int)((P0 *)this)->_pid))))))))
			continue;
		/* merge: j = (j+1)(0, 20, 24) */
		reached[0][20] = 1;
		(trpt+1)->bup.oval = ((P0 *)this)->_1_1_j;
		((P0 *)this)->_1_1_j = (((P0 *)this)->_1_1_j+1);
#ifdef VAR_RANGES
		logval("bakery:j", ((P0 *)this)->_1_1_j);
#endif
		;
		/* merge: .(goto)(0, 25, 24) */
		reached[0][25] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 23: // STATE 22 - bakery.pml:53 - [j = 0] (0:0:1 - 1)
		IfNotBlocked
		reached[0][22] = 1;
		(trpt+1)->bup.oval = ((P0 *)this)->_1_1_j;
		((P0 *)this)->_1_1_j = 0;
#ifdef VAR_RANGES
		logval("bakery:j", ((P0 *)this)->_1_1_j);
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 24: // STATE 27 - bakery.pml:56 - [printf('Thread %d critical. Using resource.\\n',_pid)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][27] = 1;
		Printf("Thread %d critical. Using resource.\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 0 */
	case 25: // STATE 29 - bakery.pml:60 - [numCrits = (numCrits+1)] (0:0:1 - 1)
		IfNotBlocked
		reached[0][29] = 1;
		(trpt+1)->bup.oval = now.numCrits;
		now.numCrits = (now.numCrits+1);
#ifdef VAR_RANGES
		logval("numCrits", now.numCrits);
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 26: // STATE 30 - bakery.pml:61 - [crit[_pid] = 1] (0:0:1 - 1)
		IfNotBlocked
		reached[0][30] = 1;
		(trpt+1)->bup.oval = ((int)now.crit[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.crit[ Index(((P0 *)this)->_pid, 4) ] = 1;
#ifdef VAR_RANGES
		logval("crit[_pid]", ((int)now.crit[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 27: // STATE 31 - bakery.pml:66 - [num[_pid] = 0] (0:38:2 - 1)
		IfNotBlocked
		reached[0][31] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = now.num[ Index(((int)((P0 *)this)->_pid), 4) ];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = 0;
#ifdef VAR_RANGES
		logval("num[_pid]", now.num[ Index(((int)((P0 *)this)->_pid), 4) ]);
#endif
		;
		/* merge: crit[_pid] = 0(38, 32, 38) */
		reached[0][32] = 1;
		(trpt+1)->bup.ovals[1] = ((int)now.crit[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.crit[ Index(((P0 *)this)->_pid, 4) ] = 0;
#ifdef VAR_RANGES
		logval("crit[_pid]", ((int)now.crit[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: printf('Thread %d noncritical. Not Using resource.\\n',_pid)(38, 33, 38) */
		reached[0][33] = 1;
		Printf("Thread %d noncritical. Not Using resource.\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 2 */
	case 28: // STATE 35 - bakery.pml:72 - [((numCrits>=5))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][35] = 1;
		if (!((now.numCrits>=5)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 29: // STATE 43 - bakery.pml:74 - [-end-] (0:0:0 - 3)
		IfNotBlocked
		reached[0][43] = 1;
		if (!delproc(1, II)) continue;
		_m = 3; goto P999; /* 0 */
	case  _T5:	/* np_ */
		if (!((!(trpt->o_pm&4) && !(trpt->tau&128))))
			continue;
		/* else fall through */
	case  _T2:	/* true */
		_m = 3; goto P999;
#undef rand
	}

