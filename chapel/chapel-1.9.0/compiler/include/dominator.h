/**************************************************************************
  Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _CHPL_DOMINATOR_H
#define _CHPL_DOMINATOR_H

#include "astutil.h"
#include "bb.h"
#include "bitVec.h"
#include <set>

void computeDominators(std::vector<BitVec*>& dominators, std::vector<BasicBlock*>& basicBlocks);
bool dominates(unsigned a, unsigned b, std::vector<BitVec*> & dominators);
bool strictlyDominates(unsigned a, unsigned b, std::vector<BitVec*> & dominators);

void computeImmediateDominators(std::vector<unsigned>& immediateDominators, std::vector<BitVec*>& dominators);

#endif
