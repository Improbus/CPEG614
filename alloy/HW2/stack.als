--Dan DeCamillo
--CISC 614 HW2 Fall 2014
-- 3 OCTOBER 2014

sig Node{}
sig Stack{

	next: Node -> lone Node

}

fun listStackElements[s :Stack, list: Node] : set Node{

	list.*(s.next)	

}

pred wellFormedStack[s: Stack, list: Node]{
	all u : listStackElements[s, list] | no u & u.^(s.next)
} 

pred push[s, s': Stack, u, list: Node]{
	
	s'.next = s.next + u->list

}

pred pop[s, s': Stack, u, topNode :Node]{

	s.next[u] = topNode
  	s'.next = s.next - u->topNode

}

pred contains[s : Stack, list, n : Node] {
  n in listStackElements[s, list]
}

assert pushPop{
	all s,s',s'': Stack, list, u : Node |
  	(
    	( wellFormedStack[s,list]         and
      	(not contains[s, list, u]) and
      	push[s,s',list,u]        and
      	(! (u->list in s.next))      and
      	pop[s',s'',u,list]
    	)
    	=>
    	( s.next = s''.next )
  	)
}
run listStackElements for 3
run wellFormedStack for 3
run push for 3
run pop for 3
check pushPop for 3

