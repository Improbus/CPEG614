/**************************************************************************
  Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


#ifndef SCOPE_RESOLVE_H
#define SCOPE_RESOLVE_H


void build_constructors(AggregateType* ct);
void add_root_type(AggregateType* ct);

#ifdef HAVE_LLVM
// this one is defined in externCResolve.cpp
void convertDeclToChpl(ModuleSymbol* module, const char* name, Vec<Expr*> & addedToAST);
#endif

// this one is defined in util/clangUtil.cpp
void cleanupExternC(void);

#endif
