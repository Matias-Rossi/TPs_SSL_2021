
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
     IFX = 321
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "bison.y"

   int ival;
   double dval;
   char* cval;



/* Line 214 of yacc.c  */
#line 201 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 213 "bison.tab.c"

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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNRULES -- Number of states.  */
#define YYNSTATES  405

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,     2,     2,     2,    88,    82,     2,
      73,    74,    77,    85,    70,    86,    91,    87,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    67,
      83,    71,    84,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    75,     2,    76,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    78,     2,     2,     2,
       2,     2,     2,    68,    80,    69,    89,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    15,    17,    20,    22,
      24,    29,    33,    37,    40,    44,    48,    51,    53,    56,
      59,    61,    64,    66,    69,    71,    73,    75,    77,    79,
      81,    83,    85,    87,    89,    91,    93,    95,    97,    99,
     101,   103,   105,   107,   109,   115,   118,   122,   124,   126,
     128,   131,   133,   137,   139,   143,   147,   151,   154,   156,
     159,   161,   163,   167,   169,   173,   176,   182,   186,   189,
     191,   195,   197,   201,   204,   206,   208,   212,   217,   221,
     226,   231,   235,   240,   245,   249,   252,   254,   258,   261,
     263,   266,   268,   272,   274,   278,   282,   289,   296,   303,
     307,   310,   312,   313,   315,   319,   321,   325,   330,   332,
     336,   339,   341,   343,   346,   348,   352,   357,   360,   364,
     368,   373,   376,   380,   384,   386,   388,   390,   392,   394,
     396,   398,   402,   407,   411,   414,   416,   421,   424,   428,
     432,   434,   437,   443,   451,   457,   463,   471,   481,   490,
     499,   507,   516,   524,   532,   539,   543,   546,   549,   553,
     556,   558,   562,   564,   568,   570,   572,   574,   576,   578,
     580,   582,   584,   586,   588,   590,   592,   598,   600,   602,
     606,   608,   612,   614,   618,   620,   624,   626,   630,   632,
     636,   640,   642,   646,   650,   654,   658,   660,   664,   668,
     670,   674,   678,   680,   684,   688,   692,   694,   699,   701,
     704,   707,   710,   713,   718,   720,   722,   724,   726,   728,
     730,   732,   737,   742,   746,   750,   754,   757,   760,   762,
     764,   766,   770,   772,   776,   778,   780,   782,   784,   786
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,     3,    93,    -1,     4,   157,    93,    -1,
      94,    -1,     1,    94,    -1,    95,    -1,    94,    95,    -1,
      96,    -1,    97,    -1,    99,   115,    98,   133,    -1,   115,
      98,   133,    -1,    99,   115,   133,    -1,   115,   133,    -1,
      99,   106,    67,    -1,    99,     1,    67,    -1,    99,    67,
      -1,    97,    -1,    98,    97,    -1,   100,    99,    -1,   100,
      -1,   101,    99,    -1,   101,    -1,   102,    99,    -1,   102,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    -1,     9,
      -1,    13,    -1,    11,    -1,    15,    -1,    16,    -1,    12,
      -1,    10,    -1,    14,    -1,    17,    -1,    18,    -1,   103,
      -1,   112,    -1,   129,    -1,    19,    -1,    20,    -1,   104,
      59,    68,   105,    69,    -1,   104,    59,    -1,    68,   105,
      69,    -1,    33,    -1,    34,    -1,   108,    -1,   105,   108,
      -1,   107,    -1,   106,    70,   107,    -1,   115,    -1,   115,
      71,   124,    -1,   115,    71,     1,    -1,   109,   110,    67,
      -1,   101,   109,    -1,   101,    -1,   102,   109,    -1,   102,
      -1,   111,    -1,   110,    70,   111,    -1,   115,    -1,   115,
      72,   142,    -1,    72,   142,    -1,    21,    59,    68,   113,
      69,    -1,    68,   113,    69,    -1,    21,    59,    -1,   114,
      -1,   113,    70,   114,    -1,    59,    -1,    59,    71,   142,
      -1,   117,   116,    -1,   116,    -1,    59,    -1,    73,   115,
      74,    -1,    59,    75,   142,    76,    -1,    59,    75,    76,
      -1,    59,    73,   119,    74,    -1,    59,    73,   123,    74,
      -1,    59,    73,    74,    -1,    59,    73,   119,     1,    -1,
      59,    73,   123,     1,    -1,    59,    73,     1,    -1,    77,
     118,    -1,    77,    -1,    77,   118,   117,    -1,    77,   117,
      -1,   102,    -1,   118,   102,    -1,   120,    -1,   120,    70,
      39,    -1,   121,    -1,   120,    70,   121,    -1,    99,   122,
      59,    -1,    99,   122,    59,    75,   142,    76,    -1,    99,
     122,    59,    73,   119,    74,    -1,    99,   122,    59,    73,
     123,    74,    -1,    99,   122,   127,    -1,    99,   122,    -1,
     117,    -1,    -1,   157,    -1,   123,    70,   157,    -1,   139,
      -1,    68,   125,    69,    -1,    68,   125,    70,    69,    -1,
     124,    -1,   125,    70,   124,    -1,   109,   127,    -1,   109,
      -1,   117,    -1,   117,   128,    -1,   128,    -1,    73,   127,
      74,    -1,   128,    75,   142,    76,    -1,    75,    76,    -1,
     128,    75,    76,    -1,    75,   142,    76,    -1,   128,    73,
     119,    74,    -1,    73,    74,    -1,   128,    73,    74,    -1,
      73,   119,    74,    -1,    78,    -1,   131,    -1,   132,    -1,
     133,    -1,   136,    -1,   135,    -1,   137,    -1,    59,    72,
     130,    -1,    22,   142,    72,   130,    -1,    23,    72,   130,
      -1,   138,    67,    -1,    67,    -1,    68,    98,   134,    69,
      -1,    68,    69,    -1,    68,    98,    69,    -1,    68,   134,
      69,    -1,   130,    -1,   134,   130,    -1,    24,    73,   138,
      74,   130,    -1,    24,    73,   138,    74,   130,    26,   130,
      -1,    25,    73,   138,    74,   130,    -1,    29,    73,   138,
      74,   130,    -1,    28,   130,    29,    73,   138,    74,    67,
      -1,    27,    73,   138,    67,   138,    67,   138,    74,   130,
      -1,    27,    73,   138,    67,   138,    67,    74,   130,    -1,
      27,    73,   138,    67,    67,   138,    74,   130,    -1,    27,
      73,   138,    67,    67,    74,   130,    -1,    27,    73,    67,
     138,    67,   138,    74,   130,    -1,    27,    73,    67,   138,
      67,    74,   130,    -1,    27,    73,    67,    67,   138,    74,
     130,    -1,    27,    73,    67,    67,    74,   130,    -1,    30,
      59,    67,    -1,    31,    67,    -1,    32,    67,    -1,    35,
     138,    67,    -1,    35,    67,    -1,   139,    -1,   138,    70,
     139,    -1,   141,    -1,   154,   140,   139,    -1,    49,    -1,
      50,    -1,    51,    -1,    52,    -1,    53,    -1,    55,    -1,
      54,    -1,    56,    -1,    57,    -1,    58,    -1,    71,    -1,
     143,    -1,   143,    79,   138,    72,   141,    -1,   141,    -1,
     144,    -1,   143,    37,   144,    -1,   145,    -1,   144,    38,
     145,    -1,   146,    -1,   145,    80,   146,    -1,   147,    -1,
     146,    81,   147,    -1,   148,    -1,   147,    82,   148,    -1,
     149,    -1,   148,    40,   149,    -1,   148,    41,   149,    -1,
     150,    -1,   149,    83,   150,    -1,   149,    84,   150,    -1,
     149,    42,   150,    -1,   149,    43,   150,    -1,   151,    -1,
     150,    45,   151,    -1,   150,    44,   151,    -1,   152,    -1,
     151,    85,   152,    -1,   151,    86,   152,    -1,   153,    -1,
     152,    77,   153,    -1,   152,    87,   153,    -1,   152,    88,
     153,    -1,   154,    -1,    73,   126,    74,   153,    -1,   156,
      -1,    47,   154,    -1,    46,   154,    -1,   155,   153,    -1,
      36,   154,    -1,    36,    73,   126,    74,    -1,    82,    -1,
      77,    -1,    85,    -1,    86,    -1,    89,    -1,    90,    -1,
     157,    -1,   156,    75,   138,    76,    -1,   156,    73,   158,
      74,    -1,   156,    73,    74,    -1,   156,    91,    59,    -1,
     156,    48,    59,    -1,   156,    47,    -1,   156,    46,    -1,
      59,    -1,   159,    -1,    60,    -1,    73,   138,    74,    -1,
     139,    -1,   158,    70,   139,    -1,    61,    -1,    62,    -1,
      63,    -1,    65,    -1,    64,    -1,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    96,    97,    98,   101,   102,   105,   106,
     110,   111,   112,   113,   117,   118,   119,   128,   129,   132,
     133,   134,   135,   136,   137,   141,   142,   143,   144,   145,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   163,   164,   167,   168,   169,   172,   173,   176,
     177,   181,   182,   186,   187,   188,   192,   197,   198,   199,
     200,   204,   205,   209,   210,   211,   215,   216,   217,   221,
     222,   226,   227,   231,   232,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   248,   249,   250,   251,   255,
     256,   260,   261,   265,   266,   270,   271,   272,   273,   274,
     275,   278,   279,   283,   284,   290,   291,   292,   296,   297,
     301,   302,   306,   307,   308,   311,   312,   313,   314,   315,
     317,   318,   319,   320,   323,   327,   328,   329,   330,   331,
     332,   336,   337,   338,   342,   344,   348,   349,   350,   351,
     354,   355,   358,   359,   360,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   375,   376,   377,   378,   380,
     383,   384,   388,   389,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   406,   407,   410,   415,   416,
     420,   421,   424,   425,   428,   429,   432,   433,   436,   437,
     438,   442,   443,   444,   445,   446,   450,   451,   452,   456,
     457,   458,   461,   462,   463,   464,   468,   469,   473,   474,
     475,   476,   477,   478,   481,   482,   483,   484,   485,   486,
     489,   490,   491,   492,   493,   494,   495,   496,   501,   502,
     503,   504,   508,   509,   513,   514,   515,   516,   517,   518
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
  "CONST_CARACTER", "IFX", "';'", "'{'", "'}'", "','", "'='", "':'", "'('",
  "')'", "'['", "']'", "'*'", "'t'", "'?'", "'|'", "'^'", "'&'", "'<'",
  "'>'", "'+'", "'-'", "'/'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "unidad_de_programa", "unidad_de_traduccion", "declaracion_externa",
  "definicion_de_funcion", "declaracion", "lista_de_declaracion",
  "especificadores_de_declaracion",
  "especificador_categoria_almacenamiento", "especificador_de_tipo",
  "calificador_de_tipo", "especificador_estructura_o_union",
  "estructura_o_union", "lista_declaraciones_struct",
  "lista_declaradores_init", "declarador_init", "declaracion_struct",
  "lista_calificador_especificador", "lista_declaradores_struct",
  "declarador_struct", "especificador_enum", "lista_de_enumerador",
  "enumerador", "declarador", "declarador_directo", "apuntador",
  "lista_calificadores_de_tipo", "lista_tipos_de_parametro",
  "lista_de_parametros", "declaracion_parametro", "apuntadorOpt",
  "lista_de_identificadores", "inicializador", "lista_de_inicializadores",
  "nombre_de_tipo", "declarador_abstracto", "declarador_abstracto_directo",
  "nombre_typedef", "sentencia", "sentencia_etiquetada",
  "sentencia_expresion", "sentencia_compuesta", "lista_de_sentencias",
  "sentencia_de_seleccion", "sentencia_de_iteracion", "sentencia_de_salto",
  "expresion", "expresion_de_asignacion", "operador_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_OR",
  "expresion_logica_AND", "expresion_OR_inclusivo",
  "expresion_OR_exclusivo", "expresion_AND", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "operador_unario", "expresion_posfija", "expresion_primaria",
  "lista_expresiones_argumento", "constante", 0
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
     315,   316,   317,   318,   319,   320,   321,    59,   123,   125,
      44,    61,    58,    40,    41,    91,    93,    42,   116,    63,
     124,    94,    38,    60,    62,    43,    45,    47,    37,   126,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    98,    98,    99,
      99,    99,    99,    99,    99,   100,   100,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   108,   109,   109,   109,
     109,   110,   110,   111,   111,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   117,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   125,   125,
     126,   126,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   130,   130,   130,   130,   130,
     130,   131,   131,   131,   132,   132,   133,   133,   133,   133,
     134,   134,   135,   135,   135,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   137,   137,   137,   137,
     138,   138,   139,   139,   140,   140,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   142,   143,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     148,   149,   149,   149,   149,   149,   150,   150,   150,   151,
     151,   151,   152,   152,   152,   152,   153,   153,   154,   154,
     154,   154,   154,   154,   155,   155,   155,   155,   155,   155,
     156,   156,   156,   156,   156,   156,   156,   156,   157,   157,
     157,   157,   158,   158,   159,   159,   159,   159,   159,   159
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       4,     3,     3,     2,     3,     3,     2,     1,     2,     2,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     2,     3,     1,     1,     1,
       2,     1,     3,     1,     3,     3,     3,     2,     1,     2,
       1,     1,     3,     1,     3,     2,     5,     3,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     4,     4,     3,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     3,     6,     6,     6,     3,
       2,     1,     0,     1,     3,     1,     3,     4,     1,     3,
       2,     1,     1,     2,     1,     3,     4,     2,     3,     3,
       4,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     1,     4,     2,     3,     3,
       1,     2,     5,     7,     5,     5,     7,     9,     8,     8,
       7,     8,     7,     7,     6,     3,     2,     2,     3,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     1,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     1,     2,
       2,     2,     2,     4,     1,     1,     1,     1,     1,     1,
       1,     4,     4,     3,     3,     3,     2,     2,     1,     1,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    25,    26,    27,    28,    29,    35,
      31,    34,    30,    36,    32,    33,    37,    38,    42,    43,
       0,    47,    48,    75,     0,     0,    86,   124,     0,     4,
       6,     8,     9,     0,    20,    22,    24,    39,     0,    40,
       0,    74,     0,    41,     5,     2,   239,   228,   230,   234,
     235,   236,   238,   237,     0,     0,   229,    68,     0,     0,
      71,    58,    60,     0,    49,     0,     0,    69,     0,    89,
      88,    85,     1,     7,     0,    16,     0,    51,    53,    19,
      21,    23,    45,     0,    17,     0,     0,    13,    73,     0,
       0,     0,     0,   215,   214,   216,   217,   218,   219,     0,
     160,   162,   175,   178,   180,   182,   184,   186,   188,   191,
     196,   199,   202,   206,     0,   208,   220,     3,     0,    84,
     239,    81,   102,     0,    91,    93,     0,   103,    78,   177,
       0,   206,     0,    57,    59,    46,    50,     0,     0,    61,
      63,    67,     0,    76,    90,    87,    15,    14,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   135,   137,     0,    22,    24,
     140,   125,   126,   127,     0,   129,   128,   130,     0,    18,
      11,    53,     0,   212,   210,   209,   111,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   170,   169,   171,   172,   173,   174,
       0,   211,   227,   226,     0,     0,     0,     0,     0,   101,
     100,    82,    79,     0,    83,     0,    80,    77,    72,    65,
      56,     0,     0,    70,    52,    55,     0,    54,   105,    10,
       0,     0,     0,     0,     0,     0,   228,     0,     0,     0,
       0,   156,   157,   159,     0,     0,   138,     0,   139,   141,
     134,     0,     0,     0,   112,   110,   114,     0,   161,   179,
       0,   181,   183,   185,   187,   189,   190,   194,   195,   192,
     193,   198,   197,   200,   201,   203,   204,   205,   163,   225,
     223,   232,     0,     0,   224,    66,    95,    99,    92,    94,
     104,    62,    64,   108,     0,    44,     0,   133,     0,     0,
       0,     0,     0,     0,   155,   158,   131,   136,   213,   121,
       0,     0,   117,     0,   113,     0,     0,   207,     0,     0,
     222,   221,     0,     0,   106,     0,   132,     0,     0,     0,
       0,     0,     0,     0,   123,   115,   119,   122,     0,   118,
       0,   176,   233,     0,     0,     0,   107,   109,   142,   144,
       0,     0,     0,     0,     0,     0,   145,   120,   116,    97,
      98,    96,     0,   154,     0,     0,     0,     0,     0,     0,
       0,   143,   153,   152,     0,   150,     0,     0,     0,   146,
     151,   149,   148,     0,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,   167,    86,    34,    35,
      36,    37,    38,    63,    76,    77,    64,    65,   138,   139,
      39,    66,    67,    40,    41,    42,    71,   123,   124,   125,
     230,   126,   247,   314,   187,   275,   276,    43,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   100,   220,   101,
     130,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   302,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -256
