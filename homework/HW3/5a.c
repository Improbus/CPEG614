/* Daniel A DeCamillo
   30-October-2014
   CISC 414/614 FALL 2014
   Homework 3
*/
# pragma JessieIntegerModel(math)
# pragma JessieFloatModel(math)

int i;
int j;

/*@ requires i+j==10;
  @ ensures i+j==10;
*/

void a(){

	i=i+1;
	j=j-1;
	

}
