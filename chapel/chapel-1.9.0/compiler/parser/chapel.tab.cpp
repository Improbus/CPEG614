/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 17 "chapel.ypp"


#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdint.h>
#include "lexyacc.h" // all #includes here, for make depend
#include "driver.h"

  static int query_uid = 1;
  int captureTokens;
  char captureString[1024];

 
#define YYLLOC_DEFAULT(Current, Rhs, N)                                 \
  if (N) {                                                              \
        (Current).first_line   = (Rhs)[1].first_line;                   \
        if ((Current).first_line) yystartlineno = (Current).first_line; \
        (Current).first_column = (Rhs)[1].first_column;                 \
        (Current).last_line    = (Rhs)[N].last_line;                    \
        (Current).last_column  = (Rhs)[N].last_column;                  \
        (Current).comment = NULL;                                       \
  } else  {                                                             \
    (Current) = yylloc;                                                 \
  }                                                                     \



/* Line 268 of yacc.c  */
#line 100 "chapel.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     TIDENT = 258,
     IMAGLITERAL = 259,
     INTLITERAL = 260,
     REALLITERAL = 261,
     STRINGLITERAL = 262,
     EXTERNCODE = 263,
     TALIGN = 264,
     TATOMIC = 265,
     TBEGIN = 266,
     TBREAK = 267,
     TBY = 268,
     TCLASS = 269,
     TCOBEGIN = 270,
     TCOFORALL = 271,
     TCONFIG = 272,
     TCONST = 273,
     TCONTINUE = 274,
     TDELETE = 275,
     TDMAPPED = 276,
     TDO = 277,
     TDOMAIN = 278,
     TELSE = 279,
     TENUM = 280,
     TEXPORT = 281,
     TEXTERN = 282,
     TFOR = 283,
     TFORALL = 284,
     TIF = 285,
     TIN = 286,
     TINDEX = 287,
     TINLINE = 288,
     TINOUT = 289,
     TITER = 290,
     TLABEL = 291,
     TLAMBDA = 292,
     TLET = 293,
     TLOCAL = 294,
     TMINUSMINUS = 295,
     TMODULE = 296,
     TNEW = 297,
     TNIL = 298,
     TNOINIT = 299,
     TON = 300,
     TOTHERWISE = 301,
     TOUT = 302,
     TPARAM = 303,
     TPLUSPLUS = 304,
     TPRAGMA = 305,
     TPRIMITIVE = 306,
     TPROC = 307,
     TRECORD = 308,
     TREDUCE = 309,
     TREF = 310,
     TRETURN = 311,
     TSCAN = 312,
     TSELECT = 313,
     TSERIAL = 314,
     TSINGLE = 315,
     TSPARSE = 316,
     TSUBDOMAIN = 317,
     TSYNC = 318,
     TTHEN = 319,
     TTYPE = 320,
     TUNDERSCORE = 321,
     TUNION = 322,
     TUSE = 323,
     TVAR = 324,
     TWHEN = 325,
     TWHERE = 326,
     TWHILE = 327,
     TYIELD = 328,
     TZIP = 329,
     TALIAS = 330,
     TAND = 331,
     TASSIGN = 332,
     TASSIGNBAND = 333,
     TASSIGNBOR = 334,
     TASSIGNBXOR = 335,
     TASSIGNDIVIDE = 336,
     TASSIGNEXP = 337,
     TASSIGNLAND = 338,
     TASSIGNLOR = 339,
     TASSIGNMINUS = 340,
     TASSIGNMOD = 341,
     TASSIGNMULTIPLY = 342,
     TASSIGNPLUS = 343,
     TASSIGNSL = 344,
     TASSIGNSR = 345,
     TBAND = 346,
     TBNOT = 347,
     TBOR = 348,
     TBXOR = 349,
     TCOLON = 350,
     TCOMMA = 351,
     TDIVIDE = 352,
     TDOT = 353,
     TDOTDOT = 354,
     TDOTDOTDOT = 355,
     TEQUAL = 356,
     TEXP = 357,
     TGREATER = 358,
     TGREATEREQUAL = 359,
     THASH = 360,
     TLESS = 361,
     TLESSEQUAL = 362,
     TMINUS = 363,
     TMOD = 364,
     TNOT = 365,
     TNOTEQUAL = 366,
     TOR = 367,
     TPLUS = 368,
     TQUESTION = 369,
     TSEMI = 370,
     TSHIFTLEFT = 371,
     TSHIFTRIGHT = 372,
     TSTAR = 373,
     TSWAP = 374,
     TIO = 375,
     TLCBR = 376,
     TRCBR = 377,
     TLP = 378,
     TRP = 379,
     TLSBR = 380,
     TRSBR = 381,
     TNOELSE = 382,
     TUMINUS = 383,
     TUPLUS = 384
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 47 "chapel.ypp"

  const char* pch;
  Vec<const char*>* vpch;
  RetTag retTag;
  bool b;
  IntentTag pt;
  Expr* pexpr;
  DefExpr* pdefexpr;
  CallExpr* pcallexpr;
  BlockStmt* pblockstmt;
  Type* ptype;
  EnumType* penumtype;
  FnSymbol* pfnsymbol;
  Flag flag;
  ProcIter procIter;
  FlagSet* flagSet;



