config const debugInit = false;


// Configs if we're init-ing from a file

config const filename = "";
const initFromFile = (filename != "");


// Configs if we're computing the input set

config const elemsPerEdge = 0;
config const initialWidth = 1.125;


// Verify that configs are set appropriately

if initFromFile {
  if elemsPerEdge != 0 then
    writeln("WARNING: --elemsPerEdge has no effect when using an input file");
}  else {
  if elemsPerEdge == 0 then
    halt("you must either set --filename or --elemsPerEdge to run LULESH");
}


// Helper variables for reading from a file

var infile: file;
var reader: channel(false, iokind.dynamic, true);

if initFromFile {
  infile = open(filename, iomode.r);
  reader = infile.reader();
}


// Helper variables for computing the index set

param numDims = 3;

const nodesPerEdge = elemsPerEdge + 1,
      DimNodeRange = 0..#nodesPerEdge,
      DimNodeFace  = {DimNodeRange, DimNodeRange};



// read/compute the problem size

proc initProblemSize() {
  const (numElems, numNodes) = if (initFromFile) then
                                 reader.read(int, int)
                               else
                                 (elemsPerEdge**numDims, nodesPerEdge**numDims);

  if (debugInit) then
    writeln(numElems, " ", numNodes);

  return (numElems, numNodes); 
}


// read/compute the coordinates

proc initCoordinates(X, Y, Z) {
  if (initFromFile) {
    for (x,y,z) in zip(X,Y,Z) do
      reader.read(x, y, z);
  } else {
    forall (num, x, y, z) in zip(X.domain, X, Y, Z) {
      const (i,j,k) = nodeIdxTo3D(num);
      x = initialWidth * k / elemsPerEdge;
      y = initialWidth * j / elemsPerEdge;
      z = initialWidth * i / elemsPerEdge;
    }
  }

  if debugInit then
    for (x,y,z) in zip(X,Y,Z) do
      writeln(format("%.6f",x), " ", format("%.6f",y), " ", format("%.6f",z));
}


// read/compute the element-to-node mapping

proc initElemToNodeMapping(elemToNode: [?D]) {
  if (initFromFile) {
    param nodesPerElem = elemToNode[D.low].size;
    for nodelist in elemToNode do 
      for i in 1..nodesPerElem do
        reader.read(nodelist[i]);
    
    if debugInit {
      writeln("elemToNode mappings are:");
      for nodelist in elemToNode do
        writeln(nodelist);
    }
  } else {
    forall (num, nodelist) in zip(elemToNode.domain, elemToNode) {
      const (i,j,k) = elemIdxTo3D(num);
      nodelist[1] = node3DToIdx(D.rank, i,   j,   k  );
      nodelist[2] = node3DToIdx(D.rank, i,   j,   k+1);
      nodelist[3] = node3DToIdx(D.rank, i,   j+1, k+1);
      nodelist[4] = node3DToIdx(D.rank, i,   j+1, k  );
      nodelist[5] = node3DToIdx(D.rank, i+1, j,   k  );
      nodelist[6] = node3DToIdx(D.rank, i+1, j,   k+1);
      nodelist[7] = node3DToIdx(D.rank, i+1, j+1, k+1);
      nodelist[8] = node3DToIdx(D.rank, i+1, j+1, k  );
    }
  }

  if debugInit then
    for nodelist in elemToNode {
      for i in 1..nodelist.size do
        write(nodelist(i), " ");
      writeln();
    }
}


// read/compute the greek variables

proc initGreekVars(lxim, lxip, letam, letap, lzetam, lzetap) {
  param indices3D = isTupleType(lxim.eltType);
  if (initFromFile) {
    for (xm,xp,em,ep,zm,zp) in zip(lxim, lxip, letam, letap, lzetam, lzetap) do
      reader.read(xm,xp,em,ep,zm,zp);
  } else {
    forall num in lxim.domain {
      const (i,j,k) = elemIdxTo3D(num);
      
      lxim[num] = if (indices3D || k == 0) 
                    then num
                    else elemIdxTo3D(i,j,k-1);

      lxip[num] = if (indices3D || k == elemsPerEdge-1)
                    then num
                    else elemIdxTo3D(i,j,k+1);
    
      letam[num] = if (indices3D || j == 0) 
                    then num
                    else elemIdxTo3D(i,j-1,k);

      letap[num] = if (indices3D || j == elemsPerEdge-1)
                    then num
                    else elemIdxTo3D(i,j+1,k);
    
      lzetam[num] = if (indices3D || i == 0) 
                    then num
                    else elemIdxTo3D(i-1,j,k);

      lzetap[num] = if (indices3D || i == elemsPerEdge-1)
                    then num
                    else elemIdxTo3D(i+1,j,k);
    }
  }
  if (debugInit) then
    for (xm,xp,em,ep,zm,zp) in zip(lxim, lxip, letam, letap, lzetam, lzetap) do
      writeln(xm, " ", xp, " ", em, " ", ep, " ", zm, " ", zp);
}


