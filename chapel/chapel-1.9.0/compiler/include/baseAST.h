/**************************************************************************
  Copyright (c) 2004-2014, Cray Inc.  (See LICENSE file for more details)
**************************************************************************/


//
// The BaseAST class is the parent class of all AST node types.
//
// Notes on adding, removing, or changing AST node types
// -----------------------------------------------------
//
// 1. When adding or removing AST node types, update AstTag and
//    astTagName so that they are consistent.
//
// 2. Update the traversal macros as necessary.  The traversal must be
//    able to touch all AST nodes when traversing the AST.
//

#ifndef _BASEAST_H_
#define _BASEAST_H_

#include "chpl.h"
#include "stringutil.h"

#include "genret.h"

//
// foreach_ast_sep: invoke a 'macro' for every AST node type,
//                  separating invocations by 'sep'
// foreach_ast: invoke a macro for every AST node type, separating
//              invocations by ;
//
#define foreach_ast_sep(macro, sep)                \
  macro(PrimitiveType) sep                         \
  macro(EnumType) sep                              \
  macro(AggregateType) sep                         \
  macro(ModuleSymbol) sep                          \
  macro(VarSymbol) sep                             \
  macro(ArgSymbol) sep                             \
  macro(TypeSymbol) sep                            \
  macro(FnSymbol) sep                              \
  macro(EnumSymbol) sep                            \
  macro(LabelSymbol) sep                           \
  macro(SymExpr) sep                               \
  macro(UnresolvedSymExpr) sep                     \
  macro(DefExpr) sep                               \
  macro(CallExpr) sep                              \
  macro(NamedExpr) sep                             \
  macro(BlockStmt) sep                             \
  macro(CondStmt) sep                              \
  macro(GotoStmt) sep                              \
  macro(ExternBlockStmt)

#define foreach_ast(macro)                         \
  foreach_ast_sep(macro, ;)

//
// prototype Symbol, Type, Expr, and all AST node types
//
class Symbol;
class Type;
class Expr;
#define proto_classes(type) class type
foreach_ast(proto_classes);
#undef proto_classes

//
// declare global vectors for all AST node types
//
// These global vectors, named gSymExprs, gCallExprs, gFnSymbols, ...,
// contain all existing nodes of the given AST node type; they are
// updated automatically as new AST nodes are constructed.  Nodes are
// removed from these vectors between passes.
//
#define decl_gvecs(type) extern Vec<type*> g##type##s
foreach_ast(decl_gvecs);
#undef decl_gvecs

//
// type definitions for common maps
//
typedef Map<Symbol*,Symbol*> SymbolMap;
typedef MapElem<Symbol*,Symbol*> SymbolMapElem;

// get the current AST node id
extern int lastNodeIDUsed();

// trace various AST node removals
extern void trace_remove(BaseAST* ast, char flag);

// how an AST node knows its location in the source code
// (assumed to get copied upon assignment and parameter passing)
struct astlocT {
  const char* filename;  // filename of location
  int lineno;    // line number of location
  astlocT(int linenoArg, const char* filenameArg):
    filename(filenameArg), lineno(linenoArg)
    {}
};

//
// enumerated type of all AST node types (and superclass types)
//
enum AstTag {
  E_SymExpr,
  E_UnresolvedSymExpr,
  E_DefExpr,
  E_CallExpr,
  E_NamedExpr,
  E_BlockStmt,
  E_CondStmt,
  E_GotoStmt,
  E_ExternBlockStmt,
  E_Expr,

  E_ModuleSymbol,
  E_VarSymbol,
  E_ArgSymbol,
  E_TypeSymbol,
  E_FnSymbol,
  E_EnumSymbol,
  E_LabelSymbol,
  E_Symbol,

  E_PrimitiveType,
  E_EnumType,
  E_AggregateType,
  E_Type,

  E_BaseAST
};

//
// string names of all AST node types (used for debugging)
//
extern const char* astTagName[];