/* Line 293 of yacc.c  */
#line 285 "chapel.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 310 "chapel.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   10788

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  102
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNRULES -- Number of states.  */
#define YYNSTATES  773

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    11,    14,    16,    19,
      22,    26,    28,    30,    32,    34,    36,    38,    40,    42,
      44,    46,    49,    52,    56,    60,    64,    68,    72,    76,
      79,    83,    87,    90,    93,    97,   101,   103,   108,   113,
     118,   123,   128,   133,   138,   143,   148,   153,   158,   163,
     168,   173,   178,   181,   185,   186,   188,   190,   193,   195,
     198,   202,   204,   206,   208,   210,   212,   214,   217,   223,
     227,   234,   241,   246,   252,   258,   262,   266,   273,   279,
     285,   289,   296,   303,   308,   313,   318,   322,   329,   335,
     341,   342,   345,   349,   352,   359,   367,   368,   370,   372,
     374,   376,   377,   380,   381,   384,   388,   394,   396,   399,
     403,   405,   409,   410,   411,   420,   421,   423,   425,   428,
     430,   433,   434,   435,   445,   449,   453,   459,   465,   467,
     470,   472,   474,   476,   478,   480,   482,   484,   486,   488,
     490,   492,   494,   496,   498,   500,   502,   504,   506,   508,
     510,   512,   514,   516,   518,   520,   522,   524,   526,   528,
     530,   532,   534,   536,   538,   540,   542,   543,   547,   551,
     552,   554,   558,   563,   568,   575,   582,   583,   585,   587,
     589,   591,   594,   597,   599,   601,   603,   604,   606,   608,
     610,   612,   613,   615,   617,   619,   621,   623,   625,   627,
     629,   632,   634,   635,   637,   640,   643,   644,   647,   652,
     658,   660,   664,   669,   674,   677,   682,   683,   686,   689,
     694,   699,   704,   705,   707,   709,   711,   715,   719,   724,
     730,   732,   734,   738,   740,   743,   747,   748,   751,   754,
     755,   760,   761,   764,   767,   769,   774,   779,   786,   788,
     789,   791,   793,   797,   802,   806,   811,   818,   819,   822,
     825,   828,   831,   834,   837,   839,   841,   845,   849,   851,
     853,   855,   859,   863,   864,   866,   868,   872,   876,   880,
     884,   886,   888,   890,   892,   894,   896,   898,   900,   903,
     908,   913,   918,   924,   927,   930,   937,   944,   949,   959,
     969,   977,   984,   991,   996,  1006,  1016,  1024,  1029,  1036,
    1043,  1053,  1063,  1070,  1072,  1074,  1076,  1078,  1080,  1082,
    1084,  1086,  1090,  1091,  1096,  1098,  1102,  1104,  1108,  1111,
    1116,  1118,  1120,  1122,  1124,  1126,  1128,  1130,  1132,  1137,
    1141,  1145,  1148,  1151,  1153,  1155,  1157,  1159,  1161,  1163,
    1165,  1170,  1175,  1180,  1184,  1188,  1192,  1196,  1201,  1205,
    1207,  1209,  1211,  1213,  1217,  1221,  1225,  1229,  1235,  1239,
    1243,  1247,  1251,  1255,  1259,  1263,  1267,  1271,  1275,  1279,
    1283,  1287,  1291,  1295,  1299,  1303,  1307,  1311,  1315,  1319,
    1323,  1327,  1330,  1333,  1336,  1339,  1342,  1345,  1349,  1353,
    1357,  1361,  1365,  1369,  1373,  1377,  1379,  1381,  1383,  1385,
    1387,  1389
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     131,     0,    -1,   132,    -1,    -1,   132,   133,    -1,   136,
      -1,   135,   136,    -1,   133,    -1,   134,   133,    -1,    50,
       7,    -1,   135,    50,     7,    -1,   137,    -1,   138,    -1,
     143,    -1,   144,    -1,   147,    -1,   184,    -1,   145,    -1,
     148,    -1,   151,    -1,   142,    -1,   213,   115,    -1,    10,
     136,    -1,    11,   214,   136,    -1,    12,   139,   115,    -1,
      15,   214,   138,    -1,    19,   139,   115,    -1,    20,   219,
     115,    -1,    36,   140,   136,    -1,    39,   136,    -1,    45,
     219,   141,    -1,    59,   219,   141,    -1,    59,   141,    -1,
      63,   136,    -1,    68,   202,   115,    -1,    73,   219,   115,
      -1,     1,    -1,   220,    77,   219,   115,    -1,   220,    88,
     219,   115,    -1,   220,    85,   219,   115,    -1,   220,    87,
     219,   115,    -1,   220,    81,   219,   115,    -1,   220,    86,
     219,   115,    -1,   220,    82,   219,   115,    -1,   220,    78,
     219,   115,    -1,   220,    79,   219,   115,    -1,   220,    80,
     219,   115,    -1,   220,    90,   219,   115,    -1,   220,    89,
     219,   115,    -1,   220,   119,   219,   115,    -1,   220,    83,
     219,   115,    -1,   220,    84,   219,   115,    -1,   121,   122,
      -1,   121,   134,   122,    -1,    -1,   140,    -1,     3,    -1,
      22,   136,    -1,   138,    -1,    56,   115,    -1,    56,   219,
     115,    -1,   115,    -1,   164,    -1,   152,    -1,   157,    -1,
     186,    -1,   189,    -1,    27,     8,    -1,    22,   136,    72,
     219,   115,    -1,    72,   219,   141,    -1,    16,   219,    31,
     219,   214,   141,    -1,    16,   219,    31,   146,   214,   141,
      -1,    16,   219,   214,   141,    -1,    28,   219,    31,   219,
     141,    -1,    28,   219,    31,   146,   141,    -1,    28,   219,
     141,    -1,    28,   146,   141,    -1,    28,    48,   140,    31,
     219,   141,    -1,    29,   219,    31,   219,   141,    -1,    29,
     219,    31,   146,   141,    -1,    29,   219,   141,    -1,   125,
     202,    31,   219,   126,   136,    -1,   125,   202,    31,   146,
     126,   136,    -1,   125,   202,   126,   136,    -1,    74,   123,
     202,   124,    -1,    30,   219,    64,   136,    -1,    30,   219,
     138,    -1,    30,   219,    64,   136,    24,   136,    -1,    30,
     219,   138,    24,   136,    -1,    58,   219,   121,   149,   122,
      -1,    -1,   149,   150,    -1,    70,   202,   141,    -1,    46,
     136,    -1,    65,    58,   202,   121,   149,   122,    -1,   153,
     154,   140,   155,   121,   156,   122,    -1,    -1,    27,    -1,
      14,    -1,    53,    -1,    67,    -1,    -1,    95,   202,    -1,
      -1,   156,   143,    -1,   156,   135,   143,    -1,    25,   140,
     121,   158,   122,    -1,   159,    -1,   158,    96,    -1,   158,
      96,   159,    -1,   140,    -1,   140,    77,   219,    -1,    -1,
      -1,    37,   161,   171,   162,   177,   197,   183,   179,    -1,
      -1,    33,    -1,    26,    -1,    26,   140,    -1,    27,    -1,
      27,   140,    -1,    -1,    -1,   163,   176,   165,   167,   166,
     177,   197,   183,   178,    -1,   175,   168,   170,    -1,   175,
     169,   170,    -1,   175,   140,    98,   168,   170,    -1,   175,
     140,    98,   169,   170,    -1,   140,    -1,    92,   140,    -1,
      91,    -1,    93,    -1,    94,    -1,    92,    -1,   101,    -1,
     111,    -1,   107,    -1,   104,    -1,   106,    -1,   103,    -1,
     113,    -1,   108,    -1,   118,    -1,    97,    -1,   116,    -1,
     117,    -1,   109,    -1,   102,    -1,   110,    -1,    13,    -1,
     105,    -1,     9,    -1,   119,    -1,   120,    -1,    77,    -1,
      88,    -1,    85,    -1,    87,    -1,    81,    -1,    86,    -1,
      82,    -1,    78,    -1,    79,    -1,    80,    -1,    90,    -1,
      89,    -1,    -1,   123,   172,   124,    -1,   123,   172,   124,
      -1,    -1,   173,    -1,   172,    96,   173,    -1,   174,   140,
     201,   195,    -1,   174,   140,   201,   182,    -1,   174,   123,
     194,   124,   201,   195,    -1,   174,   123,   194,   124,   201,
     182,    -1,    -1,    31,    -1,    34,    -1,    47,    -1,    18,
      -1,    18,    31,    -1,    18,    55,    -1,    48,    -1,    55,
      -1,    65,    -1,    -1,    48,    -1,    55,    -1,    52,    -1,
      35,    -1,    -1,    18,    -1,    69,    -1,    48,    -1,    65,
      -1,   115,    -1,   179,    -1,   138,    -1,   142,    -1,   114,
     140,    -1,   114,    -1,    -1,   180,    -1,   100,   219,    -1,
     100,   181,    -1,    -1,    71,   219,    -1,   185,   140,   121,
     122,    -1,   185,   140,   121,   134,   122,    -1,    41,    -1,
      65,   187,   115,    -1,    17,    65,   187,   115,    -1,    27,
      65,   187,   115,    -1,   140,   188,    -1,   140,   188,    96,
     187,    -1,    -1,    77,   209,    -1,    77,   198,    -1,   190,
      48,   191,   115,    -1,   190,    18,   191,   115,    -1,   190,
      69,   191,   115,    -1,    -1,    17,    -1,    27,    -1,   192,
      -1,   191,    96,   192,    -1,   140,   197,   195,    -1,   140,
     196,    75,   219,    -1,   123,   194,   124,   197,   195,    -1,
      66,    -1,   140,    -1,   123,   194,   124,    -1,   193,    -1,
     193,    96,    -1,   193,    96,   194,    -1,    -1,    77,    44,
      -1,    77,   219,    -1,    -1,    95,   125,   202,   126,    -1,
      -1,    95,   209,    -1,    95,   198,    -1,     1,    -1,   125,
     202,   126,   209,    -1,   125,   202,   126,   198,    -1,   125,
     202,    31,   219,   126,   209,    -1,     1,    -1,    -1,   209,
      -1,   180,    -1,   125,   126,   199,    -1,   125,   202,   126,
     199,    -1,   125,   126,   200,    -1,   125,   202,   126,   200,
      -1,   125,   202,    31,   219,   126,   199,    -1,    -1,    95,
     209,    -1,    95,   180,    -1,    95,    23,    -1,    95,    60,
      -1,    95,    63,    -1,    95,   200,    -1,   219,    -1,   180,
      -1,   202,    96,   219,    -1,   202,    96,   180,    -1,    66,
      -1,   219,    -1,   180,    -1,   203,    96,   203,    -1,   204,
      96,   203,    -1,    -1,   206,    -1,   207,    -1,   206,    96,
     207,    -1,   140,    77,   180,    -1,   140,    77,   219,    -1,
     140,    75,   219,    -1,   180,    -1,   219,    -1,   140,    -1,
     212,    -1,   220,    -1,   211,    -1,   228,    -1,   227,    -1,
      60,   219,    -1,    32,   123,   205,   124,    -1,    23,   123,
     205,   124,    -1,    62,   123,   205,   124,    -1,    61,    62,
     123,   205,   124,    -1,    10,   219,    -1,    63,   219,    -1,
      28,   219,    31,   219,    22,   219,    -1,    28,   219,    31,
     146,    22,   219,    -1,    28,   219,    22,   219,    -1,    28,
     219,    31,   219,    22,    30,   219,    64,   219,    -1,    28,
     219,    31,   146,    22,    30,   219,    64,   219,    -1,    28,
     219,    22,    30,   219,    64,   219,    -1,    29,   219,    31,
     219,    22,   219,    -1,    29,   219,    31,   146,    22,   219,
      -1,    29,   219,    22,   219,    -1,    29,   219,    31,   219,
      22,    30,   219,    64,   219,    -1,    29,   219,    31,   146,
      22,    30,   219,    64,   219,    -1,    29,   219,    22,    30,
     219,    64,   219,    -1,   125,   202,   126,   219,    -1,   125,
     202,    31,   219,   126,   219,    -1,   125,   202,    31,   146,
     126,   219,    -1,   125,   202,    31,   219,   126,    30,   219,
      64,   219,    -1,   125,   202,    31,   146,   126,    30,   219,
      64,   219,    -1,    30,   219,    64,   219,    24,   219,    -1,
      43,    -1,   212,    -1,   208,    -1,   223,    -1,   222,    -1,
     160,    -1,   217,    -1,   218,    -1,   216,   120,   219,    -1,
      -1,    55,   123,   215,   124,    -1,   208,    -1,   215,    96,
     208,    -1,   220,    -1,   216,   120,   219,    -1,    42,   219,
      -1,    38,   191,    31,   219,    -1,   225,    -1,   209,    -1,
     210,    -1,   229,    -1,   230,    -1,   160,    -1,   217,    -1,
     218,    -1,   123,   100,   219,   124,    -1,   219,    95,   219,
      -1,   219,    99,   219,    -1,   219,    99,    -1,    99,   219,
      -1,    99,    -1,   208,    -1,   222,    -1,   223,    -1,   224,
      -1,   220,    -1,   160,    -1,   221,   123,   205,   124,    -1,
     221,   125,   205,   126,    -1,    51,   123,   205,   124,    -1,
     219,    98,   140,    -1,   219,    98,    65,    -1,   219,    98,
      23,    -1,   123,   203,   124,    -1,   123,   203,    96,   124,
      -1,   123,   204,   124,    -1,     5,    -1,     6,    -1,     4,
      -1,     7,    -1,   121,   202,   122,    -1,   125,   202,   126,
      -1,   125,   226,   126,    -1,   219,    75,   219,    -1,   226,
      96,   219,    75,   219,    -1,   219,   113,   219,    -1,   219,
     108,   219,    -1,   219,   118,   219,    -1,   219,    97,   219,
      -1,   219,   116,   219,    -1,   219,   117,   219,    -1,   219,
     109,   219,    -1,   219,   101,   219,    -1,   219,   111,   219,
      -1,   219,   107,   219,    -1,   219,   104,   219,    -1,   219,
     106,   219,    -1,   219,   103,   219,    -1,   219,    91,   219,
      -1,   219,    93,   219,    -1,   219,    94,   219,    -1,   219,
      76,   219,    -1,   219,   112,   219,    -1,   219,   102,   219,
      -1,   219,    13,   219,    -1,   219,     9,   219,    -1,   219,
     105,   219,    -1,   219,    21,   219,    -1,   113,   219,    -1,
     108,   219,    -1,    40,   219,    -1,    49,   219,    -1,   110,
     219,    -1,    92,   219,    -1,   219,    54,   219,    -1,   219,
      54,   146,    -1,   231,    54,   219,    -1,   231,    54,   146,
      -1,   219,    57,   219,    -1,   219,    57,   146,    -1,   231,
      57,   219,    -1,   231,    57,   146,    -1,   113,    -1,   118,
      -1,    76,    -1,   112,    -1,    91,    -1,    93,    -1,    94,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   190,   190,   195,   196,   201,   202,   207,   208,   213,
     214,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   273,   274,   278,   279,   283,   287,   288,   292,
     293,   297,   298,   299,   300,   301,   302,   306,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   340,   346,   356,   360,   361,   362,   363,   367,
     372,   373,   377,   379,   384,   391,   397,   398,   402,   404,
     406,   411,   412,   417,   418,   420,   425,   435,   442,   446,
     454,   455,   460,   465,   459,   490,   491,   493,   496,   499,
     502,   508,   514,   507,   544,   548,   553,   557,   565,   566,
     567,   568,   569,   570,   571,   572,   573,   574,   575,   576,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   594,   595,   596,   597,   598,   599,
     600,   601,   602,   603,   604,   605,   609,   610,   614,   618,
     619,   620,   624,   626,   628,   630,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   648,   649,   650,   654,
     655,   659,   660,   661,   662,   663,   667,   668,   672,   673,
     677,   679,   684,   685,   689,   690,   694,   695,   699,   701,
     706,   711,   713,   715,   720,   727,   738,   739,   741,   746,
     750,   754,   761,   762,   763,   767,   768,   776,   778,   784,
     789,   791,   793,   798,   800,   802,   809,   810,   811,   815,
     816,   821,   822,   823,   824,   844,   848,   852,   860,   864,
     865,   866,   870,   872,   878,   880,   882,   887,   888,   889,
     890,   891,   892,   893,   899,   900,   901,   902,   906,   907,
     908,   912,   913,   917,   918,   922,   923,   927,   928,   929,
     930,   931,   935,   946,   947,   948,   949,   950,   951,   953,
     955,   957,   959,   961,   963,   968,   970,   972,   974,   976,
     978,   980,   982,   984,   986,   988,   990,   992,   999,  1005,
    1011,  1017,  1026,  1031,  1039,  1040,  1041,  1042,  1043,  1044,
    1045,  1046,  1051,  1052,  1056,  1057,  1061,  1062,  1067,  1072,
    1080,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1088,  1090,
    1092,  1094,  1096,  1098,  1103,  1104,  1105,  1106,  1117,  1118,
    1122,  1123,  1124,  1128,  1129,  1130,  1138,  1139,  1140,  1144,
    1145,  1146,  1147,  1148,  1149,  1150,  1157,  1158,  1162,  1163,
    1164,  1165,  1166,  1167,  1168,  1169,  1170,  1171,  1172,  1173,
    1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,  1183,
    1184,  1188,  1189,  1190,  1191,  1192,  1193,  1197,  1198,  1199,
    1200,  1204,  1205,  1206,  1207,  1212,  1213,  1214,  1215,  1216,
    1217,  1218
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "IMAGLITERAL", "INTLITERAL",
  "REALLITERAL", "STRINGLITERAL", "EXTERNCODE", "TALIGN", "TATOMIC",
  "TBEGIN", "TBREAK", "TBY", "TCLASS", "TCOBEGIN", "TCOFORALL", "TCONFIG",
  "TCONST", "TCONTINUE", "TDELETE", "TDMAPPED", "TDO", "TDOMAIN", "TELSE",
  "TENUM", "TEXPORT", "TEXTERN", "TFOR", "TFORALL", "TIF", "TIN", "TINDEX",
  "TINLINE", "TINOUT", "TITER", "TLABEL", "TLAMBDA", "TLET", "TLOCAL",
  "TMINUSMINUS", "TMODULE", "TNEW", "TNIL", "TNOINIT", "TON", "TOTHERWISE",
  "TOUT", "TPARAM", "TPLUSPLUS", "TPRAGMA", "TPRIMITIVE", "TPROC",
  "TRECORD", "TREDUCE", "TREF", "TRETURN", "TSCAN", "TSELECT", "TSERIAL",
  "TSINGLE", "TSPARSE", "TSUBDOMAIN", "TSYNC", "TTHEN", "TTYPE",
  "TUNDERSCORE", "TUNION", "TUSE", "TVAR", "TWHEN", "TWHERE", "TWHILE",
  "TYIELD", "TZIP", "TALIAS", "TAND", "TASSIGN", "TASSIGNBAND",
  "TASSIGNBOR", "TASSIGNBXOR", "TASSIGNDIVIDE", "TASSIGNEXP",
  "TASSIGNLAND", "TASSIGNLOR", "TASSIGNMINUS", "TASSIGNMOD",
  "TASSIGNMULTIPLY", "TASSIGNPLUS", "TASSIGNSL", "TASSIGNSR", "TBAND",
  "TBNOT", "TBOR", "TBXOR", "TCOLON", "TCOMMA", "TDIVIDE", "TDOT",
  "TDOTDOT", "TDOTDOTDOT", "TEQUAL", "TEXP", "TGREATER", "TGREATEREQUAL",
  "THASH", "TLESS", "TLESSEQUAL", "TMINUS", "TMOD", "TNOT", "TNOTEQUAL",
  "TOR", "TPLUS", "TQUESTION", "TSEMI", "TSHIFTLEFT", "TSHIFTRIGHT",
  "TSTAR", "TSWAP", "TIO", "TLCBR", "TRCBR", "TLP", "TRP", "TLSBR",
  "TRSBR", "TNOELSE", "TUMINUS", "TUPLUS", "$accept", "program",
  "toplevel_stmt_ls", "toplevel_stmt", "stmt_ls", "pragma_ls", "stmt",
  "assignment_stmt", "block_stmt", "opt_ident", "ident", "do_stmt",
  "return_stmt", "class_level_stmt", "extern_block_stmt", "loop_stmt",
  "zippered_iterator", "if_stmt", "select_stmt", "when_stmt_ls",
  "when_stmt", "type_select_stmt", "class_decl_stmt", "opt_extern",
  "class_tag", "opt_inherit", "class_level_stmt_ls", "enum_decl_stmt",
  "enum_ls", "enum_item", "lambda_decl_expr", "$@1", "$@2", "linkage_spec",
  "fn_decl_stmt", "$@3", "$@4", "fn_decl_stmt_inner", "fn_ident",
  "assignop_ident", "opt_formal_ls", "req_formal_ls", "formal_ls",
  "formal", "opt_intent_tag", "opt_this_intent_tag", "proc_or_iter",
  "opt_ret_tag", "opt_function_body_stmt", "function_body_stmt",
  "query_expr", "opt_query_expr", "var_arg_expr", "opt_where_part",
  "module_decl_stmt", "module", "type_alias_decl_stmt",
  "type_alias_decl_stmt_inner", "opt_init_type", "var_decl_stmt",
  "opt_config", "var_decl_stmt_inner_ls", "var_decl_stmt_inner",
  "tuple_var_decl_component", "tuple_var_decl_stmt_inner_ls",
  "opt_init_expr", "opt_reindex_expr", "opt_type", "array_type",
  "opt_formal_array_elt_type", "formal_array_type", "opt_formal_type",
  "expr_ls", "tuple_component", "tuple_expr_ls", "opt_actual_ls",
  "actual_ls", "actual_expr", "ident_expr", "type_level_expr", "for_expr",
  "cond_expr", "nil_expr", "stmt_level_expr", "opt_ref_var_ls",
  "ref_var_ls", "io_expr", "new_expr", "let_expr", "expr", "lhs_expr",
  "fun_expr", "call_expr", "dot_expr", "parenthesized_expr",
  "literal_expr", "assoc_expr_ls", "binary_op_expr", "unary_op_expr",
  "reduce_expr", "scan_expr", "reduce_scan_op_expr", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   130,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   138,   138,   139,   139,   140,   141,   141,   142,
     142,   143,   143,   143,   143,   143,   143,   144,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   146,   147,   147,   147,   147,   148,
     149,   149,   150,   150,   151,   152,   153,   153,   154,   154,
     154,   155,   155,   156,   156,   156,   157,   158,   158,   158,
     159,   159,   161,   162,   160,   163,   163,   163,   163,   163,
     163,   165,   166,   164,   167,   167,   167,   167,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   169,   169,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   170,   170,   171,   172,
     172,   172,   173,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   174,   174,   174,   174,   175,   175,   175,   176,
     176,   177,   177,   177,   177,   177,   178,   178,   179,   179,
     180,   180,   181,   181,   182,   182,   183,   183,   184,   184,
     185,   186,   186,   186,   187,   187,   188,   188,   188,   189,
     189,   189,   190,   190,   190,   191,   191,   192,   192,   192,
     193,   193,   193,   194,   194,   194,   195,   195,   195,   196,
     196,   197,   197,   197,   197,   198,   198,   198,   198,   199,
     199,   199,   200,   200,   200,   200,   200,   201,   201,   201,
     201,   201,   201,   201,   202,   202,   202,   202,   203,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   207,
     207,   207,   208,   209,   209,   209,   209,   209,   209,   209,
     209,   209,   209,   209,   209,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   211,   212,   213,   213,   213,   213,   213,   213,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   218,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   220,   220,   220,   221,   221,
     222,   222,   222,   223,   223,   223,   224,   224,   224,   225,
     225,   225,   225,   225,   225,   225,   226,   226,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   227,   227,   227,   227,   227,
     227,   228,   228,   228,   228,   228,   228,   229,   229,   229,
     229,   230,   230,   230,   230,   231,   231,   231,   231,   231,
     231,   231
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     2,     1,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     2,     2,     3,     3,     1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     2,     3,     0,     1,     1,     2,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     2,     5,     3,
       6,     6,     4,     5,     5,     3,     3,     6,     5,     5,
       3,     6,     6,     4,     4,     4,     3,     6,     5,     5,
       0,     2,     3,     2,     6,     7,     0,     1,     1,     1,
       1,     0,     2,     0,     2,     3,     5,     1,     2,     3,
       1,     3,     0,     0,     8,     0,     1,     1,     2,     1,
       2,     0,     0,     9,     3,     3,     5,     5,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     3,     0,
       1,     3,     4,     4,     6,     6,     0,     1,     1,     1,
       1,     2,     2,     1,     1,     1,     0,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     0,     1,     2,     2,     0,     2,     4,     5,
       1,     3,     4,     4,     2,     4,     0,     2,     2,     4,
       4,     4,     0,     1,     1,     1,     3,     3,     4,     5,
       1,     1,     3,     1,     2,     3,     0,     2,     2,     0,
       4,     0,     2,     2,     1,     4,     4,     6,     1,     0,
       1,     1,     3,     4,     3,     4,     6,     0,     2,     2,
       2,     2,     2,     2,     1,     1,     3,     3,     1,     1,
       1,     3,     3,     0,     1,     1,     3,     3,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     4,
       4,     4,     5,     2,     2,     6,     6,     4,     9,     9,
       7,     6,     6,     4,     9,     9,     7,     4,     6,     6,
       9,     9,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     4,     1,     3,     1,     3,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     4,     3,     3,     3,     3,     4,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     5,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     0,     1,    36,    56,   361,   359,   360,   362,
       0,   322,    54,   322,     0,   223,    54,     0,     0,     0,
       0,   117,    97,     0,     0,     0,     0,   116,     0,   112,
       0,     0,     0,   210,     0,   313,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   407,   409,     0,   410,   411,   343,     0,     0,   408,
     405,    61,   406,     0,     0,     0,     4,     0,     5,    11,
      12,   282,    20,    13,    14,    17,    15,    18,    19,    63,
       0,    64,   335,     0,    62,    16,     0,    65,    66,     0,
     344,   331,   332,   285,   283,     0,     0,   336,   337,     0,
     284,     0,   345,   346,   347,   330,   287,   286,   333,   334,
       0,    22,   293,     0,     0,     0,    55,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   344,   283,   336,   337,
     322,   284,   345,   346,     0,     0,     0,     0,   273,     0,
     118,    67,     0,   120,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,     0,     0,   225,    29,   393,   328,
       0,   394,     9,   273,    59,     0,     0,     0,    58,    32,
       0,   288,     0,   273,    33,   294,     0,   216,     0,   201,
     265,     0,   264,     0,     0,   396,   342,   392,   395,   391,
      52,     7,     0,     0,   268,     0,   270,     0,     0,   269,
       0,   264,     0,     0,     6,    98,    99,   100,     0,   190,
     189,   121,     0,     0,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     341,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   273,   273,     0,     0,     0,    23,    24,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,    27,     0,
     282,   280,     0,   274,   275,   281,     0,     0,     0,     0,
      76,     0,     0,    75,     0,     0,    80,     0,    86,     0,
      28,   169,   113,   230,     0,   231,   233,     0,   244,     0,
       0,   236,     0,     0,    30,     0,    60,    90,    57,    31,
     273,     0,     0,     0,   214,   211,   200,     0,    34,    69,
      35,    53,     8,   363,     0,     0,   356,     0,   358,     0,
       0,     0,     0,   365,    10,   101,   186,     0,     0,     0,
       0,   321,   388,   387,   390,   398,   397,   402,   401,   384,
     381,   382,   383,   339,   371,   355,   354,   353,   340,   375,
     386,   380,   378,   389,   379,   377,   369,   374,   376,   385,
     368,   372,   373,   370,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   400,   399,   404,   403,   324,     0,     0,     0,     0,
       0,     0,     0,   364,   322,   322,    72,   212,     0,     0,
       0,   290,     0,   110,     0,   107,   213,     0,     0,     0,
     297,     0,     0,     0,   303,     0,     0,    85,     0,     0,
     289,   180,   177,   178,   179,   183,   184,   185,     0,   170,
       0,   191,     0,   234,     0,   248,     0,   243,   331,     0,
       0,   227,   329,   226,   352,     0,     0,   291,    90,     0,
     218,   331,     0,   267,   266,   338,   357,   271,   272,     0,
       0,    83,   307,   366,     0,     0,     0,   187,   188,   122,
       0,   208,     0,   220,   219,   221,    37,    44,    45,    46,
      41,    43,    50,    51,    39,    42,    40,    38,    48,    47,
      49,   350,   351,     0,   323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,   279,   277,   278,   276,
       0,   108,   106,     0,    84,     0,     0,    74,     0,    73,
       0,     0,    79,     0,    78,     0,     0,    88,   181,   182,
     176,   168,     0,   257,   192,   194,   195,   193,     0,   232,
     235,     0,   236,     0,   228,   237,   238,     0,     0,    89,
      91,   292,     0,     0,   215,     0,     0,     0,   102,   103,
     191,   151,   149,   154,   161,   162,   163,   158,   160,   156,
     159,   157,   155,   165,   164,   130,   133,   131,   132,   143,
     134,   147,   139,   137,   150,   138,   136,   141,   146,   148,
     135,   140,   144,   145,   142,   152,   153,   128,   166,   166,
     209,   325,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    70,   111,   109,    77,     0,     0,   296,     0,   295,
       0,     0,   302,     0,   301,    87,   312,   171,     0,     0,
     236,   206,   229,     0,     0,    93,     0,    94,     0,     0,
      82,   309,     0,    81,   308,   367,    96,     0,   129,     0,
     169,   124,   125,     0,     0,     0,     0,     0,     0,     0,
       0,   300,     0,     0,   306,     0,     0,   257,   260,   261,
     262,     0,   259,   263,   331,   202,   173,   172,     0,     0,
       0,   246,   331,    92,     0,     0,    97,     0,    95,    96,
     104,   206,   128,   166,   166,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   249,     0,   203,
     205,   204,   207,   198,   199,   114,     0,     0,     0,   105,
       0,   126,   127,   167,     0,     0,     0,     0,     0,     0,
     299,   298,   305,   304,   175,   174,   251,   252,   254,   331,
       0,   364,   331,   311,   310,   196,   123,   197,     0,   253,
     255,   249,   256
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,   191,   192,    67,   437,    69,    70,   115,
      71,   169,    72,    73,    74,    75,   521,    76,    77,   465,
     570,    78,    79,    80,   208,   486,   666,    81,   424,   425,
     125,   152,   451,    83,    84,   346,   580,   489,   618,   619,
     671,   302,   448,   449,   450,   490,   211,   558,   766,   735,
     180,   730,   696,   699,    85,    86,    87,   178,   324,    88,
      89,   155,   156,   306,   307,   461,   310,   311,   457,   757,
     693,   650,   193,   197,   198,   282,   283,   284,   126,    91,
      92,    93,   127,    95,   114,   406,    96,   128,   129,    99,
     131,   101,   132,   133,   104,   105,   202,   106,   107,   108,
     109,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -666
