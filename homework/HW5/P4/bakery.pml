/* Daniel A DeCamillo */
/* 04-December-2014 */
/* CISC 414/614 FALL 2014 */
/* Homework 5 */

#ifndef UPPERBOUND 
#define UPPERBOUND 5
#endif

#define LT(a,b,c,d) ((a < c) || ((a == c) && (b < d)))

bool enter[N] = false;
int num[N] = 0;
int numCrits = 0;
bit crit[N] =0;

active [N] proctype bakery() {

	do

	:: atomic {	/*LOCK*/

		/*Variables needed for Lock Evaluation */
		int j=0;
		int max = 0;
		int i=0;

		/* Set Enter Criteria to True*/
		enter[_pid] = true;
		
	
		/*Find the Max*/
		do   
		::i<N -> if :: num[i]>max -> max=num[i] :: else fi;
		  i++; 
		::(i == N) -> i=0; break;
		od;

		/*if :: (max >= UPPERBOUND) -> break :: else fi; */

		/*Set num[_pid] to 1 + max */
		num[_pid] = 1 + max;
		
		
		/*Set Enter Criteria to False */
		enter[_pid] = false;

		do
		::(j<N) -> 
		  !enter[j];
		  num[j] == 0 || !LT(num[j],j,num[_pid],_pid);
		  j++;
		:: else -> j=0; break
		od;

		printf("Thread %d critical. Using resource.\n", _pid);
	};
		
	/* critical section */
	numCrits++;
	crit[_pid]=1;

	
		
	atomic{ /*UNLOCK*/
		num[_pid]=0;
		crit[_pid]=0;
		printf("Thread %d noncritical. Not Using resource.\n", _pid);
	};
	
	/* noncritical section */
	if :: (numCrits >= UPPERBOUND) -> break :: else fi;
	od;
}

ltl mutex { []((crit[0]+crit[1]+crit[2]+crit[3])<=1)}
ltl fair { <>crit[0] && <>crit[1] && <>crit[2] && <>crit[3] }