//
// macros used to define the copy method on all AST node types, and to
// prototype the copyInner method
//
// The copyInner method is used to do the copy specific to any node.
// The outermost call to copy invokes the copyInner method used to
// implement the recursive copy.
//
#define DECLARE_COPY(type)                                              \
  type* copy(SymbolMap* map = NULL, bool internal = false) {            \
    SymbolMap localMap;                                                 \
    if (!map)                                                           \
      map = &localMap;                                                  \
    type* _this = copyInner(map);                                       \
    _this->astloc = astloc;                                             \
    if (!internal)                                                      \
      update_symbols(_this, map);                                       \
    return _this;                                                       \
  }                                                                     \
  virtual type* copyInner(SymbolMap* map)

#define DECLARE_SYMBOL_COPY(type)                                       \
  type* copy(SymbolMap* map = NULL, bool internal = false) {            \
    SymbolMap localMap;                                                 \
    if (!map)                                                           \
      map = &localMap;                                                  \
    type* _this = copyInner(map);                                       \
    _this->astloc = astloc;                                             \
    _this->copyFlags(this);                                             \
    map->put(this, _this);                                              \
    if (!internal)                                                      \
      update_symbols(_this, map);                                       \
    return _this;                                                       \
  }                                                                     \
  virtual type* copyInner(SymbolMap* map)

//
// macro used to call copy from inside the copyInner method
//
#define COPY_INT(c) (c ? c->copy(map, true) : NULL)

//
// abstract parent of all AST node types
//
class BaseAST {
 public:
  AstTag astTag; // BaseAST subclass
  int id;        // Unique ID
  astlocT astloc; // Location of this node in the source code

  BaseAST(AstTag type);
  virtual ~BaseAST() { }
  virtual void verify() = 0;
  virtual BaseAST* copy(SymbolMap* map = NULL, bool internal = false) = 0;
  virtual BaseAST* copyInner(SymbolMap* map) = 0;
  virtual bool inTree(void) = 0;
  virtual GenRet codegen() = 0;

  const char* stringLoc(void);
  ModuleSymbol* getModule();
  FnSymbol* getFunction();
  int linenum() { return astloc.lineno; }
  const char* fname() { return astloc.filename; }

  virtual Type* typeInfo(void) = 0;
  Type* getValType();
  Type* getRefType();
  Type* getWideRefType();
};

GenRet baseASTCodegen(BaseAST* ast);
GenRet baseASTCodegenInt(int x);
GenRet baseASTCodegenString(const char* str);

//
// macro to update the global line number used to set the line number
// of an AST node when it is constructed
//
// This should be used before constructing new nodes to make sure the
// line number is correctly set. The global line number reverts to
// its previous value upon leaving the scope where the macro is used.
// The fixed variable name ensures a single macro per scope.
// Users of the macro are to create additional scopes when needed.
// todo - should we add it to DECLARE_COPY/DECLARE_SYMBOL_COPY ?
//
#define SET_LINENO(ast) astlocMarker markAstLoc(ast->astloc)
extern astlocT currentAstLoc;

struct astlocMarker {
  astlocT previousAstLoc;

  // constructor, invoked upon SET_LINENO
  astlocMarker(astlocT newAstLoc)
    : previousAstLoc(currentAstLoc)
  {
    //previousAstLoc = currentAstLoc;
    currentAstLoc = newAstLoc;
  }
  // constructor, for special occasions
  astlocMarker(int lineno, const char* filename)
    : previousAstLoc(currentAstLoc)
  {
    currentAstLoc.lineno = lineno;
    currentAstLoc.filename = astr(filename);
  }
  // destructor, invoked upon leaving SET_LINENO's scope
  ~astlocMarker() {
    currentAstLoc = previousAstLoc;
  }
};

//
// vectors of modules
//
extern Vec<ModuleSymbol*> allModules;  // contains all modules
extern Vec<ModuleSymbol*> userModules; // contains main + user modules
extern Vec<ModuleSymbol*> mainModules; // contains main modules