// read/compute the X, Y, Z symmetry planes

enum dim { X = 3, Y = 2, Z = 1 };

inline proc initSyms(Sym, dir) {
  if (initFromFile) {
    readNodeset(Sym);
  } else {
    for ij in DimNodeFace do
      Sym += node2DToIdx(Sym.rank, ij, dir, 0);
  }

  if debugInit {
    writeln(Sym.numIndices);
    for n in Sym do
      writeln(n);
  }

  return (Sym.numIndices, Sym);
}

inline proc initXSyms(XSym) {
  initSyms(XSym, dim.X);
}

inline proc initYSyms(YSym) {
  initSyms(YSym, dim.Y);
}

inline proc initZSyms(ZSym) {
  initSyms(ZSym, dim.Z);
}


// read/compute the free surface

inline proc initFreeSurface(freeSurface) {
  if (initFromFile) {
    readNodeset(freeSurface);
    reader.assertEOF("Input file format error (extra data at EOF)");
  } else {
    for ij in DimNodeFace do
      freeSurface += node2DToIdx(freeSurface.rank, ij, dim.X, nodesPerEdge-1);
                  
    for ij in DimNodeFace do
      freeSurface += node2DToIdx(freeSurface.rank, ij, dim.Y, nodesPerEdge-1);

    for ij in DimNodeFace do
      freeSurface += node2DToIdx(freeSurface.rank, ij, dim.Z, nodesPerEdge-1);
  }

  if debugInit {
    use Sort;

    const size = freeSurface.size;
    var sortedSurface: [0..#size] if (freeSurface.rank == 1) 
                                    then freeSurface.idxType 
                                    else freeSurface.rank*freeSurface.idxType;

    for (a,b) in zip(sortedSurface, freeSurface) do a = b;
    QuickSort(sortedSurface);

    writeln(size);
    for b in sortedSurface do
      writeln(b);
  }
  return (freeSurface.numIndices, freeSurface);
}


// Helper routines for reading from a file

/* This is a helper routine to read a size and array from a file and
   return it */

proc readNodeset(nodeset) {
  if (nodeset.rank == 1) {
    const arrSize = reader.read(int);

    for a in 0..#arrSize do
      nodeset += reader.read(int);
  } else {
    halt("We shouldn't get here -- no file I/O with the 3D representation");
  }
}


// Helper routines for computing the cube input set

inline proc idx3DTo1D((i,j,k), len) {
  return i*len*len + j*len + k;
}

inline proc node3DToIdx(param idxRank, i, j, k) {
  if (idxRank == 3) then
    return (i, j, k);
  else
    return idx3DTo1D((i, j, k), nodesPerEdge);
}

inline proc elemIdxTo3D(i,j,k) {
  return idx3DTo1D((i,j,k), elemsPerEdge);
}

inline proc idx1DTo3D(ind, len) {
  return (ind/(len*len), (ind/len)%len, ind%len);
}

inline proc nodeIdxTo3D(ind) {
  if isTuple(ind) then
    return ind;
  else
    return idx1DTo3D(ind, nodesPerEdge);
}

inline proc elemIdxTo3D(ind) {
  if isTuple(ind) then
    return ind;
  else
    return idx1DTo3D(ind, elemsPerEdge);
}

/* Turn a 2D node index into a 3D index by inserting the value
   'newval' in diemnsion 'newdim' */

inline proc node2DToIdx(param rank, ij, newdim, newval) {
  var ijk: 3*int;
  for i in 1..numDims do
    ijk[i] = if (i==newdim) then newval else ij[i - (i>newdim):int];
  return node3DToIdx(rank, (...ijk));
}