/* Daniel A DeCamillo
   11-November-2014
   CISC 414/614 FALL 2014
   Homework 4
*/

/* For verification use Alt-Ergo or CVC3 to discharge all VCs
   Highlight series.mlw and click either of the two Provers above to discharge all VC's
*/

/* All VC's Discharged*/

/* This program computes the polynomial
 * s=1+x+x^2+...+x^{n-1}, for given x and nonnegativeinteger n.
 * Note that (x-1)*s = x*s-s = x^n-1, i.e., s = (x^n-1)/(x-1).
 */
# pragma JessieFloatModel(math)
# pragma JessieIntegerModel(math)

/*@
  @ axiomatic powers {
  @ logic real power(real x, integer n);
  @ axiom power0: \forall real x; power(x,0)==1;
  @ axiom power1: \forall real x, integer n; n>=1 ==> power(x,n)==x*power(x,n-1);
  @ }
  @*/

/*@ requires n >=0 && x != 1;
  @ ensures (x-1)*\result == power(x,n)-1;
  @*/
float series(int n, float x) {
  int i = 0;
  float s = 0;
  float t = 1;
  
  /*@ loop invariant 0<=i<=n;
    @ loop invariant t==power(x,i);
    @ loop invariant s*(x-1)==t-1;
    @ loop variant n-i;
  */

  while (i < n) {
    s += t;
    t *= x;
    i++;
  }
  return s;
}
