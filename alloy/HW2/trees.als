--Dan DeCamillo
--CISC 614 HW2 Fall 2014
-- 3 OCTOBER 2014

-- Binary Trees.

-- the static set of nodes
sig Node {}

-- each state provides left and right children relations on the
-- set of nodes
sig State {
  left : Node -> lone Node,
  right : Node -> lone Node
}

-- set of nodes reachable from u in s
fun Reachables[s : State, u : Node] : set Node {  u.*(s.left+s.right) }

-- set of nodes backward reachable from u in s
fun backReachables[s : State, u : Node] : set Node {
 -- FILL IN
	u.*(~(s.left+s.right)) 
}

-- the parent(s) of node u in state s
fun parents[s : State, u : Node] : set Node { 
 -- FILL IN
		u.~(s.left+s.right)
}

-- a node u is "isolated" if for all v reachable from u, all nodes
-- backward reachable from v are reachable from u.
pred isolated[s : State, u : Node] { 
  let R = Reachables[s, u] | backReachables[s, R] in R
}

-- is the node the root of a binary tree?
pred isTree[s : State, root : Node] {
  -- FILL IN
	no parents[s, root]
	all u :Node | no s.left[u]  & s.right[u]
	all u: Node | s.left[u] != u && s.right[u] != u
	all u: Node | lone parents[s,u]
}

-- is root isolated and the root of a binary tree?
pred isIsolatedTree[s : State, root : Node] {
  isTree[s, root] && isolated[s, root]
}

-- show a tree with a node with two children
pred showTree[s : State, root : Node] {
  isTree[s, root]
  some u : Reachables[s, root] | some s.left[u] && some s.right[u]
}

-- show an isolated tree with a node with two children
pred showIsolatedTree[s : State, root : Node] {
  isIsolatedTree[s, root]
  some u : Reachables[s, root] | some s.left[u] && some s.right[u]
}

-- the depth of a node u in a tree rooted at root
-- is the length of the unique path from root
-- to u (number of edges)
fun depth[s : State, root, u : Node] : Int {
   #(root.^(s.left+s.right) & u.*~(s.left + s.right))
}

-- show a tree with a node of depth 2
pred showDepth[s : State, root, u : Node] {
  isTree[s, root]
  u in Reachables[s, root]
  depth[s, root, u] = 2
}

-- the root has depth 0
assert rootDepth0 {
  all s : State, u : Node | isTree[s, u] => depth[s, u, u] = 0
}

-- the depth of a non-root node is one more than that of its
-- parent
assert parentDepth {
  all s : State, root, u : Node |
    (isTree[s, root] && u in Reachables[s, root]-root)
    implies
    depth[s, root, u] = depth[s, root, parents[s, u]].plus[1]
}

-- root and node are both roots of trees and the two
-- trees do not intersect
pred setLeftPrecondition[s : State, root, node : Node] {
  isTree[s, root] && isTree[s, node]
  no Reachables[s, root] & Reachables[s, node] 
}

-- sets the left field of root to node
pred setLeft[s, s': State, root, node: Node] {
  s'.left = s.left ++ root->node
  s'.right = s.right
}

-- show a tree getting its left child set to node
pred showSetLeft[s, s' : State, root, node : Node] {
   setLeftPrecondition[s, root, node]
   setLeft[s, s', root, node]
}

-- if the setLeft precondition holds, then after setLeft
-- the root will still be the root of a tree
assert setLeftOK {
  all s, s': State, root, node : Node |
    ( setLeftPrecondition[s, root, node] &&
      setLeft[s, s', root, node]
    )
    implies
    ( isTree[s', root] )
}

-- swap left and right children
pred swap[s, s' : State, root : Node] {
  -- FILL IN
	isTree[s, root] 
	--s'.left = s.right && s'.right = s.left
	some u : Reachables[s,root] | some s.left[u] && some s.right[u]

	s'.left = (s.left - root->s.left[root]) + root->s.right[root]
	s'.right = (s.right - root->s.right[root]) +root->s.left[root]

}

-- show a swap of a tree
pred showSwap[s, s' : State, root : Node] {
  isTree[s, root] && swap[s, s', root]
}

-- if you swap a tree, the result is a tree
assert swapOK {
  all s, s' : State, root : Node |
    (isTree[s, root] and swap[s, s', root])
    implies
    isTree[s', root]
}

-- root and node are both roots of isolated trees and the two
-- trees do not intersect
pred setLeftIsolatedPrecondition[s : State, root, node : Node] {
  isIsolatedTree[s, root] && isIsolatedTree[s, node]
  no Reachables[s, root] & Reachables[s, node] 
}

assert setLeftIsolatedOK {
 all s, s': State, root, node : Node |
    ( setLeftIsolatedPrecondition[s, root, node] &&
      setLeft[s, s', root, node]
    )
    implies
    ( isIsolatedTree[s', root] )
}


run showTree for 5 but 1 State

run showIsolatedTree for 5 but 1 State

run showDepth for 6 but 1 State, 6 Int

check rootDepth0 for 6 but 1 State, 6 Int

check parentDepth for 7 but 1 State, 6 Int

run showSetLeft for 6 but 2 State

check setLeftOK for 5 but 2 State

run showSwap for 5 but 2 State

check swapOK for 6 but 2 State

check setLeftIsolatedOK for 7 but 2 State


  
