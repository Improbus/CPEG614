/* Daniel A DeCamillo
   11-November-2014
   CISC 414/614 FALL 2014
   Homework 4
*/

/* For verification use Alt-Ergo or CVC3 to discharge all VCs
   Highlight twofun.mlw and click either of the two Provers above to discharge all VC's
*/

/* All VC's Discharged*/

/* Verify the following about h: if n is even then it returns
 * n/2, else it returns 3*n-1.  Add annotations as needed.
 */
#pragma JessieIntegerModel(math)

int f(int n) {
  return n/2;
}

int g(int n) {
  return 3*n-1;
}

/*@ requires n>=1;
  @ ensures (n%2==0 ==> \result==n/2) || (n%2>0 ==> \result==3*n-1);
  @*/
int h(int n) {
  if (n%2 == 0)
    return f(n);
  else
    return g(n);
}
