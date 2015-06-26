sig Node {}

sig State{
	nxt: Node -> lone Node
}

pred show{
	#State >= 2
	#Node >= 3
	all s : State, u: Node | wellFormed[s,u]
}

pred wellFormed[s: State, list: Node]{
	//list	
	//list.(s.nxt)
	//list.(s.nxt).(s.nxt)
	//list.(s.nxt).(s.nxt).(s.nxt)
	//list.*(s.nxt)
	all u : list.*(s.nxt) | no u & u.^(s.nxt)
}

pred contains[s: State, list: Node, n: Node]{
	
	//n in list.*(s.nxt)
	some u : list.*(s.nxt) | u=n

}

--Set of Nodes with no outgoing edges
fun EndNode[s: State] : set Node{
	
	{u : Node | no u.(s.nxt)}

}

fun getLast[s: State, list: Node] : set Node{

	EndNode[s] & list.*(s.nxt) 
	
}

fun length[s : State, list: Node] : 	Int {#list.*(s.nxt)}


pred addFront[s, s' :State, list, u: Node]{
	u != list
	s'.nxt = s.nxt + u->list

}

pred showContains[s: State, list: Node, n: Node]{
	
	wellFormed[s,list]
	contains[s, list, n]

}

pred showEnd[s: State, u: Node]{

	u in EndNode[s]

}

pred showGetLast[s: State, u: Node, list: Node]{
	u in getLast[s, list]
}

pred showNoLast[s: State, u: Node, list: Node]{
	no getLast[s, list]
}

pred showAddFront[s, s' :State, list, u: Node]{

	wellFormed[s,list]
	not contains[s, list, u]
	u != list
	no s.nxt & u->list
	//!(u->list in s.nxt)
	addFront[s,s',list,u]

}

pred removeFront[s, s' :State, list, newFront :Node]{
	s.nxt[list] = newFront
	s'.nxt = s.nxt + list->newFront

}

pred showRemoveFront[s, s' :State, list, newFront: Node]{

	removeFront[s,s',list,newFront]
	wellFormed[s, list]

}

assert addFrontCorrect{
	all s, s' : State, list, u : Node |

	(
		(wellFormed[s,list] and 
		(not contains[s, list, u]) and 
	--	(not u->list in s.nxt) and
		addFront[s,s',list,u])
		=>
		(wellFormed[s',u]) and 
		length[s',u] = 1 + length[s,list] and
		s'.nxt[u] = list
	)
}

assert addRemove{

	all s, s', s'' : State, list, u : Node |
	(
		(wellFormed[s,list] and
		(not contains[s,list,u]) and
		addFront[s,s',list,u] and
		(! (u->list in s.nxt)) and
		removeFront[s,s',list,u]
		)
		=>
		(s.nxt = s''.nxt)
	)
}

check addRemove for 5 but 3 State
check addFrontCorrect for 7 but 2 State
run show for 3 but 2 State
run showContains for 3 but 1 State
run showEnd for 3 but 1 State
run showGetLast for 3 but 1 State
run showNoLast for 3 but 1 State
run addFront for 5 but 2 State
run showAddFront for 5 but 2 State
run showRemoveFront for 5 but 2 State
