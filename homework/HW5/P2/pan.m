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

		 /* PROC Philosopher */
	case 3: // STATE 1 - dictionary.pml:23 - [((_pid==0))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][1] = 1;
		if (!((((int)((P0 *)this)->_pid)==0)))
			continue;
		_m = 3; goto P999; /* 0 */
	case 4: // STATE 2 - dictionary.pml:24 - [dictionary[_pid] = 1] (0:0:1 - 1)
		IfNotBlocked
		reached[0][2] = 1;
		(trpt+1)->bup.oval = ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = 1;
#ifdef VAR_RANGES
		logval("dictionary[_pid]", ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		_m = 3; goto P999; /* 0 */
	case 5: // STATE 3 - dictionary.pml:25 - [printf('Philosopher[%d] has picked up the Dictionary\\n',_pid)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][3] = 1;
		Printf("Philosopher[%d] has picked up the Dictionary\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 0 */
	case 6: // STATE 7 - dictionary.pml:31 - [(!((dictionary[_pid]==1)))] (0:0:0 - 1)
		IfNotBlocked
		reached[0][7] = 1;
		if (!( !((((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ])==1))))
			continue;
		_m = 3; goto P999; /* 0 */
	case 7: // STATE 8 - dictionary.pml:17 - [((fork[_pid]>0))] (19:0:1 - 1)
		IfNotBlocked
		reached[0][8] = 1;
		if (!((((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ])>0)))
			continue;
		/* merge: fork[_pid] = (fork[_pid]-1)(19, 9, 19) */
		reached[0][9] = 1;
		(trpt+1)->bup.oval = ((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.fork[ Index(((P0 *)this)->_pid, 4) ] = (((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ])-1);
#ifdef VAR_RANGES
		logval("fork[_pid]", ((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has picked up left fork\\n',_pid)(19, 12, 19) */
		reached[0][12] = 1;
		Printf("Philosopher[%d] has picked up left fork\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 2 */
	case 8: // STATE 14 - dictionary.pml:17 - [((fork[((_pid+1)%4)]>0))] (20:0:1 - 1)
		IfNotBlocked
		reached[0][14] = 1;
		if (!((((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ])>0)))
			continue;
		/* merge: fork[((_pid+1)%4)] = (fork[((_pid+1)%4)]-1)(20, 15, 20) */
		reached[0][15] = 1;
		(trpt+1)->bup.oval = ((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ]);
		now.fork[ Index(((((P0 *)this)->_pid+1)%4), 4) ] = (((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ])-1);
#ifdef VAR_RANGES
		logval("fork[((_pid+1)%4)]", ((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has picked up right fork\\n',_pid)(20, 18, 20) */
		reached[0][18] = 1;
		Printf("Philosopher[%d] has picked up right fork\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 2 */
	case 9: // STATE 20 - dictionary.pml:42 - [printf('Philosopher[%d] eats\\n',_pid)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][20] = 1;
		Printf("Philosopher[%d] eats\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 0 */
	case 10: // STATE 21 - dictionary.pml:13 - [fork[_pid] = (fork[_pid]+1)] (0:28:1 - 1)
		IfNotBlocked
		reached[0][21] = 1;
		(trpt+1)->bup.oval = ((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.fork[ Index(((P0 *)this)->_pid, 4) ] = (((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ])+1);
#ifdef VAR_RANGES
		logval("fork[_pid]", ((int)now.fork[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has put down left fork\\n',_pid)(28, 23, 28) */
		reached[0][23] = 1;
		Printf("Philosopher[%d] has put down left fork\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 1 */
	case 11: // STATE 25 - dictionary.pml:13 - [fork[((_pid+1)%4)] = (fork[((_pid+1)%4)]+1)] (0:29:1 - 1)
		IfNotBlocked
		reached[0][25] = 1;
		(trpt+1)->bup.oval = ((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ]);
		now.fork[ Index(((((P0 *)this)->_pid+1)%4), 4) ] = (((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ])+1);
#ifdef VAR_RANGES
		logval("fork[((_pid+1)%4)]", ((int)now.fork[ Index(((((int)((P0 *)this)->_pid)+1)%4), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has put down right fork\\n',_pid)(29, 27, 29) */
		reached[0][27] = 1;
		Printf("Philosopher[%d] has put down right fork\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 1 */
	case 12: // STATE 29 - dictionary.pml:54 - [printf('Philosopher[%d] thinks\\n',_pid)] (0:0:0 - 1)
		IfNotBlocked
		reached[0][29] = 1;
		Printf("Philosopher[%d] thinks\n", ((int)((P0 *)this)->_pid));
		_m = 3; goto P999; /* 0 */
	case 13: // STATE 30 - dictionary.pml:58 - [((_pid==0))] (38:0:0 - 1)
		IfNotBlocked
		reached[0][30] = 1;
		if (!((((int)((P0 *)this)->_pid)==0)))
			continue;
		/* merge: printf('Right Philosopher[%d] Dictionary Status : %d\\n',(4-1),dictionary[(4-1)])(0, 31, 38) */
		reached[0][31] = 1;
		Printf("Right Philosopher[%d] Dictionary Status : %d\n", (4-1), ((int)now.dictionary[ Index((4-1), 4) ]));
		_m = 3; goto P999; /* 1 */
	case 14: // STATE 32 - dictionary.pml:60 - [((dictionary[(4-1)]==1))] (54:0:2 - 1)
		IfNotBlocked
		reached[0][32] = 1;
		if (!((((int)now.dictionary[ Index((4-1), 4) ])==1)))
			continue;
		/* merge: dictionary[(4-1)] = 0(54, 33, 54) */
		reached[0][33] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((int)now.dictionary[ Index((4-1), 4) ]);
		now.dictionary[ Index((4-1), 4) ] = 0;
#ifdef VAR_RANGES
		logval("dictionary[(4-1)]", ((int)now.dictionary[ Index((4-1), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has passed the Dictionary\\n',(4-1))(54, 34, 54) */
		reached[0][34] = 1;
		Printf("Philosopher[%d] has passed the Dictionary\n", (4-1));
		/* merge: dictionary[_pid] = 1(54, 35, 54) */
		reached[0][35] = 1;
		(trpt+1)->bup.ovals[1] = ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = 1;
#ifdef VAR_RANGES
		logval("dictionary[_pid]", ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has picked up the Dictionary\\n',_pid)(54, 36, 54) */
		reached[0][36] = 1;
		Printf("Philosopher[%d] has picked up the Dictionary\n", ((int)((P0 *)this)->_pid));
		/* merge: .(goto)(0, 39, 54) */
		reached[0][39] = 1;
		;
		/* merge: .(goto)(0, 42, 54) */
		reached[0][42] = 1;
		;
		_m = 3; goto P999; /* 6 */
	case 15: // STATE 43 - dictionary.pml:68 - [((_pid>0))] (51:0:0 - 1)
		IfNotBlocked
		reached[0][43] = 1;
		if (!((((int)((P0 *)this)->_pid)>0)))
			continue;
		/* merge: printf('Right Philosopher[%d] Dictionary Status : %d\\n',(_pid-1),dictionary[(_pid-1)])(0, 44, 51) */
		reached[0][44] = 1;
		Printf("Right Philosopher[%d] Dictionary Status : %d\n", (((int)((P0 *)this)->_pid)-1), ((int)now.dictionary[ Index((((int)((P0 *)this)->_pid)-1), 4) ]));
		_m = 3; goto P999; /* 1 */
	case 16: // STATE 45 - dictionary.pml:70 - [((dictionary[(_pid-1)]==1))] (57:0:2 - 1)
		IfNotBlocked
		reached[0][45] = 1;
		if (!((((int)now.dictionary[ Index((((int)((P0 *)this)->_pid)-1), 4) ])==1)))
			continue;
		/* merge: dictionary[(_pid-1)] = 0(57, 46, 57) */
		reached[0][46] = 1;
		(trpt+1)->bup.ovals = grab_ints(2);
		(trpt+1)->bup.ovals[0] = ((int)now.dictionary[ Index((((int)((P0 *)this)->_pid)-1), 4) ]);
		now.dictionary[ Index((((P0 *)this)->_pid-1), 4) ] = 0;
#ifdef VAR_RANGES
		logval("dictionary[(_pid-1)]", ((int)now.dictionary[ Index((((int)((P0 *)this)->_pid)-1), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has passed the Dictionary\\n',(_pid-1))(57, 47, 57) */
		reached[0][47] = 1;
		Printf("Philosopher[%d] has passed the Dictionary\n", (((int)((P0 *)this)->_pid)-1));
		/* merge: dictionary[_pid] = 1(57, 48, 57) */
		reached[0][48] = 1;
		(trpt+1)->bup.ovals[1] = ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]);
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = 1;
#ifdef VAR_RANGES
		logval("dictionary[_pid]", ((int)now.dictionary[ Index(((int)((P0 *)this)->_pid), 4) ]));
#endif
		;
		/* merge: printf('Philosopher[%d] has picked up the Dictionary\\n',_pid)(57, 49, 57) */
		reached[0][49] = 1;
		Printf("Philosopher[%d] has picked up the Dictionary\n", ((int)((P0 *)this)->_pid));
		/* merge: .(goto)(57, 52, 57) */
		reached[0][52] = 1;
		;
		/* merge: .(goto)(57, 55, 57) */
		reached[0][55] = 1;
		;
		/* merge: .(goto)(0, 58, 57) */
		reached[0][58] = 1;
		;
		_m = 3; goto P999; /* 7 */
	case 17: // STATE 52 - dictionary.pml:76 - [.(goto)] (0:57:0 - 2)
		IfNotBlocked
		reached[0][52] = 1;
		;
		/* merge: .(goto)(57, 55, 57) */
		reached[0][55] = 1;
		;
		/* merge: .(goto)(0, 58, 57) */
		reached[0][58] = 1;
		;
		_m = 3; goto P999; /* 2 */
	case 18: // STATE 55 - dictionary.pml:77 - [.(goto)] (0:57:0 - 2)
		IfNotBlocked
		reached[0][55] = 1;
		;
		/* merge: .(goto)(0, 58, 57) */
		reached[0][58] = 1;
		;
		_m = 3; goto P999; /* 1 */
	case 19: // STATE 60 - dictionary.pml:80 - [-end-] (0:0:0 - 1)
		IfNotBlocked
		reached[0][60] = 1;
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

