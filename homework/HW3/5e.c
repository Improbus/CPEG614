/* Daniel A DeCamillo
   30-October-2014
   CISC 414/614 FALL 2014
   Homework 3
*/

# pragma JessieIntegerModel(math)
# pragma JessieFloatModel(math)
int i;
int s;
/*@ requires i==0 && s==0;
  @ ensures  s==10;
*/

void e(){
	/*@ loop invariant 0<=i<=10 && s<=10 && s==i; 
	  @ loop variant 10-i;
	*/
	while (i<10){
		s=s+1;
		i=i+1;
	}
}
