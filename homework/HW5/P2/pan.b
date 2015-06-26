	switch (t->back) {
	default: Uerror("bad return move");
	case  0: goto R999; /* nothing to undo */

		 /* PROC Philosopher */
;
		;
		
	case 4: // STATE 2
		;
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.oval;
		;
		goto R999;
;
		;
		;
		;
		
	case 7: // STATE 9
		;
		now.fork[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.oval;
		;
		goto R999;

	case 8: // STATE 15
		;
		now.fork[ Index(((((P0 *)this)->_pid+1)%4), 4) ] = trpt->bup.oval;
		;
		goto R999;
;
		;
		
	case 10: // STATE 21
		;
		now.fork[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.oval;
		;
		goto R999;

	case 11: // STATE 25
		;
		now.fork[ Index(((((P0 *)this)->_pid+1)%4), 4) ] = trpt->bup.oval;
		;
		goto R999;
;
		;
		;
		
	case 13: // STATE 30
		goto R999;

	case 14: // STATE 35
		;
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[1];
		now.dictionary[ Index((4-1), 4) ] = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;
;
		
	case 15: // STATE 43
		goto R999;

	case 16: // STATE 48
		;
		now.dictionary[ Index(((P0 *)this)->_pid, 4) ] = trpt->bup.ovals[1];
		now.dictionary[ Index((((P0 *)this)->_pid-1), 4) ] = trpt->bup.ovals[0];
		;
		ungrab_ints(trpt->bup.ovals, 2);
		goto R999;
;
		
	case 17: // STATE 52
		goto R999;
;
		
	case 18: // STATE 55
		goto R999;

	case 19: // STATE 60
		;
		p_restor(II);
		;
		;
		goto R999;
	}

