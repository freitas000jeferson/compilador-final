
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "sintatico.y"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>	
#include "structs.h"
/**
BY JEFERSON
*/ 

int yylex();
void yyerror (char *s){
	printf("%s\n", s);
}



/* Line 189 of yacc.c  */
#line 91 "sintatico.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     NUM = 258,
     VARS = 259,
     STR = 260,
     INI = 261,
     FIM = 262,
     IF = 263,
     ELSE = 264,
     WHILE = 265,
     OUT = 266,
     DECL = 267,
     STRING = 268,
     INT = 269,
     FLOAT = 270,
     IN = 271,
     PRINTT = 272,
     SCANS = 273,
     CONCAT = 274,
     COPY = 275,
     DI = 276,
     DF = 277,
     DS = 278,
     ENDL = 279,
     CMP = 280,
     SQRT = 281,
     MULTIPRINT = 282,
     PRINT = 283,
     PRECFLOAT = 284,
     VET = 285,
     NEG = 286,
     DECLPREC = 287,
     VARPREC = 288,
     IFX = 289
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "sintatico.y"

	float flo;
	int fn;
	int inter;
	char str[50];
	Ast *a;
	


/* Line 214 of yacc.c  */
#line 171 "sintatico.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 183 "sintatico.tab.c"

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
# if YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  12
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    31,     2,     2,
      42,    43,    29,    27,    49,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,    26,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,    32,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      25,    33,    34,    35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,     9,    12,    20,    32,    40,    45,
      53,    61,    69,    73,    77,    81,    88,    94,   100,   106,
     112,   118,   120,   121,   123,   126,   130,   134,   138,   142,
     146,   150,   154,   161,   165,   168,   170,   172,   177,   180,
     183,   186,   188,   191,   194,   197,   199,   203,   205,   209,
     211,   215,   217,   220,   223,   226,   228,   232,   237,   242,
     247
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,     6,    52,     7,    -1,    53,    -1,    52,
      53,    -1,     8,    42,    55,    43,    44,    54,    45,    -1,
       8,    42,    55,    43,    44,    54,    45,     9,    44,    54,
      45,    -1,    10,    42,    55,    43,    44,    54,    45,    -1,
       4,    26,    55,    46,    -1,     4,    47,    55,    48,    26,
      55,    46,    -1,    19,    42,     4,    49,    57,    43,    46,
      -1,    20,    42,     4,    49,    57,    43,    46,    -1,    15,
      58,    46,    -1,    14,    59,    46,    -1,    13,    60,    46,
      -1,    15,     4,    47,    55,    48,    46,    -1,    14,     4,
      26,    55,    46,    -1,    15,     4,    26,    55,    46,    -1,
      13,     4,    26,     5,    46,    -1,    17,    42,    61,    43,
      46,    -1,    16,    42,    56,    43,    46,    -1,    46,    -1,
      -1,    53,    -1,    54,    53,    -1,    55,    27,    55,    -1,
      55,    28,    55,    -1,    55,    29,    55,    -1,    55,    30,
      55,    -1,    55,    31,    55,    -1,    42,    55,    43,    -1,
      55,    32,    55,    -1,    33,    42,    55,    49,    55,    43,
      -1,    55,    25,    55,    -1,    28,    55,    -1,     3,    -1,
       4,    -1,     4,    47,    55,    48,    -1,    21,     4,    -1,
      22,     4,    -1,    23,     4,    -1,     5,    -1,    22,    55,
      -1,    21,    55,    -1,    23,     4,    -1,     4,    -1,    58,
      49,     4,    -1,     4,    -1,    59,    49,     4,    -1,     4,
      -1,    60,    49,     4,    -1,     5,    -1,    22,    55,    -1,
      21,    55,    -1,    23,     4,    -1,    24,    -1,    61,    49,
       5,    -1,    61,    49,    22,    55,    -1,    61,    49,    21,
      55,    -1,    61,    49,    23,     4,    -1,    61,    49,    24,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    45,    45,    48,    49,    56,    57,    58,    60,    61,
      62,    63,    66,    67,    68,    70,    72,    73,    74,    77,
      80,    82,    83,    86,    87,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   111,   112,
     113,   115,   116,   117,   118,   122,   123,   125,   126,   128,
     129,   134,   135,   136,   137,   138,   140,   141,   142,   143,
     144
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "VARS", "STR", "INI", "FIM", "IF",
  "ELSE", "WHILE", "OUT", "DECL", "STRING", "INT", "FLOAT", "IN", "PRINTT",
  "SCANS", "CONCAT", "COPY", "DI", "DF", "DS", "ENDL", "CMP", "'='", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'^'", "SQRT", "MULTIPRINT", "PRINT",
  "PRECFLOAT", "VET", "NEG", "DECLPREC", "VARPREC", "IFX", "'('", "')'",
  "'{'", "'}'", "';'", "'['", "']'", "','", "$accept", "val", "prog",
  "stmt", "list", "exp", "leitura", "parsestr", "multvarf", "multvari",
  "multvars", "multout", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    61,    43,    45,    42,
      47,    37,    94,   281,   282,   283,   284,   285,   286,   287,
     288,   289,    40,    41,   123,   125,    59,    91,    93,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56,
      56,    57,    57,    57,    57,    58,    58,    59,    59,    60,
      60,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     2,     7,    11,     7,     4,     7,
       7,     7,     3,     3,     3,     6,     5,     5,     5,     5,
       5,     1,     0,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     6,     3,     2,     1,     1,     4,     2,     2,
       2,     1,     2,     2,     2,     1,     3,     1,     3,     1,
       3,     1,     2,     2,     2,     1,     3,     4,     4,     4,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    22,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     3,     1,     0,     0,     0,
       0,    49,     0,    47,     0,    45,     0,     0,     0,     0,
       0,     2,     4,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,    14,     0,     0,    13,     0,     0,     0,
      12,     0,     0,     0,     0,     0,    51,     0,     0,     0,
      55,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     0,     0,     0,     0,
      50,     0,    48,     0,     0,    46,    38,    39,    40,     0,
      53,    52,    54,     0,     0,     0,     0,     0,     0,    30,
      33,    25,    26,    27,    28,    29,    31,     0,    22,    22,
      18,    16,    17,     0,    20,    19,    56,     0,     0,     0,
      60,    41,     0,     0,     0,     0,     0,    37,     0,     0,
      23,     0,     0,    15,    58,    57,    59,    43,    42,    44,
       0,     0,     0,     9,     5,    24,     7,    10,    11,    32,
       0,    22,     0,     6
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    14,   130,   131,    38,    55,   125,    26,    24,
      22,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -106
