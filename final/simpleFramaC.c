//Add annotations as necessary to specify and verify that g always returns a non-negative integer.  Assume mathematical integers (ignore overflows).
#pragma JessieIntegerModel(math)


/*@ behavior branch1:
  @ 	assumes x>=0;
  @ 	ensures \result==2*x;
  @ behavior branch2:
  @ 	assumes x<0;
  @ 	ensures \result==-x;
@*/
int f(int x) {
  if (x>=0) {
    return 2*x;
  } else {
    return -x;
  }
}
 
//@ ensures  \result>=0;
int g(int a) {
  if (a%2==0) {
    return f(a/2);
  } else {
    return f(a)/2;
  }
}