//
// class test inlines: determine the dynamic type of a BaseAST*
//
static inline bool isExpr(BaseAST* a)
{ return a && a->astTag < E_Expr; }
static inline bool isSymbol(BaseAST* a)
{ return a && a->astTag > E_Expr && a->astTag < E_Symbol; }
static inline bool isType(BaseAST* a)
{ return (a && a->astTag > E_Symbol && a->astTag < E_Type); }

#define def_is_ast(Type) \
  static inline bool is##Type(BaseAST* a) { return a && a->astTag == E_##Type; }
def_is_ast(SymExpr)
def_is_ast(UnresolvedSymExpr)
def_is_ast(DefExpr)
def_is_ast(CallExpr)
def_is_ast(NamedExpr)
def_is_ast(BlockStmt)
def_is_ast(CondStmt)
def_is_ast(GotoStmt)
def_is_ast(ExternBlockStmt)
def_is_ast(ModuleSymbol)
def_is_ast(VarSymbol)
def_is_ast(ArgSymbol)
def_is_ast(TypeSymbol)
def_is_ast(FnSymbol)
def_is_ast(EnumSymbol)
def_is_ast(LabelSymbol)
def_is_ast(PrimitiveType)
def_is_ast(EnumType)
def_is_ast(AggregateType)
#undef def_is_ast

//
// safe downcast inlines: downcast BaseAST*, Expr*, Symbol*, or Type*
//   note: toDerivedClass is equivalent to dynamic_cast<DerivedClass*>
//
#define def_to_ast(Type) \
  static inline Type * to##Type(BaseAST* a) { return is##Type(a) ? (Type*)a : NULL; }
def_to_ast(SymExpr)
def_to_ast(UnresolvedSymExpr)
def_to_ast(DefExpr)
def_to_ast(CallExpr)
def_to_ast(NamedExpr)
def_to_ast(BlockStmt)
def_to_ast(CondStmt)
def_to_ast(GotoStmt)
def_to_ast(ExternBlockStmt)
def_to_ast(Expr)
def_to_ast(ModuleSymbol)
def_to_ast(VarSymbol)
def_to_ast(ArgSymbol)
def_to_ast(TypeSymbol)
def_to_ast(FnSymbol)
def_to_ast(EnumSymbol)
def_to_ast(LabelSymbol)
def_to_ast(Symbol)
def_to_ast(PrimitiveType)
def_to_ast(EnumType)
def_to_ast(AggregateType)
def_to_ast(Type)
#undef def_to_ast
//
// traversal macros
//
// These macros are used to implement the functions that collect all
// of the nodes in some part of the AST, e.g., collectSymExprs.  They
// can also be used to define recursive functions that work over a
// portion of the AST.  See collectSymExprs for a simple example.
//
#define AST_CALL_CHILD(_a, _t, _m, call, ...)                           \
  if (((_t*)_a)->_m) {                                                  \
    BaseAST* next_ast = ((_t*)_a)->_m;                                  \
    call(next_ast, __VA_ARGS__);                                        \
  }

#define AST_CALL_LIST(_a, _t, _m, call, ...)                            \
  for_alist(next_ast, ((_t*)_a)->_m) {                                  \
    call(next_ast, __VA_ARGS__);                                        \
  }