static const yytype_int16 yypact[] =
{
       1,   150,     9,   -18,   -31,    -3,    23,    44,    46,    17,
      32,    35,    45,  -106,    56,  -106,  -106,     2,     2,     2,
       2,    63,   -12,    70,    12,   -14,    19,   111,    57,    95,
     100,  -106,  -106,  -106,    61,     2,    75,     2,   185,   155,
     233,   250,   115,  -106,   117,     2,  -106,   118,     2,     2,
    -106,   121,   131,   132,   134,    96,  -106,     2,     2,   136,
    -106,    -7,    93,   106,     2,  -106,     2,   258,     2,     2,
       2,     2,     2,     2,     2,  -106,   130,   113,   124,   116,
    -106,   205,  -106,   213,   163,  -106,  -106,  -106,  -106,   125,
     275,   275,  -106,   126,   105,    62,    62,   177,    -6,  -106,
    -106,   -15,   -15,    13,    13,    13,    13,     2,   150,   150,
    -106,  -106,  -106,   127,  -106,  -106,  -106,     2,     2,   157,
    -106,  -106,     2,     2,   170,   138,   146,  -106,     2,   225,
    -106,    78,    99,  -106,   275,   275,  -106,   275,   275,  -106,
     129,   151,   267,  -106,   167,  -106,  -106,  -106,  -106,  -106,
     154,   150,   133,  -106
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
    -106,  -106,  -106,    -1,  -105,   -17,  -106,    81,  -106,  -106,
    -106,  -106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      15,    39,    40,    41,   132,    33,    34,     1,    17,    16,
      68,    19,    48,    32,    71,    72,    73,    74,    65,    68,
      67,    69,    70,    71,    72,    73,    74,    21,    81,    18,
      35,    83,    84,    49,    43,    36,    93,    44,    68,    20,
      90,    91,    94,   128,    37,    74,   152,    97,    23,    98,
      25,   100,   101,   102,   103,   104,   105,   106,    46,    27,
       3,    47,    56,    31,     4,    50,     5,   121,    51,     6,
       7,     8,     9,    10,    28,    11,    12,    29,    57,    58,
      59,    60,     3,   122,   123,   124,     4,    30,     5,    42,
     129,     6,     7,     8,     9,    10,    45,    11,    12,    62,
     134,   135,    13,     3,    63,   137,   138,     4,    64,     5,
     116,   142,     6,     7,     8,     9,    10,    66,    11,    12,
      79,    80,    82,   144,    13,    85,   117,   118,   119,   120,
     145,   145,    52,    53,    54,    86,    87,     3,    88,    89,
      92,     4,    95,     5,   146,    13,     6,     7,     8,     9,
      10,   145,    11,    12,     3,    96,   107,   108,     4,     0,
       5,   136,   110,     6,     7,     8,     9,    10,   109,    11,
      12,   114,   115,   133,   139,   147,   150,   126,   153,    13,
      68,   140,    69,    70,    71,    72,    73,    74,    68,   141,
      69,    70,    71,    72,    73,    74,    13,   148,   151,     0,
       0,     0,    68,    76,    69,    70,    71,    72,    73,    74,
      68,   113,    69,    70,    71,    72,    73,    74,     0,     0,
       0,     0,     0,     0,     0,   127,     0,     0,     0,     0,
      68,    75,    69,    70,    71,    72,    73,    74,    68,     0,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
      68,   111,    69,    70,    71,    72,    73,    74,    68,   112,
      69,    70,    71,    72,    73,    74,     0,     0,     0,     0,
       0,   143,     0,     0,     0,    68,    77,    69,    70,    71,
      72,    73,    74,    68,     0,    69,    70,    71,    72,    73,
      74,     0,    68,    78,    69,    70,    71,    72,    73,    74,
      68,    99,    69,    70,    71,    72,    73,    74,     0,     0,
     149
};

