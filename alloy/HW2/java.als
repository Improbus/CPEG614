--Dan DeCamillo
--CISC 614 HW2 Fall 2014
-- 3 OCTOBER 2014
--java.als

abstract sig Type{

	superInterfaces: set Interface

}

sig Class extends Type{

	superClass :   lone Class

}

sig Interface extends Type {}

one sig Object extends Class{}

pred directSubType[t1, t2 :Type]{

	t2 = t1.superClass or
	t2 = t1.superInterfaces
--	all t: Type | no (t & t.superInterfaces) 
	all c: Class | no (c & c.superClass)
	all i :Interface | no (i & i.superInterfaces)
	all o: Object | no o.superClass
--	all c: Class | not c in c.^(c.superClass)
	--all i : Interface | not i in i.^(i.superInterfaces)
}

run directSubType for 3
