
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
#line 1 "bison.y"

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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNRULES -- Number of states.  */
#define YYNSTATES  387

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
       0,     0,     3,     5,     7,    10,    12,    14,    19,    23,
      27,    30,    34,    37,    39,    42,    45,    47,    50,    52,
      55,    57,    59,    61,    63,    65,    67,    69,    71,    73,
      75,    77,    79,    81,    83,    85,    87,    89,    91,    93,
      95,   101,   104,   108,   110,   112,   114,   117,   119,   123,
     125,   129,   133,   136,   138,   141,   143,   145,   149,   151,
     155,   158,   164,   168,   171,   173,   177,   179,   183,   186,
     188,   190,   194,   199,   203,   208,   213,   217,   220,   222,
     226,   229,   231,   234,   236,   240,   242,   246,   249,   252,
     254,   256,   258,   262,   264,   268,   273,   275,   279,   282,
     284,   286,   289,   291,   295,   300,   303,   307,   311,   316,
     319,   323,   327,   329,   331,   333,   335,   337,   339,   341,
     345,   350,   354,   357,   359,   364,   367,   371,   375,   377,
     380,   386,   394,   400,   406,   414,   424,   433,   442,   450,
     459,   467,   475,   482,   486,   489,   492,   496,   499,   501,
     505,   507,   511,   513,   515,   517,   519,   521,   523,   525,
     527,   529,   531,   533,   535,   541,   543,   545,   549,   551,
     555,   557,   561,   563,   567,   569,   573,   575,   579,   583,
     585,   589,   593,   597,   601,   603,   607,   611,   613,   617,
     621,   623,   627,   631,   635,   637,   642,   644,   647,   650,
     653,   656,   661,   663,   665,   667,   669,   671,   673,   675,
     680,   685,   689,   693,   697,   700,   703,   705,   707,   709,
     713,   715,   719,   721,   723,   725,   727,   729,   731,   733
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      95,     0,    -1,    66,    -1,    96,    -1,    95,    96,    -1,
      97,    -1,    98,    -1,   100,   116,    99,   134,    -1,   116,
      99,   134,    -1,   100,   116,   134,    -1,   116,   134,    -1,
     100,   107,    73,    -1,   100,    73,    -1,    98,    -1,    99,
      98,    -1,   101,   100,    -1,   101,    -1,   102,   100,    -1,
     102,    -1,   103,   100,    -1,   103,    -1,     5,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,    13,    -1,    11,
      -1,    15,    -1,    16,    -1,    12,    -1,    10,    -1,    14,
      -1,    17,    -1,    18,    -1,   104,    -1,   113,    -1,   130,
      -1,    19,    -1,    20,    -1,   105,   160,    74,   106,    75,
      -1,   105,   160,    -1,    74,   106,    75,    -1,    33,    -1,
      34,    -1,   109,    -1,   106,   109,    -1,   108,    -1,   107,
      76,   108,    -1,   116,    -1,   116,    77,   125,    -1,   110,
     111,    73,    -1,   102,   110,    -1,   102,    -1,   103,   110,
      -1,   103,    -1,   112,    -1,   111,    76,   112,    -1,   116,
      -1,   116,    78,   143,    -1,    78,   143,    -1,    21,   160,
      74,   114,    75,    -1,    74,   114,    75,    -1,    21,   160,
      -1,   115,    -1,   114,    76,   115,    -1,   160,    -1,   160,
      77,   143,    -1,   118,   117,    -1,   117,    -1,   160,    -1,
      71,   116,    79,    -1,   160,    80,   143,    81,    -1,   160,
      80,    81,    -1,   160,    71,   120,    79,    -1,   160,    71,
     123,    79,    -1,   160,    71,    79,    -1,    69,   119,    -1,
      69,    -1,    69,   119,   118,    -1,    69,   118,    -1,   103,
      -1,   119,   103,    -1,   121,    -1,   121,    76,    39,    -1,
     122,    -1,   121,    76,   122,    -1,   100,   116,    -1,   100,
     128,    -1,   100,    -1,   160,    -1,   124,    -1,   123,    76,
     160,    -1,   140,    -1,    74,   126,    75,    -1,    74,   126,
      76,    75,    -1,   125,    -1,   126,    76,   125,    -1,   110,
     128,    -1,   110,    -1,   118,    -1,   118,   129,    -1,   129,
      -1,    71,   128,    79,    -1,   129,    80,   143,    81,    -1,
      80,    81,    -1,   129,    80,    81,    -1,    80,   143,    81,
      -1,   129,    71,   120,    79,    -1,    71,    79,    -1,   129,
      71,    79,    -1,    71,   120,    79,    -1,    82,    -1,   132,
      -1,   133,    -1,   134,    -1,   137,    -1,   136,    -1,   138,
      -1,   160,    78,   131,    -1,    22,   143,    78,   131,    -1,
      23,    78,   131,    -1,   139,    73,    -1,    73,    -1,    74,
      99,   135,    75,    -1,    74,    75,    -1,    74,    99,    75,
      -1,    74,   135,    75,    -1,   131,    -1,   135,   131,    -1,
      24,    71,   139,    79,   131,    -1,    24,    71,   139,    79,
     131,    26,   131,    -1,    25,    71,   139,    79,   131,    -1,
      29,    71,   139,    79,   131,    -1,    28,   131,    29,    71,
     139,    79,    73,    -1,    27,    71,   139,    73,   139,    73,
     139,    79,   131,    -1,    27,    71,   139,    73,   139,    73,
      79,   131,    -1,    27,    71,   139,    73,    73,   139,    79,
     131,    -1,    27,    71,   139,    73,    73,    79,   131,    -1,
      27,    71,    73,   139,    73,   139,    79,   131,    -1,    27,
      71,    73,   139,    73,    79,   131,    -1,    27,    71,    73,
      73,   139,    79,   131,    -1,    27,    71,    73,    73,    79,
     131,    -1,    30,   160,    73,    -1,    31,    73,    -1,    32,
      73,    -1,    35,   139,    73,    -1,    35,    73,    -1,   140,
      -1,   139,    76,   140,    -1,   142,    -1,   155,   141,   140,
      -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,    53,
      -1,    55,    -1,    54,    -1,    56,    -1,    57,    -1,    58,
      -1,    77,    -1,   144,    -1,   144,    83,   139,    78,   142,
      -1,   142,    -1,   145,    -1,   144,    37,   145,    -1,   146,
      -1,   145,    38,   146,    -1,   147,    -1,   146,    84,   147,
      -1,   148,    -1,   147,    85,   148,    -1,   149,    -1,   148,
      86,   149,    -1,   150,    -1,   149,    40,   150,    -1,   149,
      41,   150,    -1,   151,    -1,   150,    87,   151,    -1,   150,
      88,   151,    -1,   150,    42,   151,    -1,   150,    43,   151,
      -1,   152,    -1,   151,    45,   152,    -1,   151,    44,   152,
      -1,   153,    -1,   152,    67,   153,    -1,   152,    68,   153,
      -1,   154,    -1,   153,    69,   154,    -1,   153,    70,   154,
      -1,   153,    89,   154,    -1,   155,    -1,    71,   127,    79,
     154,    -1,   157,    -1,    47,   155,    -1,    46,   155,    -1,
     156,   154,    -1,    36,   155,    -1,    36,    71,   127,    79,
      -1,    86,    -1,    69,    -1,    67,    -1,    68,    -1,    90,
      -1,    91,    -1,   158,    -1,   157,    80,   139,    81,    -1,
     157,    71,   159,    79,    -1,   157,    71,    79,    -1,   157,
      92,   160,    -1,   157,    48,   160,    -1,   157,    47,    -1,
     157,    46,    -1,   160,    -1,   161,    -1,    60,    -1,    71,
     139,    79,    -1,   140,    -1,   159,    76,   140,    -1,    59,
      -1,    94,    -1,    61,    -1,    62,    -1,    63,    -1,    65,
      -1,    64,    -1,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   101,   109,   112,   113,   118,   119,   123,   124,   125,
     126,   130,   131,   134,   135,   138,   139,   140,   141,   142,
     143,   147,   148,   149,   150,   151,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   169,   170,
     173,   174,   176,   179,   180,   183,   184,   188,   189,   193,
     194,   198,   202,   203,   204,   205,   209,   210,   214,   215,
     216,   220,   221,   222,   226,   227,   231,   232,   235,   236,
     239,   240,   241,   247,   251,   257,   263,   271,   272,   273,
     274,   278,   279,   283,   290,   299,   300,   304,   305,   306,
     310,   316,   319,   326,   327,   328,   332,   333,   337,   338,
     342,   343,   344,   347,   348,   349,   350,   351,   353,   354,
     355,   356,   359,   363,   364,   365,   366,   367,   368,   372,
     373,   374,   378,   379,   383,   384,   385,   386,   389,   390,
     393,   394,   395,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   410,   411,   412,   413,   414,   417,   418,
     422,   423,   426,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   440,   441,   444,   448,   449,   453,   454,
     457,   458,   461,   462,   465,   466,   469,   470,   471,   475,
     476,   477,   478,   479,   483,   484,   485,   489,   490,   491,
     494,   495,   496,   497,   501,   502,   506,   507,   508,   509,
     510,   511,   514,   515,   516,   517,   518,   519,   522,   523,
     524,   525,   526,   527,   528,   529,   534,   535,   536,   537,
     541,   542,   545,   546,   549,   550,   551,   552,   553,   554
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
  "'.'", "$accept", "no_reconocido", "unidad_de_traduccion",
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
       0,    93,    94,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    99,    99,   100,   100,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   122,   122,
     123,   123,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   128,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   130,   131,   131,   131,   131,   131,   131,   132,
     132,   132,   133,   133,   134,   134,   134,   134,   135,   135,
     136,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   138,   138,   138,   138,   138,   139,   139,
     140,   140,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   142,   142,   143,   144,   144,   145,   145,
     146,   146,   147,   147,   148,   148,   149,   149,   149,   150,
     150,   150,   150,   150,   151,   151,   151,   152,   152,   152,
     153,   153,   153,   153,   154,   154,   155,   155,   155,   155,
     155,   155,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     159,   159,   160,   160,   161,   161,   161,   161,   161,   161
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     3,     2,     1,     2,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     3,     1,     1,     1,     2,     1,     3,     1,
       3,     3,     2,     1,     2,     1,     1,     3,     1,     3,
       2,     5,     3,     2,     1,     3,     1,     3,     2,     1,
       1,     3,     4,     3,     4,     4,     3,     2,     1,     3,
       2,     1,     2,     1,     3,     1,     3,     2,     2,     1,
       1,     1,     3,     1,     3,     4,     1,     3,     2,     1,
       1,     2,     1,     3,     4,     2,     3,     3,     4,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     2,     1,     4,     2,     3,     3,     1,     2,
       5,     7,     5,     5,     7,     9,     8,     8,     7,     8,
       7,     7,     6,     3,     2,     2,     3,     2,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     1,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     4,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     3,     3,     2,     2,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    22,    23,    24,    25,    31,    27,    30,    26,
      32,    28,    29,    33,    34,    38,    39,     0,    43,    44,
     222,     2,    78,     0,     0,   112,   223,     0,     3,     5,
       6,     0,    16,    18,    20,    35,     0,    36,     0,    69,
       0,    37,    70,    63,    81,    80,    77,     0,    53,    55,
       0,    45,     0,     0,    64,    66,     1,     4,    12,     0,
      47,    49,    15,    17,    19,    41,     0,    13,     0,     0,
      10,    68,     0,     0,     0,    82,    79,    71,    52,    54,
      42,    46,     0,     0,    56,    58,    62,     0,     0,    11,
       0,     0,     0,     9,     0,   229,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     218,   224,   225,   226,   228,   227,   204,   205,   203,     0,
     123,   125,   202,   206,   207,     0,    18,    20,   128,   113,
     114,   115,     0,   117,   116,   118,     0,   148,   150,   163,
     166,   168,   170,   172,   174,   176,   179,   184,   187,   190,
     194,     0,   196,   208,   216,   217,    14,     8,    49,    76,
      89,     0,    83,    85,     0,    91,    90,   229,    73,   165,
       0,   194,   216,     0,    60,    51,     0,     0,    65,    67,
      48,     0,    50,    93,     7,     0,     0,     0,     0,     0,
       0,     0,     0,   216,     0,     0,   144,   145,   147,     0,
       0,   200,     0,   198,   197,    99,     0,     0,   126,     0,
     127,   129,   122,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   152,   153,   154,   155,   156,   158,   157,
     159,   160,   161,   162,     0,   199,   215,   214,     0,     0,
       0,     0,     0,     0,     0,    87,   100,    88,   102,    74,
       0,     0,    75,    72,    61,    57,    59,    96,     0,    40,
       0,   121,     0,     0,     0,     0,     0,     0,   143,   146,
       0,     0,   100,    98,     0,   219,   124,   149,   167,     0,
     169,   171,   173,   175,   177,   178,   182,   183,   180,   181,
     186,   185,   188,   189,   191,   192,   193,   151,   213,   211,
     220,     0,     0,   212,   119,   109,     0,     0,   105,     0,
     101,     0,     0,    84,    86,    92,    94,     0,   120,     0,
       0,     0,     0,     0,     0,     0,   201,   195,     0,     0,
     210,   209,   111,   103,   107,   110,     0,   106,     0,    95,
      97,   130,   132,     0,     0,     0,     0,     0,     0,   133,
     164,   221,   108,   104,     0,   142,     0,     0,     0,     0,
       0,     0,     0,   131,   141,   140,     0,   138,     0,     0,
       0,   134,   139,   137,   136,     0,   135
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    26,    27,    28,    29,    67,   125,    69,    32,    33,
      34,    35,    36,    50,    59,    60,    51,    52,    83,    84,
      37,    53,    54,    38,    39,    40,    46,   316,   162,   163,
     164,   165,   182,   268,   206,   317,   258,    41,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   244,   138,
     170,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   311,   172,   155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -251