static const yytype_int16 yypact[] =
{
    -666,   126,  2074,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    3157,    83,   146,    83,  5909,    96,   146,  5909,  3157,    69,
     146,   146,   458,  4961,  5909,  5909,    73,  -666,   146,  -666,
       9,  3157,  5909,  -666,  5909,  -666,  5909,  5909,   197,   142,
    5137,  5909,  5260,  5909,   212,   157,  3157,    58,  5337,  5909,
    5909,  -666,  -666,  5909,  -666,  -666,  1915,  5909,  5909,  -666,
    5909,  -666,  -666,  2419,  4763,  5337,  -666,  3034,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
      31,  -666,   147,    28,  -666,  -666,   146,  -666,  -666,   243,
     168,  -666,  -666,  -666,   171,   188,   186,   194,   207, 10577,
    1722,     0,   213,   224,  -666,  -666,  -666,  -666,  -666,  -666,
      18,  -666, 10577,   221,  3157,   233,  -666,   232,  5909,  5909,
    5909,  5909,  5909,  5337,  5337,   152,  -666,  -666,  -666,  -666,
    8172,   195,  -666,  -666,   146,   247,  8367,   285,  5337,   237,
    -666,  -666,   146,  -666,   146,   236,     3,  7128,  7193,  7258,
    5337,  3157,   240,     8,   270,   -13,  -666,  -666,   335,   273,
    7323,   335,  -666,  5337,  -666,  8432,  8038,  3157,  -666,  -666,
    7323, 10577,   252,  5337,  -666, 10577,  5337,   293,   263,   146,
    -666,    82, 10577,  7323,  8497,   367,   875,   335,   367,   335,
    -666,  -666,  2542,   -23,  -666,  5909,  -666,   -37,    66, 10577,
      25,  8562,   -25,   372,  -666,  -666,  -666,  -666,   146,  -666,
    -666,  -666,   260,     9,     9,     9,  -666,  5909,  5909,  5909,
    5909,  5436,  5436,  5909,  5909,  5909,  5909,  5909,  5909,    55,
    1915,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,
    5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,
    5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,  5909,
    5909,  5337,  5337,  5436,  5436,   146,  -666,  -666,  2665,  -666,
    8237,  8302,  8627,    38,  5436,     3,   268,  -666,  -666,  5909,
     244,  -666,   266,   288,  -666, 10577,   146,   276,   356,  5337,
    -666,  3280,  5436,  -666,  3403,  5436,  -666,  3157,   369,   271,
    -666,   134,  -666,  -666,     8,  -666,   298,   280,  -666,  4510,
     330,   331,  5909,     9,  -666,   289,  -666,  -666,  -666,  -666,
    5337,   290,   167,  4587,   319,  -666,  -666,  5337,  -666,  -666,
    -666,  -666,  -666,  -666,  7063,  4862,  -666,  5038,  -666,  5436,
    2296,  5909,  5909,  -666,  -666,   321,   250,  2788,    91,   104,
     163,  8103,  6697,  6697,   202,  -666,   202,  -666,   202,  6797,
     446,   600,   847,   273,   367,  -666,  -666,  -666,   875, 10670,
     202,  1135,  1135,  6697,  1135,  1135,   492,   367, 10670, 10642,
     492,   335,   335,   367,  8692,  8757,  8822,  8887,  8952,  9017,
    9082,  9147,  9212,  9277,  9342,  9407,  9472,  9537,  9602,   294,
     296,  -666,   202,  -666,   202,  -666,    71,  5986,  5436,  6063,
    5436,  5909,  5436,  6701,    83,  9667,  -666,  -666,  9732,  5909,
    5337,  -666,  5337,   350,    64,  -666,  -666,  5909,    74,  5909,
   10577,    22,  7388,  5909, 10577,    27,  7453,   405,  9797,  3157,
    -666,    37,  -666,  -666,  -666,  -666,  -666,  -666,    78,  -666,
      13,   242,   307,     8,   265,  -666,  5337,  -666,   483,  5909,
    5535,  -666, 10577,  -666,  -666,   -18,   310,  -666,  -666,  5337,
    -666,   177,   146,  -666, 10577,  -666,  -666,  -666,  -666,   309,
    2131,  -666, 10577, 10577,  9862,  5337,   315,  -666,  -666,  -666,
    6756,  -666,  2911,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,   146,  -666,  5909,   417,  9927,  5909,   418,
    9992,   322,  6868,     3,     3,  -666, 10577,  -666, 10577,  -666,
    5909,   146,  -666,  7323,  -666,  7518,  3526,  -666,  3649,  -666,
    7583,  3772,  -666,  3895,  -666,  3157,  5909,  -666,  -666,  -666,
     761,  -666,     8,   346,  -666,  -666,  -666,  -666,    34,  -666,
    -666,  4587,   331,    46, 10577,  -666, 10577,  3157,  5337,  -666,
    -666,  -666,    11,    51,  -666,  4018,  4141,  5909,   349,  -666,
     242,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,   146,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,   353,   324,   324,
    -666,  -666, 10057,  6140,  6217, 10122,  6294,  6371,  6448,  6525,
    -666,  -666, 10577,  -666,  -666,  3157,  5909, 10577,  5909, 10577,
    3157,  5909, 10577,  5909, 10577,  -666, 10577,  -666,   332,  5612,
      30,   387,  -666,  5436,  4264,  -666,    -2,  -666,  4387,  5909,
    -666, 10577,  5909,  -666, 10577, 10577,   469,    20,  -666,  6756,
     134,  -666,  -666,  5909,  5909,  5909,  5909,  5909,  5909,  5909,
    5909,  9797,  7648,  7713,  9797,  7778,  7843,   346,    69,  5909,
    5909,  4664,  -666,  -666,   199,  5337,  -666,  -666,  5909,   -33,
    6933,  -666,   628,  -666,  7908,  7973,   136,   146,  -666,   788,
    -666,   387,  -666,   324,   324,    79, 10187, 10252, 10317, 10382,
   10447, 10512,  3157,  3157,  3157,  3157,    30,  5711,    54,  -666,
    -666, 10577, 10577,  -666,  -666,  -666,  6525,  3157,  3157,  -666,
     -15,  -666,  -666,  -666,  5909,  5909,  5909,  5909,  5909,  5909,
    9797,  9797,  9797,  9797,  -666,  -666,  -666,  -666,  -666,   272,
    5436,  6602,   675,  9797,  9797,  -666,  -666,  -666,  6998,  -666,
    -666,  5810,  -666
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -666,  -666,  -666,    -1,   113,  -203,  1720,  -666,   920,   452,
    1512,   -81,  -613,  -606,  -666,  -666,    72,  -666,  -666,     2,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,   -60,
     640,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -197,  -195,
    -555,  -666,  -193,   -72,  -666,  -666,  -666,  -101,  -666,  -259,
       6,  -666,  -243,  -227,  -666,  -666,  -666,  -132,  -666,  -666,
    -666,   100,   172,  -666,  -296,  -553,  -666,  -412,  -320,  -578,
    -665,  -199,   -31,    39,  -666,  -144,  -666,    68,   306,  -272,
    -666,  -666,   755,  -666,    -8,  -666,  -666,   766,   846,   -10,
     972,  -666,  1136,  1178,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -365
static const yytype_int16 yytable[] =
{
     112,    66,   276,   470,   130,   117,   299,   136,   452,   652,
     287,     5,     5,   147,   148,   149,     5,   181,   312,   315,
     167,   308,   158,    40,   159,   167,   160,   161,   567,   321,
     165,   166,   170,   171,   200,   308,   175,   458,   182,   183,
     184,    40,   562,   185,   536,   205,   186,   187,   188,   541,
     189,   471,   568,   182,   199,   201,   339,   567,     5,   335,
     710,     5,   758,   209,   672,   290,   293,   296,   548,   412,
     196,   342,   263,   327,   303,   264,  -241,   653,   365,   314,
     210,   568,   653,   313,   206,   760,   734,   336,   268,   319,
    -241,  -241,   549,   273,   327,   146,   770,   697,   207,   333,
     765,   343,   329,   739,   569,  -241,   268,   460,   112,   270,
     271,   272,   175,   182,   201,   561,   176,   399,   400,   268,
     366,   327,   275,   261,   268,   262,     3,   734,   285,   561,
     695,   304,   153,   657,   327,  -241,   552,  -176,   113,     5,
     285,  -241,   327,   268,   281,   322,   651,   327,   268,     5,
     327,   340,   441,   285,  -224,  -241,   281,   560,   741,   742,
     531,   134,   337,   285,   413,   442,   182,   513,   443,   281,
     327,  -119,   654,   755,   550,   550,   466,   658,   327,   281,
     761,   444,   445,   769,  -224,   334,   532,   313,  -119,   446,
     338,   332,   138,   772,   416,   514,   150,   328,   534,   447,
     313,   142,   551,   743,   162,  -224,   493,   351,   352,   353,
     354,   356,   358,   359,   360,   361,   362,   363,   364,   494,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   285,   285,   402,   404,   711,   648,  -176,   428,   313,
     554,   213,  -318,   327,   415,   163,   308,   281,   281,   418,
    -349,   308,  -349,  -217,   172,  -349,  -258,  -349,   495,   182,
     173,   430,   432,  -315,   434,   436,  -314,   438,   468,   458,
     555,   214,  -217,   355,   357,  -258,  -241,   227,   487,  -258,
     229,  -241,   462,   216,   232,   488,   217,   556,    90,  -319,
     285,   557,   215,   348,   349,   350,    90,   474,  -348,   419,
    -348,   420,  -320,  -258,    90,   199,   281,   199,  -317,   480,
     482,   483,   484,   473,   701,   401,   403,    90,   701,  -316,
     574,   196,  -241,   196,   265,  -239,   414,  -241,   267,  -250,
     537,   539,    90,   268,   542,   544,   220,   279,   286,   289,
     561,  -241,   277,   301,   431,   309,  -241,   435,  -250,    90,
     323,   229,  -250,    90,   477,   320,   478,   694,   325,   344,
    -241,   347,   702,   417,   422,  -241,   702,   427,   220,   221,
     421,   426,   222,   439,   453,   440,  -250,   430,   517,   434,
     520,   438,   522,   482,   454,   459,   523,   524,   460,   526,
     528,   479,   285,   464,   467,   472,   485,   533,   511,   535,
      90,   221,   512,   540,   222,   563,   527,   530,   281,   545,
     227,   559,   228,   229,   571,   575,   579,   232,   573,   623,
     626,   649,   630,   631,   239,   327,   201,   670,   628,   564,
     566,   669,   634,   245,   578,   759,   687,    90,   698,   201,
     492,     5,   227,   709,   762,   229,   141,   220,   135,   232,
     572,   633,   713,    90,   714,   182,  -224,   715,   647,   667,
     516,   767,   519,   754,   740,   463,    15,  -222,   726,   759,
     529,   332,     0,  -119,    20,    21,   706,     0,    90,   759,
     221,     0,    27,   222,  -115,   622,  -224,     0,   625,     0,
    -119,     0,     0,   220,  -242,     0,     0,  -222,     0,    38,
     632,  -115,     0,   142,     0,     0,   637,  -224,   639,     0,
       0,   642,     0,   644,   707,     0,   646,   656,  -222,  -242,
       0,   227,     0,   228,   229,     0,   221,     0,   232,   222,
       0,     0,     0,     0,  -242,   239,     0,     0,   182,     0,
    -242,     0,   243,   244,   245,   661,   664,   665,     0,     0,
       0,   405,     0,     0,    90,   703,     0,     0,     0,  -242,
       0,     0,     0,   224,    61,   225,   226,   227,     0,   228,
     229,   708,     0,     0,   232,     0,     0,    90,  -242,     0,
      90,   239,     0,    90,  -242,     0,     0,     0,   243,   244,
     245,     0,     0,   637,   639,     0,   642,   644,   661,   664,
       0,   220,     0,     0,     0,   681,   682,     0,   683,     0,
     684,   685,     0,   686,     0,     0,     0,     0,     0,     0,
       0,     0,    82,   700,   482,     0,    90,     0,   482,   704,
      82,     0,   705,    90,   221,   692,     0,   222,    82,  -245,
     728,     0,     0,   681,   716,   717,   684,   718,   719,   720,
     721,    82,     0,     0,     0,     0,     0,     0,     0,   171,
     175,   201,     0,     0,  -245,   731,    82,     0,   732,     0,
       0,   224,     0,     0,   226,   227,     0,   228,   229,  -245,
       0,   729,   232,    82,     0,  -245,  -247,    82,     0,   239,
       0,     0,   750,   751,   752,   753,   243,   244,   245,     0,
       0,     0,     0,     0,  -245,     0,   664,   763,   764,     0,
       0,  -247,     0,   756,   750,   751,   752,   753,   763,   764,
       0,     0,     0,  -245,     0,    90,  -247,     0,     0,  -245,
     768,   482,  -247,     0,    82,     0,     0,    94,     0,     0,
       0,   664,     0,     0,     0,    94,     0,   756,    97,     0,
       0,  -247,     0,    94,     0,     0,    97,   756,     0,   441,
       0,     0,     0,     0,    97,     0,    94,     0,     0,     0,
    -247,    82,   442,     0,     0,   443,  -247,    97,    90,     0,
       0,    94,     0,     0,     0,    15,  -222,    82,   444,   445,
       0,     0,    97,    20,    21,   706,   446,     0,    94,   621,
       0,    27,    94,  -115,     0,     0,   447,     0,     0,    97,
       0,     0,    82,    97,     0,     0,  -222,     0,   203,     0,
    -115,     0,    90,     0,    90,     0,     0,    90,    98,    90,
       0,    90,     0,   707,     0,     0,    98,  -222,     0,     0,
       0,     0,     0,     0,    98,     0,     0,     0,   220,    94,
       0,     0,     0,    90,     0,     0,     0,    98,     0,     0,
      97,    90,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,     0,     0,     0,   220,     0,     0,     0,
       0,   221,     0,    61,   222,     0,    94,     0,    82,    98,
       0,     0,     0,    98,     0,     0,     0,    97,     0,     0,
       0,     0,    94,     0,     0,     0,     0,     0,     0,   221,
       0,    82,   222,    97,    82,     0,     0,    82,   224,     0,
       0,    90,   227,     0,   228,   229,    90,    94,     0,   232,
       0,     0,     0,     0,     0,     0,   239,     0,    97,     0,
      98,     0,   168,   243,   244,   245,   224,     0,   225,   226,
     227,     0,   228,   229,   100,     0,     0,   232,     0,     0,
      82,     0,   100,   238,   239,     0,     0,    82,   242,     0,
     100,   243,   244,   245,     0,     0,     0,    98,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,     0,     0,     0,     0,   100,     0,
       0,     0,     0,    94,     0,     0,     0,     0,    90,    90,
      90,    90,     0,     0,    97,   100,     0,   269,    98,   100,
       0,     0,     0,    90,    90,     0,    94,     0,     0,    94,
       0,     0,    94,     0,     0,     0,     0,    97,     0,     0,
      97,     0,     0,    97,     0,     0,   168,   168,   168,   298,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
     168,     0,     0,     0,     0,     0,   100,     0,     0,     0,
     168,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,    94,   168,     0,     0,    97,     0,     0,     0,
       0,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,     0,    98,   102,   100,
      98,     0,     0,    98,     0,     0,   102,     0,     0,     0,
       0,     0,     0,     0,   102,     0,   220,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,   102,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,    82,     0,
     103,    82,   102,    82,     0,    82,    98,     0,   103,   221,
       0,     0,   222,    98,    94,   168,   103,     0,     0,   102,
       0,     0,     0,   102,     0,    97,     0,    82,     0,   103,
       0,     0,     0,     0,     0,    82,    82,     0,     0,     0,
       0,     0,     0,     0,   103,     0,   224,     0,   225,   226,
     227,     0,   228,   229,   230,     0,     0,   232,     0,     0,
     100,   103,     0,   238,   239,   103,     0,    94,   242,     0,
     102,   243,   244,   245,     0,     0,     0,     0,    97,     0,
       0,     0,     0,   100,     0,     0,   100,     0,     0,   100,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
      82,     0,     0,     0,     0,    98,     0,   102,     0,     0,
       0,    94,   103,    94,     0,     0,    94,     0,    94,     0,
      94,     0,    97,   102,    97,     0,     0,    97,     0,    97,
       0,    97,   100,     0,     0,     0,     0,     0,     0,   100,
       0,     0,    94,     0,     0,     0,     0,     0,   102,   103,
      94,    94,     0,    97,     0,     0,     0,     0,    98,     0,
       0,    97,    97,     0,     0,   103,     0,     0,     0,     0,
       0,   168,   168,     0,     0,   168,   168,     0,     0,     0,
       0,     0,    82,    82,    82,    82,     0,     0,     0,     0,
     103,     0,     0,     0,     0,     0,     0,    82,    82,     0,
       0,     0,    98,     0,    98,     0,     0,    98,     0,    98,
      94,    98,     0,     0,     0,    94,     0,     0,     0,     0,
       0,    97,     0,     0,   102,     0,    97,     0,     0,     0,
       0,   100,     0,    98,     0,     0,     0,     0,     0,     0,
       0,    98,    98,     0,     0,     0,     0,   102,     0,     0,
     102,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   168,     0,   103,     0,     0,     0,
       0,     0,     0,   168,     0,   298,     0,     0,     0,     0,
     298,     0,     0,     0,   100,     0,     0,     0,     0,   103,
       0,     0,   103,     0,     0,   103,   102,    94,    94,    94,
      94,    98,     0,   102,     0,     0,    98,     0,    97,    97,
      97,    97,    94,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    97,    97,     0,     0,     0,   100,     0,
     100,     0,     0,   100,     0,   100,     0,   100,   103,     0,
       0,     0,     0,     0,   116,   103,     0,     0,   116,     0,
       0,     0,   139,   140,   143,     0,     0,     0,     0,   100,
     151,     0,   154,     0,     0,     0,     0,   100,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   177,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    98,
      98,    98,     0,     0,     0,   102,   168,     0,     0,     0,
       0,     0,     0,    98,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   212,     0,
       0,     0,   298,   298,     0,   298,   298,   100,     0,     0,
       0,     0,   100,     0,     0,     0,     0,   103,     0,   733,
       0,     0,     0,     0,   298,   298,     0,     0,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   177,     0,     0,     0,
     280,     0,     0,     0,   177,     0,   288,     0,     0,     0,
     733,     0,   280,     0,     0,   305,     0,     0,     0,     0,
     103,     0,   102,     0,   102,   280,     0,   102,     0,   102,
       0,   102,     0,     0,     0,   280,     0,     0,     0,     0,
       0,   326,     0,     0,   100,   100,   100,   100,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,   100,
     100,   102,   102,     0,   103,     0,   103,     0,     0,   103,
     345,   103,    68,   103,     0,   154,   154,   154,     0,     0,
     111,     0,     0,     0,     0,     0,     0,     0,   137,     0,
       0,   367,     0,     0,     0,   103,     0,     0,     0,     0,
       0,   157,     0,   103,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   174,     0,     0,     0,
       0,   102,     0,   280,   280,     0,   102,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   423,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   103,     0,     0,   305,     0,   103,     0,
       0,     0,     0,     0,     0,   154,     0,     0,     0,     0,
       0,     0,   280,     0,   266,     0,     0,     0,     0,     0,
       0,   260,  -326,     0,     0,  -348,     0,  -348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   102,   102,
     102,   102,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,     0,   102,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     103,   103,   103,   103,     0,     0,     0,     0,     0,     0,
       0,     0,    68,     0,     0,   103,   103,     0,     5,     6,
       7,     8,     9,     0,     0,   118,     0,     0,     0,     0,
       0,     0,     0,     0,   280,     0,     0,     0,    19,     0,
       0,     0,     0,   119,   120,   121,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,     0,
       0,     0,   553,     0,    37,   305,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,   122,     0,
       0,     0,     0,     0,   177,     0,     0,     0,    68,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   617,     0,     0,     0,    52,    53,    54,    55,
       0,   318,     0,     0,   318,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,     0,     0,    60,     0,
       0,     0,     0,    62,     0,     0,   123,     0,    64,     0,
     124,     0,     0,   423,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     481,     0,     0,     0,   305,     0,     0,    68,     0,     0,
       0,     0,     0,     0,    -2,     4,     0,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,   -96,    13,
      14,    15,  -222,    16,    17,     0,    18,    19,     0,    20,
      21,    22,    23,    24,    25,     0,    26,    27,   668,  -115,
      28,    29,    30,    31,    32,    33,    34,    35,     0,    36,
       0,     0,  -222,    37,    38,    39,  -115,   -96,     0,     0,
      40,     0,    41,    42,    43,    44,    45,    46,     0,    47,
     218,   -96,    48,  -222,   219,     0,    49,    50,     0,     0,
      51,     0,   220,     0,     0,     0,     0,     0,     0,   547,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,   712,    57,     0,    58,   221,    59,    60,   222,    61,
       0,     0,    62,     0,     0,    63,     0,    64,     0,    65,
       0,     0,     0,     0,     0,     0,     0,   223,     0,     0,
       0,     0,    68,     0,     0,     0,     0,     0,   143,   177,
       0,     0,   224,     0,   225,   226,   227,     0,   228,   229,
     230,     0,   231,   232,   233,   234,   235,   236,   237,   238,
     239,     0,   240,   241,   242,     0,     0,   243,   244,   245,
       0,     0,     0,     0,     0,     0,   318,   576,   318,     0,
       0,   318,     0,   318,     0,   645,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   655,     0,     0,
       0,     0,     0,     0,     0,   660,   663,     4,     0,     5,
       6,     7,     8,     9,     0,  -364,    10,    11,    12,  -364,
     -96,    13,    14,    15,  -222,    16,    17,  -364,    18,    19,
    -364,    20,    21,    22,    23,    24,    25,     0,    26,    27,
       0,  -115,    28,    29,    30,    31,    32,    33,    34,    35,
       0,    36,     0,     0,  -222,    37,     0,    39,  -115,   -96,
    -364,     0,    40,  -364,    41,    42,    43,    44,    45,    46,
       0,    47,     0,   -96,    48,  -222,     0,     0,    49,    50,
       0,     0,  -364,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -364,    53,  -364,
    -364,  -364,  -364,  -364,  -364,  -364,     0,  -364,  -364,  -364,
    -364,  -364,  -364,  -364,  -364,  -364,    58,  -364,  -364,  -364,
       0,    61,  -364,  -364,  -364,     0,     0,    63,  -364,    64,
       4,    65,     5,     6,     7,     8,     9,     0,     0,    10,
      11,    12,     0,   -96,    13,    14,    15,  -222,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,    24,    25,
       0,    26,    27,     0,  -115,    28,    29,    30,    31,    32,
      33,    34,    35,     0,    36,     0,     0,  -222,    37,    38,
      39,  -115,   -96,     0,     0,    40,     0,    41,    42,    43,
      44,    45,    46,     0,    47,     0,   -96,    48,  -222,     0,
       0,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
       0,    59,    60,   179,    61,     0,     0,    62,     0,     0,
      63,   190,    64,     4,    65,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,   -96,    13,    14,    15,
    -222,    16,    17,     0,    18,    19,     0,    20,    21,    22,
      23,    24,    25,     0,    26,    27,     0,  -115,    28,    29,
      30,    31,    32,    33,    34,    35,     0,    36,     0,     0,
    -222,    37,    38,    39,  -115,   -96,     0,     0,    40,     0,
      41,    42,    43,    44,    45,    46,     0,    47,     0,   -96,
      48,  -222,     0,     0,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,     0,    59,    60,     0,    61,     0,     0,
      62,     0,     0,    63,   331,    64,     4,    65,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,     0,   -96,
      13,    14,    15,  -222,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,    24,    25,     0,    26,    27,     0,
    -115,    28,    29,    30,    31,    32,    33,    34,    35,     0,
      36,     0,     0,  -222,    37,    38,    39,  -115,   -96,     0,
       0,    40,     0,    41,    42,    43,    44,    45,    46,     0,
      47,     0,   -96,    48,  -222,     0,     0,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,     0,    59,    60,     0,
      61,     0,     0,    62,     0,     0,    63,   190,    64,     4,
      65,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,   -96,    13,    14,    15,  -222,    16,    17,     0,
      18,    19,     0,    20,    21,    22,    23,    24,    25,     0,
      26,    27,     0,  -115,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,     0,     0,  -222,    37,    38,    39,
    -115,   -96,     0,     0,    40,     0,    41,    42,    43,    44,
      45,    46,     0,    47,     0,   -96,    48,  -222,     0,     0,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,     0,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,     0,
      59,    60,     0,    61,     0,     0,    62,     0,     0,    63,
     491,    64,     4,    65,     5,     6,     7,     8,     9,     0,
       0,    10,    11,    12,     0,   -96,    13,    14,    15,  -222,
      16,    17,     0,    18,    19,     0,    20,    21,    22,    23,
      24,    25,     0,    26,    27,     0,  -115,    28,    29,    30,
      31,    32,    33,    34,    35,     0,    36,     0,     0,  -222,
      37,    38,    39,  -115,   -96,     0,     0,    40,     0,    41,
      42,    43,    44,    45,    46,     0,    47,     0,   -96,    48,
    -222,     0,     0,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,     0,    59,    60,     0,    61,     0,     0,    62,
       0,     0,    63,   620,    64,     4,    65,     5,     6,     7,
       8,     9,     0,     0,    10,    11,    12,     0,   -96,    13,
      14,    15,  -222,    16,    17,     0,    18,    19,     0,    20,
      21,    22,    23,    24,    25,     0,    26,    27,     0,  -115,
      28,    29,    30,    31,    32,    33,    34,    35,     0,    36,
       0,     0,  -222,    37,   203,    39,  -115,   -96,     0,     0,
      40,     0,    41,    42,    43,    44,    45,    46,     0,    47,
       0,   -96,    48,  -222,     0,     0,    49,    50,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    57,     0,    58,     0,    59,    60,     0,    61,
       0,     0,    62,     0,     0,    63,     0,    64,     4,    65,
       5,     6,     7,     8,     9,     0,     0,    10,    11,    12,
       0,   -96,    13,    14,    15,  -222,    16,    17,     0,    18,
      19,     0,    20,    21,    22,    23,    24,    25,     0,    26,
      27,     0,  -115,    28,    29,    30,    31,    32,    33,    34,
      35,     0,    36,     0,     0,  -222,    37,     0,    39,  -115,
     -96,     0,     0,    40,     0,    41,    42,    43,    44,    45,
      46,     0,    47,     0,   -96,    48,  -222,     0,     0,    49,
      50,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,     0,    59,
      60,     0,    61,     0,     0,    62,     0,     0,    63,     0,
      64,     4,    65,     5,     6,     7,     8,     9,     0,     0,
      10,    11,    12,     0,   -96,    13,    14,    15,  -222,    16,
      17,     0,    18,    19,     0,    20,    21,    22,    23,    24,
     429,     0,    26,    27,     0,  -115,    28,    29,    30,    31,
      32,    33,    34,    35,     0,    36,     0,     0,  -222,    37,
       0,    39,  -115,   -96,     0,     0,    40,     0,    41,    42,
      43,    44,    45,    46,     0,    47,     0,   -96,    48,  -222,
       0,     0,    49,    50,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,    57,     0,
      58,     0,    59,    60,     0,    61,     0,     0,    62,     0,
       0,    63,     0,    64,     4,    65,     5,     6,     7,     8,
       9,     0,     0,    10,    11,    12,     0,   -96,    13,    14,
      15,  -222,    16,    17,     0,    18,    19,     0,    20,    21,
      22,    23,    24,   433,     0,    26,    27,     0,  -115,    28,
      29,    30,    31,    32,    33,    34,    35,     0,    36,     0,
       0,  -222,    37,     0,    39,  -115,   -96,     0,     0,    40,
       0,    41,    42,    43,    44,    45,    46,     0,    47,     0,
     -96,    48,  -222,     0,     0,    49,    50,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,    58,     0,    59,    60,     0,    61,     0,
       0,    62,     0,     0,    63,     0,    64,     4,    65,     5,
       6,     7,     8,     9,     0,     0,    10,    11,    12,     0,
     -96,    13,    14,    15,  -222,    16,    17,     0,    18,    19,
       0,    20,    21,    22,    23,    24,   636,     0,    26,    27,
       0,  -115,    28,    29,    30,    31,    32,    33,    34,    35,
       0,    36,     0,     0,  -222,    37,     0,    39,  -115,   -96,
       0,     0,    40,     0,    41,    42,    43,    44,    45,    46,
       0,    47,     0,   -96,    48,  -222,     0,     0,    49,    50,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,    57,     0,    58,     0,    59,    60,
       0,    61,     0,     0,    62,     0,     0,    63,     0,    64,
       4,    65,     5,     6,     7,     8,     9,     0,     0,    10,
      11,    12,     0,   -96,    13,    14,    15,  -222,    16,    17,
       0,    18,    19,     0,    20,    21,    22,    23,    24,   638,
       0,    26,    27,     0,  -115,    28,    29,    30,    31,    32,
      33,    34,    35,     0,    36,     0,     0,  -222,    37,     0,
      39,  -115,   -96,     0,     0,    40,     0,    41,    42,    43,
      44,    45,    46,     0,    47,     0,   -96,    48,  -222,     0,
       0,    49,    50,     0,     0,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,     0,    56,     0,
       0,     0,     0,     0,     0,     0,     0,    57,     0,    58,
       0,    59,    60,     0,    61,     0,     0,    62,     0,     0,
      63,     0,    64,     4,    65,     5,     6,     7,     8,     9,
       0,     0,    10,    11,    12,     0,   -96,    13,    14,    15,
    -222,    16,    17,     0,    18,    19,     0,    20,    21,    22,
      23,    24,   641,     0,    26,    27,     0,  -115,    28,    29,
      30,    31,    32,    33,    34,    35,     0,    36,     0,     0,
    -222,    37,     0,    39,  -115,   -96,     0,     0,    40,     0,
      41,    42,    43,    44,    45,    46,     0,    47,     0,   -96,
      48,  -222,     0,     0,    49,    50,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,     0,     0,     0,     0,     0,     0,     0,
      57,     0,    58,     0,    59,    60,     0,    61,     0,     0,
      62,     0,     0,    63,     0,    64,     4,    65,     5,     6,
       7,     8,     9,     0,     0,    10,    11,    12,     0,   -96,
      13,    14,    15,  -222,    16,    17,     0,    18,    19,     0,
      20,    21,    22,    23,    24,   643,     0,    26,    27,     0,
    -115,    28,    29,    30,    31,    32,    33,    34,    35,     0,
      36,     0,     0,  -222,    37,     0,    39,  -115,   -96,     0,
       0,    40,     0,    41,    42,    43,    44,    45,    46,     0,
      47,     0,   -96,    48,  -222,     0,     0,    49,    50,     0,
       0,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,     0,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    57,     0,    58,     0,    59,    60,     0,
      61,     0,     0,    62,     0,     0,    63,     0,    64,     4,
      65,     5,     6,     7,     8,     9,     0,     0,    10,    11,
      12,     0,   -96,    13,    14,    15,  -222,    16,    17,     0,
      18,    19,     0,    20,    21,    22,    23,    24,   659,     0,
      26,    27,     0,  -115,    28,    29,    30,    31,    32,    33,
      34,    35,     0,    36,     0,     0,  -222,    37,     0,    39,
    -115,   -96,     0,     0,    40,     0,    41,    42,    43,    44,
      45,    46,     0,    47,     0,   -96,    48,  -222,     0,     0,
      49,    50,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,     0,     0,     0,     0,    56,     0,     0,
       0,     0,     0,     0,     0,     0,    57,     0,    58,     0,
      59,    60,     0,    61,     0,     0,    62,     0,     0,    63,
       0,    64,     4,    65,     5,     6,     7,     8,     9,     0,
       0,    10,    11,    12,     0,   -96,    13,    14,    15,  -222,
      16,    17,     0,    18,    19,     0,    20,    21,    22,    23,
      24,   662,     0,    26,    27,     0,  -115,    28,    29,    30,
      31,    32,    33,    34,    35,     0,    36,     0,     0,  -222,
      37,     0,    39,  -115,   -96,     0,     0,    40,     0,    41,
      42,    43,    44,    45,    46,     0,    47,     0,   -96,    48,
    -222,     0,     0,    49,    50,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,    57,
       0,    58,     0,    59,    60,     0,    61,     0,     0,    62,
       0,     0,    63,     0,    64,   455,    65,     5,     6,     7,
       8,     9,     0,  -364,   118,     0,     0,  -364,     0,     0,
       0,     0,     0,     0,     0,  -364,     0,    19,     0,     0,
       0,     0,   119,   120,   121,     0,    26,     0,     0,     0,
       0,    29,    30,     0,    32,     0,    34,    35,     0,     0,
       0,     0,     0,    37,     0,    39,     0,     0,  -364,     0,
       0,  -364,     0,     0,    43,    44,    45,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -240,
    -364,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -364,    53,  -364,  -364,  -364,
       0,  -364,  -364,  -364,     0,  -364,  -364,  -364,  -364,  -364,
    -364,  -364,  -364,  -364,    58,  -364,  -364,  -364,     0,     0,
    -364,  -364,  -364,     0,     0,   123,     0,    64,   455,   469,
       5,     6,     7,     8,     9,     0,  -364,   118,     0,     0,
    -364,     0,     0,     0,     0,     0,     0,     0,  -364,     0,
      19,     0,     0,     0,     0,   119,   120,   121,     0,    26,
       0,     0,     0,     0,    29,    30,     0,    32,     0,    34,
      35,     0,     0,     0,     0,     0,    37,     0,    39,     0,
       0,  -364,     0,     0,  -364,     0,     0,    43,    44,    45,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -364,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -364,    53,
    -364,  -364,  -364,     0,  -364,  -364,  -364,     0,  -364,  -364,
    -364,  -364,  -364,  -364,  -364,  -364,  -364,    58,  -364,  -364,
    -364,     0,     0,  -364,  -364,  -364,     0,     0,   123,     0,
      64,   455,   469,     5,     6,     7,     8,     9,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    19,     0,     0,     0,     0,   119,   120,
     121,     0,    26,     0,     0,     0,     0,    29,    30,     0,
      32,     0,    34,    35,     0,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,   455,     0,
       5,     6,     7,     8,     9,     0,     0,   118,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    56,
      19,     0,     0,     0,     0,   119,   120,   121,    57,    26,
      58,     0,    59,    60,    29,    30,     0,    32,    62,    34,
      35,   123,     0,    64,     0,   456,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   118,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,    56,    19,     0,     0,
       0,     0,   119,   120,   121,    57,    26,    58,     0,    59,
      60,    29,    30,     0,    32,    62,    34,    35,   123,     0,
      64,     0,   469,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,    56,     0,     0,     5,     6,     7,     8,
       9,     0,    57,   118,    58,     0,    59,    60,   179,     0,
       0,     0,    62,     0,     0,   123,    19,    64,     0,   124,
     727,   119,   120,   121,     0,    26,     0,     0,     0,     0,
      29,    30,     0,    32,     0,    34,    35,     0,     0,     0,
       0,     0,    37,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,   122,     0,     0,   194,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,     0,    56,   195,     0,     5,     6,     7,     8,     9,
       0,    57,   118,    58,     0,    59,    60,   179,     0,     0,
       0,    62,     0,     0,   123,    19,    64,     0,   124,     0,
     119,   120,   121,     0,    26,     0,     0,     0,     0,    29,
      30,     0,    32,     0,    34,    35,     0,     0,     0,     0,
       0,    37,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,    45,   122,     0,     0,   194,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,     0,     5,     6,     7,     8,     9,     0,
      57,   118,    58,     0,    59,    60,   179,     0,     0,     0,
      62,     0,     0,   123,    19,    64,   476,   124,     0,   119,
     120,   121,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,   144,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   145,     0,    51,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   118,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
      56,    19,     0,     0,     0,     0,   119,   120,   121,    57,
      26,    58,     0,    59,    60,    29,    30,     0,    32,    62,
      34,    35,   123,     0,    64,     0,   124,    37,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,   122,     0,     0,   194,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    52,
      53,    54,    55,     0,     0,     0,     0,    56,     0,     0,
       5,     6,     7,     8,     9,     0,    57,   118,    58,     0,
      59,    60,   179,     0,     0,     0,    62,     0,     0,   123,
      19,    64,     0,   124,     0,   119,   120,   121,     0,    26,
       0,     0,     0,     0,    29,    30,     0,    32,     0,    34,
      35,     0,     0,     0,     0,     0,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,    56,     0,     0,     0,
       0,     0,     0,     0,     0,    57,     0,    58,     0,    59,
      60,     0,   164,     0,     0,    62,     0,     0,   123,     0,
      64,     0,   124,     5,     6,     7,     8,     9,     0,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   167,    19,     0,     0,     0,     0,   119,   120,
     121,     0,    26,     0,     0,     0,     0,    29,    30,     0,
      32,     0,    34,    35,     0,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,   118,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    56,
      19,     0,     0,     0,     0,   119,   120,   121,    57,    26,
      58,     0,    59,    60,    29,    30,     0,    32,    62,    34,
      35,    63,     0,    64,     0,   124,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,    56,     0,     0,     5,
       6,     7,     8,     9,     0,    57,   118,    58,     0,    59,
      60,   179,     0,     0,     0,    62,     0,     0,   123,    19,
      64,     0,   124,     0,   119,   120,   121,     0,    26,     0,
       0,     0,     0,    29,    30,     0,    32,     0,    34,    35,
       0,     0,     0,     0,     0,    37,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,    45,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,     0,    56,     0,     0,     5,     6,
       7,     8,     9,     0,    57,   118,    58,     0,    59,    60,
       0,     0,     0,     0,    62,     0,     0,   123,    19,    64,
       0,   124,     0,   119,   120,   121,     0,    26,     0,     0,
       0,     0,    29,    30,     0,    32,     0,    34,    35,   565,
       0,     0,     0,     0,    37,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   118,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,     0,    56,   688,     0,     0,     0,     0,
     119,   120,   121,    57,    26,    58,     0,    59,    60,    29,
      30,     0,    32,    62,    34,    35,   123,     0,    64,     0,
     124,    37,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,   689,    44,    45,   690,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    52,    53,    54,    55,     0,     0,     0,
       0,    56,     0,     0,     5,     6,     7,     8,     9,     0,
      57,   118,    58,     0,    59,    60,   179,     0,     0,     0,
      62,     0,     0,   123,    19,    64,     0,   691,     0,   119,
     120,   121,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,     0,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
      56,     0,     0,     5,     6,     7,     8,     9,     0,    57,
     118,    58,     0,    59,    60,   179,     0,     0,     0,    62,
       0,     0,   123,    19,    64,     0,   691,     0,   119,   120,
     680,     0,    26,     0,     0,     0,     0,    29,    30,     0,
      32,     0,    34,    35,     0,     0,     0,     0,     0,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    56,
       0,     0,     5,     6,     7,     8,     9,     0,    57,   118,
      58,     0,    59,    60,   179,     0,     0,     0,    62,     0,
       0,   123,    19,    64,     0,   124,     0,   119,   120,   121,
       0,    26,     0,     0,     0,     0,    29,    30,     0,    32,
       0,    34,    35,     0,     0,     0,     0,     0,    37,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,    45,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    51,     0,     0,     0,     5,
       6,     7,     8,     9,     0,     0,   118,     0,     0,     0,
      52,    53,    54,    55,     0,     0,     0,     0,    56,    19,
       0,     0,     0,     0,   119,   120,   515,    57,    26,    58,
       0,    59,    60,    29,    30,     0,    32,    62,    34,    35,
     123,     0,    64,     0,   124,    37,     0,    39,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,    45,   122,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     5,     6,     7,     8,
       9,     0,     0,   118,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,     0,    56,    19,     0,     0,     0,
       0,   119,   120,   518,    57,    26,    58,     0,    59,    60,
      29,    30,     0,    32,    62,    34,    35,   123,     0,    64,
       0,   124,    37,     0,    39,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
     118,     0,     0,     0,    52,    53,    54,    55,     0,     0,
       0,     0,    56,    19,     0,     0,     0,     0,   119,   120,
     674,    57,    26,    58,     0,    59,    60,    29,    30,     0,
      32,    62,    34,    35,   123,     0,    64,     0,   124,    37,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,    45,   122,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,     0,     0,
       5,     6,     7,     8,     9,     0,     0,   118,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    56,
      19,     0,     0,     0,     0,   119,   120,   675,    57,    26,
      58,     0,    59,    60,    29,    30,     0,    32,    62,    34,
      35,   123,     0,    64,     0,   124,    37,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,    45,
     122,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,     0,     0,     5,     6,     7,
       8,     9,     0,     0,   118,     0,     0,     0,    52,    53,
      54,    55,     0,     0,     0,     0,    56,    19,     0,     0,
       0,     0,   119,   120,   677,    57,    26,    58,     0,    59,
      60,    29,    30,     0,    32,    62,    34,    35,   123,     0,
      64,     0,   124,    37,     0,    39,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,    45,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      51,     0,     0,     0,     5,     6,     7,     8,     9,     0,
       0,   118,     0,     0,     0,    52,    53,    54,    55,     0,
       0,     0,     0,    56,    19,     0,     0,     0,     0,   119,
     120,   678,    57,    26,    58,     0,    59,    60,    29,    30,
       0,    32,    62,    34,    35,   123,     0,    64,     0,   124,
      37,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,    45,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     5,     6,     7,     8,     9,     0,     0,   118,     0,
       0,     0,    52,    53,    54,    55,     0,     0,     0,     0,
      56,    19,     0,     0,     0,     0,   119,   120,   679,    57,
      26,    58,     0,    59,    60,    29,    30,     0,    32,    62,
      34,    35,   123,     0,    64,     0,   124,    37,     0,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     5,     6,
       7,     8,     9,     0,     0,   118,     0,     0,     0,    52,
      53,    54,    55,     0,     0,     0,     0,    56,    19,     0,
       0,     0,     0,   119,   120,   680,    57,    26,    58,     0,
      59,    60,    29,    30,     0,    32,    62,    34,    35,   123,
       0,    64,     0,   124,    37,     0,    39,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,    45,   122,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,     0,     5,     6,     7,     8,     9,
       0,     0,   118,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,     0,    56,    19,     0,     0,     0,     0,
     119,   120,   121,    57,    26,    58,     0,    59,    60,    29,
      30,     0,    32,    62,    34,    35,   123,     0,    64,     0,
     124,    37,     0,    39,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,    45,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -249,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,  -249,     0,
       0,     0,  -249,     0,     5,     6,     7,     8,     9,     0,
       0,   118,    58,     0,     0,     0,   179,     0,   220,     0,
       0,     0,     0,   123,    19,    64,  -249,   691,     0,   119,
     120,   121,     0,    26,     0,     0,     0,     0,    29,    30,
       0,    32,     0,    34,    35,     0,     0,     0,     0,     0,
      37,   221,    39,     0,   222,     0,     0,     0,     0,     5,
       0,    43,    44,    45,   122,   581,     0,     0,     0,   582,
       0,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     225,   226,   227,    53,   228,   229,   230,     0,   231,   232,
     233,   234,     0,   236,   237,   238,   239,     0,   240,   241,
     242,    58,     0,   243,   244,   245,     0,     0,   220,     0,
       0,     0,     0,     0,    64,     0,   124,     0,     0,     0,
       0,     0,     0,   583,   584,   585,   586,   587,   588,     0,
       0,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     598,   221,     0,   599,   222,     0,     0,   600,   601,   602,
     603,   604,   605,   606,   607,   608,   609,   610,     0,   611,
       0,     0,   612,   613,   614,   615,   616,   218,     0,     0,
       0,   219,     0,     0,     0,     0,     0,     0,   224,   220,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,     0,   236,   237,   238,   239,     0,   240,     0,
     242,     0,     0,   243,   244,   245,     0,     0,     0,     0,
       0,     0,   221,     0,     0,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,     0,
     222,     0,     0,     0,   629,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,     0,   222,     0,     0,     0,   736,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,     0,
     222,     0,     0,     0,   771,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
     291,     0,     0,     0,   224,     0,   225,   226,   227,   292,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,     0,   222,     0,   475,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,   294,     0,     0,     0,   224,
       0,   225,   226,   227,   295,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,   297,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,   167,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
     538,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,   543,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,   640,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,   722,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,   723,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,   724,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,   725,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,   737,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   268,
     222,     0,     0,     0,     0,     0,     0,   738,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   218,     0,   223,
       0,   219,     0,     0,     0,     0,     0,     0,     0,   220,
       0,     0,     0,     0,   224,     0,   225,   226,   227,     0,
     228,   229,   230,     0,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,   221,     0,   268,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,   223,     0,   219,     0,     0,     0,
       0,     0,     0,     0,   220,     0,     0,     0,     0,   224,
       0,   225,   226,   227,     0,   228,   229,   230,     0,   231,
     232,   233,   234,   235,   236,   237,   238,   239,     0,   240,
     241,   242,     0,     0,   243,   244,   245,   221,     0,   317,
     222,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   223,
       0,   218,     0,     0,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,   224,     0,   225,   226,   227,     0,
     228,   229,   230,   274,   231,   232,   233,   234,   235,   236,
     237,   238,   239,     0,   240,   241,   242,     0,     0,   243,
     244,   245,     0,  -327,     0,     0,   221,   113,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,   407,
       0,     0,     0,   224,     0,   225,   226,   227,   408,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,   409,     0,     0,     0,   224,     0,
     225,   226,   227,   410,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   278,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   316,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   330,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   341,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   496,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   497,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   498,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   499,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   500,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   501,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   502,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   503,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   504,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   505,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   506,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   507,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   508,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,   509,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   510,   243,   244,
     245,   221,   113,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,   546,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,   525,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,   577,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,   624,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,   627,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,   673,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,   676,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,   744,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,   745,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,   746,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,   747,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,   748,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   218,     0,   223,     0,   219,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,     0,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,   749,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   218,     0,   223,     0,
     219,     0,     0,     0,     0,     0,     0,     0,   220,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,   235,   236,   237,
     238,   239,     0,   240,   241,   242,     0,     0,   243,   244,
     245,   221,     0,     0,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   220,     0,     0,     0,     0,   224,     0,
     225,   226,   227,     0,   228,   229,   230,     0,   231,   232,
     233,   234,   235,   236,   237,   238,   239,     0,   240,   241,
     242,   220,     0,   243,   244,   245,   221,     0,     0,   222,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   223,     0,
       0,     0,     0,     0,   221,     0,     0,   222,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,     0,   228,
     229,   230,     0,   231,   232,   233,   234,     0,   236,   237,
     238,   239,     0,   240,     0,   242,     0,     0,   243,   244,
     245,   224,     0,   225,   226,   227,     0,   228,   229,   230,
       0,     0,   232,   233,   234,     0,   236,   237,   238,   239,
       0,     0,     0,   242,     0,     0,   243,   244,   245
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-666))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      10,     2,   134,   323,    14,    13,   150,    17,   304,   562,
     142,     3,     3,    23,    24,    25,     3,    48,    31,   163,
      22,     1,    32,    56,    34,    22,    36,    37,    46,   173,
      40,    41,    42,    43,    65,     1,    46,   309,    48,    49,
      50,    56,   454,    53,    22,    14,    56,    57,    58,    22,
      60,   323,    70,    63,    64,    65,    31,    46,     3,    96,
     666,     3,   727,    35,   619,   146,   147,   148,    31,    31,
      64,    96,    54,    96,    66,    57,    56,    31,    23,   160,
      52,    70,    31,    96,    53,    31,   699,   124,   121,   170,
      56,    71,    55,   124,    96,    23,   761,   650,    67,   122,
     115,   126,   183,   709,   122,    71,   121,    77,   118,   119,
     120,   121,   122,   123,   124,    95,    58,   261,   262,   121,
      65,    96,   130,   123,   121,   125,     0,   740,   138,    95,
     100,   123,   123,   122,    96,   115,   123,     3,    55,     3,
     150,   121,    96,   121,   138,   176,   558,    96,   121,     3,
      96,   126,    18,   163,    18,   121,   150,   453,   713,   714,
      96,    65,    96,   173,   126,    31,   176,    96,    34,   163,
      96,    35,   126,   726,    96,    96,   320,   126,    96,   173,
     126,    47,    48,   761,    48,   195,   122,    96,    52,    55,
     124,   192,   123,   771,   275,   124,   123,   115,   124,    65,
      96,    65,   124,   124,     7,    69,   115,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   115,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   667,   552,   123,   289,    96,
      18,    18,   115,    96,   274,   123,     1,   261,   262,   279,
     123,     1,   125,    96,    62,   123,    77,   125,   115,   289,
     123,   291,   292,   115,   294,   295,   115,   297,   121,   561,
      48,    48,   115,   221,   222,    96,    31,    95,    48,   100,
      98,    31,   312,   115,   102,    55,   120,    65,     2,   115,
     320,    69,    69,   213,   214,   215,    10,   327,   123,    75,
     125,    77,   115,   124,    18,   335,   320,   337,   115,   339,
     340,   341,   342,   327,   654,   263,   264,    31,   658,   115,
     472,   335,    77,   337,   123,    75,   274,    77,   115,    77,
     431,   432,    46,   121,   435,   436,    21,    72,   121,   123,
      95,    96,   115,   123,   292,    95,    96,   295,    96,    63,
      77,    98,   100,    67,   335,   123,   337,   649,   115,     7,
     115,   121,   654,   115,    96,   115,   658,    31,    21,    54,
     124,   115,    57,    24,    96,   124,   124,   407,   408,   409,
     410,   411,   412,   413,   124,    75,   414,   415,    77,   419,
     420,   339,   422,   124,   124,    96,    95,   427,   124,   429,
     114,    54,   126,   433,    57,   456,   420,    77,   422,    24,
      95,   124,    97,    98,   124,   126,   121,   102,   469,    22,
      22,    95,   523,   524,   109,    96,   456,   123,   126,   459,
     460,    98,   533,   118,   485,   727,   124,   151,    71,   469,
     347,     3,    95,   666,   736,    98,     8,    21,    16,   102,
     468,   531,   669,   167,   669,   485,    18,   670,   550,   580,
     408,   740,   410,   726,   711,   313,    17,    18,   687,   761,
     422,   492,    -1,    35,    25,    26,    27,    -1,   192,   771,
      54,    -1,    33,    57,    35,   515,    48,    -1,   518,    -1,
      52,    -1,    -1,    21,    31,    -1,    -1,    48,    -1,    50,
     530,    52,    -1,    65,    -1,    -1,   536,    69,   538,    -1,
      -1,   541,    -1,   543,    65,    -1,   546,   568,    69,    56,
      -1,    95,    -1,    97,    98,    -1,    54,    -1,   102,    57,
      -1,    -1,    -1,    -1,    71,   109,    -1,    -1,   568,    -1,
      77,    -1,   116,   117,   118,   575,   576,   577,    -1,    -1,
      -1,   265,    -1,    -1,   268,   656,    -1,    -1,    -1,    96,
      -1,    -1,    -1,    91,   115,    93,    94,    95,    -1,    97,
      98,   122,    -1,    -1,   102,    -1,    -1,   291,   115,    -1,
     294,   109,    -1,   297,   121,    -1,    -1,    -1,   116,   117,
     118,    -1,    -1,   623,   624,    -1,   626,   627,   628,   629,
      -1,    21,    -1,    -1,    -1,   635,   636,    -1,   638,    -1,
     640,   641,    -1,   643,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     2,   653,   654,    -1,   340,    -1,   658,   659,
      10,    -1,   662,   347,    54,   649,    -1,    57,    18,    31,
     691,    -1,    -1,   673,   674,   675,   676,   677,   678,   679,
     680,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   689,
     690,   691,    -1,    -1,    56,   695,    46,    -1,   698,    -1,
      -1,    91,    -1,    -1,    94,    95,    -1,    97,    98,    71,
      -1,   695,   102,    63,    -1,    77,    31,    67,    -1,   109,
      -1,    -1,   722,   723,   724,   725,   116,   117,   118,    -1,
      -1,    -1,    -1,    -1,    96,    -1,   736,   737,   738,    -1,
      -1,    56,    -1,   727,   744,   745,   746,   747,   748,   749,
      -1,    -1,    -1,   115,    -1,   439,    71,    -1,    -1,   121,
     760,   761,    77,    -1,   114,    -1,    -1,     2,    -1,    -1,
      -1,   771,    -1,    -1,    -1,    10,    -1,   761,     2,    -1,
      -1,    96,    -1,    18,    -1,    -1,    10,   771,    -1,    18,
      -1,    -1,    -1,    -1,    18,    -1,    31,    -1,    -1,    -1,
     115,   151,    31,    -1,    -1,    34,   121,    31,   492,    -1,
      -1,    46,    -1,    -1,    -1,    17,    18,   167,    47,    48,
      -1,    -1,    46,    25,    26,    27,    55,    -1,    63,   513,
      -1,    33,    67,    35,    -1,    -1,    65,    -1,    -1,    63,
      -1,    -1,   192,    67,    -1,    -1,    48,    -1,    50,    -1,
      52,    -1,   536,    -1,   538,    -1,    -1,   541,     2,   543,
      -1,   545,    -1,    65,    -1,    -1,    10,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,    21,   114,
      -1,    -1,    -1,   567,    -1,    -1,    -1,    31,    -1,    -1,
     114,   575,   576,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    54,    -1,   115,    57,    -1,   151,    -1,   268,    63,
      -1,    -1,    -1,    67,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,   167,    -1,    -1,    -1,    -1,    -1,    -1,    54,
      -1,   291,    57,   167,   294,    -1,    -1,   297,    91,    -1,
      -1,   635,    95,    -1,    97,    98,   640,   192,    -1,   102,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,   192,    -1,
     114,    -1,    42,   116,   117,   118,    91,    -1,    93,    94,
      95,    -1,    97,    98,     2,    -1,    -1,   102,    -1,    -1,
     340,    -1,    10,   108,   109,    -1,    -1,   347,   113,    -1,
      18,   116,   117,   118,    -1,    -1,    -1,   151,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   167,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,   722,   723,
     724,   725,    -1,    -1,   268,    63,    -1,   117,   192,    67,
      -1,    -1,    -1,   737,   738,    -1,   291,    -1,    -1,   294,
      -1,    -1,   297,    -1,    -1,    -1,    -1,   291,    -1,    -1,
     294,    -1,    -1,   297,    -1,    -1,   146,   147,   148,   149,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   439,
     160,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,    -1,
     170,    -1,    -1,    -1,    -1,   340,    -1,    -1,    -1,    -1,
      -1,    -1,   347,   183,    -1,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    -1,   347,   268,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   151,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,   291,     2,   167,
     294,    -1,    -1,   297,    -1,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   192,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   536,    -1,   538,    -1,
       2,   541,    46,   543,    -1,   545,   340,    -1,    10,    54,
      -1,    -1,    57,   347,   439,   275,    18,    -1,    -1,    63,
      -1,    -1,    -1,    67,    -1,   439,    -1,   567,    -1,    31,
      -1,    -1,    -1,    -1,    -1,   575,   576,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    91,    -1,    93,    94,
      95,    -1,    97,    98,    99,    -1,    -1,   102,    -1,    -1,
     268,    63,    -1,   108,   109,    67,    -1,   492,   113,    -1,
     114,   116,   117,   118,    -1,    -1,    -1,    -1,   492,    -1,
      -1,    -1,    -1,   291,    -1,    -1,   294,    -1,    -1,   297,
      -1,    -1,    -1,    -1,    -1,   635,    -1,    -1,    -1,    -1,
     640,    -1,    -1,    -1,    -1,   439,    -1,   151,    -1,    -1,
      -1,   536,   114,   538,    -1,    -1,   541,    -1,   543,    -1,
     545,    -1,   536,   167,   538,    -1,    -1,   541,    -1,   543,
      -1,   545,   340,    -1,    -1,    -1,    -1,    -1,    -1,   347,
      -1,    -1,   567,    -1,    -1,    -1,    -1,    -1,   192,   151,
     575,   576,    -1,   567,    -1,    -1,    -1,    -1,   492,    -1,
      -1,   575,   576,    -1,    -1,   167,    -1,    -1,    -1,    -1,
      -1,   431,   432,    -1,    -1,   435,   436,    -1,    -1,    -1,
      -1,    -1,   722,   723,   724,   725,    -1,    -1,    -1,    -1,
     192,    -1,    -1,    -1,    -1,    -1,    -1,   737,   738,    -1,
      -1,    -1,   536,    -1,   538,    -1,    -1,   541,    -1,   543,
     635,   545,    -1,    -1,    -1,   640,    -1,    -1,    -1,    -1,
      -1,   635,    -1,    -1,   268,    -1,   640,    -1,    -1,    -1,
      -1,   439,    -1,   567,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   575,   576,    -1,    -1,    -1,    -1,   291,    -1,    -1,
     294,    -1,    -1,   297,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   523,   524,    -1,   268,    -1,    -1,    -1,
      -1,    -1,    -1,   533,    -1,   535,    -1,    -1,    -1,    -1,
     540,    -1,    -1,    -1,   492,    -1,    -1,    -1,    -1,   291,
      -1,    -1,   294,    -1,    -1,   297,   340,   722,   723,   724,
     725,   635,    -1,   347,    -1,    -1,   640,    -1,   722,   723,
     724,   725,   737,   738,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   737,   738,    -1,    -1,    -1,   536,    -1,
     538,    -1,    -1,   541,    -1,   543,    -1,   545,   340,    -1,
      -1,    -1,    -1,    -1,    12,   347,    -1,    -1,    16,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,   567,
      28,    -1,    30,    -1,    -1,    -1,    -1,   575,   576,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   722,   723,
     724,   725,    -1,    -1,    -1,   439,   656,    -1,    -1,    -1,
      -1,    -1,    -1,   737,   738,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,   682,   683,    -1,   685,   686,   635,    -1,    -1,
      -1,    -1,   640,    -1,    -1,    -1,    -1,   439,    -1,   699,
      -1,    -1,    -1,    -1,   704,   705,    -1,    -1,   492,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    -1,    -1,    -1,
     138,    -1,    -1,    -1,   142,    -1,   144,    -1,    -1,    -1,
     740,    -1,   150,    -1,    -1,   153,    -1,    -1,    -1,    -1,
     492,    -1,   536,    -1,   538,   163,    -1,   541,    -1,   543,
      -1,   545,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,
      -1,   179,    -1,    -1,   722,   723,   724,   725,    -1,    -1,
      -1,    -1,    -1,   567,    -1,    -1,    -1,    -1,    -1,   737,
     738,   575,   576,    -1,   536,    -1,   538,    -1,    -1,   541,
     208,   543,     2,   545,    -1,   213,   214,   215,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      -1,   229,    -1,    -1,    -1,   567,    -1,    -1,    -1,    -1,
      -1,    31,    -1,   575,   576,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      -1,   635,    -1,   261,   262,    -1,   640,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   286,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,   635,    -1,    -1,   304,    -1,   640,    -1,
      -1,    -1,    -1,    -1,    -1,   313,    -1,    -1,    -1,    -1,
      -1,    -1,   320,    -1,   114,    -1,    -1,    -1,    -1,    -1,
      -1,   119,   120,    -1,    -1,   123,    -1,   125,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   722,   723,
     724,   725,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   151,    -1,   737,   738,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   167,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     722,   723,   724,   725,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   192,    -1,    -1,   737,   738,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   422,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,    -1,
      -1,    -1,   450,    -1,    49,   453,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,   472,    -1,    -1,    -1,   268,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   490,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,   291,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,    -1,    -1,   113,    -1,
      -1,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,
     125,    -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     340,    -1,    -1,    -1,   552,    -1,    -1,   347,    -1,    -1,
      -1,    -1,    -1,    -1,     0,     1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,   596,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
       9,    67,    68,    69,    13,    -1,    72,    73,    -1,    -1,
      76,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,   439,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   669,   108,    -1,   110,    54,   112,   113,    57,   115,
      -1,    -1,   118,    -1,    -1,   121,    -1,   123,    -1,   125,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,   492,    -1,    -1,    -1,    -1,    -1,   706,   707,
      -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,    98,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    -1,   111,   112,   113,    -1,    -1,   116,   117,   118,
      -1,    -1,    -1,    -1,    -1,    -1,   536,   126,   538,    -1,
      -1,   541,    -1,   543,    -1,   545,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   567,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   575,   576,     1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      54,    -1,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,   115,   116,   117,   118,    -1,    -1,   121,   122,   123,
       1,   125,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    -1,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
      -1,   112,   113,   114,   115,    -1,    -1,   118,    -1,    -1,
     121,   122,   123,     1,   125,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,   121,   122,   123,     1,   125,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,     1,
     125,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,
     112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,
     122,   123,     1,   125,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    -1,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,   122,   123,     1,   125,     3,     4,     5,
       6,     7,    -1,    -1,    10,    11,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    22,    23,    -1,    25,
      26,    27,    28,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    -1,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    61,    62,    63,    -1,    65,
      -1,    67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,
      -1,    -1,   118,    -1,    -1,   121,    -1,   123,     1,   125,
       3,     4,     5,     6,     7,    -1,    -1,    10,    11,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    -1,    25,    26,    27,    28,    29,    30,    -1,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,
      53,    -1,    -1,    56,    -1,    58,    59,    60,    61,    62,
      63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,    -1,
     123,     1,   125,     3,     4,     5,     6,     7,    -1,    -1,
      10,    11,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    -1,    22,    23,    -1,    25,    26,    27,    28,    29,
      30,    -1,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    -1,    -1,    48,    49,
      -1,    51,    52,    53,    -1,    -1,    56,    -1,    58,    59,
      60,    61,    62,    63,    -1,    65,    -1,    67,    68,    69,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,    -1,
      -1,   121,    -1,   123,     1,   125,     3,     4,     5,     6,
       7,    -1,    -1,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    -1,    25,    26,
      27,    28,    29,    30,    -1,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    -1,    45,    -1,
      -1,    48,    49,    -1,    51,    52,    53,    -1,    -1,    56,
      -1,    58,    59,    60,    61,    62,    63,    -1,    65,    -1,
      67,    68,    69,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,
      -1,   118,    -1,    -1,   121,    -1,   123,     1,   125,     3,
       4,     5,     6,     7,    -1,    -1,    10,    11,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    -1,    22,    23,
      -1,    25,    26,    27,    28,    29,    30,    -1,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      -1,    45,    -1,    -1,    48,    49,    -1,    51,    52,    53,
      -1,    -1,    56,    -1,    58,    59,    60,    61,    62,    63,
      -1,    65,    -1,    67,    68,    69,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,
      -1,   115,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,
       1,   125,     3,     4,     5,     6,     7,    -1,    -1,    10,
      11,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      -1,    22,    23,    -1,    25,    26,    27,    28,    29,    30,
      -1,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,
      51,    52,    53,    -1,    -1,    56,    -1,    58,    59,    60,
      61,    62,    63,    -1,    65,    -1,    67,    68,    69,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
      -1,   112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,
     121,    -1,   123,     1,   125,     3,     4,     5,     6,     7,
      -1,    -1,    10,    11,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    22,    23,    -1,    25,    26,    27,
      28,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    -1,    45,    -1,    -1,
      48,    49,    -1,    51,    52,    53,    -1,    -1,    56,    -1,
      58,    59,    60,    61,    62,    63,    -1,    65,    -1,    67,
      68,    69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,
     118,    -1,    -1,   121,    -1,   123,     1,   125,     3,     4,
       5,     6,     7,    -1,    -1,    10,    11,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    -1,
      25,    26,    27,    28,    29,    30,    -1,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    -1,    48,    49,    -1,    51,    52,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    61,    62,    63,    -1,
      65,    -1,    67,    68,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,    -1,   112,   113,    -1,
     115,    -1,    -1,   118,    -1,    -1,   121,    -1,   123,     1,
     125,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      22,    23,    -1,    25,    26,    27,    28,    29,    30,    -1,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    56,    -1,    58,    59,    60,    61,
      62,    63,    -1,    65,    -1,    67,    68,    69,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,
     112,   113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,
      -1,   123,     1,   125,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    22,    23,    -1,    25,    26,    27,    28,
      29,    30,    -1,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    -1,    45,    -1,    -1,    48,
      49,    -1,    51,    52,    53,    -1,    -1,    56,    -1,    58,
      59,    60,    61,    62,    63,    -1,    65,    -1,    67,    68,
      69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,    -1,   112,   113,    -1,   115,    -1,    -1,   118,
      -1,    -1,   121,    -1,   123,     1,   125,     3,     4,     5,
       6,     7,    -1,     9,    10,    -1,    -1,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    -1,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    32,    -1,    -1,    -1,
      -1,    37,    38,    -1,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    54,    -1,
      -1,    57,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    95,
      -1,    97,    98,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     116,   117,   118,    -1,    -1,   121,    -1,   123,     1,   125,
       3,     4,     5,     6,     7,    -1,     9,    10,    -1,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    54,    -1,    -1,    57,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,   116,   117,   118,    -1,    -1,   121,    -1,
     123,     1,   125,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,     1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,   108,    32,
     110,    -1,   112,   113,    37,    38,    -1,    40,   118,    42,
      43,   121,    -1,   123,    -1,   125,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,   108,    32,   110,    -1,   112,
     113,    37,    38,    -1,    40,   118,    42,    43,   121,    -1,
     123,    -1,   125,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    -1,    -1,     3,     4,     5,     6,
       7,    -1,   108,    10,   110,    -1,   112,   113,   114,    -1,
      -1,    -1,   118,    -1,    -1,   121,    23,   123,    -1,   125,
     126,    28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,
      37,    38,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,   100,    -1,     3,     4,     5,     6,     7,
      -1,   108,    10,   110,    -1,   112,   113,   114,    -1,    -1,
      -1,   118,    -1,    -1,   121,    23,   123,    -1,   125,    -1,
      28,    29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,
      38,    -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,     3,     4,     5,     6,     7,    -1,
     108,    10,   110,    -1,   112,   113,   114,    -1,    -1,    -1,
     118,    -1,    -1,   121,    23,   123,   124,   125,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    76,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    23,    -1,    -1,    -1,    -1,    28,    29,    30,   108,
      32,   110,    -1,   112,   113,    37,    38,    -1,    40,   118,
      42,    43,   121,    -1,   123,    -1,   125,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,
       3,     4,     5,     6,     7,    -1,   108,    10,   110,    -1,
     112,   113,   114,    -1,    -1,    -1,   118,    -1,    -1,   121,
      23,   123,    -1,   125,    -1,    28,    29,    30,    -1,    32,
      -1,    -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,    -1,   112,
     113,    -1,   115,    -1,    -1,   118,    -1,    -1,   121,    -1,
     123,    -1,   125,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,   108,    32,
     110,    -1,   112,   113,    37,    38,    -1,    40,   118,    42,
      43,   121,    -1,   123,    -1,   125,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    -1,    -1,     3,
       4,     5,     6,     7,    -1,   108,    10,   110,    -1,   112,
     113,   114,    -1,    -1,    -1,   118,    -1,    -1,   121,    23,
     123,    -1,   125,    -1,    28,    29,    30,    -1,    32,    -1,
      -1,    -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    -1,    -1,     3,     4,
       5,     6,     7,    -1,   108,    10,   110,    -1,   112,   113,
      -1,    -1,    -1,    -1,   118,    -1,    -1,   121,    23,   123,
      -1,   125,    -1,    28,    29,    30,    -1,    32,    -1,    -1,
      -1,    -1,    37,    38,    -1,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,   108,    32,   110,    -1,   112,   113,    37,
      38,    -1,    40,   118,    42,    43,   121,    -1,   123,    -1,
     125,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    99,    -1,    -1,     3,     4,     5,     6,     7,    -1,
     108,    10,   110,    -1,   112,   113,   114,    -1,    -1,    -1,
     118,    -1,    -1,   121,    23,   123,    -1,   125,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    -1,    -1,     3,     4,     5,     6,     7,    -1,   108,
      10,   110,    -1,   112,   113,   114,    -1,    -1,    -1,   118,
      -1,    -1,   121,    23,   123,    -1,   125,    -1,    28,    29,
      30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      -1,    -1,     3,     4,     5,     6,     7,    -1,   108,    10,
     110,    -1,   112,   113,   114,    -1,    -1,    -1,   118,    -1,
      -1,   121,    23,   123,    -1,   125,    -1,    28,    29,    30,
      -1,    32,    -1,    -1,    -1,    -1,    37,    38,    -1,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,   108,    32,   110,
      -1,   112,   113,    37,    38,    -1,    40,   118,    42,    43,
     121,    -1,   123,    -1,   125,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    -1,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    99,    23,    -1,    -1,    -1,
      -1,    28,    29,    30,   108,    32,   110,    -1,   112,   113,
      37,    38,    -1,    40,   118,    42,    43,   121,    -1,   123,
      -1,   125,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      10,    -1,    -1,    -1,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    99,    23,    -1,    -1,    -1,    -1,    28,    29,
      30,   108,    32,   110,    -1,   112,   113,    37,    38,    -1,
      40,   118,    42,    43,   121,    -1,   123,    -1,   125,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,
      -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    99,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,   108,    32,
     110,    -1,   112,   113,    37,    38,    -1,    40,   118,    42,
      43,   121,    -1,   123,    -1,   125,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    -1,    91,    92,
      93,    94,    -1,    -1,    -1,    -1,    99,    23,    -1,    -1,
      -1,    -1,    28,    29,    30,   108,    32,   110,    -1,   112,
     113,    37,    38,    -1,    40,   118,    42,    43,   121,    -1,
     123,    -1,   125,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    -1,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    99,    23,    -1,    -1,    -1,    -1,    28,
      29,    30,   108,    32,   110,    -1,   112,   113,    37,    38,
      -1,    40,   118,    42,    43,   121,    -1,   123,    -1,   125,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    -1,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      99,    23,    -1,    -1,    -1,    -1,    28,    29,    30,   108,
      32,   110,    -1,   112,   113,    37,    38,    -1,    40,   118,
      42,    43,   121,    -1,   123,    -1,   125,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    10,    -1,    -1,    -1,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    99,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,   108,    32,   110,    -1,
     112,   113,    37,    38,    -1,    40,   118,    42,    43,   121,
      -1,   123,    -1,   125,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    10,    -1,    -1,    -1,    91,    92,    93,    94,
      -1,    -1,    -1,    -1,    99,    23,    -1,    -1,    -1,    -1,
      28,    29,    30,   108,    32,   110,    -1,   112,   113,    37,
      38,    -1,    40,   118,    42,    43,   121,    -1,   123,    -1,
     125,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    92,    -1,    -1,    -1,    96,    -1,
      -1,    -1,   100,    -1,     3,     4,     5,     6,     7,    -1,
      -1,    10,   110,    -1,    -1,    -1,   114,    -1,    21,    -1,
      -1,    -1,    -1,   121,    23,   123,   124,   125,    -1,    28,
      29,    30,    -1,    32,    -1,    -1,    -1,    -1,    37,    38,
      -1,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    54,    51,    -1,    57,    -1,    -1,    -1,    -1,     3,
      -1,    60,    61,    62,    63,     9,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    92,    97,    98,    99,    -1,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,    -1,   111,   112,
     113,   110,    -1,   116,   117,   118,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,   123,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,    77,    78,    79,    80,    81,    82,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    54,    -1,    97,    57,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    -1,   113,
      -1,    -1,   116,   117,   118,   119,   120,     9,    -1,    -1,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    91,    21,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,    -1,   106,   107,   108,   109,    -1,   111,    -1,
     113,    -1,    -1,   116,   117,   118,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,
      57,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,    -1,    57,    -1,    -1,    -1,   126,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,
      57,    -1,    -1,    -1,   126,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    31,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,    -1,    57,    -1,   124,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    31,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,
      -1,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    54,    -1,   121,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,
      -1,    93,    94,    95,    -1,    97,    98,    99,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,    -1,   111,
     112,   113,    -1,    -1,   116,   117,   118,    54,    -1,   121,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,     9,    -1,    -1,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    91,    -1,    93,    94,    95,    -1,
      97,    98,    99,    31,   101,   102,   103,   104,   105,   106,
     107,   108,   109,    -1,   111,   112,   113,    -1,    -1,   116,
     117,   118,    -1,   120,    -1,    -1,    54,    55,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    31,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    31,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    75,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,   115,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    24,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,   115,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    75,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    76,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    -1,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    76,    -1,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,    -1,   111,   112,   113,    -1,    -1,   116,   117,
     118,    54,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    91,    -1,
      93,    94,    95,    -1,    97,    98,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,    -1,   111,   112,
     113,    21,    -1,   116,   117,   118,    54,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    93,    94,    95,    -1,    97,
      98,    99,    -1,   101,   102,   103,   104,    -1,   106,   107,
     108,   109,    -1,   111,    -1,   113,    -1,    -1,   116,   117,
     118,    91,    -1,    93,    94,    95,    -1,    97,    98,    99,
      -1,    -1,   102,   103,   104,    -1,   106,   107,   108,   109,
      -1,    -1,    -1,   113,    -1,    -1,   116,   117,   118
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   131,   132,     0,     1,     3,     4,     5,     6,     7,
      10,    11,    12,    15,    16,    17,    19,    20,    22,    23,
      25,    26,    27,    28,    29,    30,    32,    33,    36,    37,
      38,    39,    40,    41,    42,    43,    45,    49,    50,    51,
      56,    58,    59,    60,    61,    62,    63,    65,    68,    72,
      73,    76,    91,    92,    93,    94,    99,   108,   110,   112,
     113,   115,   118,   121,   123,   125,   133,   135,   136,   137,
     138,   140,   142,   143,   144,   145,   147,   148,   151,   152,
     153,   157,   160,   163,   164,   184,   185,   186,   189,   190,
     208,   209,   210,   211,   212,   213,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   227,   228,   229,   230,
     231,   136,   219,    55,   214,   139,   140,   214,    10,    28,
      29,    30,    63,   121,   125,   160,   208,   212,   217,   218,
     219,   220,   222,   223,    65,   139,   219,   136,   123,   140,
     140,     8,    65,   140,    48,    74,   146,   219,   219,   219,
     123,   140,   161,   123,   140,   191,   192,   136,   219,   219,
     219,   219,     7,   123,   115,   219,   219,    22,   138,   141,
     219,   219,    62,   123,   136,   219,    58,   140,   187,   114,
     180,   202,   219,   219,   219,   219,   219,   219,   219,   219,
     122,   133,   134,   202,    66,   100,   180,   203,   204,   219,
     202,   219,   226,    50,   136,    14,    53,    67,   154,    35,
      52,   176,   140,    18,    48,    69,   115,   120,     9,    13,
      21,    54,    57,    76,    91,    93,    94,    95,    97,    98,
      99,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     111,   112,   113,   116,   117,   118,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
     119,   123,   125,    54,    57,   123,   136,   115,   121,   138,
     219,   219,   219,   202,    31,   214,   187,   115,   115,    72,
     140,   180,   205,   206,   207,   219,   121,   187,   140,   123,
     141,    22,    31,   141,    22,    31,   141,    64,   138,   205,
     136,   123,   171,    66,   123,   140,   193,   194,     1,    95,
     196,   197,    31,    96,   141,   205,   115,   121,   136,   141,
     123,   205,   202,    77,   188,   115,   140,    96,   115,   141,
     115,   122,   133,   122,   219,    96,   124,    96,   124,    31,
     126,    75,    96,   126,     7,   140,   165,   121,   191,   191,
     191,   219,   219,   219,   219,   146,   219,   146,   219,   219,
     219,   219,   219,   219,   219,    23,    65,   140,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   205,
     205,   146,   219,   146,   219,   208,   215,    22,    31,    22,
      31,    64,    31,   126,   146,   219,   141,   115,   219,    75,
      77,   124,    96,   140,   158,   159,   115,    31,   202,    30,
     219,   146,   219,    30,   219,   146,   219,   136,   219,    24,
     124,    18,    31,    34,    47,    48,    55,    65,   172,   173,
     174,   162,   194,    96,   124,     1,   125,   198,   209,    75,
      77,   195,   219,   192,   124,   149,   205,   124,   121,   125,
     198,   209,    96,   180,   219,   124,   124,   203,   203,   146,
     219,   136,   219,   219,   219,    95,   155,    48,    55,   167,
     175,   122,   134,   115,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     115,   124,   126,    96,   124,    30,   146,   219,    30,   146,
     219,   146,   219,   214,   214,   115,   219,   180,   219,   207,
      77,    96,   122,   219,   124,   219,    22,   141,    22,   141,
     219,    22,   141,    22,   141,    24,    24,   136,    31,    55,
      96,   124,   123,   140,    18,    48,    65,    69,   177,   124,
     194,    95,   197,   202,   219,    44,   219,    46,    70,   122,
     150,   124,   149,   202,   187,   126,   126,    75,   202,   121,
     166,     9,    13,    77,    78,    79,    80,    81,    82,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    97,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   113,   116,   117,   118,   119,   120,   140,   168,   169,
     122,   208,   219,    22,    22,   219,    22,    22,   126,   126,
     141,   141,   219,   159,   141,    64,    30,   219,    30,   219,
      64,    30,   219,    30,   219,   136,   219,   173,   194,    95,
     201,   197,   195,    31,   126,   136,   202,   122,   126,    30,
     136,   219,    30,   136,   219,   219,   156,   177,   140,    98,
     123,   170,   170,    64,    30,    30,    64,    30,    30,    30,
      30,   219,   219,   219,   219,   219,   219,   124,    23,    60,
      63,   125,   180,   200,   209,   100,   182,   195,    71,   183,
     219,   198,   209,   141,   219,   219,    27,    65,   122,   135,
     143,   197,   140,   168,   169,   172,   219,   219,   219,   219,
     219,   219,    64,    64,    64,    64,   201,   126,   202,   180,
     181,   219,   219,   138,   142,   179,   126,    64,    64,   143,
     183,   170,   170,   124,    64,    64,    64,    64,    64,    64,
     219,   219,   219,   219,   182,   195,   180,   199,   200,   209,
      31,   126,   209,   219,   219,   115,   178,   179,   219,   199,
     200,   126,   199
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1806 of yacc.c  */
#line 190 "chapel.ypp"
    { (void)(yylsp[(1) - (1)]).first_line; yyblock = (yyval.pblockstmt); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 195 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); resetTempID(); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 196 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); resetTempID(); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 202 "chapel.ypp"
    { (yyval.pblockstmt) = buildPragmaStmt( (yyvsp[(1) - (2)].vpch), (yyvsp[(2) - (2)].pblockstmt) ); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 207 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); (yyval.pblockstmt)->insertAtTail((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 208 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 213 "chapel.ypp"
    { (yyval.vpch) = new Vec<const char*>(); (yyval.vpch)->add(astr((yyvsp[(2) - (2)].pch))); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 214 "chapel.ypp"
    { (yyvsp[(1) - (3)].vpch)->add(astr((yyvsp[(3) - (3)].pch))); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 228 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 229 "chapel.ypp"
    { (yyval.pblockstmt) = buildAtomicStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 230 "chapel.ypp"
    { (yyval.pblockstmt) = buildBeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 231 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_BREAK, (yyvsp[(2) - (3)].pch)); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 232 "chapel.ypp"
    { (yyval.pblockstmt) = buildCobeginStmt((yyvsp[(2) - (3)].pcallexpr), (yyvsp[(3) - (3)].pblockstmt));  }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 233 "chapel.ypp"
    { (yyval.pblockstmt) = buildGotoStmt(GOTO_CONTINUE, (yyvsp[(2) - (3)].pch)); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 234 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_DELETE, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 235 "chapel.ypp"
    { (yyval.pblockstmt) = buildLabelStmt((yyvsp[(2) - (3)].pch), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 236 "chapel.ypp"
    { (yyval.pblockstmt) = buildLocalStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 237 "chapel.ypp"
    { (yyval.pblockstmt) = buildOnStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 238 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 239 "chapel.ypp"
    { (yyval.pblockstmt) = buildSerialStmt(new SymExpr(gTrue), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 240 "chapel.ypp"
    { (yyval.pblockstmt) = buildSyncStmt((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 241 "chapel.ypp"
    { (yyval.pblockstmt) = buildUseStmt((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 242 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_YIELD, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 243 "chapel.ypp"
    { printf("syntax error"); clean_exit(1); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 247 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "="); }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 248 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "+="); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 249 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "-="); }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 250 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "*="); }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 251 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "/="); }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 252 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "%="); }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 253 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "**="); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 254 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "&="); }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 255 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "|="); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 256 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "^="); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 257 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), ">>="); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 258 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<<="); }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 259 "chapel.ypp"
    { (yyval.pblockstmt) = buildAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr), "<=>"); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 260 "chapel.ypp"
    { (yyval.pblockstmt) = buildLAndAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 261 "chapel.ypp"
    { (yyval.pblockstmt) = buildLOrAssignment((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 273 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 274 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 278 "chapel.ypp"
    { (yyval.pch) = NULL; }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 283 "chapel.ypp"
    { (yyval.pch) = astr(yytext); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 287 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (2)].pblockstmt); }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 288 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(1) - (1)].pblockstmt); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 292 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, new SymExpr(gVoid)); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 293 "chapel.ypp"
    { (yyval.pblockstmt) = buildPrimitiveStmt(PRIM_RETURN, (yyvsp[(2) - (3)].pexpr)); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 297 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new BlockStmt()); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 307 "chapel.ypp"
    {
#ifdef HAVE_LLVM
      if (externC) {
        (yyval.pblockstmt) = buildExternBlockStmt(astr((yyvsp[(2) - (2)].pch)));
      } else {
        USR_FATAL(new BlockStmt(), "extern block syntax is turned off. Use --extern-c flag to turn on.");
      }
#else
      USR_FATAL(new BlockStmt(), "Chapel must be built with llvm in order to use the extern block syntax");
#endif
    }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 321 "chapel.ypp"
    { (yyval.pblockstmt) = buildDoWhileLoopStmt((yyvsp[(4) - (5)].pexpr), (yyvsp[(2) - (5)].pblockstmt)); }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 322 "chapel.ypp"
    { (yyval.pblockstmt) = buildWhileDoLoopStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 323 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 324 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(5) - (6)].pcallexpr), (yyvsp[(6) - (6)].pblockstmt), true); }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 325 "chapel.ypp"
    { (yyval.pblockstmt) = buildCoforallLoopStmt(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 326 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 327 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), false, true); }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 328 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 329 "chapel.ypp"
    { (yyval.pblockstmt) = buildForLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt), false, true); }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 330 "chapel.ypp"
    { (yyval.pblockstmt) = buildParamForLoopStmt((yyvsp[(3) - (6)].pch), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 331 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 332 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pblockstmt), true); }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 333 "chapel.ypp"
    { (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 335 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), new BlockStmt((yyvsp[(6) - (6)].pblockstmt)));
    }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 341 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pblockstmt) = buildForallLoopStmt((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), new BlockStmt((yyvsp[(6) - (6)].pblockstmt)), true);
    }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 347 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
      else
        (yyval.pblockstmt) = buildForallLoopStmt(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), new BlockStmt((yyvsp[(4) - (4)].pblockstmt)));
    }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 356 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_tuple", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 360 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pblockstmt)); }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 361 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (3)].pexpr), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 362 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pblockstmt), (yyvsp[(6) - (6)].pblockstmt)); }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 363 "chapel.ypp"
    { (yyval.pblockstmt) = buildIfStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(3) - (5)].pblockstmt), (yyvsp[(5) - (5)].pblockstmt)); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 368 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildSelectStmt((yyvsp[(2) - (5)].pexpr), (yyvsp[(4) - (5)].pblockstmt))); }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 372 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(); }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 373 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pexpr)); }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 378 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN, (yyvsp[(2) - (3)].pcallexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 380 "chapel.ypp"
    { (yyval.pexpr) = new CondStmt(new CallExpr(PRIM_WHEN), (yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 385 "chapel.ypp"
    { (yyval.pblockstmt) = buildTypeSelectStmt((yyvsp[(3) - (6)].pcallexpr), (yyvsp[(5) - (6)].pblockstmt)); }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 392 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(buildClassDefExpr((yyvsp[(3) - (7)].pch), (yyvsp[(2) - (7)].ptype), (yyvsp[(4) - (7)].pcallexpr), (yyvsp[(6) - (7)].pblockstmt), (yyvsp[(1) - (7)].flag), (yylsp[(1) - (7)]).comment));
      yylloc.comment = NULL; }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 397 "chapel.ypp"
    { (yyval.flag) = FLAG_UNKNOWN; }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 398 "chapel.ypp"
    { (yyval.flag) = FLAG_EXTERN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 402 "chapel.ypp"
    { (yyval.ptype) = new AggregateType(AGGREGATE_CLASS); (yyloc).comment = yylloc.comment; 
             yylloc.comment = NULL;}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 404 "chapel.ypp"
    { (yyval.ptype) = new AggregateType(AGGREGATE_RECORD); (yyloc).comment = yylloc.comment; 
             yylloc.comment = NULL;}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 406 "chapel.ypp"
    { (yyval.ptype) = new AggregateType(AGGREGATE_UNION); (yyloc).comment = yylloc.comment;
             yylloc.comment = NULL;}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 411 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 412 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 417 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt(); }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 419 "chapel.ypp"
    { (yyvsp[(1) - (2)].pblockstmt)->insertAtTail((yyvsp[(2) - (2)].pblockstmt)); }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 421 "chapel.ypp"
    { (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(buildPragmaStmt((yyvsp[(2) - (3)].vpch), (yyvsp[(3) - (3)].pblockstmt))); }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 426 "chapel.ypp"
    {
      EnumType* pdt = (yyvsp[(4) - (5)].penumtype);
      TypeSymbol* pst = new TypeSymbol((yyvsp[(2) - (5)].pch), pdt);
      (yyvsp[(4) - (5)].penumtype)->symbol = pst;
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(pst));
    }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 436 "chapel.ypp"
    {
      (yyval.penumtype) = new EnumType();
      (yyvsp[(1) - (1)].pdefexpr)->sym->type = (yyval.penumtype);
      (yyval.penumtype)->constants.insertAtTail((yyvsp[(1) - (1)].pdefexpr));
      (yyval.penumtype)->defaultValue = (yyvsp[(1) - (1)].pdefexpr)->sym;
    }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 443 "chapel.ypp"
    {
      (yyval.penumtype) = (yyvsp[(1) - (2)].penumtype);
    }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 447 "chapel.ypp"
    {
      (yyvsp[(1) - (3)].penumtype)->constants.insertAtTail((yyvsp[(3) - (3)].pdefexpr));
      (yyvsp[(3) - (3)].pdefexpr)->sym->type = (yyvsp[(1) - (3)].penumtype);
    }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 454 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 455 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new EnumSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 460 "chapel.ypp"
    {
      captureTokens = 1;
      captureString[0] = '\0';
    }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 465 "chapel.ypp"
    {
      captureTokens = 0;
      (yyvsp[(3) - (3)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 470 "chapel.ypp"
    {
      (yyvsp[(3) - (8)].pfnsymbol)->retTag = (yyvsp[(5) - (8)].retTag);
      if ((yyvsp[(5) - (8)].retTag) == RET_VAR)
        USR_FATAL("'var' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_PARAM)
        USR_FATAL("'param' return types are not allowed in lambdas");
      if ((yyvsp[(5) - (8)].retTag) == RET_TYPE)
        USR_FATAL("'type' return types are not allowed in lambdas");
      if ((yyvsp[(6) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->retExprType = new BlockStmt((yyvsp[(6) - (8)].pexpr), BLOCK_SCOPELESS);
      if ((yyvsp[(7) - (8)].pexpr))
        (yyvsp[(3) - (8)].pfnsymbol)->where = new BlockStmt((yyvsp[(7) - (8)].pexpr));
      (yyvsp[(3) - (8)].pfnsymbol)->insertAtTail((yyvsp[(8) - (8)].pblockstmt));
      (yyval.pexpr) = new DefExpr(buildLambda((yyvsp[(3) - (8)].pfnsymbol)));
    }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 490 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 491 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_INLINE); 
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 493 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);  
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 496 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch)); (yyval.pfnsymbol)->addFlag(FLAG_EXPORT);  
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 499 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol(""); (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 502 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol((yyvsp[(2) - (2)].pch)); (yyval.pfnsymbol)->addFlag(FLAG_EXTERN);  
                  (yyval.pfnsymbol)->addFlag(FLAG_LOCAL_ARGS);
                  (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 508 "chapel.ypp"
    {
      // Sets up to capture tokens while parsing the next grammar nonterminal.
      captureTokens = 1;
      captureString[0] = '\0';
    }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 514 "chapel.ypp"
    {
      // Stop capturing and save the result.
      captureTokens = 0;

      (yyvsp[(4) - (4)].pfnsymbol)->userString = astr(captureString);
    }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 521 "chapel.ypp"
    {
      FnSymbol* fn = (yyvsp[(4) - (9)].pfnsymbol);

      fn->copyFlags((yyvsp[(1) - (9)].pfnsymbol));
      // The user explicitly named this function (controls mangling).
      if ((yyvsp[(1) - (9)].pfnsymbol)->hasFlag(FLAG_EXPORT) || (yyvsp[(1) - (9)].pfnsymbol)->hasFlag(FLAG_EXTERN))
        fn->addFlag(FLAG_USER_NAMED);
      if (*(yyvsp[(1) - (9)].pfnsymbol)->name)
        fn->cname = (yyvsp[(1) - (9)].pfnsymbol)->name;

      if ((yyvsp[(2) - (9)].procIter) == ProcIter_ITER)
      {
        if (fn->hasFlag(FLAG_EXTERN))
          USR_FATAL_CONT(fn, "'iter' is not legal with 'extern'");
        fn->addFlag(FLAG_ITERATOR_FN);
      }

      (yyval.pblockstmt) = buildFunctionDecl((yyvsp[(4) - (9)].pfnsymbol), (yyvsp[(6) - (9)].retTag), (yyvsp[(7) - (9)].pexpr), (yyvsp[(8) - (9)].pexpr), (yyvsp[(9) - (9)].pblockstmt), (yylsp[(1) - (9)]).comment);
      yylloc.comment = NULL;
    }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 545 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
    }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 549 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(3) - (3)].pfnsymbol), (yyvsp[(2) - (3)].pch), (yyvsp[(1) - (3)].pt), NULL);
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 554 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pch));
    }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 558 "chapel.ypp"
    {
      (yyval.pfnsymbol) = buildFunctionSymbol((yyvsp[(5) - (5)].pfnsymbol), (yyvsp[(4) - (5)].pch), (yyvsp[(1) - (5)].pt), (yyvsp[(2) - (5)].pch));
      (yyval.pfnsymbol)->addFlag(FLAG_ASSIGNOP);
    }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 566 "chapel.ypp"
    { (yyval.pch) = astr("~", (yyvsp[(2) - (2)].pch)); }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 567 "chapel.ypp"
    { (yyval.pch) = "&"; }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 568 "chapel.ypp"
    { (yyval.pch) = "|"; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 569 "chapel.ypp"
    { (yyval.pch) = "^"; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 570 "chapel.ypp"
    { (yyval.pch) = "~"; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 571 "chapel.ypp"
    { (yyval.pch) = "=="; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 572 "chapel.ypp"
    { (yyval.pch) = "!="; }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 573 "chapel.ypp"
    { (yyval.pch) = "<="; }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 574 "chapel.ypp"
    { (yyval.pch) = ">="; }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 575 "chapel.ypp"
    { (yyval.pch) = "<"; }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 576 "chapel.ypp"
    { (yyval.pch) = ">"; }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 577 "chapel.ypp"
    { (yyval.pch) = "+"; }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 578 "chapel.ypp"
    { (yyval.pch) = "-"; }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 579 "chapel.ypp"
    { (yyval.pch) = "*"; }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 580 "chapel.ypp"
    { (yyval.pch) = "/"; }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 581 "chapel.ypp"
    { (yyval.pch) = "<<"; }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 582 "chapel.ypp"
    { (yyval.pch) = ">>"; }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 583 "chapel.ypp"
    { (yyval.pch) = "%"; }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 584 "chapel.ypp"
    { (yyval.pch) = "**"; }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 585 "chapel.ypp"
    { (yyval.pch) = "!"; }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 586 "chapel.ypp"
    { (yyval.pch) = "by"; }
    break;

  case 150:

/* Line 1806 of yacc.c  */
#line 587 "chapel.ypp"
    { (yyval.pch) = "#"; }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 588 "chapel.ypp"
    { (yyval.pch) = "align"; }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 589 "chapel.ypp"
    { (yyval.pch) = "<=>"; }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 590 "chapel.ypp"
    { (yyval.pch) = "<~>"; }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 594 "chapel.ypp"
    { (yyval.pch) = "="; }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 595 "chapel.ypp"
    { (yyval.pch) = "+="; }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 596 "chapel.ypp"
    { (yyval.pch) = "-="; }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 597 "chapel.ypp"
    { (yyval.pch) = "*="; }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 598 "chapel.ypp"
    { (yyval.pch) = "/="; }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 599 "chapel.ypp"
    { (yyval.pch) = "%="; }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 600 "chapel.ypp"
    { (yyval.pch) = "**="; }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 601 "chapel.ypp"
    { (yyval.pch) = "&="; }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 602 "chapel.ypp"
    { (yyval.pch) = "|="; }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 603 "chapel.ypp"
    { (yyval.pch) = "^="; }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 604 "chapel.ypp"
    { (yyval.pch) = ">>="; }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 605 "chapel.ypp"
    { (yyval.pch) = "<<="; }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 609 "chapel.ypp"
    { (yyval.pfnsymbol) = new FnSymbol("_"); (yyval.pfnsymbol)->addFlag(FLAG_NO_PARENS); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 610 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 614 "chapel.ypp"
    { (yyval.pfnsymbol) = (yyvsp[(2) - (3)].pfnsymbol); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 618 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, NULL); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 619 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal(NULL, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 620 "chapel.ypp"
    { (yyval.pfnsymbol) = buildFunctionFormal((yyvsp[(1) - (3)].pfnsymbol), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 625 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr), NULL); }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 627 "chapel.ypp"
    { (yyval.pdefexpr) = buildArgDefExpr((yyvsp[(1) - (4)].pt), (yyvsp[(2) - (4)].pch), (yyvsp[(3) - (4)].pexpr), NULL, (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 629 "chapel.ypp"
    { (yyval.pdefexpr) = buildTupleArgDefExpr((yyvsp[(1) - (6)].pt), (yyvsp[(3) - (6)].pblockstmt), (yyvsp[(5) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 631 "chapel.ypp"
    { USR_FATAL("variable-length argument may not be grouped in a tuple"); }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 635 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 177:

/* Line 1806 of yacc.c  */
#line 636 "chapel.ypp"
    { (yyval.pt) = INTENT_IN; }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 637 "chapel.ypp"
    { (yyval.pt) = INTENT_INOUT; }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 638 "chapel.ypp"
    { (yyval.pt) = INTENT_OUT; }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 639 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST; }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 640 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_IN; }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 641 "chapel.ypp"
    { (yyval.pt) = INTENT_CONST_REF; }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 642 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 184:

/* Line 1806 of yacc.c  */
#line 643 "chapel.ypp"
    { (yyval.pt) = INTENT_REF; }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 644 "chapel.ypp"
    { (yyval.pt) = INTENT_TYPE; }
    break;

  case 186:

/* Line 1806 of yacc.c  */
#line 648 "chapel.ypp"
    { (yyval.pt) = INTENT_BLANK; }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 649 "chapel.ypp"
    { (yyval.pt) = INTENT_PARAM; }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 650 "chapel.ypp"
    { (yyval.pt) = INTENT_REF;   }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 654 "chapel.ypp"
    { (yyval.procIter) = ProcIter_PROC; }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 655 "chapel.ypp"
    { (yyval.procIter) = ProcIter_ITER; }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 659 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 660 "chapel.ypp"
    { (yyval.retTag) = RET_VALUE; }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 661 "chapel.ypp"
    { (yyval.retTag) = RET_VAR; }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 662 "chapel.ypp"
    { (yyval.retTag) = RET_PARAM; }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 663 "chapel.ypp"
    { (yyval.retTag) = RET_TYPE; }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 667 "chapel.ypp"
    { (yyval.pblockstmt) = NULL; }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 673 "chapel.ypp"
    { (yyval.pblockstmt) = new BlockStmt((yyvsp[(1) - (1)].pblockstmt)); }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 678 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol((yyvsp[(2) - (2)].pch))); }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 680 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 684 "chapel.ypp"
    { (yyval.pdefexpr) = new DefExpr(new VarSymbol(astr("chpl__query", istr(query_uid++)))); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 689 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 690 "chapel.ypp"
    { (yyvsp[(2) - (2)].pdefexpr)->sym->addFlag(FLAG_PARAM); (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 694 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 695 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 700 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(2) - (4)].pch), new BlockStmt(), yyfilename, (yylsp[(1) - (4)]).comment))); }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 702 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(buildModule((yyvsp[(2) - (5)].pch), (yyvsp[(4) - (5)].pblockstmt), yyfilename, (yylsp[(1) - (5)]).comment))); }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 707 "chapel.ypp"
    {(yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 712 "chapel.ypp"
    { (yyval.pblockstmt) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 714 "chapel.ypp"
    { (yyval.pblockstmt) = handleConfigTypes((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 716 "chapel.ypp"
    { (yyval.pblockstmt) = convertTypesToExtern((yyvsp[(3) - (4)].pblockstmt)); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 721 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (2)].pch));
      var->addFlag(FLAG_TYPE_VARIABLE);
      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (2)].pexpr));
      (yyval.pblockstmt) = buildChapelStmt(def);
    }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 728 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));
      var->addFlag(FLAG_TYPE_VARIABLE);
      DefExpr* def = new DefExpr(var, (yyvsp[(2) - (4)].pexpr));
      (yyvsp[(4) - (4)].pblockstmt)->insertAtHead(def);
      (yyval.pblockstmt) = buildChapelStmt((yyvsp[(4) - (4)].pblockstmt));
    }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 738 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 740 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 742 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExprFromArrayType((yyvsp[(2) - (2)].pcallexpr)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 747 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_PARAM, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 751 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_CONST, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 755 "chapel.ypp"
    {
      (yyval.pblockstmt) = buildVarDecls((yyvsp[(3) - (4)].pblockstmt), (yyvsp[(1) - (4)].flag), FLAG_UNKNOWN, (yylsp[(1) - (4)]).comment);
    }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 761 "chapel.ypp"
    { (yyval.flag) = FLAG_UNKNOWN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 762 "chapel.ypp"
    { (yyval.flag) = FLAG_CONFIG; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 763 "chapel.ypp"
    { (yyval.flag) = FLAG_EXTERN; (yyloc).comment = yylloc.comment; yylloc.comment = NULL;}
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 769 "chapel.ypp"
    {
      for_alist(expr, (yyvsp[(3) - (3)].pblockstmt)->body)
        (yyvsp[(1) - (3)].pblockstmt)->insertAtTail(expr->remove());
    }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 777 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt(new DefExpr(new VarSymbol((yyvsp[(1) - (3)].pch)), (yyvsp[(3) - (3)].pexpr), (yyvsp[(2) - (3)].pexpr))); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 779 "chapel.ypp"
    {
      VarSymbol* var = new VarSymbol((yyvsp[(1) - (4)].pch));
      var->addFlag(FLAG_ARRAY_ALIAS);
      (yyval.pblockstmt) = buildChapelStmt(new DefExpr(var, (yyvsp[(4) - (4)].pexpr), (yyvsp[(2) - (4)].pexpr)));
    }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 785 "chapel.ypp"
    { (yyval.pblockstmt) = buildTupleVarDeclStmt((yyvsp[(2) - (5)].pblockstmt), (yyvsp[(4) - (5)].pexpr), (yyvsp[(5) - (5)].pexpr)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 790 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol("chpl__tuple_blank")); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 792 "chapel.ypp"
    { (yyval.pexpr) = new DefExpr(new VarSymbol((yyvsp[(1) - (1)].pch))); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 794 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pblockstmt); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 799 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (1)].pexpr)); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 801 "chapel.ypp"
    { (yyval.pblockstmt) = buildChapelStmt((yyvsp[(1) - (2)].pexpr)); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 803 "chapel.ypp"
    { (yyval.pblockstmt) = ((yyvsp[(3) - (3)].pblockstmt)->insertAtHead((yyvsp[(1) - (3)].pexpr)), (yyvsp[(3) - (3)].pblockstmt)); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 809 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 810 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("noinit"); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 811 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 815 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 817 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__ensureDomainExpr", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 821 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 822 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 823 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pcallexpr); }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 824 "chapel.ypp"
    {printf("bad type specification"); }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 845 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr)); 
    }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 849 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pcallexpr)); 
    }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 853 "chapel.ypp"
    { 
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pcallexpr) = new CallExpr("chpl__buildArrayRuntimeType",
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(),
             new CallExpr("chpl__ensureDomainExpr", (yyvsp[(4) - (6)].pexpr)->copy()));
    }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 860 "chapel.ypp"
    {printf("bad array type specification"); clean_exit(1); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 864 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 865 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 866 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 871 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 873 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 879 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayRuntimeType", gNil, (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 255:

/* Line 1806 of yacc.c  */
#line 881 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(2) - (4)].pcallexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 883 "chapel.ypp"
    { (yyval.pexpr) = buildFormalArrayType((yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), (yyvsp[(2) - (6)].pcallexpr)); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 887 "chapel.ypp"
    { (yyval.pexpr) = NULL; }
    break;

  case 258:

/* Line 1806 of yacc.c  */
#line 888 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 889 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pdefexpr); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 890 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("_domain"); }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 891 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_singlevar"); }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 892 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr( "_syncvar"); }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 893 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (2)].pexpr); }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 899 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 900 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pdefexpr)); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 901 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 902 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 906 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("chpl__tuple_blank"); }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 907 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr); }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 908 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 912 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 913 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 917 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 922 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 923 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 927 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pdefexpr)); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 928 "chapel.ypp"
    { (yyval.pexpr) = buildNamedActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 929 "chapel.ypp"
    { (yyval.pexpr) = buildNamedAliasActual((yyvsp[(1) - (3)].pch), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 930 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pdefexpr); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 935 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr((yyvsp[(1) - (1)].pch)); }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 952 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_singlevar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 954 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildIndexType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 956 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 291:

/* Line 1806 of yacc.c  */
#line 958 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSubDomainType", (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 292:

/* Line 1806 of yacc.c  */
#line 960 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildSparseDomainRuntimeType", new UnresolvedSymExpr("defaultDist"), (yyvsp[(4) - (5)].pcallexpr)); }
    break;

  case 293:

/* Line 1806 of yacc.c  */
#line 962 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__atomicType", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 294:

/* Line 1806 of yacc.c  */
#line 964 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr( "_syncvar", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 295:

/* Line 1806 of yacc.c  */
#line 969 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 296:

/* Line 1806 of yacc.c  */
#line 971 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 297:

/* Line 1806 of yacc.c  */
#line 973 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 298:

/* Line 1806 of yacc.c  */
#line 975 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 299:

/* Line 1806 of yacc.c  */
#line 977 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 300:

/* Line 1806 of yacc.c  */
#line 979 "chapel.ypp"
    { (yyval.pexpr) = buildForLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 301:

/* Line 1806 of yacc.c  */
#line 981 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)); }
    break;

  case 302:

/* Line 1806 of yacc.c  */
#line 983 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true); }
    break;

  case 303:

/* Line 1806 of yacc.c  */
#line 985 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pexpr), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 304:

/* Line 1806 of yacc.c  */
#line 987 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr)); }
    break;

  case 305:

/* Line 1806 of yacc.c  */
#line 989 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pexpr), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true); }
    break;

  case 306:

/* Line 1806 of yacc.c  */
#line 991 "chapel.ypp"
    { (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (7)].pexpr), (yyvsp[(7) - (7)].pexpr), (yyvsp[(5) - (7)].pexpr)); }
    break;

  case 307:

/* Line 1806 of yacc.c  */
#line 993 "chapel.ypp"
    {
      if ((yyvsp[(2) - (4)].pcallexpr)->argList.length > 1)
        (yyval.pexpr) = buildForallLoopExpr(NULL, new CallExpr("chpl__ensureDomainExpr", (yyvsp[(2) - (4)].pcallexpr)), (yyvsp[(4) - (4)].pexpr), NULL, true);
      else
        (yyval.pexpr) = buildForallLoopExpr(NULL, (yyvsp[(2) - (4)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (4)].pexpr), NULL, true);
    }
    break;

  case 308:

/* Line 1806 of yacc.c  */
#line 1000 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, true);
    }
    break;

  case 309:

/* Line 1806 of yacc.c  */
#line 1006 "chapel.ypp"
    {
      if ((yyvsp[(2) - (6)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (6)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (6)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr), NULL, false, true);
    }
    break;

  case 310:

/* Line 1806 of yacc.c  */
#line 1012 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr));
    }
    break;

  case 311:

/* Line 1806 of yacc.c  */
#line 1018 "chapel.ypp"
    {
      if ((yyvsp[(2) - (9)].pcallexpr)->argList.length != 1)
        USR_FATAL((yyvsp[(4) - (9)].pexpr), "invalid index expression");
      (yyval.pexpr) = buildForallLoopExpr((yyvsp[(2) - (9)].pcallexpr)->get(1)->remove(), (yyvsp[(4) - (9)].pexpr), (yyvsp[(9) - (9)].pexpr), (yyvsp[(7) - (9)].pexpr), false, true);
    }
    break;

  case 312:

/* Line 1806 of yacc.c  */
#line 1027 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(new DefExpr(buildIfExpr((yyvsp[(2) - (6)].pexpr), (yyvsp[(4) - (6)].pexpr), (yyvsp[(6) - (6)].pexpr)))); }
    break;

  case 313:

/* Line 1806 of yacc.c  */
#line 1031 "chapel.ypp"
    { (yyval.pexpr) = new SymExpr(gNil); }
    break;

  case 321:

/* Line 1806 of yacc.c  */
#line 1047 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 322:

/* Line 1806 of yacc.c  */
#line 1051 "chapel.ypp"
    { (yyval.pcallexpr) = NULL; }
    break;

  case 323:

/* Line 1806 of yacc.c  */
#line 1052 "chapel.ypp"
    { (yyval.pcallexpr) = (yyvsp[(3) - (4)].pcallexpr);   }
    break;

  case 324:

/* Line 1806 of yacc.c  */
#line 1056 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (1)].pexpr)); }
    break;

  case 325:

/* Line 1806 of yacc.c  */
#line 1057 "chapel.ypp"
    { (yyvsp[(1) - (3)].pcallexpr)->insertAtTail((yyvsp[(3) - (3)].pexpr)); }
    break;

  case 327:

/* Line 1806 of yacc.c  */
#line 1063 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<~>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 328:

/* Line 1806 of yacc.c  */
#line 1068 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_NEW, (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 329:

/* Line 1806 of yacc.c  */
#line 1073 "chapel.ypp"
    { (yyval.pexpr) = buildLetExpr((yyvsp[(2) - (4)].pblockstmt), (yyvsp[(4) - (4)].pexpr)); }
    break;

  case 338:

/* Line 1806 of yacc.c  */
#line 1089 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TUPLE_EXPAND, (yyvsp[(3) - (4)].pexpr)); }
    break;

  case 339:

/* Line 1806 of yacc.c  */
#line 1091 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_cast", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 340:

/* Line 1806 of yacc.c  */
#line 1093 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 341:

/* Line 1806 of yacc.c  */
#line 1095 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedLow"), (yyvsp[(1) - (2)].pexpr)); }
    break;

  case 342:

/* Line 1806 of yacc.c  */
#line 1097 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedHigh"), (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 343:

/* Line 1806 of yacc.c  */
#line 1099 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("_build_range", buildDotExpr("BoundedRangeType", "boundedNone")); }
    break;

  case 350:

/* Line 1806 of yacc.c  */
#line 1122 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 351:

/* Line 1806 of yacc.c  */
#line 1123 "chapel.ypp"
    { (yyval.pexpr) = buildSquareCallExpr((yyvsp[(1) - (4)].pexpr), (yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 352:

/* Line 1806 of yacc.c  */
#line 1124 "chapel.ypp"
    { (yyval.pexpr) = buildPrimitiveExpr((yyvsp[(3) - (4)].pcallexpr)); }
    break;

  case 353:

/* Line 1806 of yacc.c  */
#line 1128 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pch)); }
    break;

  case 354:

/* Line 1806 of yacc.c  */
#line 1129 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(PRIM_TYPEOF, (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 355:

/* Line 1806 of yacc.c  */
#line 1130 "chapel.ypp"
    { (yyval.pexpr) = buildDotExpr((yyvsp[(1) - (3)].pexpr), "_dom"); }
    break;

  case 356:

/* Line 1806 of yacc.c  */
#line 1138 "chapel.ypp"
    { (yyval.pexpr) = (yyvsp[(2) - (3)].pexpr); }
    break;

  case 357:

/* Line 1806 of yacc.c  */
#line 1139 "chapel.ypp"
    { (yyval.pexpr) = buildOneTuple((yyvsp[(2) - (4)].pexpr)); }
    break;

  case 358:

/* Line 1806 of yacc.c  */
#line 1140 "chapel.ypp"
    { (yyval.pexpr) = buildTuple((yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 359:

/* Line 1806 of yacc.c  */
#line 1144 "chapel.ypp"
    { (yyval.pexpr) = buildIntLiteral(yytext); }
    break;

  case 360:

/* Line 1806 of yacc.c  */
#line 1145 "chapel.ypp"
    { (yyval.pexpr) = buildRealLiteral(yytext); }
    break;

  case 361:

/* Line 1806 of yacc.c  */
#line 1146 "chapel.ypp"
    { (yyval.pexpr) = buildImagLiteral(yytext); }
    break;

  case 362:

/* Line 1806 of yacc.c  */
#line 1147 "chapel.ypp"
    { (yyval.pexpr) = buildStringLiteral((yyvsp[(1) - (1)].pch)); }
    break;

  case 363:

/* Line 1806 of yacc.c  */
#line 1148 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildDomainExpr", (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 364:

/* Line 1806 of yacc.c  */
#line 1149 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__buildArrayExpr", (yyvsp[(2) - (3)].pcallexpr)); }
    break;

  case 365:

/* Line 1806 of yacc.c  */
#line 1151 "chapel.ypp"
    {
      (yyval.pexpr) = new CallExpr("chpl__buildAssociativeArrayExpr", (yyvsp[(2) - (3)].pcallexpr));
    }
    break;

  case 366:

/* Line 1806 of yacc.c  */
#line 1157 "chapel.ypp"
    { (yyval.pcallexpr) = new CallExpr(PRIM_ACTUALS_LIST, (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 367:

/* Line 1806 of yacc.c  */
#line 1158 "chapel.ypp"
    { (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(3) - (5)].pexpr)); (yyvsp[(1) - (5)].pcallexpr)->insertAtTail((yyvsp[(5) - (5)].pexpr)); }
    break;

  case 368:

/* Line 1806 of yacc.c  */
#line 1162 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 369:

/* Line 1806 of yacc.c  */
#line 1163 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 370:

/* Line 1806 of yacc.c  */
#line 1164 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("*", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 371:

/* Line 1806 of yacc.c  */
#line 1165 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("/", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 372:

/* Line 1806 of yacc.c  */
#line 1166 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 373:

/* Line 1806 of yacc.c  */
#line 1167 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">>", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 374:

/* Line 1806 of yacc.c  */
#line 1168 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("%", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 375:

/* Line 1806 of yacc.c  */
#line 1169 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("==", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 376:

/* Line 1806 of yacc.c  */
#line 1170 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 377:

/* Line 1806 of yacc.c  */
#line 1171 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 378:

/* Line 1806 of yacc.c  */
#line 1172 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">=", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 379:

/* Line 1806 of yacc.c  */
#line 1173 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("<", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 380:

/* Line 1806 of yacc.c  */
#line 1174 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr(">", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 381:

/* Line 1806 of yacc.c  */
#line 1175 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("&", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 382:

/* Line 1806 of yacc.c  */
#line 1176 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("|", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 383:

/* Line 1806 of yacc.c  */
#line 1177 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("^", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 384:

/* Line 1806 of yacc.c  */
#line 1178 "chapel.ypp"
    { (yyval.pexpr) = buildLogicalAndExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 385:

/* Line 1806 of yacc.c  */
#line 1179 "chapel.ypp"
    { (yyval.pexpr) = buildLogicalOrExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 386:

/* Line 1806 of yacc.c  */
#line 1180 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("**", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 387:

/* Line 1806 of yacc.c  */
#line 1181 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("by", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 388:

/* Line 1806 of yacc.c  */
#line 1182 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("align", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 389:

/* Line 1806 of yacc.c  */
#line 1183 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("#", (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 390:

/* Line 1806 of yacc.c  */
#line 1184 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("chpl__distributed", (yyvsp[(3) - (3)].pexpr), (yyvsp[(1) - (3)].pexpr)); }
    break;

  case 391:

/* Line 1806 of yacc.c  */
#line 1188 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("+", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 392:

/* Line 1806 of yacc.c  */
#line 1189 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("-", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 393:

/* Line 1806 of yacc.c  */
#line 1190 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '-'); }
    break;

  case 394:

/* Line 1806 of yacc.c  */
#line 1191 "chapel.ypp"
    { (yyval.pexpr) = buildPreDecIncWarning((yyvsp[(2) - (2)].pexpr), '+'); }
    break;

  case 395:

/* Line 1806 of yacc.c  */
#line 1192 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("!", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 396:

/* Line 1806 of yacc.c  */
#line 1193 "chapel.ypp"
    { (yyval.pexpr) = new CallExpr("~", (yyvsp[(2) - (2)].pexpr)); }
    break;

  case 397:

/* Line 1806 of yacc.c  */
#line 1197 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 398:

/* Line 1806 of yacc.c  */
#line 1198 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 399:

/* Line 1806 of yacc.c  */
#line 1199 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 400:

/* Line 1806 of yacc.c  */
#line 1200 "chapel.ypp"
    { (yyval.pexpr) = buildReduceExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 401:

/* Line 1806 of yacc.c  */
#line 1204 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 402:

/* Line 1806 of yacc.c  */
#line 1205 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 403:

/* Line 1806 of yacc.c  */
#line 1206 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr)); }
    break;

  case 404:

/* Line 1806 of yacc.c  */
#line 1207 "chapel.ypp"
    { (yyval.pexpr) = buildScanExpr((yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr), true); }
    break;

  case 405:

/* Line 1806 of yacc.c  */
#line 1212 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("SumReduceScanOp"); }
    break;

  case 406:

/* Line 1806 of yacc.c  */
#line 1213 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("ProductReduceScanOp"); }
    break;

  case 407:

/* Line 1806 of yacc.c  */
#line 1214 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalAndReduceScanOp"); }
    break;

  case 408:

/* Line 1806 of yacc.c  */
#line 1215 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("LogicalOrReduceScanOp"); }
    break;

  case 409:

/* Line 1806 of yacc.c  */
#line 1216 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseAndReduceScanOp"); }
    break;

  case 410:

/* Line 1806 of yacc.c  */
#line 1217 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseOrReduceScanOp"); }
    break;

  case 411:

/* Line 1806 of yacc.c  */
#line 1218 "chapel.ypp"
    { (yyval.pexpr) = new UnresolvedSymExpr("BitwiseXorReduceScanOp"); }
    break;



/* Line 1806 of yacc.c  */
#line 7023 "chapel.tab.cpp"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 1221 "chapel.ypp"


