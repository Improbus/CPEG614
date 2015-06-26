--Dan DeCamillo
--CISC 614 HW2 Fall 2014
-- 3 OCTOBER 2014

-- There are two processes.  Each maintains a set of memory
-- blocks.  Some of those blocks contain useful data, others
-- are "empty".    The goal is to swap the data in the two procs.
-- Two operations can be used: copy data from one block
-- to another, and erase data in a block (which makes it "empty").
-- The goal is to perform a sequence of such operations and
-- end up with the state of the procs to be swapped.

-- order the states to form a trace
open util/ordering [State] as StateOrder

abstract sig Block {} -- set of all blocks
sig Block1, Block2 extends Block {} -- blocks belonging to proc1, 2
sig Value {} -- set of "values" a block can hold
-- each block holds a value or is empty:
sig State {  map : Block -> lone Value }

-- in the initial state, there is one empty block and
-- the remaining blocks hold unique values
pred init[s : State] {
  one Block - s.map.Value -- one empty block
  all v : Value | lone s.map.v -- each value used at most once
}

-- copy contents of b1 to b2
pred copy[s, s' : State, b1, b2 : Block] {
    -- FILL IN
--	init[s]
	some s.map[b1]  -- make sure the value isn't empty
	b1 != b2
--	s'.map[b2] = s.map[b1] -- do the copy to b2	
	s'.map = (s.map - b2->s.map[b2]) + b2->s.map[b1]
	all w: Block - b2 | s'.map[w] = s.map[w] -- retain other values
--	s'.map[b1] = s.map[b1] -- retain original value
}

-- erase contents of b
pred erase[s, s' : State, b : Block] {
    -- FILL IN
--	init[s]
	some s.map[b]  -- don't erase a block that is already empty
--	no s'.map[b] -- erase the block
	s'.map = s.map - (b->s.map[b]) -- erase the block
	all w: Block - b | s'.map[w] = s.map[w]  -- retain other values
}
-- one "move": either a copy or an erase
pred move[s, s' : State] {
   -- FILL IN
--	init[s]
	some b1, b2 :Block | copy[s,s',b1,b2] or 	some b :Block | erase[s,s',b]
	
}

-- predicate that holds if the two states have swapped
-- state: the values held by proc2 in s' are the values held
-- by proc1 in s, and vice versa, and likewise for the
-- the number of empty blocks
pred flipped[s, s' : State] {
  -- FILL IN
--	init[s]
	--all b1 :Block1, b2 :Block2 | s'.map[b2] in s.map[b1]  && s'.map[b1] in s.map[b2] 
	all v:Value | #(s.map.v & Block1) = #(s'.map.v & Block2)
	all v:Value | #(s.map.v & Block2) = #(s'.map.v & Block1)
--	all b1: Block1, b2 : Block2 |#(b2 - (s'.map).Value) = #(b1 - (s.map).Value)
--	all b1: Block1, b2 :Block2 |#(b1 - (s'.map).Value) = #(b2 - (s.map).Value)

}

-- declares that the sequence of states must form a trace:
-- the first state satisfies the initial condition, consecutive
-- states are related by the "move" predicate, until
-- the "final" state is reached, at which point the sequence
-- of states stutters (remains constant) to the last state.
-- This is necessary because the ordering package always
-- creates the full number of States specified in the run
-- command, which may be more than necessary.
fact traces {
  init[first]
  some final : State | {
    all s : nexts[final] | s.map=final.map
    all s: State-(final+nexts[final]) | move[s,next[s]]
    flipped[first, final]
  }
}

pred show1 {
  #Block1 = 3
  #Block2 = 3
}

pred show2 {
  #Block1 = 4
  #Block2 = 4
}

run show1 for 6 Block, 5 Value, 6 State -- no
run show1 for 6 Block, 5 Value, 7 State -- yes
run show2 for 8 Block, 7 Value, 9 State -- ?
run copy for  6 Block, 5 Value, 2 State
run erase for 6 Block, 5 Value, 2 State
run move for 6 Block, 5 Value, 2 State
run flipped for 6 Block, 5 Value, 7 State