static const yytype_int16 yypact[] =
{
     757,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,    58,  -251,  -251,
    -251,  -251,    37,    81,  1208,  -251,  -251,   611,  -251,  -251,
    -251,   208,  1133,  1133,  1133,  -251,    58,  -251,  1183,  -251,
       2,  -251,   -18,   -56,  -251,  -251,    37,   -57,  1281,  1281,
     400,  -251,   130,   122,  -251,   -48,  -251,  -251,  -251,    -9,
    -251,   943,  -251,  -251,  -251,   -26,   437,  -251,  1183,   208,
    -251,  -251,   865,  1515,    58,  -251,  -251,  -251,  -251,  -251,
    -251,  -251,  1966,    13,  -251,   -41,  -251,    58,  1966,  -251,
      81,  1552,  1183,  -251,  1281,    58,  1966,   -13,   -12,    48,
      63,  1447,    65,    58,    70,    83,  1586,  2000,  2034,  2034,
    -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,  -251,   640,
    -251,  -251,  -251,  -251,  -251,   524,   973,  1023,  -251,  -251,
    -251,  -251,  1305,  -251,  -251,  -251,    24,  -251,  -251,   -29,
     126,    91,   105,    84,   162,    85,   191,   230,     9,  -251,
     523,  1966,    34,  -251,   147,  -251,  -251,  -251,   136,  -251,
     112,   107,   131,  -251,    54,  -251,  -251,  -251,  -251,  -251,
     134,  -251,  -251,   244,  -251,  -251,   130,  1966,  -251,  -251,
    -251,  1552,  -251,  -251,  -251,  1235,   181,  1447,  1966,  1966,
    1620,   437,   199,   187,  1966,   209,  -251,  -251,  -251,    82,
     640,  -251,  1966,  -251,  -251,    33,   207,    90,  -251,  1376,
    -251,  -251,  -251,  1966,  1966,  1966,  1966,  1966,  1966,  1966,
    1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,  1966,
    1966,  1966,  1966,  -251,  -251,  -251,  -251,  -251,  -251,  -251,
    -251,  -251,  -251,  -251,  1966,  -251,  -251,  -251,    58,  1654,
    1966,    58,  1447,   727,  1688,  -251,    49,  -251,    14,  -251,
    1053,    58,  -251,  -251,  -251,  -251,  -251,  -251,   246,  -251,
    1447,  -251,   101,   109,  1725,   138,   220,   141,  -251,  -251,
     216,   835,    36,  -251,  1966,  -251,  -251,  -251,   126,    73,
      91,   105,    84,   162,    85,    85,   191,   191,   191,   191,
     230,   230,     9,     9,  -251,  -251,  -251,  -251,  -251,  -251,
    -251,   150,   -55,  -251,  -251,  -251,   222,   248,  -251,   218,
      14,  1103,  1759,  -251,  -251,  -251,  -251,  1481,  -251,  1447,
    1447,  1796,   157,  1830,  1966,  1447,  -251,  -251,  1966,  1966,
    -251,  -251,  -251,  -251,  -251,  -251,   249,  -251,   253,  -251,
    -251,   312,  -251,  1447,   170,  1864,  1898,   174,   179,  -251,
    -251,  -251,  -251,  -251,  1447,  -251,  1447,  1447,   193,  1447,
     204,  1932,   266,  -251,  -251,  -251,  1447,  -251,  1447,  1447,
     217,  -251,  -251,  -251,  -251,  1447,  -251
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -251,  -251,  -251,   314,  -251,    20,    -3,    11,  -251,    27,
     309,  -251,  -251,   250,  -251,   252,   -43,   -35,  -251,   167,
    -251,   271,   259,   -19,   -37,   -21,  -251,   -67,  -251,    88,
    -251,  -251,  -179,  -251,   151,  -145,  -250,  -251,   -91,  -251,
    -251,   -22,   227,  -251,  -251,  -251,    16,   -82,  -251,   -54,
     -33,  -251,   140,   144,   139,   143,   146,   103,    18,    99,
     108,  -121,    86,  -251,  -251,  -251,  -251,     0,  -251
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -67
static const yytype_int16 yytable[] =
{
      42,    45,   267,    71,    47,   161,   320,    81,   214,   183,
     192,    31,    61,    78,    79,   257,    70,    43,    74,   169,
      30,   213,    77,    42,    55,    76,   341,    42,   169,    88,
     245,    42,   320,    85,   169,    68,    65,   177,    31,    93,
      42,   211,   169,    62,    63,    64,   157,    30,    94,   174,
     158,    48,    42,    72,   215,   179,    15,    16,    92,   188,
     283,    20,    73,   186,    89,   187,   154,    90,    21,    42,
     184,   158,   166,    23,    55,    48,    48,    48,   230,   231,
     246,   247,   248,   160,   205,   321,   175,    55,   156,   176,
      42,    78,    79,   126,   322,    43,   271,   212,   232,   183,
     213,   193,    22,   195,   281,   249,    22,   281,    20,   304,
     305,   306,   156,   254,   250,    21,   254,    20,   211,   189,
     253,    48,   199,   169,    21,   193,   251,   222,   223,   254,
     261,   287,   193,   262,   190,   207,   194,    63,    64,   256,
      20,   255,    81,   196,   266,   156,    48,    21,   350,   213,
      22,   338,    23,   126,   126,   279,   197,    85,   213,   171,
      42,   314,   307,   337,   216,   205,   213,   310,   171,   285,
     219,    20,   224,   225,   171,   217,    42,   213,    21,   328,
     329,    22,   171,   253,   282,   213,   259,   193,   330,    20,
     218,   193,   254,   201,   203,   204,    21,    86,    87,    22,
     169,    23,   220,   221,   272,   273,   275,   260,    82,   193,
     277,   333,    48,    91,   213,   263,   207,   213,   207,    71,
     335,   319,   -66,   -66,    88,   252,   339,    48,   276,   340,
     355,   289,   256,   213,    47,   226,   227,   171,   351,   352,
     296,   297,   298,   299,   359,   183,   213,   371,   308,   366,
     213,   313,   193,    42,   346,   213,    42,   361,   372,   270,
     282,   325,   365,   171,   160,   252,   312,    20,   169,   213,
     193,   160,   376,   373,    21,   374,   375,    22,   377,    23,
     213,    58,   278,   378,   360,   382,   284,   383,   384,   348,
     332,   334,   160,   213,   386,   336,   385,   228,   229,   344,
     171,   342,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   171,   171,   264,
      87,   326,   327,   294,   295,   300,   301,   343,   362,   193,
     193,    44,   160,    49,   363,   193,   302,   303,   364,   381,
     171,    57,   180,   265,   185,   173,   178,   354,   324,   357,
     358,   280,   209,   193,   288,    75,   291,    49,    49,    49,
     290,   292,     0,     0,   193,   293,   193,   193,     0,   193,
     171,   368,   370,     0,     0,   127,   193,     0,   193,   193,
       0,     0,     0,     0,     0,   193,     0,   380,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,   171,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,     0,   171,     0,     0,     0,    49,     0,
       0,     0,     0,    18,    19,   127,   127,     0,     0,     0,
       0,     0,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    95,    96,
      97,    98,    99,     0,   100,   101,   102,   103,   104,   105,
      18,    19,   106,   107,    24,    80,     0,     0,     0,     0,
       0,     0,    25,   108,   109,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,    20,   110,   111,   112,
     113,   114,   115,    21,   116,   117,   118,     0,   119,    49,
     120,    66,   121,     0,     0,     0,     0,     0,     0,    25,
       0,     0,     0,   122,     0,     0,     0,   123,   124,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    95,    96,    97,    98,    99,
       0,   100,   101,   102,   103,   104,   105,    18,    19,   106,
     107,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,     0,    20,   110,   111,   112,   113,   114,   115,
      21,   116,   117,   118,     0,   119,     0,   120,    66,   208,
     243,     0,     0,     0,     0,     0,    25,     0,     0,     0,
     122,    56,     0,     0,   123,   124,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,    19,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    95,     0,     0,     0,     0,     0,     0,     0,     0,
      20,     0,     0,    18,    19,     0,   107,    21,     0,     0,
      22,     0,    23,     0,     0,    24,   108,   109,     0,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,    20,
     110,   111,   112,   113,   114,   115,    21,   116,   117,   118,
       0,   119,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     0,     0,   122,     0,     0,     0,
     123,   124,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,    19,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
      18,    19,     0,    21,     0,     0,    22,     0,   253,     0,
       0,    24,     0,     0,     0,     0,   315,   254,     0,    25,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,     0,     0,    21,     0,     0,    22,     0,    23,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18,    19,
       0,     0,     0,     0,    22,     0,   281,     0,     0,    24,
       0,     0,     0,     0,   315,   254,     0,    25,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,     0,
       0,    21,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,   159,     0,     0,    25,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    66,     0,     0,
      91,     0,     0,     0,     0,    25,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    24,     0,     0,
       0,   -53,     0,     0,     0,    25,    18,    19,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,   323,     0,     0,     0,     0,    24,     0,     0,
       0,   -55,     0,     0,     0,    25,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,    18,    19,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,   345,     0,     0,    25,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,    18,    19,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    19,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    66,     0,     0,
       0,     0,     0,     0,     0,    25,     0,    20,    18,    19,
       0,     0,     0,     0,    21,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      25,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,     0,     0,     0,     0,     0,     0,    24,
     269,     0,     0,     0,    18,    19,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,   167,    96,    97,    98,
      99,     0,   100,   101,   102,   103,   104,   105,     0,     0,
     106,   107,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   108,   109,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,    20,   110,   111,   112,   113,   114,
     115,    21,   116,   117,   118,     0,   119,     0,   120,   191,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   122,     0,     0,     0,   123,   124,   167,    96,    97,
      98,    99,     0,   100,   101,   102,   103,   104,   105,     0,
       0,   106,   107,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   108,   109,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,   110,   111,   112,   113,
     114,   115,    21,   116,   117,   118,     0,   119,     0,   120,
     191,   286,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   122,     0,     0,     0,   123,   124,   167,    96,
      97,    98,    99,     0,   100,   101,   102,   103,   104,   105,
       0,     0,   106,   107,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   108,   109,     0,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     0,    20,   110,   111,   112,
     113,   114,   115,    21,   116,   117,   118,   107,   119,     0,
     120,   191,     0,     0,     0,     0,     0,   108,   109,     0,
       0,     0,     0,   122,     0,     0,   167,   123,   124,     0,
      20,   110,   111,   112,   113,   114,   115,    21,   116,   117,
     118,   107,   119,     0,     0,   181,   349,     0,     0,     0,
       0,   108,   109,     0,     0,     0,     0,   122,     0,     0,
       0,   123,   124,   167,    20,   110,   111,   112,   113,   114,
     115,    21,   116,   117,   118,     0,   119,     0,   107,     0,
       0,     0,     0,     0,     0,     0,   168,     0,   108,   109,
       0,   122,     0,     0,     0,   123,   124,   167,     0,     0,
       0,    20,   110,   111,   112,   113,   114,   115,    21,   116,
     117,   118,   107,   119,     0,     0,   181,     0,     0,     0,
       0,     0,   108,   109,     0,     0,     0,     0,   122,     0,
       0,   167,   123,   124,     0,    20,   110,   111,   112,   113,
     114,   115,    21,   116,   117,   118,   107,   119,     0,   198,
       0,     0,     0,     0,     0,     0,   108,   109,     0,     0,
       0,     0,   122,     0,     0,   167,   123,   124,     0,    20,
     110,   111,   112,   113,   114,   115,    21,   116,   117,   118,
     107,   119,     0,   274,     0,     0,     0,     0,     0,     0,
     108,   109,     0,     0,     0,     0,   122,     0,     0,   167,
     123,   124,     0,    20,   110,   111,   112,   113,   114,   115,
      21,   116,   117,   118,   107,   119,     0,     0,     0,     0,
       0,     0,     0,   309,   108,   109,     0,     0,     0,     0,
     122,     0,     0,     0,   123,   124,   167,    20,   110,   111,
     112,   113,   114,   115,    21,   116,   117,   118,     0,   119,
       0,   107,     0,     0,     0,     0,     0,     0,     0,   318,
       0,   108,   109,     0,   122,     0,     0,     0,   123,   124,
     167,     0,     0,     0,    20,   110,   111,   112,   113,   114,
     115,    21,   116,   117,   118,   107,   119,     0,   331,     0,
       0,     0,     0,     0,     0,   108,   109,     0,     0,     0,
       0,   122,     0,     0,     0,   123,   124,   167,    20,   110,
     111,   112,   113,   114,   115,    21,   116,   117,   118,     0,
     119,     0,   107,     0,     0,     0,     0,     0,     0,     0,
     347,     0,   108,   109,     0,   122,     0,     0,     0,   123,
     124,   167,     0,     0,     0,    20,   110,   111,   112,   113,
     114,   115,    21,   116,   117,   118,   107,   119,     0,     0,
       0,     0,     0,     0,     0,   353,   108,   109,     0,     0,
       0,     0,   122,     0,     0,   167,   123,   124,     0,    20,
     110,   111,   112,   113,   114,   115,    21,   116,   117,   118,
     107,   119,     0,   356,     0,     0,     0,     0,     0,     0,
     108,   109,     0,     0,     0,     0,   122,     0,     0,   167,
     123,   124,     0,    20,   110,   111,   112,   113,   114,   115,
      21,   116,   117,   118,   107,   119,     0,     0,     0,     0,
       0,     0,     0,   367,   108,   109,     0,     0,     0,     0,
     122,     0,     0,   167,   123,   124,     0,    20,   110,   111,
     112,   113,   114,   115,    21,   116,   117,   118,   107,   119,
       0,     0,     0,     0,     0,     0,     0,   369,   108,   109,
       0,     0,     0,     0,   122,     0,     0,   167,   123,   124,
       0,    20,   110,   111,   112,   113,   114,   115,    21,   116,
     117,   118,   107,   119,     0,     0,     0,     0,     0,     0,
       0,   379,   108,   109,     0,     0,     0,     0,   122,     0,
       0,   167,   123,   124,     0,    20,   110,   111,   112,   113,
     114,   115,    21,   116,   117,   118,   107,   119,     0,     0,
       0,     0,     0,     0,     0,     0,   108,   109,     0,     0,
       0,     0,   122,     0,     0,   167,   123,   124,     0,    20,
     110,   111,   112,   113,   114,   115,    21,   116,   117,   118,
     107,   200,     0,     0,     0,     0,     0,     0,     0,     0,
     108,   109,     0,     0,     0,     0,   122,     0,     0,     0,
     123,   124,     0,    20,   110,   111,   112,   113,   114,   115,
      21,   116,   117,   118,     0,   202,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122,     0,     0,     0,   123,   124
};

static const yytype_int16 yycheck[] =
{
       0,    22,   181,    40,    23,    72,   256,    50,    37,    91,
     101,     0,    31,    48,    49,   160,    38,    17,    74,    73,
       0,    76,    79,    23,    24,    46,    81,    27,    82,    77,
     151,    31,   282,    52,    88,    38,    36,    78,    27,    61,
      40,   132,    96,    32,    33,    34,    68,    27,    74,    82,
      69,    24,    52,    71,    83,    88,    19,    20,    61,    71,
     205,    59,    80,    96,    73,    78,    66,    76,    66,    69,
      92,    90,    72,    71,    74,    48,    49,    50,    69,    70,
      46,    47,    48,    72,   119,    71,    73,    87,    68,    76,
      90,   126,   127,    66,    80,    95,   187,    73,    89,   181,
      76,   101,    69,   103,    71,    71,    69,    71,    59,   230,
     231,   232,    92,    80,    80,    66,    80,    59,   209,    71,
      71,    94,   106,   177,    66,   125,    92,    42,    43,    80,
      76,   213,   132,    79,    71,   119,    71,   126,   127,   160,
      59,   160,   185,    73,   177,   125,   119,    66,   327,    76,
      69,    78,    71,   126,   127,    73,    73,   176,    76,    73,
     160,   252,   244,   284,    38,   200,    76,   249,    82,    79,
      86,    59,    87,    88,    88,    84,   176,    76,    66,   270,
      79,    69,    96,    71,   205,    76,    79,   187,    79,    59,
      85,   191,    80,   107,   108,   109,    66,    75,    76,    69,
     254,    71,    40,    41,   188,   189,   190,    76,    78,   209,
     194,    73,   185,    77,    76,    81,   200,    76,   202,   256,
      79,   254,    75,    76,    77,    78,    76,   200,    29,    79,
      73,   215,   253,    76,   253,    44,    45,   151,   329,   330,
     222,   223,   224,   225,   335,   327,    76,    73,   248,    79,
      76,   251,   252,   253,   321,    76,   256,   339,    79,    78,
     281,   261,   353,   177,   253,    78,   250,    59,   322,    76,
     270,   260,    79,   364,    66,   366,   367,    69,   369,    71,
      76,    73,    73,    79,   338,   376,    79,   378,   379,   322,
     274,    71,   281,    76,   385,    79,    79,    67,    68,    81,
     214,    79,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,    75,
      76,    75,    76,   220,   221,   226,   227,    79,    79,   329,
     330,    22,   321,    24,    81,   335,   228,   229,    26,    73,
     254,    27,    90,   176,    94,    74,    87,   331,   260,   333,
     334,   200,   125,   353,   214,    46,   217,    48,    49,    50,
     216,   218,    -1,    -1,   364,   219,   366,   367,    -1,   369,
     284,   355,   356,    -1,    -1,    66,   376,    -1,   378,   379,
      -1,    -1,    -1,    -1,    -1,   385,    -1,   371,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,   322,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,   338,    -1,    -1,    -1,   119,    -1,
      -1,    -1,    -1,    33,    34,   126,   127,    -1,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   185,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,   200,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    -1,    73,    74,    75,
      77,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      86,     0,    -1,    -1,    90,    91,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    33,    34,    -1,    36,    66,    -1,    -1,
      69,    -1,    71,    -1,    -1,    74,    46,    47,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      33,    34,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,    80,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    71,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    -1,    69,    -1,    71,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    80,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    82,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    33,    34,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    82,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    33,    34,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    59,    33,    34,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    -1,    33,    34,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    -1,    73,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    36,    71,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    36,    71,    -1,    -1,    74,    75,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    21,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,    46,    47,
      -1,    86,    -1,    -1,    -1,    90,    91,    21,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    36,    71,    -1,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    21,    90,    91,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    36,    71,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    21,    90,    91,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      36,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,
      90,    91,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    36,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    46,    47,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    21,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    46,    47,    -1,    86,    -1,    -1,    -1,    90,    91,
      21,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    36,    71,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    21,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    46,    47,    -1,    86,    -1,    -1,    -1,    90,
      91,    21,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    36,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    46,    47,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    21,    90,    91,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      36,    71,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,
      90,    91,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    36,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    46,    47,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    21,    90,    91,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    36,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    46,    47,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    36,    71,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    46,    47,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    21,    90,    91,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    36,    71,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    21,    90,    91,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      36,    71,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    33,    34,
      59,    66,    69,    71,    74,    82,    94,    95,    96,    97,
      98,   100,   101,   102,   103,   104,   105,   113,   116,   117,
     118,   130,   160,   160,   103,   118,   119,   116,   102,   103,
     106,   109,   110,   114,   115,   160,     0,    96,    73,   107,
     108,   116,   100,   100,   100,   160,    74,    98,    99,   100,
     134,   117,    71,    80,    74,   103,   118,    79,   110,   110,
      75,   109,    78,   111,   112,   116,    75,    76,    77,    73,
      76,    77,    99,   134,    74,    21,    22,    23,    24,    25,
      27,    28,    29,    30,    31,    32,    35,    36,    46,    47,
      60,    61,    62,    63,    64,    65,    67,    68,    69,    71,
      73,    75,    86,    90,    91,    99,   102,   103,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   142,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   160,   161,    98,   134,   116,    79,
     100,   120,   121,   122,   123,   124,   160,    21,    81,   142,
     143,   155,   160,   114,   143,    73,    76,    78,   115,   143,
     108,    74,   125,   140,   134,   106,   143,    78,    71,    71,
      71,    74,   131,   160,    71,   160,    73,    73,    73,   139,
      71,   155,    71,   155,   155,   110,   127,   139,    75,   135,
      75,   131,    73,    76,    37,    83,    38,    84,    85,    86,
      40,    41,    42,    43,    87,    88,    44,    45,    67,    68,
      69,    70,    89,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    77,   141,   154,    46,    47,    48,    71,
      80,    92,    78,    71,    80,   116,   118,   128,   129,    79,
      76,    76,    79,    81,    75,   112,   143,   125,   126,    75,
      78,   131,   139,   139,    73,   139,    29,   139,    73,    73,
     127,    71,   118,   128,    79,    79,    75,   140,   145,   139,
     146,   147,   148,   149,   150,   150,   151,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   140,   160,    79,
     140,   159,   139,   160,   131,    79,   120,   128,    81,   143,
     129,    71,    80,    39,   122,   160,    75,    76,   131,    79,
      79,    73,   139,    73,    71,    79,    79,   154,    78,    76,
      79,    81,    79,    79,    81,    79,   120,    81,   143,    75,
     125,   131,   131,    79,   139,    73,    73,   139,   139,   131,
     142,   140,    79,    81,    26,   131,    79,    79,   139,    79,
     139,    73,    79,   131,   131,   131,    79,   131,    79,    79,
     139,    73,   131,   131,   131,    79,   131
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
        case 2:

/* Line 1455 of yacc.c  */
#line 109 "bison.y"
    {agregar_token_no_reconocido(listaTokensNR, (yyvsp[(1) - (1)].idval) ,yylineno);;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 155 "bison.y"
    {aux_tIdentificador=1;;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 156 "bison.y"
    {aux_tIdentificador=2;;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    {aux_tIdentificador=3;;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 158 "bison.y"
    {aux_tIdentificador=4;;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 159 "bison.y"
    {aux_tIdentificador=5;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 160 "bison.y"
    {aux_tIdentificador=6;;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 161 "bison.y"
    {aux_tIdentificador=7;;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 162 "bison.y"
    {aux_tIdentificador=8;;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 163 "bison.y"
    {aux_tIdentificador=9;;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 241 "bison.y"
    {
                                                                                        variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (4)].cval));
                                                                                        var->tipo=aux_tIdentificador;
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));       
                                                                                       ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 247 "bison.y"
    {variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)); 
                                                                                        var->tipo= aux_tIdentificador; 
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 251 "bison.y"
    {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (4)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        fun->params = inicializarLista(auxListaParametrosConTipos);
                                                                                       ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 257 "bison.y"
    {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (4)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 263 "bison.y"
    {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[(1) - (3)].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 283 "bison.y"
    {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = calloc(strlen((yyvsp[(1) - (1)].cval)), sizeof(char));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (1)].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof(variable));  //TODO: Segfault
                                                                        ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 290 "bison.y"
    {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (3)].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof((yyvsp[(1) - (3)].cval)));
                                                                        ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 310 "bison.y"
    {
                                                                                    variable* var = malloc(sizeof(variable)); 
                                                                                    var->nombre_variable = calloc(strlen((yyvsp[(1) - (1)].cval)), sizeof(char));
                                                                                    var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)); 
                                                                                    agregarElemento(auxListaParametrosSinTipos , var, sizeof(variable));
                                                                                    ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 319 "bison.y"
    {
                                                                                    variable* var = malloc(sizeof(variable)); 
                                                                                    var->nombre_variable = calloc(strlen((yyvsp[(1) - (3)].cval)), sizeof(char));
                                                                                    var->nombre_variable = sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)); 
                                                                                    agregarElemento(auxListaParametrosSinTipos , var, sizeof(variable));
                                                                                   ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 545 "bison.y"
    {/*agregarIdentificador(listaVariables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/;}
    break;



/* Line 1455 of yacc.c  */
#line 2341 "bison.tab.c"
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
#line 557 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        yydebug = 1;
    #endif

    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivos\n");
        yyin = fopen(argv[1], "r");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        parametrosFuncion = "";
        listaVariables = inicializarLista(listaVariables);
        listaFunciones = inicializarLista(listaFunciones);
        auxListaParametrosConTipos = inicializarLista(auxListaParametrosConTipos);
        auxListaParametrosSinTipos = inicializarLista(auxListaParametrosSinTipos);
        listaTokensNR = inicializarListaDeTokensNoReconocidos(listaTokensNR);

        printf("Comenzando anlisis lexico y sintactico\n");


        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            imprimirVariables(listaVariables);
            imprimirFunciones(listaFunciones);
            imprimirTokensNoReconocidos(listaTokensNR);
        } else {
            printf("Analisis incorrecto\n");
        }

    }

    return 0;
}

int yyerror(const char *msg)
{
	printf("\nFallo el analisis en la linea: %d %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}
