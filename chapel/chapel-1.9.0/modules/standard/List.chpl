// Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)


class listNode {
  type eltType;
  var data: eltType;
  var next: listNode(eltType);
}

// TODO: Probably there needs to be a general and early test in resolution, so
// we don't attempt to resolve record assignment with nil on the RHS.  Remove
// this definition for proc =() and run test/types/seq/bradc/emptySeq3.chpl to
// see the problem.  The solution is to see how nil is getting promoted to
// record type (this should not be allowed) so it can match the
// compiler-defined version of proc =(ref a:list, b:list).
proc =(ref a:list, b:_nilType)
{ compilerError("type mismatch in assignment from nil to ", typeToString(a.type)); }

record list {
  type eltType;
  var first: listNode(eltType);
  var last: listNode(eltType);
  var length: int;

  proc destroy() {
    var current = first;
    while (current != nil) {
      var next = current.next;
      delete current;
      current = next;
    }
  }

  proc remove(x: eltType) {
    var tmp = first,
        prev: first.type = nil;
    while tmp != nil && tmp.data != x {
      prev = tmp;
      tmp = tmp.next;
    }
    if tmp != nil {
      if prev != nil then
        prev.next = tmp.next;
      if first == tmp then
        first = tmp.next;
      if last == tmp then
        last = prev;
      delete tmp;
      length -= 1;
    }
  }

  iter these() {
    var tmp = first;
    while tmp != nil {
      yield tmp.data;
      tmp = tmp.next;
    }
  }

  proc append(e : eltType) {
    if last {
      last.next = new listNode(eltType, e);
      last = last.next;
    } else {
      first = new listNode(eltType, e);
      last = first;
    }
    length += 1;
  }

  proc append(e: eltType, es: eltType ...?k) {
    append(e);
    for param i in 1..k do
      append(es(i));
  }

  proc prepend(e : eltType) {
    first = new listNode(eltType, e, first);
    if last == nil then
      last = first;
    length += 1;
  }

  proc concat(l: list(eltType)) {
    for e in l do
      append(e);
  }

  proc writeThis(f: Writer) {
    var first: bool = true;
    for e in this {
      if !first then
        f.write(" ");
      else
        first = false;
      f.write(e);
    }
  }
}

proc makeList(x ...?k) {
  var s: list(x(1).type);
  for param i in 1..k do
    s.append(x(i));
  return s;
}
