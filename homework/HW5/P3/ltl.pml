/* Daniel A DeCamillo */
/* 04-December-2014 */
/* CISC 414/614 FALL 2014 */
/* Homework 5 */

int s=0;

init {

	do
	:: s==0 -> s=1
	:: s==1 -> s=2
	:: s==2 -> s=3
	:: s==3 -> s=1
	od

}

ltl f1 { [](s>=0) }
ltl f2 { <>[](s>=1) }
ltl f3 { <>(s==2) -> [](s==2) }
ltl f4 { ((s==1) && <>(s==3)) -> (( !(s==3))U(s==2) ) }
ltl f5 { []<>(s==1) && []<>(s==2) && []<>(s==3) }