static const yytype_int16 yypact[] =
{
     775,   928,   775,   250,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
     -37,  -256,  -256,    16,  1995,   -34,    18,  -256,    70,   928,
    -256,  -256,  -256,    17,  1154,  1154,  1154,  -256,    15,  -256,
    1190,  -256,   -33,  -256,   928,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  1848,   775,  -256,    13,   739,  1420,
      33,  2064,  2064,   808,  -256,    80,   -39,  -256,    39,  -256,
    -256,    18,  -256,  -256,    60,  -256,   -25,  -256,   958,  -256,
    -256,  -256,    96,   400,  -256,  1190,    17,  -256,  -256,  1882,
    1914,  1914,   653,  -256,  -256,  -256,  -256,  -256,  -256,    22,
    -256,  -256,   -16,   133,   119,    98,   180,   114,   -23,    99,
     163,    23,  -256,   399,  1848,   159,  -256,  -256,   214,  -256,
     -37,  -256,   198,     9,   210,  -256,    12,  -256,  -256,  -256,
     217,  -256,  1848,  -256,  -256,  -256,  -256,  1848,     5,  -256,
     224,  -256,   214,  -256,  -256,  -256,  -256,  -256,   -34,   304,
    1190,  -256,  2064,  1848,   230,   216,   233,   234,  1353,   235,
     259,   252,   253,  1452,   174,  -256,  -256,   486,  1004,  1034,
    -256,  -256,  -256,  -256,  1213,  -256,  -256,  -256,   161,  -256,
    -256,   256,   653,  -256,  -256,  -256,    57,   255,  1848,  -256,
    1848,  1848,  1848,  1848,  1848,  1848,  1848,  1848,  1848,  1848,
    1848,  1848,  1848,  1848,  1848,  1848,  1848,  1848,  1848,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    1848,  -256,  -256,  -256,   271,  1486,  1848,   273,   213,  -256,
      83,  -256,  -256,  1080,  -256,   250,  -256,  -256,  -256,  -256,
    -256,    80,  1848,  -256,  -256,  -256,  1518,  -256,  -256,  -256,
    2022,   261,  1353,  1848,  1848,  1552,   262,   572,   307,  1848,
     270,  -256,  -256,  -256,   190,  1353,  -256,  1283,  -256,  -256,
    -256,   265,   882,  1584,    24,  -256,    63,  1848,  -256,   133,
     154,   119,    98,   180,   114,   -23,   -23,    99,    99,    99,
      99,   163,   163,    23,    23,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,    49,    -3,  -256,  -256,   183,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,   215,  -256,  1353,  -256,    52,    59,
    1618,   196,   268,    92,  -256,  -256,  -256,  -256,  -256,  -256,
     272,   274,  -256,   276,    63,  1116,  1650,  -256,  1848,  1848,
    -256,  -256,   849,  1848,  -256,  1386,  -256,  1353,  1353,  1684,
     200,  1716,  1848,  1353,  -256,  -256,  -256,  -256,   275,  -256,
     277,  -256,  -256,   280,    93,   279,  -256,  -256,   321,  -256,
    1353,   100,  1750,  1782,   207,   102,  -256,  -256,  -256,  -256,
    -256,  -256,  1353,  -256,  1353,  1353,   103,  1353,   142,  1816,
     289,  -256,  -256,  -256,  1353,  -256,  1353,  1353,   145,  -256,
    -256,  -256,  -256,  1353,  -256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,     7,   356,     4,  -256,   -32,   -24,     0,  -256,   176,
      45,  -256,  -256,   208,  -256,   211,   -49,    53,  -256,   120,
    -256,   244,   228,    -1,   329,   -21,  -256,  -255,  -256,   140,
    -256,    32,  -240,  -256,   193,  -207,   104,  -256,  -106,  -256,
    -256,   -29,   209,  -256,  -256,  -256,   -51,  -122,  -256,   -44,
    -125,  -256,   189,   188,   191,   194,   187,    90,    54,   101,
     112,   -57,   -12,  -256,  -256,     1,  -256,  -256
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      33,    33,    33,    99,    55,    70,   313,   238,    84,    45,
     231,    87,   239,   234,   136,   129,    85,   330,    74,   198,
     199,   190,    57,   307,    68,    23,    23,   248,   251,    33,
     141,   142,    78,    73,    79,    80,    81,    18,    19,    25,
      25,    99,   147,    26,    33,   148,    84,   131,    73,   151,
     145,    84,   258,   179,   150,    33,   180,   221,   122,   127,
     200,   201,   117,   191,   140,   331,   278,   188,   269,    62,
      72,    69,   240,   341,    82,   241,    23,   183,   184,   185,
     358,   118,   235,   232,    75,   181,   236,   363,   129,    58,
      25,    59,   188,   129,    26,    26,   189,   272,   298,   273,
     206,   229,   131,   301,   132,   367,    62,    62,    62,   129,
     207,   208,   264,   143,   133,   134,   144,   312,   179,   339,
     131,   249,   188,   340,   248,   131,   347,   146,   169,   188,
     272,    99,   273,   348,    26,   179,   335,    62,   336,    23,
     280,   131,   306,   202,   203,   186,   317,   181,   333,   295,
     296,   297,   137,    25,   196,   197,   272,    26,   273,   326,
      26,   269,   188,   235,   152,   274,   353,   380,    80,    81,
     188,   192,   188,   188,   384,   303,   390,   394,   131,   194,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,    62,   129,   193,
      61,   136,   318,   319,   321,   222,   223,   224,   323,   274,
     346,   360,   188,   169,   169,   188,   396,   362,   365,   403,
     337,   133,   134,   248,   188,    84,   338,    62,   270,   129,
     131,   188,   225,   122,   226,   186,   310,    61,    61,    61,
     140,   368,   369,   -71,   -71,   132,   265,   376,   204,   205,
     227,   274,   287,   288,   289,   290,   342,   325,   343,   168,
     188,   131,   195,   351,   383,   131,   188,   372,    61,   350,
     188,    46,   122,    60,   389,    26,   391,   188,   392,   393,
     233,   395,   305,   142,   344,   345,   285,   286,   400,   253,
     401,   402,   129,   237,   361,    62,   242,   404,   371,   129,
     374,   375,   252,   291,   292,   245,   254,   255,   259,    47,
      48,    49,    50,    51,    52,    53,   293,   294,   260,   261,
     262,   386,   388,    54,   131,    46,   131,   149,    61,   277,
     299,   131,   304,   316,   265,   122,   322,   324,   398,   328,
      89,   352,   122,   127,   168,   168,   354,   382,   355,   377,
      90,    91,   356,   378,   379,   381,   399,    44,    61,   244,
     250,   311,   228,    47,    48,    49,    50,    51,    52,    53,
     243,    88,   246,   309,   364,   271,   267,    92,   334,   279,
     281,    93,   284,     0,   282,     0,    94,     0,   283,    95,
      96,     0,     0,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   120,   153,   154,   155,   156,    61,   157,   158,   159,
     160,   161,   162,    21,    22,   163,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     0,   164,
      48,    49,    50,    51,    52,    53,     0,   165,    83,   166,
     219,     0,     0,    92,     0,     0,     0,    93,    27,     0,
       0,     0,    94,     0,     0,    95,    96,     0,     0,    97,
      98,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   120,   153,   154,
     155,   156,     0,   157,   158,   159,   160,   161,   162,    21,
      22,   163,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   256,    48,    49,    50,    51,
      52,    53,     0,   165,    83,   266,     0,     0,     0,    92,
       0,     0,     0,    93,    27,     0,     0,     0,    94,     0,
       0,    95,    96,     0,     0,    97,    98,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   120,   153,   154,   155,   156,     0,   157,
     158,   159,   160,   161,   162,    21,    22,   163,    89,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,    91,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,    48,    49,    50,    51,    52,    53,     0,   165,
      83,   166,     0,     0,     0,    92,     0,     0,     0,    93,
      27,     0,     0,     0,    94,     0,     0,    95,    96,     0,
       0,    97,    98,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   120,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    24,     0,     0,     0,     0,    92,     0,     0,     0,
      93,    27,     0,     0,     0,    94,     0,     0,    95,    96,
     119,     0,    97,    98,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     1,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,    47,    48,
      49,    50,    51,    52,    53,     0,     0,    24,    21,    22,
       0,     0,    54,   121,     0,     0,     0,    27,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,    23,     0,     0,     0,     0,     0,
       0,    21,    22,    24,     0,     0,     0,     0,    25,     0,
       0,     0,    26,    27,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     120,     0,     0,     0,     0,     0,    24,   135,     0,     0,
       0,     0,    21,    22,     0,     0,    27,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    21,    22,    24,     0,     0,
       0,     0,    54,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      24,     0,     0,     0,     0,   272,   329,   273,     0,    26,
      27,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,    21,    22,     0,     0,     0,    24,     0,     0,     0,
       0,    25,     0,     0,     0,    26,    27,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    83,     0,     0,   149,
       0,     0,     0,     0,     0,     0,    27,    21,    22,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
       0,     0,    24,     0,     0,     0,   -58,     0,     0,     0,
       0,     0,    27,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    24,     0,     0,     0,   -60,     0,     0,     0,
       0,     0,    27,    21,    22,     0,     0,     0,     0,   308,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    27,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,    24,     0,     0,    21,    22,     0,
     357,     0,     0,     0,    27,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,    21,    22,     0,     0,     0,     0,     0,
       0,     0,    27,     0,    46,   153,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,     0,     0,   163,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    90,
      91,     0,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,   256,    48,    49,    50,    51,    52,    53,     0,
     165,   257,   268,     0,     0,     0,    92,     0,     0,     0,
      93,     0,     0,     0,     0,    94,     0,     0,    95,    96,
       0,     0,    97,    98,    46,   153,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,     0,     0,   163,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,    48,    49,    50,    51,    52,    53,     0,
     165,   257,   327,     0,     0,     0,    92,     0,     0,     0,
      93,     0,     0,     0,     0,    94,     0,     0,    95,    96,
       0,     0,    97,    98,    46,   153,   154,   155,   156,     0,
     157,   158,   159,   160,   161,   162,     0,     0,   163,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,   256,    48,    49,    50,    51,    52,    53,     0,
     165,   257,    89,     0,     0,     0,    92,     0,     0,     0,
      93,     0,    90,    91,     0,    94,     0,     0,    95,    96,
       0,    46,    97,    98,     0,    47,    48,    49,    50,    51,
      52,    53,     0,     0,   246,   366,    89,     0,     0,    92,
       0,     0,     0,    93,     0,     0,    90,    91,    94,     0,
       0,    95,    96,    46,     0,    97,    98,     0,     0,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    89,     0,
       0,     0,     0,    92,     0,     0,   128,    93,    90,    91,
       0,     0,    94,     0,     0,    95,    96,    46,     0,    97,
      98,    47,    48,    49,    50,    51,    52,    53,     0,   263,
       0,     0,    89,     0,     0,    92,     0,     0,     0,    93,
       0,     0,    90,    91,    94,     0,     0,    95,    96,    46,
       0,    97,    98,     0,     0,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    89,     0,     0,     0,     0,    92,
     300,     0,     0,    93,    90,    91,     0,     0,    94,     0,
       0,    95,    96,    46,     0,    97,    98,    47,    48,    49,
      50,    51,    52,    53,     0,     0,   246,     0,    89,     0,
       0,    92,     0,     0,     0,    93,     0,     0,    90,    91,
      94,     0,     0,    95,    96,    46,     0,    97,    98,     0,
       0,    47,    48,    49,    50,    51,    52,    53,     0,   320,
      89,     0,     0,     0,     0,    92,     0,     0,     0,    93,
      90,    91,     0,     0,    94,     0,     0,    95,    96,    46,
       0,    97,    98,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,    89,     0,     0,    92,     0,     0,
     332,    93,     0,     0,    90,    91,    94,     0,     0,    95,
      96,    46,     0,    97,    98,     0,     0,    47,    48,    49,
      50,    51,    52,    53,     0,   349,    89,     0,     0,     0,
       0,    92,     0,     0,     0,    93,    90,    91,     0,     0,
      94,     0,     0,    95,    96,    46,     0,    97,    98,    47,
      48,    49,    50,    51,    52,    53,     0,     0,     0,     0,
      89,     0,     0,    92,     0,     0,   359,    93,     0,     0,
      90,    91,    94,     0,     0,    95,    96,    46,     0,    97,
      98,     0,     0,    47,    48,    49,    50,    51,    52,    53,
       0,     0,    89,     0,     0,     0,     0,    92,   370,     0,
       0,    93,    90,    91,     0,     0,    94,     0,     0,    95,
      96,    46,     0,    97,    98,    47,    48,    49,    50,    51,
      52,    53,     0,   373,     0,     0,    89,     0,     0,    92,
       0,     0,     0,    93,     0,     0,    90,    91,    94,     0,
       0,    95,    96,    46,     0,    97,    98,     0,     0,    47,
      48,    49,    50,    51,    52,    53,     0,     0,    89,     0,
       0,     0,     0,    92,   385,     0,     0,    93,    90,    91,
       0,     0,    94,     0,     0,    95,    96,    46,     0,    97,
      98,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,    89,     0,     0,    92,   387,     0,     0,    93,
       0,     0,    90,    91,    94,     0,     0,    95,    96,    46,
       0,    97,    98,     0,     0,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    89,     0,     0,     0,     0,    92,
     397,     0,     0,    93,    90,    91,     0,     0,    94,     0,
       0,    95,    96,    46,     0,    97,    98,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,     0,    89,     0,
       0,    92,     0,     0,     0,    93,     0,     0,    90,    91,
      94,     0,     0,    95,    96,    46,     0,    97,    98,     0,
       0,    47,    48,    49,    50,    51,    52,    53,     0,     0,
      89,     0,     0,     0,     0,   182,     0,     0,     0,    93,
      90,    91,     0,     0,    94,     0,     0,    95,    96,     0,
       0,    97,    98,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,    93,     0,     0,     0,     0,    94,     0,     0,    95,
      96,     0,     0,    97,    98,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    60,    21,    22,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
      24,   315,     0,     0,     0,     0,     0,    21,    22,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    27
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    54,     3,    26,   246,   132,    40,     2,
       1,    40,   137,     1,    63,    59,    40,   272,     1,    42,
      43,    37,    59,   230,    25,    59,    59,   149,   153,    29,
      69,    70,    33,    29,    34,    35,    36,    19,    20,    73,
      73,    92,    67,    77,    44,    70,    78,    59,    44,    78,
      71,    83,   158,    85,    78,    55,    85,   114,    58,    58,
      83,    84,    55,    79,    65,   272,   188,    70,   174,    24,
       0,    26,    67,    76,    59,    70,    59,    89,    90,    91,
     335,    68,    70,    74,    67,    86,    74,   342,   132,    73,
      73,    75,    70,   137,    77,    77,    74,    73,   220,    75,
      77,   122,   114,   225,    71,   345,    61,    62,    63,   153,
      87,    88,   163,    74,    61,    62,    71,   242,   150,    70,
     132,   150,    70,    74,   246,   137,    74,    67,    83,    70,
      73,   182,    75,    74,    77,   167,    73,    92,    75,    59,
     191,   153,    59,    44,    45,    92,   252,   148,   273,   206,
     207,   208,    72,    73,    40,    41,    73,    77,    75,   265,
      77,   267,    70,    70,    68,   186,    74,    74,   168,   169,
      70,    38,    70,    70,    74,   226,    74,    74,   190,    81,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   152,   242,    80,
      24,   250,   253,   254,   255,    46,    47,    48,   259,   230,
     316,   336,    70,   168,   169,    70,    74,   339,   343,    74,
     277,   168,   169,   345,    70,   257,    72,   182,    67,   273,
     242,    70,    73,   233,    75,   182,   235,    61,    62,    63,
     241,   347,   348,    69,    70,    71,    72,   353,    85,    86,
      91,   272,   198,   199,   200,   201,    73,    67,    75,    83,
      70,   273,    82,    67,   370,   277,    70,    67,    92,   320,
      70,    21,   272,    59,    67,    77,   382,    70,   384,   385,
      70,   387,    69,    70,    69,    70,   196,   197,   394,    73,
     396,   397,   336,    76,   338,   250,    72,   403,   349,   343,
     351,   352,    72,   202,   203,     1,    73,    73,    73,    59,
      60,    61,    62,    63,    64,    65,   204,   205,    59,    67,
      67,   372,   373,    73,   336,    21,   338,    71,   152,    74,
      59,   343,    59,    72,    72,   335,    29,    67,   389,    74,
      36,    73,   342,   342,   168,   169,    74,    26,    74,    74,
      46,    47,    76,    76,    74,    76,    67,     1,   182,   148,
     152,   241,   118,    59,    60,    61,    62,    63,    64,    65,
     142,    42,    68,   233,   342,   182,   167,    73,   274,   190,
     192,    77,   195,    -1,   193,    -1,    82,    -1,   194,    85,
      86,    -1,    -1,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   250,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    67,    68,    69,
      71,    -1,    -1,    73,    -1,    -1,    -1,    77,    78,    -1,
      -1,    -1,    82,    -1,    -1,    85,    86,    -1,    -1,    89,
      90,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    68,    69,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    77,    78,    -1,    -1,    -1,    82,    -1,
      -1,    85,    86,    -1,    -1,    89,    90,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      68,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      78,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    78,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,
       1,    -1,    89,    90,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,     1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    59,    60,
      61,    62,    63,    64,    65,    -1,    -1,    68,    33,    34,
      -1,    -1,    73,    74,    -1,    -1,    -1,    78,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    77,    78,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    78,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    33,    34,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      68,    -1,    -1,    -1,    -1,    73,    74,    75,    -1,    77,
      78,    33,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    68,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    78,    -1,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    68,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    33,    34,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    68,    -1,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    78,    33,    34,    -1,    -1,    -1,    -1,    39,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    33,    34,    -1,
      74,    -1,    -1,    -1,    78,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,
      -1,    -1,    89,    90,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    69,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    85,    86,
      -1,    -1,    89,    90,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    -1,
      67,    68,    36,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      77,    -1,    46,    47,    -1,    82,    -1,    -1,    85,    86,
      -1,    21,    89,    90,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    68,    69,    36,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    46,    47,    82,    -1,
      -1,    85,    86,    21,    -1,    89,    90,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    76,    77,    46,    47,
      -1,    -1,    82,    -1,    -1,    85,    86,    21,    -1,    89,
      90,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      -1,    -1,    36,    -1,    -1,    73,    -1,    -1,    -1,    77,
      -1,    -1,    46,    47,    82,    -1,    -1,    85,    86,    21,
      -1,    89,    90,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    36,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    46,    47,    -1,    -1,    82,    -1,
      -1,    85,    86,    21,    -1,    89,    90,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    68,    -1,    36,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    46,    47,
      82,    -1,    -1,    85,    86,    21,    -1,    89,    90,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    67,
      36,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      46,    47,    -1,    -1,    82,    -1,    -1,    85,    86,    21,
      -1,    89,    90,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    73,    -1,    -1,
      76,    77,    -1,    -1,    46,    47,    82,    -1,    -1,    85,
      86,    21,    -1,    89,    90,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    -1,    67,    36,    -1,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    77,    46,    47,    -1,    -1,
      82,    -1,    -1,    85,    86,    21,    -1,    89,    90,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    73,    -1,    -1,    76,    77,    -1,    -1,
      46,    47,    82,    -1,    -1,    85,    86,    21,    -1,    89,
      90,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    73,    74,    -1,
      -1,    77,    46,    47,    -1,    -1,    82,    -1,    -1,    85,
      86,    21,    -1,    89,    90,    59,    60,    61,    62,    63,
      64,    65,    -1,    67,    -1,    -1,    36,    -1,    -1,    73,
      -1,    -1,    -1,    77,    -1,    -1,    46,    47,    82,    -1,
      -1,    85,    86,    21,    -1,    89,    90,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    73,    74,    -1,    -1,    77,    46,    47,
      -1,    -1,    82,    -1,    -1,    85,    86,    21,    -1,    89,
      90,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    73,    74,    -1,    -1,    77,
      -1,    -1,    46,    47,    82,    -1,    -1,    85,    86,    21,
      -1,    89,    90,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    -1,    -1,    36,    -1,    -1,    -1,    -1,    73,
      74,    -1,    -1,    77,    46,    47,    -1,    -1,    82,    -1,
      -1,    85,    86,    21,    -1,    89,    90,    59,    60,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    73,    -1,    -1,    -1,    77,    -1,    -1,    46,    47,
      82,    -1,    -1,    85,    86,    21,    -1,    89,    90,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    77,
      46,    47,    -1,    -1,    82,    -1,    -1,    85,    86,    -1,
      -1,    89,    90,    59,    60,    61,    62,    63,    64,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    77,    -1,    -1,    -1,    -1,    82,    -1,    -1,    85,
      86,    -1,    -1,    89,    90,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    59,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      68,    69,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    68,    73,    77,    78,    93,    94,
      95,    96,    97,    99,   100,   101,   102,   103,   104,   112,
     115,   116,   117,   129,    94,    93,    21,    59,    60,    61,
      62,    63,    64,    65,    73,   157,   159,    59,    73,    75,
      59,   101,   102,   105,   108,   109,   113,   114,   115,   102,
     117,   118,     0,    95,     1,    67,   106,   107,   115,    99,
      99,    99,    59,    68,    97,    98,    99,   133,   116,    36,
      46,    47,    73,    77,    82,    85,    86,    89,    90,   138,
     139,   141,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    93,    68,     1,
      21,    74,    99,   119,   120,   121,   123,   157,    76,   141,
     142,   154,    71,   109,   109,    69,   108,    72,   110,   111,
     115,    69,    70,    74,   102,   117,    67,    67,    70,    71,
      98,   133,    68,    22,    23,    24,    25,    27,    28,    29,
      30,    31,    32,    35,    59,    67,    69,    98,   101,   102,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    97,
     133,   115,    73,   154,   154,   154,   109,   126,    70,    74,
      37,    79,    38,    80,    81,    82,    40,    41,    42,    43,
      83,    84,    44,    45,    85,    86,    77,    87,    88,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    71,
     140,   153,    46,    47,    48,    73,    75,    91,   113,   117,
     122,     1,    74,    70,     1,    70,    74,    76,   142,   142,
      67,    70,    72,   114,   107,     1,    68,   124,   139,   133,
     105,   142,    72,    73,    73,    73,    59,    68,   130,    73,
      59,    67,    67,    67,   138,    72,    69,   134,    69,   130,
      67,   126,    73,    75,   117,   127,   128,    74,   139,   144,
     138,   145,   146,   147,   148,   149,   149,   150,   150,   150,
     150,   151,   151,   152,   152,   153,   153,   153,   139,    59,
      74,   139,   158,   138,    59,    69,    59,   127,    39,   121,
     157,   111,   142,   124,   125,    69,    72,   130,   138,   138,
      67,   138,    29,   138,    67,    67,   130,    69,    74,    74,
     119,   127,    76,   142,   128,    73,    75,   153,    72,    70,
      74,    76,    73,    75,    69,    70,   130,    74,    74,    67,
     138,    67,    73,    74,    74,    74,    76,    74,   119,    76,
     142,   141,   139,   119,   123,   142,    69,   124,   130,   130,
      74,   138,    67,    67,   138,   138,   130,    74,    76,    74,
      74,    76,    26,   130,    74,    74,   138,    74,   138,    67,
      74,   130,   130,   130,    74,   130,    74,    74,   138,    67,
     130,   130,   130,    74,   130
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
        case 8:

/* Line 1455 of yacc.c  */
#line 105 "bison.y"
    {definirFuncion(lista_funciones, (yyvsp[(1) - (1)].cval));;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 106 "bison.y"
    {aux_tFuncion = obtenerTipo((yyvsp[(1) - (1)].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 110 "bison.y"
    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 111 "bison.y"
    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 112 "bison.y"
    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 113 "bison.y"
    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 149 "bison.y"
    {aux_tIdentificador="int";;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 150 "bison.y"
    {aux_tIdentificador="char";;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 151 "bison.y"
    {aux_tIdentificador="float";;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 152 "bison.y"
    {aux_tIdentificador="double";;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 153 "bison.y"
    {aux_tIdentificador="short";;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 154 "bison.y"
    {aux_tIdentificador="void";;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 155 "bison.y"
    {aux_tIdentificador="long";;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 156 "bison.y"
    {aux_tIdentificador="signed";;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    {aux_tIdentificador="unsigned";;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 188 "bison.y"
    {printf("[ERROR-Sintáctico] Línea %d: Falta inicializador en linea\n", yylineno);yyerrok;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 235 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)), aux_tIdentificador);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 237 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (4)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (4)].cval)), aux_tIdentificador);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 238 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)), aux_tIdentificador);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 239 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (4)].cval));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 240 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (4)].cval));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 241 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (3)].cval));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 242 "bison.y"
    {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 243 "bison.y"
    {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 244 "bison.y"
    {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 265 "bison.y"
    {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 266 "bison.y"
    {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[(3) - (3)].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 270 "bison.y"
    {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[(3) - (3)].cval)));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 271 "bison.y"
    {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[(3) - (6)].cval)));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 272 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(3) - (6)].cval));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 273 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(3) - (6)].cval));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 283 "bison.y"
    {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 327 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 328 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 329 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 330 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 331 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 332 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 457 "bison.y"
    {;if(!chequearSuma(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)), ultimas_constantes)) printf("[ERROR] Línea %d: Suma inválida\n", yylineno);;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 491 "bison.y"
    { comprobar_tipos_funcion(lista_funciones, (yyvsp[(1) - (4)].cval)); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 501 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "identificador");;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 503 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "char*");;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 513 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "int");;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 514 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "int");;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 515 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "int");;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 516 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "char");;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 517 "bison.y"
    {agregarIdentificador(ultimas_constantes, "", "float");;}
    break;



