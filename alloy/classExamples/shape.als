
-- "signatures": Shape is a set, disjoint from any other set unless
-- it extends Shape:
sig Shape {}

 -- Rectangle is a subset of Shape:
sig Rectangle extends Shape {}

sig Square extends Rectangle {}

sig Oval extends Shape{}

sig Circle extends Oval {}

assert obvious {Circle in Shape} -- "Circle is a subset of Shape"

 -- check obvious assuming all sets have at most 100 elements
check obvious for 100

-- A predicate (play with this):
pred T {
  #Circle > 2
  #Square > 1
}

-- find an instance satisfying T with every set having 
-- at most __ (fill in the blank) elements:
run T for 10

-- look at the different views
