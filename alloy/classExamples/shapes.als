sig Shape {}

sig Rectangle extends Shape {}

sig Square extends Rectangle {}

sig Oval extends Shape {}

sig Circle extends Oval {}

assert obvious {Circle in Shape}

check obvious for 100

pred T{
	#Circle > 2
	#Square > 1
}

run T for 10
