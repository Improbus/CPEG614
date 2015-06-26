	switch (t->back) {
	default: Uerror("bad return move");
	case  0: goto R999; /* nothing to undo */

		 /* CLAIM fair */
;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		;
		
	case 11: // STATE 32
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* CLAIM mutex */
;
		
	case 12: // STATE 1
		goto R999;

	case 13: // STATE 10
		;
		p_restor(II);
		;
		;
		goto R999;

		 /* PROC bakery */

	case 14: // STATE 1
		;
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.oval;
		;
		goto R999;
;
		;
		
	case 16: // STATE 8
		;
		((P0 *)this)->_1_1_i = trpt->bup.ovals[2];
		((P0 *)this)->_1_1_max = trpt->bup.ovals[1];
	/* 0 */	((P0 *)this)->_1_1_max = trpt->bup.ovals[0];
		;
		;
		ungrab_ints(trpt->bup.ovals, 3);
		goto R999;

	case 17: // STATE 8
		;
		((P0 *)this)->_1_1_i = trpt->bup.oval;
		;
		goto R999;

	case 18: // STATE 16
		;
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[3];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[2];
		((P0 *)this)->_1_1_i = trpt->bup.ovals[1];
	/* 0 */	((P0 *)this)->_1_1_i = trpt->bup.ovals[0];
		;
		;
		ungrab_ints(trpt->bup.ovals, 4);
		goto R999;

	case 19: // STATE 16
		;
		now.enter[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[1];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;
;
		;
		;
		;
		
	case 22: // STATE 20
		;
		((P0 *)this)->_1_1_j = trpt->bup.oval;
		;
		goto R999;

	case 23: // STATE 22
		;
		((P0 *)this)->_1_1_j = trpt->bup.oval;
		;
		goto R999;
;
		;
		
	case 25: // STATE 29
		;
		now.numCrits = trpt->bup.oval;
		;
		goto R999;

	case 26: // STATE 30
		;
		now.crit[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.oval;
		;
		goto R999;

	case 27: // STATE 32
		;
		now.crit[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[1];
		now.num[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;
;
		;
		
	case 29: // STATE 43
		;
		p_restor(II);
		;
		;
		goto R999;
	}