static const yytype_int16 yycheck[] =
{
       1,    18,    19,    20,   109,     3,     4,     6,    26,     0,
      25,    42,    26,    14,    29,    30,    31,    32,    35,    25,
      37,    27,    28,    29,    30,    31,    32,     4,    45,    47,
      28,    48,    49,    47,    46,    33,    43,    49,    25,    42,
      57,    58,    49,    49,    42,    32,   151,    64,     4,    66,
       4,    68,    69,    70,    71,    72,    73,    74,    46,    42,
       4,    49,     5,     7,     8,    46,    10,     5,    49,    13,
      14,    15,    16,    17,    42,    19,    20,    42,    21,    22,
      23,    24,     4,    21,    22,    23,     8,    42,    10,    26,
     107,    13,    14,    15,    16,    17,    26,    19,    20,     4,
     117,   118,    46,     4,     4,   122,   123,     8,    47,    10,
       5,   128,    13,    14,    15,    16,    17,    42,    19,    20,
       5,     4,     4,    45,    46,     4,    21,    22,    23,    24,
     131,   132,    21,    22,    23,     4,     4,     4,     4,    43,
       4,     8,    49,    10,    45,    46,    13,    14,    15,    16,
      17,   152,    19,    20,     4,    49,    26,    44,     8,    -1,
      10,     4,    46,    13,    14,    15,    16,    17,    44,    19,
      20,    46,    46,    46,     4,    46,     9,    96,    45,    46,
      25,    43,    27,    28,    29,    30,    31,    32,    25,    43,
      27,    28,    29,    30,    31,    32,    46,    46,    44,    -1,
      -1,    -1,    25,    48,    27,    28,    29,    30,    31,    32,
      25,    48,    27,    28,    29,    30,    31,    32,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      25,    46,    27,    28,    29,    30,    31,    32,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      25,    46,    27,    28,    29,    30,    31,    32,    25,    46,
      27,    28,    29,    30,    31,    32,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    25,    43,    27,    28,    29,
      30,    31,    32,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,    25,    43,    27,    28,    29,    30,    31,    32,
      25,    43,    27,    28,    29,    30,    31,    32,    -1,    -1,
      43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    51,     4,     8,    10,    13,    14,    15,    16,
      17,    19,    20,    46,    52,    53,     0,    26,    47,    42,
      42,     4,    60,     4,    59,     4,    58,    42,    42,    42,
      42,     7,    53,     3,     4,    28,    33,    42,    55,    55,
      55,    55,    26,    46,    49,    26,    46,    49,    26,    47,
      46,    49,    21,    22,    23,    56,     5,    21,    22,    23,
      24,    61,     4,     4,    47,    55,    42,    55,    25,    27,
      28,    29,    30,    31,    32,    46,    48,    43,    43,     5,
       4,    55,     4,    55,    55,     4,     4,     4,     4,    43,
      55,    55,     4,    43,    49,    49,    49,    55,    55,    43,
      55,    55,    55,    55,    55,    55,    55,    26,    44,    44,
      46,    46,    46,    48,    46,    46,     5,    21,    22,    23,
      24,     5,    21,    22,    23,    57,    57,    48,    49,    55,
      53,    54,    54,    46,    55,    55,     4,    55,    55,     4,
      43,    43,    55,    46,    45,    53,    45,    46,    46,    43,
       9,    44,    54,    45
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
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
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
# if YYLTYPE_IS_TRIVIAL
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
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

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

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
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

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
  if (yyn == YYPACT_NINF)
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:

/* Line 1455 of yacc.c  */
#line 48 "sintatico.y"
    {eval((yyvsp[(1) - (1)].a));;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 49 "sintatico.y"
    {eval((yyvsp[(2) - (2)].a));;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 56 "sintatico.y"
    {(yyval.a) = newflow('I', (yyvsp[(3) - (7)].a), (yyvsp[(6) - (7)].a), NULL);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 57 "sintatico.y"
    {(yyval.a) = newflow('I', (yyvsp[(3) - (11)].a), (yyvsp[(6) - (11)].a), (yyvsp[(10) - (11)].a));;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 58 "sintatico.y"
    {(yyval.a) = newflow('W', (yyvsp[(3) - (7)].a), (yyvsp[(6) - (7)].a), NULL);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 60 "sintatico.y"
    { (yyval.a) = newasgn((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].a));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 61 "sintatico.y"
    { (yyval.a) = newasgn_a((yyvsp[(1) - (7)].str),(yyvsp[(6) - (7)].a),(yyvsp[(3) - (7)].a));;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 62 "sintatico.y"
    { (yyval.a) = newasgn_concat((yyvsp[(3) - (7)].str),(yyvsp[(5) - (7)].a));;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 63 "sintatico.y"
    { (yyval.a) = newasgn_copy((yyvsp[(3) - (7)].str),(yyvsp[(5) - (7)].a));;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 66 "sintatico.y"
    {  (yyval.a) =  (yyvsp[(2) - (3)].a); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 67 "sintatico.y"
    {  (yyval.a) =  (yyvsp[(2) - (3)].a); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 68 "sintatico.y"
    {  (yyval.a) =  (yyvsp[(2) - (3)].a); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 70 "sintatico.y"
    { (yyval.a) = newarray('A',(yyvsp[(2) - (6)].str),(yyvsp[(4) - (6)].a));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 72 "sintatico.y"
    { (yyval.a) = newast('G', newvari('U',(yyvsp[(2) - (5)].str)) , (yyvsp[(4) - (5)].a)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 73 "sintatico.y"
    { (yyval.a) = newast('D', newvari('V',(yyvsp[(2) - (5)].str)) , (yyvsp[(4) - (5)].a)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 74 "sintatico.y"
    { (yyval.a) = newast('H', newvari('X',(yyvsp[(2) - (5)].str)) , newValorValS((yyvsp[(4) - (5)].str))); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 77 "sintatico.y"
    { (yyval.a) = (yyvsp[(3) - (5)].a); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 80 "sintatico.y"
    {  (yyval.a) = (yyvsp[(3) - (5)].a); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 82 "sintatico.y"
    {;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 83 "sintatico.y"
    { ;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 86 "sintatico.y"
    {(yyval.a) = (yyvsp[(1) - (1)].a);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 87 "sintatico.y"
    { (yyval.a) = newast('L', (yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a));	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 91 "sintatico.y"
    {(yyval.a) = newast('+',(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 92 "sintatico.y"
    {(yyval.a) = newast('-',(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 93 "sintatico.y"
    {(yyval.a) = newast('*',(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 94 "sintatico.y"
    {(yyval.a) = newast('/',(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 95 "sintatico.y"
    {(yyval.a) = newast('%',(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 96 "sintatico.y"
    {(yyval.a) = (yyvsp[(2) - (3)].a);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 97 "sintatico.y"
    { (yyval.a) = newast('^', (yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a));  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 98 "sintatico.y"
    { (yyval.a) = newast('~', (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 99 "sintatico.y"
    {(yyval.a) = newcmp((yyvsp[(2) - (3)].fn),(yyvsp[(1) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 100 "sintatico.y"
    {(yyval.a) = newast('M',(yyvsp[(2) - (2)].a),NULL);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 101 "sintatico.y"
    {(yyval.a) = newnum((yyvsp[(1) - (1)].flo));;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 102 "sintatico.y"
    {(yyval.a) = newValorVal((yyvsp[(1) - (1)].str));;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 103 "sintatico.y"
    {(yyval.a) = newValorVal_a((yyvsp[(1) - (4)].str), (yyvsp[(3) - (4)].a));;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 111 "sintatico.y"
    {(yyval.a) = newvari('S',(yyvsp[(2) - (2)].str));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 112 "sintatico.y"
    {(yyval.a) = newvari('S',(yyvsp[(2) - (2)].str));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 113 "sintatico.y"
    {(yyval.a) = newvari('T',(yyvsp[(2) - (2)].str));;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 115 "sintatico.y"
    {  (yyval.a) = newast('$', newValorValS((yyvsp[(1) - (1)].str)), NULL);;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 116 "sintatico.y"
    { (yyval.a) = newast('7',(yyvsp[(2) - (2)].a),NULL);;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 117 "sintatico.y"
    { (yyval.a) = newast('8',(yyvsp[(2) - (2)].a),NULL);;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 118 "sintatico.y"
    { (yyval.a) = newast('9', newValorValS((yyvsp[(2) - (2)].str)), NULL);;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 122 "sintatico.y"
    { (yyval.a) = newvari('V',(yyvsp[(1) - (1)].str)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 123 "sintatico.y"
    {  (yyval.a) = newast('d', newvari('V',(yyvsp[(3) - (3)].str)) , (yyvsp[(1) - (3)].a)); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 125 "sintatico.y"
    { (yyval.a) = newvari('U',(yyvsp[(1) - (1)].str)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 126 "sintatico.y"
    {  (yyval.a) = newast('g', newvari('U',(yyvsp[(3) - (3)].str)) , (yyvsp[(1) - (3)].a)); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 128 "sintatico.y"
    { (yyval.a) = newvari('X',(yyvsp[(1) - (1)].str)); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 129 "sintatico.y"
    { (yyval.a) = newast('h', newvari('X',(yyvsp[(3) - (3)].str)) , (yyvsp[(1) - (3)].a)); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 134 "sintatico.y"
    {  (yyval.a) = newast('s', newValorValS((yyvsp[(1) - (1)].str)), NULL);;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 135 "sintatico.y"
    { (yyval.a) = newast('p',(yyvsp[(2) - (2)].a),NULL);;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 136 "sintatico.y"
    { (yyval.a) = newast('u',(yyvsp[(2) - (2)].a),NULL);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 137 "sintatico.y"
    { (yyval.a) = searchVar('z', (yyvsp[(2) - (2)].str)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 138 "sintatico.y"
    { (yyval.a) = newast('e', newendl('e'), NULL); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 140 "sintatico.y"
    { (yyval.a) = newast('r', newValorValS((yyvsp[(3) - (3)].str)), (yyvsp[(1) - (3)].a)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 141 "sintatico.y"
    { (yyval.a) = newast('q', newast('p', (yyvsp[(4) - (4)].a),NULL), (yyvsp[(1) - (4)].a)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 142 "sintatico.y"
    { (yyval.a) = newast('v', newast('u', (yyvsp[(4) - (4)].a),NULL), (yyvsp[(1) - (4)].a)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 143 "sintatico.y"
    { (yyval.a) = newast('y', searchVar('z', (yyvsp[(4) - (4)].str)), (yyvsp[(1) - (4)].a)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 144 "sintatico.y"
    { (yyval.a) = newast('f', newendl('e'), (yyvsp[(1) - (3)].a));  ;}
    break;



/* Line 1455 of yacc.c  */
#line 1937 "sintatico.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

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
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



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
		      yytoken, &yylval);
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
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 146 "sintatico.y"


#include "lex.yy.c"

int main(){
	// yyin=fopen("entrada.ok","r");
	yyin=fopen("juros.ok","r");
    //yyin=fopen("fibonacci.ok","r");
	//yyin=fopen("media.ok","r");
	yyparse();
	yylex();
	fclose(yyin);
return 0;
}


