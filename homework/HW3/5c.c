/* Daniel A DeCamillo
   30-October-2014
   CISC 414/614 FALL 2014
   Homework 3
*/

# pragma JessieIntegerModel(math)
# pragma JessieFloatModel(math)

int i;
int j;
int k;

/*  @ ensures  k >=0;
*/

void c(){

	if (i>j){
		k=i-j;
	} else {
		k=j-i;
	}
	
}