/* Line 1455 of yacc.c  */
#line 2502 "bison.tab.c"
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
#line 521 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        //yydebug = 1;
    #endif
    
    //system("clear");

    if(argv[1] == NULL){
        printf("Debe especificar un archivo para analizar\n");
    }

    else{

        printf("Abriendo archivo %s\n", argv[1]);

        yyin = fopen(argv[1], "r");

        printf("Creando estructuras\n");

        analisisCorrecto = 1;
        identificadores_variables = inicializarListaIdentificadores(identificadores_variables);
        lista_funciones = inicializarListaFunciones(lista_funciones);   //especifico tp5

        identificadores_funciones = inicializarListaIdentificadores(identificadores_funciones);
        lista_sentencias          = inicializarListaSentencias     (lista_sentencias);
        lista_parametros          = inicializarListaIdentificadores(lista_parametros);
        ultimas_constantes        = inicializarListaIdentificadores(ultimas_constantes);
        listaErrores             = inicializarListaErrores       (listaErrores); 

        printf("\n --- Comenzando anlisis lexico y sintactico ---\n\n");

        yyparse();
        //fclose(yyin);

        if(analisisCorrecto){

            printf("\n\n --- Imprimiendo reporte ---");

            crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
            mostrarListadoFunciones(lista_funciones);
            mostrarErrores(listaErrores);
            //crearListadoSentencias     (lista_sentencias,          "SENTENCIAS");
        }

    }



    return 0;
}

int yyerror(const char *msg)
{
	printf("\n[ERROR-Sintáctico] Línea %d, fallo de análisis: %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}
