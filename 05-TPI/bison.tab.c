
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
#line 2 "bison.y"

#include "tp5.h"


int yylex(void);
int yywrap(){
    return(1);
}

//extern int yylineno;

int idVar = 0;

extern FILE* yyin;



/* Line 189 of yacc.c  */
#line 91 "bison.tab.c"

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
     INCLUDE = 258,
     DEFINE = 259,
     AUTO = 260,
     REGISTER = 261,
     STATIC = 262,
     EXTERN = 263,
     TYPEDEF = 264,
     VOID = 265,
     CHAR = 266,
     SHORT = 267,
     INT = 268,
     LONG = 269,
     FLOAT = 270,
     DOUBLE = 271,
     SIGNED = 272,
     UNSIGNED = 273,
     CONST = 274,
     VOLATILE = 275,
     ENUM = 276,
     CASE = 277,
     DEFAULT = 278,
     IF = 279,
     SWITCH = 280,
     ELSE = 281,
     FOR = 282,
     DO = 283,
     WHILE = 284,
     GOTO = 285,
     CONTINUE = 286,
     BREAK = 287,
     STRUCT = 288,
     UNION = 289,
     RETURN = 290,
     SIZEOF = 291,
     CTE_OR = 292,
     CTE_AND = 293,
     ELIPSIS = 294,
     IGUAL_IGUAL = 295,
     DISTINTO = 296,
     MENOR_IGUAL = 297,
     MAYOR_IGUAL = 298,
     CORR_DER = 299,
     CORR_IZQ = 300,
     MAS_MAS = 301,
     MENOS_MENOS = 302,
     FLECHA = 303,
     POR_IGUAL = 304,
     DIV_IGUAL = 305,
     MAS_IGUAL = 306,
     MENOS_IGUAL = 307,
     MOD_IGUAL = 308,
     CORR_DER_IGUAL = 309,
     CORR_IZQ_IGUAL = 310,
     Y_IGUAL = 311,
     POT_IGUAL = 312,
     O_IGUAL = 313,
     IDENTIFICADOR = 314,
     LITERAL_CADENA = 315,
     CONST_OCTAL = 316,
     CONST_HEXADECIMAL = 317,
     CONST_DECIMAL = 318,
     CONST_PTOFLOTANTE = 319,
     CONST_CARACTER = 320,
     NO_RECONOCIDO = 321,
     IFX = 322
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "bison.y"

   int idval;
   int ival;
   double dval;
   char* cval;



