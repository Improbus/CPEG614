/* Daniel A DeCamillo
   11-November-2014
   CISC 414/614 FALL 2014
   Homework 4
*/

/* For verification use Alt-Ergo or CVC3 to discharge all VCs
   Highlight add.mlw and click either of the two Provers above to discharge all VC's
*/

/* All VC's Discharged*/

/* add.c: in place add of one vector to another
 * Author: Stephen F. Siegel
 * Note the correctness relies on the "separate regions assumption",
 * which is the default in Jessie.
 * Alt-Ergo can discharge all conditions, but needs a little time
 * for one of them.
 *
 * The bounds on the integers are needed to prevent overflow.
 */
#include<limits.h>
# pragma JessieFloatModel(math)
# pragma JessieIntegerModel(math)

// add further preconditions, postconditions, and
// loop invariants as necessary.

// The contract should state that at return, a[i]
// will hold the original value of a[i] plus b[i].

/*@ requires INT_MAX>n>=0 && \valid(a+(0..n-1)) && \valid(b+(0..n-1));
  @ assigns a[0..n-1];
  @ ensures \forall int i; 0<=i<=n-1 ==> a[i]==\old(a[i])+b[i];
*/

void ipadd(int n, int a[], int b[]) {
  int i = 0;
  
  /*@ loop invariant 0<=i<=n;
    @ loop invariant \forall int x; 0<=x<i ==> a[x] == \at(a[x], Pre)+b[x];
    @ loop invariant \forall int x; i<=x<=n ==> a[x] == \at(a[x], Pre);
    @ loop invariant \forall int x; 0<=x<n ==> b[x]==\at(b[x], Pre); 
    @ loop variant n-i;
  */

  while (i < n) { 
	a[i] += b[i]; 
	i++; 
  }
}
