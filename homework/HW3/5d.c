/* Daniel A DeCamillo
   30-October-2014
   CISC 414/614 FALL 2014
   Homework 3
*/

# pragma JessieIntegerModel(math)
# pragma JessieFloatModel(math)
int x;
int y;
/*@ requires x>=0;
  @ ensures (x==0 && y==0) || (x>0 && y==1);
*/

void d(){

	if (x==0){
		y=0;
	} else {
		y=1;
	}

}