/* Line 214 of yacc.c  */
#line 203 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 215 "bison.tab.c"

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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2237

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNRULES -- Number of states.  */
#define YYNSTATES  399

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   322

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    89,    86,     2,
      71,    79,    69,    67,    76,    68,    92,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    73,
      87,    77,    88,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    80,     2,    81,    85,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    82,     2,     2,     2,
       2,     2,     2,    74,    84,    75,    90,     2,     2,     2,
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
      65,    66,    72
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    15,    18,    20,    22,
      25,    28,    30,    32,    37,    41,    45,    48,    52,    55,
      57,    60,    63,    65,    68,    70,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   111,   113,   119,   122,   126,
     128,   130,   132,   135,   137,   141,   143,   147,   151,   154,
     156,   159,   161,   163,   167,   169,   173,   176,   182,   186,
     189,   191,   195,   197,   201,   204,   206,   208,   212,   217,
     221,   226,   231,   235,   238,   240,   244,   247,   249,   252,
     254,   258,   260,   264,   267,   270,   272,   274,   276,   280,
     282,   286,   291,   293,   297,   300,   302,   304,   307,   309,
     313,   318,   321,   325,   329,   334,   337,   341,   345,   347,
     349,   351,   353,   355,   357,   359,   363,   368,   372,   375,
     377,   382,   385,   389,   393,   395,   398,   404,   412,   418,
     424,   432,   442,   451,   460,   468,   477,   485,   493,   500,
     504,   507,   510,   514,   517,   519,   523,   525,   529,   531,
     533,   535,   537,   539,   541,   543,   545,   547,   549,   551,
     553,   559,   561,   563,   567,   569,   573,   575,   579,   581,
     585,   587,   591,   593,   597,   601,   603,   607,   611,   615,
     619,   621,   625,   629,   631,   635,   639,   641,   645,   649,
     653,   655,   660,   662,   665,   668,   671,   674,   679,   681,
     683,   685,   687,   689,   691,   693,   698,   703,   707,   711,
     715,   718,   721,   723,   725,   727,   731,   733,   737,   739,
     741,   743,   745,   747,   749,   751
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,     3,    94,    -1,     4,   160,    94,    -1,
      95,    96,    -1,    97,    -1,     1,    96,    -1,    66,    -1,
      98,    -1,    96,    98,    -1,    96,    95,    -1,    99,    -1,
     100,    -1,   102,   118,   101,   136,    -1,   118,   101,   136,
      -1,   102,   118,   136,    -1,   118,   136,    -1,   102,   109,
      73,    -1,   102,    73,    -1,   100,    -1,   101,   100,    -1,
     103,   102,    -1,   103,    -1,   104,   102,    -1,   104,    -1,
     105,   102,    -1,   105,    -1,     5,    -1,     6,    -1,     7,
      -1,     8,    -1,     9,    -1,    13,    -1,    11,    -1,    15,
      -1,    16,    -1,    12,    -1,    10,    -1,    14,    -1,    17,
      -1,    18,    -1,   106,    -1,   115,    -1,   132,    -1,    19,
      -1,    20,    -1,   107,   162,    74,   108,    75,    -1,   107,
     162,    -1,    74,   108,    75,    -1,    33,    -1,    34,    -1,
     111,    -1,   108,   111,    -1,   110,    -1,   109,    76,   110,
      -1,   118,    -1,   118,    77,   127,    -1,   112,   113,    73,
      -1,   104,   112,    -1,   104,    -1,   105,   112,    -1,   105,
      -1,   114,    -1,   113,    76,   114,    -1,   118,    -1,   118,
      78,   145,    -1,    78,   145,    -1,    21,   162,    74,   116,
      75,    -1,    74,   116,    75,    -1,    21,   162,    -1,   117,
      -1,   116,    76,   117,    -1,   162,    -1,   162,    77,   145,
      -1,   120,   119,    -1,   119,    -1,   162,    -1,    71,   118,
      79,    -1,   162,    80,   145,    81,    -1,   162,    80,    81,
      -1,   162,    71,   122,    79,    -1,   162,    71,   125,    79,
      -1,   162,    71,    79,    -1,    69,   121,    -1,    69,    -1,
      69,   121,   120,    -1,    69,   120,    -1,   105,    -1,   121,
     105,    -1,   123,    -1,   123,    76,    39,    -1,   124,    -1,
     123,    76,   124,    -1,   102,   118,    -1,   102,   130,    -1,
     102,    -1,   162,    -1,   126,    -1,   125,    76,   162,    -1,
     142,    -1,    74,   128,    75,    -1,    74,   128,    76,    75,
      -1,   127,    -1,   128,    76,   127,    -1,   112,   130,    -1,
     112,    -1,   120,    -1,   120,   131,    -1,   131,    -1,    71,
     130,    79,    -1,   131,    80,   145,    81,    -1,    80,    81,
      -1,   131,    80,    81,    -1,    80,   145,    81,    -1,   131,
      71,   122,    79,    -1,    71,    79,    -1,   131,    71,    79,
      -1,    71,   122,    79,    -1,    82,    -1,   134,    -1,   135,
      -1,   136,    -1,   139,    -1,   138,    -1,   140,    -1,   162,
      78,   133,    -1,    22,   145,    78,   133,    -1,    23,    78,
     133,    -1,   141,    73,    -1,    73,    -1,    74,   101,   137,
      75,    -1,    74,    75,    -1,    74,   101,    75,    -1,    74,
     137,    75,    -1,   133,    -1,   137,   133,    -1,    24,    71,
     141,    79,   133,    -1,    24,    71,   141,    79,   133,    26,
     133,    -1,    25,    71,   141,    79,   133,    -1,    29,    71,
     141,    79,   133,    -1,    28,   133,    29,    71,   141,    79,
      73,    -1,    27,    71,   141,    73,   141,    73,   141,    79,
     133,    -1,    27,    71,   141,    73,   141,    73,    79,   133,
      -1,    27,    71,   141,    73,    73,   141,    79,   133,    -1,
      27,    71,   141,    73,    73,    79,   133,    -1,    27,    71,
      73,   141,    73,   141,    79,   133,    -1,    27,    71,    73,
     141,    73,    79,   133,    -1,    27,    71,    73,    73,   141,
      79,   133,    -1,    27,    71,    73,    73,    79,   133,    -1,
      30,   162,    73,    -1,    31,    73,    -1,    32,    73,    -1,
      35,   141,    73,    -1,    35,    73,    -1,   142,    -1,   141,
      76,   142,    -1,   144,    -1,   157,   143,   142,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    55,
      -1,    54,    -1,    56,    -1,    57,    -1,    58,    -1,    77,
      -1,   146,    -1,   146,    83,   141,    78,   144,    -1,   144,
      -1,   147,    -1,   146,    37,   147,    -1,   148,    -1,   147,
      38,   148,    -1,   149,    -1,   148,    84,   149,    -1,   150,
      -1,   149,    85,   150,    -1,   151,    -1,   150,    86,   151,
      -1,   152,    -1,   151,    40,   152,    -1,   151,    41,   152,
      -1,   153,    -1,   152,    87,   153,    -1,   152,    88,   153,
      -1,   152,    42,   153,    -1,   152,    43,   153,    -1,   154,
      -1,   153,    45,   154,    -1,   153,    44,   154,    -1,   155,
      -1,   154,    67,   155,    -1,   154,    68,   155,    -1,   156,
      -1,   155,    69,   156,    -1,   155,    70,   156,    -1,   155,
      89,   156,    -1,   157,    -1,    71,   129,    79,   156,    -1,
     159,    -1,    47,   157,    -1,    46,   157,    -1,   158,   156,
      -1,    36,   157,    -1,    36,    71,   129,    79,    -1,    86,
      -1,    69,    -1,    67,    -1,    68,    -1,    90,    -1,    91,
      -1,   160,    -1,   159,    80,   141,    81,    -1,   159,    71,
     161,    79,    -1,   159,    71,    79,    -1,   159,    92,   162,
      -1,   159,    48,   162,    -1,   159,    47,    -1,   159,    46,
      -1,   162,    -1,   163,    -1,    60,    -1,    71,   141,    79,
      -1,   142,    -1,   161,    76,   142,    -1,    59,    -1,    95,
      -1,    61,    -1,    62,    -1,    63,    -1,    65,    -1,    64,
      -1,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   101,   102,   103,   104,   105,   108,   111,   112,
     115,   117,   118,   122,   123,   124,   125,   129,   130,   133,
     134,   137,   138,   139,   140,   141,   142,   146,   147,   148,
     149,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   168,   169,   172,   173,   175,   178,
     179,   182,   183,   187,   188,   192,   193,   197,   201,   202,
     203,   204,   208,   209,   213,   214,   215,   219,   220,   221,
     225,   226,   230,   231,   234,   235,   238,   239,   240,   246,
     247,   253,   259,   267,   268,   269,   270,   274,   275,   279,
     285,   294,   295,   299,   300,   301,   305,   306,   309,   311,
     312,   313,   317,   318,   322,   323,   327,   328,   329,   332,
     333,   334,   335,   336,   338,   339,   340,   341,   344,   348,
     349,   350,   351,   352,   353,   357,   358,   359,   363,   364,
     368,   369,   370,   371,   374,   375,   378,   379,   380,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   395,
     396,   397,   398,   399,   402,   403,   407,   408,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   425,
     426,   429,   433,   434,   438,   439,   442,   443,   446,   447,
     450,   451,   454,   455,   456,   460,   461,   462,   463,   464,
     468,   469,   470,   474,   475,   476,   479,   480,   481,   482,
     486,   487,   491,   492,   493,   494,   495,   496,   499,   500,
     501,   502,   503,   504,   507,   508,   509,   510,   511,   512,
     513,   514,   519,   520,   521,   522,   526,   527,   530,   531,
     534,   535,   536,   537,   538,   539
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INCLUDE", "DEFINE", "AUTO", "REGISTER",
  "STATIC", "EXTERN", "TYPEDEF", "VOID", "CHAR", "SHORT", "INT", "LONG",
  "FLOAT", "DOUBLE", "SIGNED", "UNSIGNED", "CONST", "VOLATILE", "ENUM",
  "CASE", "DEFAULT", "IF", "SWITCH", "ELSE", "FOR", "DO", "WHILE", "GOTO",
  "CONTINUE", "BREAK", "STRUCT", "UNION", "RETURN", "SIZEOF", "CTE_OR",
  "CTE_AND", "ELIPSIS", "IGUAL_IGUAL", "DISTINTO", "MENOR_IGUAL",
  "MAYOR_IGUAL", "CORR_DER", "CORR_IZQ", "MAS_MAS", "MENOS_MENOS",
  "FLECHA", "POR_IGUAL", "DIV_IGUAL", "MAS_IGUAL", "MENOS_IGUAL",
  "MOD_IGUAL", "CORR_DER_IGUAL", "CORR_IZQ_IGUAL", "Y_IGUAL", "POT_IGUAL",
  "O_IGUAL", "IDENTIFICADOR", "LITERAL_CADENA", "CONST_OCTAL",
  "CONST_HEXADECIMAL", "CONST_DECIMAL", "CONST_PTOFLOTANTE",
  "CONST_CARACTER", "NO_RECONOCIDO", "'+'", "'-'", "'*'", "'/'", "'('",
  "IFX", "';'", "'{'", "'}'", "','", "'='", "':'", "')'", "'['", "']'",
  "'t'", "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'",
  "'.'", "$accept", "unidad_de_programa", "no_reconocido",
  "unidad_de_traduccion", "unidad_de_traduccion_no_reconocido",
  "declaracion_externa", "definicion_de_funcion", "declaracion",
  "lista_de_declaracion", "especificadores_de_declaracion",
  "especificador_categoria_almacenamiento", "especificador_de_tipo",
  "calificador_de_tipo", "especificador_estructura_o_union",
  "estructura_o_union", "lista_declaraciones_struct",
  "lista_declaradores_init", "declarador_init", "declaracion_struct",
  "lista_calificador_especificador", "lista_declaradores_struct",
  "declarador_struct", "especificador_enum", "lista_de_enumerador",
  "enumerador", "declarador", "declarador_directo", "apuntador",
  "lista_calificadores_de_tipo", "lista_tipos_de_parametro",
  "lista_de_parametros", "declaracion_parametro",
  "lista_de_identificadores", "lista_de_identificadores_bucle",
  "inicializador", "lista_de_inicializadores", "nombre_de_tipo",
  "declarador_abstracto", "declarador_abstracto_directo", "nombre_typedef",
  "sentencia", "sentencia_etiquetada", "sentencia_expresion",
  "sentencia_compuesta", "lista_de_sentencias", "sentencia_de_seleccion",
  "sentencia_de_iteracion", "sentencia_de_salto", "expresion",
  "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_OR",
  "expresion_logica_AND", "expresion_OR_inclusivo",
  "expresion_OR_exclusivo", "expresion_AND", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_expresiones_argumento", "tipo_identificador", "constante", 0
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
     315,   316,   317,   318,   319,   320,   321,    43,    45,    42,
      47,    40,   322,    59,   123,   125,    44,    61,    58,    41,
      91,    93,   116,    63,   124,    94,    38,    60,    62,    37,
     126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    95,    96,    96,
      97,    98,    98,    99,    99,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   105,   106,   106,   106,   107,
     107,   108,   108,   109,   109,   110,   110,   111,   112,   112,
     112,   112,   113,   113,   114,   114,   114,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   120,   121,   121,   122,
     122,   123,   123,   124,   124,   124,   125,   125,   126,   127,
     127,   127,   128,   128,   129,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   131,   131,   132,   133,
     133,   133,   133,   133,   133,   134,   134,   134,   135,   135,
     136,   136,   136,   136,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   140,
     140,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   144,
     144,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   151,   152,   152,   152,   152,   152,
     153,   153,   153,   154,   154,   154,   155,   155,   155,   155,
     156,   156,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   160,   160,   160,   160,   161,   161,   162,   162,
     163,   163,   163,   163,   163,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     1,     1,     2,
       2,     1,     1,     4,     3,     3,     2,     3,     2,     1,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     2,     3,     1,
       1,     1,     2,     1,     3,     1,     3,     3,     2,     1,
       2,     1,     1,     3,     1,     3,     2,     5,     3,     2,
       1,     3,     1,     3,     2,     1,     1,     3,     4,     3,
       4,     4,     3,     2,     1,     3,     2,     1,     2,     1,
       3,     1,     3,     2,     2,     1,     1,     1,     3,     1,
       3,     4,     1,     3,     2,     1,     1,     2,     1,     3,
       4,     2,     3,     3,     4,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     3,     2,     1,
       4,     2,     3,     3,     1,     2,     5,     7,     5,     5,
       7,     9,     8,     8,     7,     8,     7,     7,     6,     3,
       2,     2,     3,     2,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     4,     1,     2,     2,     2,     2,     4,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     3,     3,
       2,     2,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    27,    28,    29,    30,    31,    37,
      33,    36,    32,    38,    34,    35,    39,    40,    44,    45,
       0,    49,    50,   228,     7,    84,     0,     0,   118,     0,
     229,     0,     5,     8,    11,    12,     0,    22,    24,    26,
      41,     0,    42,     0,    75,     0,    43,    76,   229,     6,
       2,   235,   224,   230,   231,   232,   234,   233,     0,     0,
     222,   223,    69,    87,    86,    83,     0,    59,    61,     0,
      51,     0,     0,    70,    72,     1,     4,   229,     9,    18,
       0,    53,    55,    21,    23,    25,    47,     0,    19,     0,
       0,    16,    74,     0,     0,     0,     0,     0,   210,   211,
     209,     0,   208,   212,   213,     0,   154,   156,   169,   172,
     174,   176,   178,   180,   182,   185,   190,   193,   196,   200,
       0,   202,   214,     3,     0,    88,    85,    77,    58,    60,
      48,    52,     0,     0,    62,    64,    68,     0,     0,    17,
       0,     0,     0,    15,     0,   235,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   131,     0,
      24,    26,   134,   119,   120,   121,     0,   123,   122,   124,
       0,   222,    20,    14,    55,    82,    95,     0,    89,    91,
       0,    97,    96,    79,   171,     0,   200,     0,   206,   204,
     203,   105,     0,     0,   225,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   158,   159,   160,   161,   162,   164,
     163,   165,   166,   167,   168,     0,   205,   221,   220,     0,
       0,     0,     0,     0,    66,    57,     0,     0,    71,    73,
      54,     0,    56,    99,    13,     0,     0,     0,     0,     0,
       0,     0,     0,   222,     0,     0,   150,   151,   153,     0,
     132,     0,   133,   135,   128,     0,     0,     0,    93,   106,
      94,   108,    80,     0,     0,    81,    78,     0,     0,   106,
     104,     0,   155,   173,     0,   175,   177,   179,   181,   183,
     184,   188,   189,   186,   187,   192,   191,   194,   195,   197,
     198,   199,   157,   219,   217,   226,     0,     0,   218,    67,
      63,    65,   102,     0,    46,     0,   127,     0,     0,     0,
       0,     0,     0,   149,   152,   130,   125,   115,     0,     0,
     111,     0,   107,     0,     0,    90,    92,    98,   207,   201,
       0,     0,   216,   215,   100,     0,   126,     0,     0,     0,
       0,     0,     0,     0,   117,   109,   113,   116,     0,   112,
       0,   170,   227,   101,   103,   136,   138,     0,     0,     0,
       0,     0,     0,   139,   114,   110,     0,   148,     0,     0,
       0,     0,     0,     0,     0,   137,   147,   146,     0,   144,
       0,     0,     0,   140,   145,   143,   142,     0,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    48,    31,    32,    33,    34,    35,   159,    36,
      37,    38,    39,    40,    41,    69,    80,    81,    70,    71,
     133,   134,    42,    72,    73,    43,    44,    45,    65,   328,
     178,   179,   180,   181,   242,   313,   192,   329,   271,    46,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   106,
     225,   107,   185,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   306,    60,
      61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -228
