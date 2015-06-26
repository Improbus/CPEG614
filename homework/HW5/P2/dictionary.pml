/* Daniel A DeCamillo */
/* 04-December-2014 */
/* CISC 414/614 FALL 2014 */
/* Homework 5 */


bit fork[N] = 1;

bit dictionary[N] =0;


inline V(s) {
  s++
}

inline P(s) {
  atomic {s > 0; s--}
}

active [N] proctype Philosopher() {

	/* Philosopher[0] pick up the dictionary */
       if :: _pid == 0 -> 
	     dictionary[_pid] = 1;  
             printf("Philosopher[%d] has picked up the Dictionary\n", _pid);
          :: else fi;
  do
  :: atomic {

       /* If a philosopher has the dictionary wait until he doesn't.  Otherwise pick up the fork. */
       !(dictionary[_pid] == 1)

       P(fork[_pid]);
       printf("Philosopher[%d] has picked up left fork\n", _pid)
     };

     atomic {
       P(fork[(_pid + 1) % N]);
       printf("Philosopher[%d] has picked up right fork\n", _pid)
     };

eat: printf("Philosopher[%d] eats\n", _pid);

     atomic {
       V(fork[_pid]);
       printf("Philosopher[%d] has put down left fork\n", _pid)
     };

     atomic {
       V(fork[(_pid + 1) % N]);
       printf("Philosopher[%d] has put down right fork\n", _pid)
     };

think: printf("Philosopher[%d] thinks\n", _pid);

     atomic {
        
	if :: _pid == 0 ->
	      printf("Right Philosopher[%d] Dictionary Status : %d\n", N-1, dictionary[N-1] );
              if :: dictionary[N-1] == 1 -> 
                    dictionary[N-1]=0; 
	            printf("Philosopher[%d] has passed the Dictionary\n", N-1);  
                    dictionary[_pid] = 1;  
                    printf("Philosopher[%d] has picked up the Dictionary\n", _pid)
                 :: else fi;
           :: else fi;
	
	if :: _pid > 0 ->
		printf("Right Philosopher[%d] Dictionary Status : %d\n", _pid-1,dictionary[_pid-1] );
		if :: dictionary[_pid-1] == 1 -> 
		      dictionary[_pid-1]=0; 
		      printf("Philosopher[%d] has passed the Dictionary\n", _pid-1);  
		      dictionary[_pid] = 1;  
		      printf("Philosopher[%d] has picked up the Dictionary\n", _pid)
		      :: else fi;
		:: else fi;     
	}; 

  od
}
