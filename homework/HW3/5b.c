/* Daniel A DeCamillo
   30-October-2014
   CISC 414/614 FALL 2014
   Homework 3
*/

# pragma JessieIntegerModel(math)
# pragma JessieFloatModel(math)

int a[]; 
int b[];
int i;
int n;

/*@ requires b[i] >= 10;
  @ requires n-1>=i>=0;
  @ requires n > 0; 
  @ requires \valid(a+ (0..n−1));
  @ requires \valid(b+ (0..n−1));
  @ ensures  a[i] >=20;
*/

void bo(){

	a[i] = b[i];
	a[i] = 2*a[i];

}