static const yytype_int16 yypact[] =
{
     753,   861,   753,   309,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,
      55,  -228,  -228,  -228,  -228,    20,   152,  1280,  -228,    16,
     861,   861,  -228,  -228,  -228,  -228,   144,  1207,  1207,  1207,
    -228,    55,  -228,  1242,  -228,    73,  -228,   104,  -228,   861,
    -228,  -228,  -228,  -228,  -228,  -228,  -228,  -228,  2078,   753,
    -228,  -228,   -39,  -228,  -228,    20,   -26,  1388,  1388,  1315,
    -228,   213,    21,  -228,   -30,  -228,   861,    65,  -228,  -228,
     -25,  -228,   999,  -228,  -228,  -228,     9,   493,  -228,  1242,
     144,  -228,  -228,   969,  1627,  2112,  2146,  2146,  -228,  -228,
    -228,   662,  -228,  -228,  -228,    15,  -228,  -228,   -20,    39,
      11,    23,    45,    72,   -19,   153,   139,    10,  -228,   384,
    2078,   124,  -228,  -228,    55,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  2078,    87,  -228,    90,  -228,    55,  2078,  -228,
     152,  1664,  1242,  -228,  1388,    55,  2078,   147,    62,    84,
     131,  1559,   160,    55,   170,   180,  1698,  -228,  -228,   580,
    1049,  1079,  -228,  -228,  -228,  -228,  1417,  -228,  -228,  -228,
      89,   212,  -228,  -228,   156,  -228,    77,   188,   195,  -228,
     148,  -228,  -228,  -228,  -228,   194,  -228,   662,  -228,  -228,
    -228,   116,   202,  2078,  -228,  2078,  2078,  2078,  2078,  2078,
    2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,  2078,
    2078,  2078,  2078,  2078,  -228,  -228,  -228,  -228,  -228,  -228,
    -228,  -228,  -228,  -228,  -228,  2078,  -228,  -228,  -228,    55,
    1732,  2078,    55,   223,  -228,  -228,   213,  2078,  -228,  -228,
    -228,  1664,  -228,  -228,  -228,  1353,   214,  1559,  2078,  2078,
    1766,   493,   275,   251,  2078,   259,  -228,  -228,  -228,   164,
    -228,  1488,  -228,  -228,  -228,  1559,   783,  1800,  -228,   108,
    -228,   109,  -228,  1129,    55,  -228,  -228,   254,   891,   110,
    -228,  2078,  -228,    39,   136,    11,    23,    45,    72,   -19,
     -19,   153,   153,   153,   153,   139,   139,    10,    10,  -228,
    -228,  -228,  -228,  -228,  -228,  -228,   163,   -47,  -228,  -228,
    -228,  -228,  -228,   242,  -228,  1559,  -228,   173,   178,  1837,
     186,   264,   184,  -228,  -228,  -228,  -228,  -228,   257,   258,
    -228,   260,   109,  1164,  1871,  -228,  -228,  -228,  -228,  -228,
    2078,  2078,  -228,  -228,  -228,  1593,  -228,  1559,  1559,  1908,
     200,  1942,  2078,  1559,  -228,  -228,  -228,  -228,   263,  -228,
     265,  -228,  -228,  -228,  -228,   312,  -228,  1559,   201,  1976,
    2010,   210,   233,  -228,  -228,  -228,  1559,  -228,  1559,  1559,
     234,  1559,   235,  2044,   266,  -228,  -228,  -228,  1559,  -228,
    1559,  1559,   240,  -228,  -228,  -228,  -228,  1559,  -228
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -228,    19,    13,    24,  -228,   -12,  -228,    -1,     3,   -32,
    -228,    48,    33,  -228,  -228,   206,  -228,   205,   -59,   -35,
    -228,   115,  -228,   230,   218,     2,   -41,   -22,  -228,   -85,
    -228,    83,  -228,  -228,  -227,  -228,   171,  -109,  -160,  -228,
      79,  -228,  -228,    41,   203,  -228,  -228,  -228,   -49,  -119,
    -228,   -76,    18,  -228,   165,   162,   166,   167,   161,   121,
      91,   117,   118,  -108,   211,  -228,  -228,   360,  -228,     0,
    -228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      47,    47,    47,    64,    92,    83,    84,    85,   177,   105,
     131,    90,   226,    30,   312,    30,    75,   195,   184,    78,
      62,    50,   243,   203,   204,    49,    47,    74,    66,   193,
      47,    47,   128,   129,   343,   124,    47,    78,    82,    18,
      19,    86,    88,   126,    77,    47,    89,   138,   139,    47,
      90,   140,   105,   127,    76,    90,   184,    90,    63,    47,
      68,   176,   184,   196,    78,   -10,   191,   270,   205,   206,
     184,    47,    30,   135,   282,    67,    47,   197,   123,   211,
     212,    88,   280,   144,    91,   142,    88,   171,   172,    25,
      47,   193,   174,   182,   194,   198,   136,   137,   125,   213,
      68,    68,    68,   299,   300,   301,   302,   259,   199,   332,
      90,   305,   201,   202,    23,    67,    67,    67,   364,   332,
     161,    24,   243,   143,    74,   128,   129,    90,    84,    85,
     173,   200,    23,   248,    68,   160,    23,    74,   105,    24,
      47,   172,   174,    24,    26,    62,    25,   284,   266,    67,
     234,   253,   191,   255,   269,   249,   239,   267,   172,   253,
     235,   184,   264,   236,   246,   193,   253,    23,   237,   279,
     227,   228,   229,   339,    24,    93,    47,    68,   268,   266,
     333,   278,   307,   244,    94,    25,   131,   278,   267,   334,
     267,   184,    67,   161,   161,   230,   267,   207,   208,   317,
     318,   320,   250,    23,   231,   322,   209,   210,   160,   160,
      24,    23,   193,    25,   340,    26,   232,    79,    24,    90,
      68,    25,   362,    26,   274,   247,   243,   275,    92,   303,
     252,   254,   308,   141,   176,    67,    47,   324,   135,   341,
     193,   176,   342,   256,   269,   263,   176,   253,   358,   193,
      88,   253,   347,   257,   193,   311,   279,   348,   184,   351,
     193,   253,   193,   353,   361,   253,    47,   272,    66,    47,
     350,   273,    23,   369,   337,   276,   193,   193,    68,    24,
     378,   281,    25,   383,    26,   331,   193,   -72,   -72,   138,
     265,   132,   315,    67,   291,   292,   293,   294,   309,   137,
     368,   176,   371,   372,   321,   186,   188,   189,   190,   193,
     193,   193,   384,   388,   390,   253,   193,   344,   345,   397,
     380,   382,   289,   290,   295,   296,   316,   297,   298,   265,
      51,   186,   323,   338,   392,   352,   354,   355,   376,   393,
     263,   356,   374,   186,   326,   240,   375,   253,   253,   186,
     245,   310,   360,   253,   233,   238,   336,   186,   277,   285,
     283,   288,   261,    59,   286,     0,   287,   253,    23,    52,
      53,    54,    55,    56,    57,    24,   253,     0,   253,   253,
      58,   253,     0,     0,     0,     0,     0,     0,   253,     0,
     253,   253,     0,     0,   346,     0,     0,   253,     0,     0,
       0,     0,     0,     0,     0,     0,   186,     0,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   186,   186,   186,     0,   365,   366,     0,     0,
       0,     0,   373,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,     0,     0,     0,   377,     0,   186,     0,
       0,     0,     0,     0,     0,   385,     0,   386,   387,     0,
     389,   224,     0,     0,     0,     0,     0,   394,     0,   395,
     396,     0,     0,     0,     0,     0,   398,     0,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   186,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   145,   146,   147,   148,   149,     0,
     150,   151,   152,   153,   154,   155,    21,    22,   156,    95,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
      97,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,   186,    23,    52,    53,    54,    55,    56,    57,    24,
      98,    99,   100,     0,   101,     0,   157,    87,   158,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,   102,
       0,     0,     0,   103,   104,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   145,   146,   147,   148,   149,     0,   150,   151,   152,
     153,   154,   155,    21,    22,   156,    95,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      52,    53,    54,    55,    56,    57,    24,    98,    99,   100,
       0,   101,     0,   157,    87,   260,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,   102,     0,     0,     0,
     103,   104,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    52,    53,    54,    55,    56,    57,    24,    98,
      99,   100,     0,   101,     0,     0,    27,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,   102,     0,
       0,     0,   103,   104,     1,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,    21,    22,     0,    24,
       0,     0,    25,     0,    26,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    25,     0,   266,     0,     0,    27,     0,     0,
       0,     0,   327,   267,     0,    28,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,    21,    22,     0,    24,     0,     0,
      25,     0,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,   278,     0,     0,    27,     0,     0,     0,     0,
     327,   267,     0,    28,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,    21,    22,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,   175,     0,
       0,    28,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,    87,     0,     0,   141,     0,     0,     0,
       0,    28,    21,    22,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     0,     0,     0,   -59,     0,     0,
       0,    28,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,    27,     0,     0,     0,   -61,     0,     0,
       0,    28,    21,    22,     0,     0,     0,     0,   335,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,     0,
       0,    28,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    27,     0,
      21,    22,     0,   357,     0,     0,    28,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    27,     0,     0,     0,     0,     0,     0,     0,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,    87,     0,     0,     0,
       0,     0,     0,     0,    28,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,    23,
       0,     0,     0,     0,     0,     0,    24,     0,    21,    22,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,    28,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,    27,
     130,     0,     0,     0,     0,     0,     0,    28,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,    27,   314,     0,
       0,     0,     0,     0,     0,    28,     0,     0,    51,   146,
     147,   148,   149,     0,   150,   151,   152,   153,   154,   155,
       0,     0,   156,    95,     0,     0,     0,     0,     0,     0,
       0,     0,    27,    96,    97,     0,     0,     0,     0,     0,
      28,     0,     0,     0,     0,     0,    23,    52,    53,    54,
      55,    56,    57,    24,    98,    99,   100,     0,   101,     0,
     157,   251,   262,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,   103,   104,    51,
     146,   147,   148,   149,     0,   150,   151,   152,   153,   154,
     155,     0,     0,   156,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    96,    97,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    52,    53,
      54,    55,    56,    57,    24,    98,    99,   100,     0,   101,
       0,   157,   251,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   102,     0,     0,     0,   103,   104,
      51,   146,   147,   148,   149,     0,   150,   151,   152,   153,
     154,   155,     0,     0,   156,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,    97,     0,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,    23,    52,
      53,    54,    55,    56,    57,    24,    98,    99,   100,    95,
     101,     0,   157,   251,     0,     0,     0,     0,     0,    96,
      97,     0,     0,     0,     0,   102,     0,     0,    51,   103,
     104,     0,    23,    52,    53,    54,    55,    56,    57,    24,
      98,    99,   100,    95,   101,     0,     0,   241,   363,     0,
       0,     0,     0,    96,    97,     0,     0,     0,     0,   102,
       0,     0,     0,   103,   104,    51,    23,    52,    53,    54,
      55,    56,    57,    24,    98,    99,   100,     0,   101,     0,
      95,     0,     0,     0,     0,     0,     0,     0,   183,     0,
      96,    97,     0,   102,     0,     0,     0,   103,   104,    51,
       0,     0,     0,    23,    52,    53,    54,    55,    56,    57,
      24,    98,    99,   100,    95,   101,     0,     0,   241,     0,
       0,     0,     0,     0,    96,    97,     0,     0,     0,     0,
     102,     0,     0,    51,   103,   104,     0,    23,    52,    53,
      54,    55,    56,    57,    24,    98,    99,   100,    95,   101,
       0,   258,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,     0,   102,     0,     0,    51,   103,   104,
       0,    23,    52,    53,    54,    55,    56,    57,    24,    98,
      99,   100,    95,   101,     0,     0,     0,     0,     0,     0,
       0,   304,    96,    97,     0,     0,     0,     0,   102,     0,
       0,    51,   103,   104,     0,    23,    52,    53,    54,    55,
      56,    57,    24,    98,    99,   100,    95,   101,     0,   319,
       0,     0,     0,     0,     0,     0,    96,    97,     0,     0,
       0,     0,   102,     0,     0,     0,   103,   104,    51,    23,
      52,    53,    54,    55,    56,    57,    24,    98,    99,   100,
       0,   101,     0,    95,     0,     0,     0,     0,     0,     0,
       0,   330,     0,    96,    97,     0,   102,     0,     0,     0,
     103,   104,    51,     0,     0,     0,    23,    52,    53,    54,
      55,    56,    57,    24,    98,    99,   100,    95,   101,     0,
     349,     0,     0,     0,     0,     0,     0,    96,    97,     0,
       0,     0,     0,   102,     0,     0,     0,   103,   104,    51,
      23,    52,    53,    54,    55,    56,    57,    24,    98,    99,
     100,     0,   101,     0,    95,     0,     0,     0,     0,     0,
       0,     0,   359,     0,    96,    97,     0,   102,     0,     0,
       0,   103,   104,    51,     0,     0,     0,    23,    52,    53,
      54,    55,    56,    57,    24,    98,    99,   100,    95,   101,
       0,     0,     0,     0,     0,     0,     0,   367,    96,    97,
       0,     0,     0,     0,   102,     0,     0,    51,   103,   104,
       0,    23,    52,    53,    54,    55,    56,    57,    24,    98,
      99,   100,    95,   101,     0,   370,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,     0,     0,   102,     0,
       0,    51,   103,   104,     0,    23,    52,    53,    54,    55,
      56,    57,    24,    98,    99,   100,    95,   101,     0,     0,
       0,     0,     0,     0,     0,   379,    96,    97,     0,     0,
       0,     0,   102,     0,     0,    51,   103,   104,     0,    23,
      52,    53,    54,    55,    56,    57,    24,    98,    99,   100,
      95,   101,     0,     0,     0,     0,     0,     0,     0,   381,
      96,    97,     0,     0,     0,     0,   102,     0,     0,    51,
     103,   104,     0,    23,    52,    53,    54,    55,    56,    57,
      24,    98,    99,   100,    95,   101,     0,     0,     0,     0,
       0,     0,     0,   391,    96,    97,     0,     0,     0,     0,
     102,     0,     0,    51,   103,   104,     0,    23,    52,    53,
      54,    55,    56,    57,    24,    98,    99,   100,    95,   101,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,     0,   102,     0,     0,    51,   103,   104,
       0,    23,    52,    53,    54,    55,    56,    57,    24,    98,
      99,   100,    95,   187,     0,     0,     0,     0,     0,     0,
       0,     0,    96,    97,     0,     0,     0,     0,   102,     0,
       0,     0,   103,   104,     0,    23,    52,    53,    54,    55,
      56,    57,    24,    98,    99,   100,     0,    58,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   102,     0,     0,     0,   103,   104
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    25,    45,    37,    38,    39,    93,    58,
      69,    43,   120,     0,   241,     2,     0,    37,    94,    31,
      20,     2,   141,    42,    43,     1,    26,    27,    26,    76,
      30,    31,    67,    68,    81,    74,    36,    49,    36,    19,
      20,    41,    43,    65,    31,    45,    43,    77,    73,    49,
      82,    76,   101,    79,    30,    87,   132,    89,    25,    59,
      27,    93,   138,    83,    76,     0,   101,   176,    87,    88,
     146,    71,    59,    71,   193,    27,    76,    38,    59,    69,
      70,    82,   191,    74,    43,    82,    87,    87,    89,    69,
      90,    76,    90,    93,    79,    84,    75,    76,    65,    89,
      67,    68,    69,   211,   212,   213,   225,   156,    85,   269,
     142,   230,    40,    41,    59,    67,    68,    69,   345,   279,
      87,    66,   241,    82,   124,   160,   161,   159,   160,   161,
      89,    86,    59,    71,   101,    87,    59,   137,   187,    66,
     140,   142,   140,    66,    71,   145,    69,   196,    71,   101,
     132,   151,   187,   153,   176,    71,   138,    80,   159,   159,
      73,   237,    73,    76,   146,    76,   166,    59,    78,   191,
      46,    47,    48,   281,    66,    71,   176,   144,   176,    71,
      71,    71,   231,   142,    80,    69,   245,    71,    80,    80,
      80,   267,   144,   160,   161,    71,    80,    44,    45,   248,
     249,   250,    71,    59,    80,   254,    67,    68,   160,   161,
      66,    59,    76,    69,    78,    71,    92,    73,    66,   251,
     187,    69,   341,    71,    76,    78,   345,    79,   269,   229,
     151,    71,   232,    77,   266,   187,   236,    73,   236,    76,
      76,   273,    79,    73,   266,   166,   278,   247,   333,    76,
     251,   251,    79,    73,    76,   237,   278,    79,   334,    73,
      76,   261,    76,    79,   340,   265,   266,    79,   266,   269,
     319,    76,    59,    73,   274,    81,    76,    76,   245,    66,
      79,    79,    69,    73,    71,   267,    76,    75,    76,    77,
      78,    78,    78,   245,   203,   204,   205,   206,    75,    76,
     349,   333,   351,   352,    29,    94,    95,    96,    97,    76,
      76,    76,    79,    79,    79,   315,    76,    75,    76,    79,
     369,   370,   201,   202,   207,   208,   247,   209,   210,    78,
      21,   120,    73,    79,   383,    71,    79,    79,    26,    73,
     261,    81,    79,   132,   265,   140,    81,   347,   348,   138,
     144,   236,   334,   353,   124,   137,   273,   146,   187,   197,
     195,   200,   159,     3,   198,    -1,   199,   367,    59,    60,
      61,    62,    63,    64,    65,    66,   376,    -1,   378,   379,
      71,   381,    -1,    -1,    -1,    -1,    -1,    -1,   388,    -1,
     390,   391,    -1,    -1,   315,    -1,    -1,   397,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   195,    -1,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    -1,   347,   348,    -1,    -1,
      -1,    -1,   353,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,   367,    -1,   237,    -1,
      -1,    -1,    -1,    -1,    -1,   376,    -1,   378,   379,    -1,
     381,    77,    -1,    -1,    -1,    -1,    -1,   388,    -1,   390,
     391,    -1,    -1,    -1,    -1,    -1,   397,    -1,   267,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   281,    -1,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,   334,    -1,    -1,    -1,    -1,
      -1,   340,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    -1,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    -1,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,     1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    33,    34,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    69,    -1,    71,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    80,    -1,    82,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    33,    34,    -1,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      79,    80,    -1,    82,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    33,    34,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    82,    -1,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,
      -1,    82,    33,    34,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    82,    -1,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    82,    33,    34,    -1,    -1,    -1,    -1,    39,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,
      33,    34,    -1,    79,    -1,    -1,    82,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    66,    -1,    33,    34,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    46,    47,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    -1,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      -1,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    36,
      71,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,
      91,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    36,    71,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    21,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      46,    47,    -1,    86,    -1,    -1,    -1,    90,    91,    21,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    36,    71,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    21,    90,    91,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    36,    71,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    36,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    21,    90,    91,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    36,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    46,    47,    -1,    86,    -1,    -1,    -1,
      90,    91,    21,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    36,    71,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    71,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    46,    47,    -1,    86,    -1,    -1,
      -1,    90,    91,    21,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    36,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    46,    47,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    36,    71,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    21,    90,    91,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    36,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    46,    47,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    21,    90,    91,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      36,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      46,    47,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,
      90,    91,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    36,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    46,    47,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    21,    90,    91,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    36,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    36,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    66,    69,    71,    74,    82,    94,
      95,    96,    97,    98,    99,   100,   102,   103,   104,   105,
     106,   107,   115,   118,   119,   120,   132,   162,    95,    96,
      94,    21,    60,    61,    62,    63,    64,    65,    71,   160,
     162,   163,   162,   105,   120,   121,   118,   104,   105,   108,
     111,   112,   116,   117,   162,     0,    96,    95,    98,    73,
     109,   110,   118,   102,   102,   102,   162,    74,   100,   101,
     102,   136,   119,    71,    80,    36,    46,    47,    67,    68,
      69,    71,    86,    90,    91,   141,   142,   144,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,    94,    74,   105,   120,    79,   112,   112,
      75,   111,    78,   113,   114,   118,    75,    76,    77,    73,
      76,    77,   101,   136,    74,    21,    22,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    35,    73,    75,   101,
     104,   105,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   162,   100,   136,   118,    79,   102,   122,   123,   124,
     125,   126,   162,    81,   144,   145,   157,    71,   157,   157,
     157,   112,   129,    76,    79,    37,    83,    38,    84,    85,
      86,    40,    41,    42,    43,    87,    88,    44,    45,    67,
      68,    69,    70,    89,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    77,   143,   156,    46,    47,    48,
      71,    80,    92,   116,   145,    73,    76,    78,   117,   145,
     110,    74,   127,   142,   136,   108,   145,    78,    71,    71,
      71,    74,   133,   162,    71,   162,    73,    73,    73,   141,
      75,   137,    75,   133,    73,    78,    71,    80,   118,   120,
     130,   131,    79,    76,    76,    79,    81,   129,    71,   120,
     130,    79,   142,   147,   141,   148,   149,   150,   151,   152,
     152,   153,   153,   153,   153,   154,   154,   155,   155,   156,
     156,   156,   142,   162,    79,   142,   161,   141,   162,    75,
     114,   145,   127,   128,    75,    78,   133,   141,   141,    73,
     141,    29,   141,    73,    73,    75,   133,    79,   122,   130,
      81,   145,   131,    71,    80,    39,   124,   162,    79,   156,
      78,    76,    79,    81,    75,    76,   133,    79,    79,    73,
     141,    73,    71,    79,    79,    79,    81,    79,   122,    81,
     145,   144,   142,    75,   127,   133,   133,    79,   141,    73,
      73,   141,   141,   133,    79,    81,    26,   133,    79,    79,
     141,    79,   141,    73,    79,   133,   133,   133,    79,   133,
      79,    79,   141,    73,   133,   133,   133,    79,   133
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
        case 6:

/* Line 1455 of yacc.c  */
#line 105 "bison.y"
    {yyerrorok;;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 108 "bison.y"
    {agregar_token_no_reconocido(inicializarListaDeTokensNoReconocidos(listaTokensNoReconocidos* lista), (yyvsp[(1) - (1)].idval), yylineno);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 154 "bison.y"
    {aux_tIdentificador=1;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 155 "bison.y"
    {aux_tIdentificador=2;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 156 "bison.y"
    {aux_tIdentificador=3;;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    {aux_tIdentificador=4;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 158 "bison.y"
    {aux_tIdentificador=5;;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 159 "bison.y"
    {aux_tIdentificador=6;;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 160 "bison.y"
    {aux_tIdentificador=7;;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 161 "bison.y"
    {aux_tIdentificador=8;;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 162 "bison.y"
    {aux_tIdentificador=9;;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 240 "bison.y"
    {
                                                                                        variable* var;
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (4)].cval));
                                                                                        var->tipo=aux_tIdentificador;
                                                                                        agregarElemento(listaVariables, var, sizeof(variable);       
                                                                                       ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 246 "bison.y"
    {variable* var; var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)); var->tipo=aux_tIdentificador; agregarElemento(listaVariables, var, sizeof(variable);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 247 "bison.y"
    {
                                                                                        funciones* fun;
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (4)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        fun->params = auxListaParametros
                                                                                       ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 253 "bison.y"
    {
                                                                                        funciones* fun;
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (4)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        parametrosFuncion = (yyvsp[(1) - (4)].cval);
                                                                                       ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 259 "bison.y"
    {
                                                                                        funciones* fun;
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (3)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        parametrosFuncion = (yyvsp[(1) - (3)].cval);
                                                                                       ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 279 "bison.y"
    {
                                                                        variable* var;
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (1)].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof((yyvsp[(1) - (1)].cval)));
                                                                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 285 "bison.y"
    {
                                                                        variable* var;
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (3)].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof((yyvsp[(1) - (3)].cval)));
                                                                        ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 305 "bison.y"
    {variable* var; var->nombre_variable=sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)); agregarElemento(auxListaParametrosSinTipos , var, sizeof((yyvsp[(1) - (1)].cval)));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 309 "bison.y"
    {variable* var; var->nombre_variable=sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)); agregarElemento(auxListaParametrosSinTipos , var, sizeof((yyvsp[(1) - (3)].cval)));;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 530 "bison.y"
    {agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)), aux_tIdentificador);;}
    break;



/* Line 1455 of yacc.c  */
#line 2368 "bison.tab.c"
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
#line 542 "bison.y"

int main (int argc, char **argv)
{

    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivos\n");

        yyin = fopen(argv[1], "r");
        FILE* fpReporte = fopen("reporte.txt", "w+");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        parametosFuncion = "";
        listaVariables = inicializarLista(listaVariables);
        listaFunciones = inicializarLista(listaFunciones);

        printf("Comenzando anlisis lexico y sintactico\n");

        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            crearListadoIdentificadores(fpReporte, identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(fpReporte, identificadores_funciones, "FUNCIONES DECLARADAS");
            crearListadoSentencias     (fpReporte, lista_sentencias,          "SENTENCIAS");
        }

        fclose(fpReporte);
    }

    return 0;
}

int yyerror(const char *msg)
{
	printf("\nFallo el analisis en la linea: %d %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}
