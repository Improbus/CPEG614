/**************************************************************************
  Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef _RUN_PASSES_H_
#define _RUN_PASSES_H_

#include "vec.h"

extern bool printPasses;
extern FILE* printPassesFile; 

void runPasses(void);
void initLogFlags(Vec<char>&);

#endif