#define AST_CHILDREN_CALL(_a, call, ...)                                \
  switch (_a->astTag) {                                                 \
  case E_CallExpr:                                                      \
    AST_CALL_CHILD(_a, CallExpr, baseExpr, call, __VA_ARGS__);          \
    AST_CALL_LIST(_a, CallExpr, argList, call, __VA_ARGS__);            \
    break;                                                              \
  case E_NamedExpr:                                                     \
    AST_CALL_CHILD(_a, NamedExpr, actual, call, __VA_ARGS__);           \
    break;                                                              \
  case E_DefExpr:                                                       \
    AST_CALL_CHILD(_a, DefExpr, init, call, __VA_ARGS__);               \
    AST_CALL_CHILD(_a, DefExpr, exprType, call, __VA_ARGS__);           \
    AST_CALL_CHILD(_a, DefExpr, sym, call, __VA_ARGS__);                \
    break;                                                              \
  case E_BlockStmt:                                                     \
    AST_CALL_LIST(_a, BlockStmt, body, call, __VA_ARGS__);              \
    AST_CALL_CHILD(_a, BlockStmt, blockInfo, call, __VA_ARGS__);        \
    AST_CALL_CHILD(_a, BlockStmt, modUses, call, __VA_ARGS__);          \
    AST_CALL_CHILD(_a, BlockStmt, byrefVars, call, __VA_ARGS__);        \
    break;                                                              \
  case E_CondStmt:                                                      \
    AST_CALL_CHILD(_a, CondStmt, condExpr, call, __VA_ARGS__);          \
    AST_CALL_CHILD(_a, CondStmt, thenStmt, call, __VA_ARGS__);          \
    AST_CALL_CHILD(_a, CondStmt, elseStmt, call, __VA_ARGS__);          \
    break;                                                              \
  case E_GotoStmt:                                                      \
    AST_CALL_CHILD(_a, GotoStmt, label, call, __VA_ARGS__);             \
    break;                                                              \
  case E_ModuleSymbol:                                                  \
    AST_CALL_CHILD(_a, ModuleSymbol, block, call, __VA_ARGS__);         \
    break;                                                              \
  case E_ArgSymbol:                                                     \
    AST_CALL_CHILD(_a, ArgSymbol, typeExpr, call, __VA_ARGS__);         \
    AST_CALL_CHILD(_a, ArgSymbol, defaultExpr, call, __VA_ARGS__);      \
    AST_CALL_CHILD(_a, ArgSymbol, variableExpr, call, __VA_ARGS__);     \
    break;                                                              \
  case E_TypeSymbol:                                                    \
    AST_CALL_CHILD(_a, Symbol, type, call, __VA_ARGS__);                \
    break;                                                              \
  case E_FnSymbol:                                                      \
    AST_CALL_LIST(_a, FnSymbol, formals, call, __VA_ARGS__);            \
    AST_CALL_CHILD(_a, FnSymbol, setter, call, __VA_ARGS__);            \
    AST_CALL_CHILD(_a, FnSymbol, body, call, __VA_ARGS__);              \
    AST_CALL_CHILD(_a, FnSymbol, where, call, __VA_ARGS__);             \
    AST_CALL_CHILD(_a, FnSymbol, retExprType, call, __VA_ARGS__);       \
    break;                                                              \
  case E_EnumType:                                                      \
    AST_CALL_LIST(_a, EnumType, constants, call, __VA_ARGS__);          \
    break;                                                              \
  case E_AggregateType:                                                 \
    AST_CALL_LIST(_a, AggregateType, fields, call, __VA_ARGS__);        \
    AST_CALL_LIST(_a, AggregateType, inherits, call, __VA_ARGS__);      \
    break;                                                              \
  default:                                                              \
    break;                                                              \
  }

//
// clean IR between passes by clearing some back pointers to dead AST
// nodes and removing dead AST nodes from the global vectors of AST
// nodes. "dead" means !isAlive && !isRootModule.
//
void cleanAst(void);

//
// reclaim memory associated with all AST nodes (called at the end)
//
void destroyAst(void);

//
// print memory-related statistics about the IR (called between passes
// if using --print-statistics)
//
void printStatistics(const char* pass);

void registerModule(ModuleSymbol* mod);

//
// update_symbols: substitute symbol uses in 'ast' using 'map'
//
// This function is primarily used when AST::copy is called.  If a
// Block containing a def and a use of that def is copied, then the
// def will be copied, and this routine will update the use to the new
// def.
//
void update_symbols(BaseAST* ast, SymbolMap* map);

#endif
