
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

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
int yywrap(){
    return(1);
}
int yyerror(const char* s){
    printf("ERROR SINTACTICO en la Linea: %d\n",yylineno);
};

extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;



/* Line 189 of yacc.c  */
#line 93 "bison.tab.c"

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
#line 20 "bison.y"

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
#define YYFINAL  68
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  67
/* YYNRULES -- Number of rules.  */
#define YYNRULES  228
/* YYNRULES -- Number of states.  */
#define YYNSTATES  389

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
       2,     2,     2,    90,     2,     2,     2,    88,    85,     2,
      70,    78,    68,    66,    75,    67,    91,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    77,    72,
      86,    76,    87,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    79,     2,    80,    84,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    81,     2,     2,     2,
       2,     2,     2,    73,    83,    74,    89,     2,     2,     2,
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
      65,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    17,    19,    21,
      26,    30,    34,    37,    41,    44,    46,    49,    52,    54,
      57,    59,    62,    64,    66,    68,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    90,    92,    94,    96,
      98,   100,   102,   108,   111,   115,   117,   119,   121,   124,
     126,   130,   132,   136,   140,   143,   145,   148,   150,   152,
     156,   158,   162,   165,   171,   175,   178,   180,   184,   186,
     190,   193,   195,   197,   201,   206,   210,   215,   220,   224,
     227,   229,   233,   236,   238,   241,   243,   247,   249,   253,
     256,   259,   261,   263,   267,   269,   273,   278,   280,   284,
     287,   289,   291,   294,   296,   300,   305,   308,   312,   316,
     321,   324,   328,   332,   334,   336,   338,   340,   342,   344,
     346,   350,   355,   359,   362,   364,   369,   372,   376,   380,
     382,   385,   391,   399,   405,   411,   419,   429,   438,   447,
     455,   464,   472,   480,   487,   491,   494,   497,   501,   504,
     506,   510,   512,   516,   518,   520,   522,   524,   526,   528,
     530,   532,   534,   536,   538,   540,   546,   548,   550,   554,
     556,   560,   562,   566,   568,   572,   574,   578,   580,   584,
     588,   590,   594,   598,   602,   606,   608,   612,   616,   618,
     622,   626,   628,   632,   636,   640,   642,   647,   649,   652,
     655,   658,   661,   666,   668,   670,   672,   674,   676,   678,
     680,   685,   690,   694,   698,   702,   705,   708,   710,   712,
     714,   718,   720,   724,   726,   728,   730,   732,   734
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      93,     0,    -1,     3,    93,    -1,     4,   156,    93,    -1,
      94,    -1,    95,    -1,    94,    95,    -1,    96,    -1,    97,
      -1,    99,   115,    98,   132,    -1,   115,    98,   132,    -1,
      99,   115,   132,    -1,   115,   132,    -1,    99,   106,    72,
      -1,    99,    72,    -1,    97,    -1,    98,    97,    -1,   100,
      99,    -1,   100,    -1,   101,    99,    -1,   101,    -1,   102,
      99,    -1,   102,    -1,     5,    -1,     6,    -1,     7,    -1,
       8,    -1,     9,    -1,    13,    -1,    11,    -1,    15,    -1,
      16,    -1,    12,    -1,    10,    -1,    14,    -1,    17,    -1,
      18,    -1,   103,    -1,   112,    -1,   128,    -1,    19,    -1,
      20,    -1,   104,    59,    73,   105,    74,    -1,   104,    59,
      -1,    73,   105,    74,    -1,    33,    -1,    34,    -1,   108,
      -1,   105,   108,    -1,   107,    -1,   106,    75,   107,    -1,
     115,    -1,   115,    76,   123,    -1,   109,   110,    72,    -1,
     101,   109,    -1,   101,    -1,   102,   109,    -1,   102,    -1,
     111,    -1,   110,    75,   111,    -1,   115,    -1,   115,    77,
     141,    -1,    77,   141,    -1,    21,    59,    73,   113,    74,
      -1,    73,   113,    74,    -1,    21,    59,    -1,   114,    -1,
     113,    75,   114,    -1,    59,    -1,    59,    76,   141,    -1,
     117,   116,    -1,   116,    -1,    59,    -1,    70,   115,    78,
      -1,   116,    79,   141,    80,    -1,   116,    79,    80,    -1,
     116,    70,   119,    78,    -1,   116,    70,   122,    78,    -1,
     116,    70,    78,    -1,    68,   118,    -1,    68,    -1,    68,
     118,   117,    -1,    68,   117,    -1,   102,    -1,   118,   102,
      -1,   120,    -1,   120,    75,    39,    -1,   121,    -1,   120,
      75,   121,    -1,    99,   115,    -1,    99,   126,    -1,    99,
      -1,    59,    -1,   122,    75,    59,    -1,   138,    -1,    73,
     124,    74,    -1,    73,   124,    75,    74,    -1,   123,    -1,
     124,    75,   123,    -1,   109,   126,    -1,   109,    -1,   117,
      -1,   117,   127,    -1,   127,    -1,    70,   126,    78,    -1,
     127,    79,   141,    80,    -1,    79,    80,    -1,   127,    79,
      80,    -1,    79,   141,    80,    -1,   127,    70,   119,    78,
      -1,    70,    78,    -1,   127,    70,    78,    -1,    70,   119,
      78,    -1,    81,    -1,   130,    -1,   131,    -1,   132,    -1,
     134,    -1,   135,    -1,   136,    -1,    59,    77,   129,    -1,
      22,   141,    77,   129,    -1,    23,    77,   129,    -1,   137,
      72,    -1,    72,    -1,    73,    98,   133,    74,    -1,    73,
      74,    -1,    73,    98,    74,    -1,    73,   133,    74,    -1,
     129,    -1,   133,   129,    -1,    24,    70,   137,    78,   129,
      -1,    24,    70,   137,    78,   129,    26,   129,    -1,    25,
      70,   137,    78,   129,    -1,    29,    70,   137,    78,   129,
      -1,    28,   129,    29,    70,   137,    78,    72,    -1,    27,
      70,   137,    72,   137,    72,   137,    78,   129,    -1,    27,
      70,   137,    72,   137,    72,    78,   129,    -1,    27,    70,
     137,    72,    72,   137,    78,   129,    -1,    27,    70,   137,
      72,    72,    78,   129,    -1,    27,    70,    72,   137,    72,
     137,    78,   129,    -1,    27,    70,    72,   137,    72,    78,
     129,    -1,    27,    70,    72,    72,   137,    78,   129,    -1,
      27,    70,    72,    72,    78,   129,    -1,    30,    59,    72,
      -1,    31,    72,    -1,    32,    72,    -1,    35,   137,    72,
      -1,    35,    72,    -1,   138,    -1,   137,    75,   138,    -1,
     140,    -1,   153,   139,   138,    -1,    49,    -1,    50,    -1,
      51,    -1,    52,    -1,    53,    -1,    55,    -1,    54,    -1,
      56,    -1,    57,    -1,    58,    -1,    76,    -1,   142,    -1,
     142,    82,   137,    77,   140,    -1,   140,    -1,   143,    -1,
     142,    37,   143,    -1,   144,    -1,   143,    38,   144,    -1,
     145,    -1,   144,    83,   145,    -1,   146,    -1,   145,    84,
     146,    -1,   147,    -1,   146,    85,   147,    -1,   148,    -1,
     147,    40,   148,    -1,   147,    41,   148,    -1,   149,    -1,
     148,    86,   149,    -1,   148,    87,   149,    -1,   148,    42,
     149,    -1,   148,    43,   149,    -1,   150,    -1,   149,    45,
     150,    -1,   149,    44,   150,    -1,   151,    -1,   150,    66,
     151,    -1,   150,    67,   151,    -1,   152,    -1,   151,    68,
     152,    -1,   151,    69,   152,    -1,   151,    88,   152,    -1,
     153,    -1,    70,   125,    78,   152,    -1,   155,    -1,    47,
     153,    -1,    46,   153,    -1,   154,   152,    -1,    36,   153,
      -1,    36,    70,   125,    78,    -1,    85,    -1,    68,    -1,
      66,    -1,    67,    -1,    89,    -1,    90,    -1,   156,    -1,
     155,    79,   137,    80,    -1,   155,    70,   157,    78,    -1,
     155,    70,    78,    -1,   155,    91,    59,    -1,   155,    48,
      59,    -1,   155,    47,    -1,   155,    46,    -1,    59,    -1,
     158,    -1,    60,    -1,    70,   137,    78,    -1,   138,    -1,
     157,    75,   138,    -1,    61,    -1,    62,    -1,    63,    -1,
      65,    -1,    64,    -1,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    99,    99,   100,   101,   104,   105,   108,   109,   113,
     114,   115,   116,   120,   121,   124,   125,   128,   129,   130,
     131,   132,   133,   137,   138,   139,   140,   141,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     159,   160,   163,   164,   165,   168,   169,   172,   173,   177,
     178,   182,   183,   187,   191,   192,   193,   194,   198,   199,
     203,   204,   205,   209,   210,   211,   215,   216,   220,   221,
     225,   226,   230,   231,   232,   233,   234,   235,   236,   240,
     241,   242,   243,   247,   248,   252,   253,   257,   258,   262,
     263,   264,   268,   269,   273,   274,   275,   279,   280,   284,
     285,   289,   290,   291,   294,   295,   296,   297,   298,   300,
     301,   302,   303,   306,   310,   311,   312,   313,   314,   315,
     319,   320,   321,   325,   326,   330,   331,   332,   333,   336,
     337,   340,   341,   342,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   357,   358,   359,   360,   361,   364,
     365,   369,   370,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   387,   388,   391,   395,   396,   400,
     401,   404,   405,   408,   409,   412,   413,   416,   417,   418,
     422,   423,   424,   425,   426,   430,   431,   432,   436,   437,
     438,   441,   442,   443,   444,   448,   449,   453,   454,   455,
     456,   457,   458,   461,   462,   463,   464,   465,   466,   469,
     470,   471,   472,   473,   474,   475,   476,   481,   482,   483,
     484,   488,   489,   492,   493,   494,   495,   496,   497
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
  "CONST_CARACTER", "'+'", "'-'", "'*'", "'/'", "'('", "IFX", "';'", "'{'",
  "'}'", "','", "'='", "':'", "')'", "'['", "']'", "'t'", "'?'", "'|'",
  "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'", "$accept",
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
  "lista_de_parametros", "declaracion_parametro",
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
     315,   316,   317,   318,   319,   320,    43,    45,    42,    47,
      40,   321,    59,   123,   125,    44,    61,    58,    41,    91,
      93,   116,    63,   124,    94,    38,    60,    62,    37,   126,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    94,    94,    95,    95,    96,
      96,    96,    96,    97,    97,    98,    98,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   107,   107,   108,   109,   109,   109,   109,   110,   110,
     111,   111,   111,   112,   112,   112,   113,   113,   114,   114,
     115,   115,   116,   116,   116,   116,   116,   116,   116,   117,
     117,   117,   117,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   126,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   129,   129,   129,   129,   129,   129,
     130,   130,   130,   131,   131,   132,   132,   132,   132,   133,
     133,   134,   134,   134,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   136,   136,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   142,   142,   143,
     143,   144,   144,   145,   145,   146,   146,   147,   147,   147,
     148,   148,   148,   148,   148,   149,   149,   149,   150,   150,
     150,   151,   151,   151,   151,   152,   152,   153,   153,   153,
     153,   153,   153,   154,   154,   154,   154,   154,   154,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   156,   156,
     156,   157,   157,   158,   158,   158,   158,   158,   158
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     2,     1,     1,     4,
       3,     3,     2,     3,     2,     1,     2,     2,     1,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     2,     3,     1,     1,     1,     2,     1,
       3,     1,     3,     3,     2,     1,     2,     1,     1,     3,
       1,     3,     2,     5,     3,     2,     1,     3,     1,     3,
       2,     1,     1,     3,     4,     3,     4,     4,     3,     2,
       1,     3,     2,     1,     2,     1,     3,     1,     3,     2,
       2,     1,     1,     3,     1,     3,     4,     1,     3,     2,
       1,     1,     2,     1,     3,     4,     2,     3,     3,     4,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     2,     1,     4,     2,     3,     3,     1,
       2,     5,     7,     5,     5,     7,     9,     8,     8,     7,
       8,     7,     7,     6,     3,     2,     2,     3,     2,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     1,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     4,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    23,    24,    25,    26,    27,    33,    29,
      32,    28,    34,    30,    31,    35,    36,    40,    41,     0,
      45,    46,    72,    80,     0,     0,   113,     0,     4,     5,
       7,     8,     0,    18,    20,    22,    37,     0,    38,     0,
      71,     0,    39,     2,   228,   217,   219,   223,   224,   225,
     227,   226,     0,     0,   218,    65,    83,    82,    79,     0,
      68,    55,    57,     0,    47,     0,     0,    66,     1,     6,
      14,     0,    49,    51,    17,    19,    21,    43,     0,    15,
       0,     0,    12,     0,     0,    70,     0,     0,     0,   205,
     206,   204,     0,   203,   207,   208,     0,   149,   151,   164,
     167,   169,   171,   173,   175,   177,   180,   185,   188,   191,
     195,     0,   197,   209,     3,     0,    84,    81,    73,     0,
      54,    56,    44,    48,     0,     0,    58,    60,    64,     0,
      13,     0,     0,     0,    11,     0,   228,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   217,   124,
     126,     0,    20,    22,   129,   114,   115,   116,     0,   117,
     118,   119,     0,    16,    10,    51,    92,    78,    91,     0,
      85,    87,     0,    75,   166,     0,   195,     0,   201,   199,
     198,   100,     0,     0,   220,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   153,   154,   155,   156,   157,   159,
     158,   160,   161,   162,   163,     0,   200,   216,   215,     0,
       0,     0,     0,     0,    69,    62,    53,     0,     0,    67,
      50,     0,    52,    94,     9,     0,     0,     0,     0,     0,
       0,   217,     0,     0,     0,     0,   145,   146,   148,     0,
       0,   127,     0,   128,   130,   123,     0,     0,    89,   101,
      90,   103,    76,     0,     0,    77,    74,     0,     0,   101,
      99,     0,   150,   168,     0,   170,   172,   174,   176,   178,
     179,   183,   184,   181,   182,   187,   186,   189,   190,   192,
     193,   194,   152,   214,   212,   221,     0,     0,   213,    63,
      59,    61,    97,     0,    42,     0,   122,     0,     0,     0,
       0,     0,     0,   144,   147,   120,   125,   110,     0,     0,
     106,     0,   102,     0,     0,    86,    88,    93,   202,   196,
       0,     0,   211,   210,    95,     0,   121,     0,     0,     0,
       0,     0,     0,     0,   112,   104,   108,   111,     0,   107,
       0,   165,   222,    96,    98,   131,   133,     0,     0,     0,
       0,     0,     0,   134,   109,   105,     0,   143,     0,     0,
       0,     0,     0,     0,     0,   132,   142,   141,     0,   139,
       0,     0,     0,   135,   140,   138,   137,     0,   136
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    27,    28,    29,    30,    31,   151,    81,    33,    34,
      35,    36,    37,    63,    71,    72,    64,    65,   125,   126,
      38,    66,    67,    39,    40,    41,    58,   318,   170,   171,
     172,   232,   303,   182,   319,   261,    42,   154,   155,   156,
     157,   158,   159,   160,   161,   162,    97,   215,    98,   175,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   296,    54
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -224
static const yytype_int16 yypact[] =
{
     677,   677,     8,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,   -38,
    -224,  -224,  -224,    11,    21,  1198,  -224,    23,   814,  -224,
    -224,  -224,   137,  1126,  1126,  1126,  -224,   -18,  -224,  1161,
     -55,    68,  -224,  -224,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  1980,   677,  -224,   -17,  -224,  -224,    11,   -16,
     -10,  1305,  1305,  1233,  -224,   117,   144,  -224,  -224,  -224,
    -224,    59,  -224,   921,  -224,  -224,  -224,   -13,   336,  -224,
    1161,   137,  -224,   891,  1539,   -55,  2013,  2046,  2046,  -224,
    -224,  -224,   589,  -224,  -224,  -224,    82,  -224,  -224,   -25,
      36,     4,    49,    19,   212,     7,   282,   262,    -4,  -224,
     335,  1980,   153,  -224,  -224,    76,  -224,  -224,  -224,  1980,
    -224,  -224,  -224,  -224,  1980,   136,  -224,    70,  -224,    76,
    -224,    21,  1576,  1161,  -224,  1305,   -38,  1980,    74,    93,
      95,   107,  1473,   109,   122,   116,   121,  1609,   140,  -224,
    -224,   422,   970,  1000,  -224,  -224,  -224,  -224,  1333,  -224,
    -224,  -224,   161,  -224,  -224,   126,  -224,  -224,    18,   120,
     131,  -224,   160,  -224,  -224,   130,  -224,   589,  -224,  -224,
    -224,    80,   146,  1980,  -224,  1980,  1980,  1980,  1980,  1980,
    1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,  1980,
    1980,  1980,  1980,  1980,  -224,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,  -224,  -224,  -224,  1980,  -224,  -224,  -224,   178,
    1642,  1980,   182,   256,  -224,  -224,  -224,   117,  1980,  -224,
    -224,  1576,  -224,  -224,  -224,  1270,   166,  1473,  1980,  1980,
    1675,   170,   508,   225,  1980,   148,  -224,  -224,  -224,   187,
    1473,  -224,  1403,  -224,  -224,  -224,   707,  1708,  -224,    26,
    -224,    20,  -224,  1049,   206,  -224,  -224,   196,   784,    75,
    -224,  1980,  -224,    36,   -58,     4,    49,    19,   212,     7,
       7,   282,   282,   282,   282,   262,   262,    -4,    -4,  -224,
    -224,  -224,  -224,  -224,  -224,  -224,   191,   -36,  -224,  -224,
    -224,  -224,  -224,   258,  -224,  1473,  -224,   192,   198,  1745,
     203,   209,   208,  -224,  -224,  -224,  -224,  -224,   211,   219,
    -224,   201,    20,  1084,  1778,  -224,  -224,  -224,  -224,  -224,
    1980,  1980,  -224,  -224,  -224,  1506,  -224,  1473,  1473,  1815,
     213,  1848,  1980,  1473,  -224,  -224,  -224,  -224,   230,  -224,
     207,  -224,  -224,  -224,  -224,   290,  -224,  1473,   221,  1881,
    1914,   226,   229,  -224,  -224,  -224,  1473,  -224,  1473,  1473,
     231,  1473,   242,  1947,   246,  -224,  -224,  -224,  1473,  -224,
    1473,  1473,   247,  -224,  -224,  -224,  -224,  1473,  -224
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,    10,  -224,   310,  -224,    22,     9,     0,  -224,   105,
      78,  -224,  -224,   204,  -224,   244,   -53,   142,  -224,   135,
    -224,   261,   248,    -6,   -37,    -7,  -224,   -77,  -224,   115,
    -224,  -209,  -224,   202,  -154,  -223,  -224,   -66,  -224,  -224,
     -26,   243,  -224,  -224,  -224,   -49,   -51,  -224,   -82,   -99,
    -224,   195,   194,   217,   218,   222,   143,    33,   139,   174,
     -59,   -79,  -224,  -224,   411,  -224,  -224
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -69
static const yytype_int16 yytable[] =
{
      32,    32,   174,    96,    85,   176,   169,   178,   179,   180,
     123,    43,   185,    82,   260,    83,    57,   183,    59,   330,
     224,    55,   302,    68,    84,   225,    73,   270,    32,    44,
      17,    18,   176,    74,    75,    76,   322,   174,   236,   183,
     176,    77,   174,    96,   333,   176,   322,   134,    80,   193,
     194,   117,   216,    32,   164,   174,   115,   186,   176,   127,
     135,    79,   118,   114,   201,   202,   119,    45,    46,    47,
      48,    49,    50,    51,   187,   165,   243,    22,    52,    23,
      22,   233,   133,   168,   203,    22,    23,   188,   256,    23,
     323,    24,   254,   195,   196,    79,   256,   257,   249,   324,
      79,    56,   163,    62,   190,   257,   176,   234,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   165,   354,    22,    96,   301,
      61,   130,   272,   189,   131,    60,   116,   274,    24,    62,
      62,    62,   289,   290,   291,   268,   174,   228,    23,   176,
     268,   237,    75,    76,   257,   163,   153,   183,   321,   257,
     184,   259,   258,   238,   292,   239,    61,    61,    61,   295,
      62,   306,   297,   163,   269,   174,    22,   240,   176,   244,
     233,   245,   123,   152,   315,    23,   254,    24,   246,   307,
     308,   310,   176,   247,   124,   312,    22,    61,   262,   217,
     218,   219,   132,   120,   121,    23,   263,    24,   226,    70,
     266,   227,   329,    62,   -68,   -68,   119,   250,   128,   129,
     313,   127,    85,   220,   271,   350,   281,   282,   283,   284,
     153,   153,   221,   255,   181,   264,   183,   293,   265,   336,
      61,   298,   174,   305,   222,   176,   348,   250,   351,   259,
      59,   176,   191,   192,   311,    62,   168,   152,   152,   314,
     340,   269,   183,   168,    79,   327,   331,   183,   168,   332,
     337,   355,   356,   183,   328,   341,   338,   363,   183,   342,
     352,   346,    61,   183,   233,   359,   343,   365,   183,   344,
     358,   367,   361,   362,   120,   121,   183,   345,   373,   368,
     375,   183,   376,   377,   183,   379,   183,   374,   364,   378,
     370,   372,   384,    62,   385,   386,   366,   183,   383,   181,
     380,   388,   183,   168,   382,   387,   197,   198,   199,   200,
     299,   129,   334,   335,   279,   280,   285,   286,    69,   235,
      61,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   136,   137,   138,
     139,   140,   300,   141,   142,   143,   144,   145,   146,    20,
      21,   147,    86,   287,   288,   230,   223,   229,   326,   267,
     273,   275,    87,    88,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   252,   148,    46,    47,    48,    49,
      50,    51,    89,    90,    91,   276,    92,   277,   149,    78,
     150,   214,   278,    53,     0,     0,     0,    26,     0,     0,
       0,    93,     0,     0,     0,    94,    95,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   136,   137,   138,   139,   140,     0,   141,
     142,   143,   144,   145,   146,    20,    21,   147,    86,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,    46,    47,    48,    49,    50,    51,    89,    90,
      91,     0,    92,     0,   149,    78,   251,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,    93,     0,     0,
       0,    94,    95,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   136,
     137,   138,   139,   140,     0,   141,   142,   143,   144,   145,
     146,    20,    21,   147,    86,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,    46,    47,
      48,    49,    50,    51,    89,    90,    91,     0,    92,     0,
     149,    78,   150,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    93,     0,     0,     0,    94,    95,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     136,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,    21,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,    46,
      47,    48,    49,    50,    51,    89,    90,    91,     0,    92,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,    93,     0,     0,     0,    94,    95,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      20,    21,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
      20,    21,     0,     0,     0,    23,     0,    24,     0,     0,
      25,     0,     0,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    22,     0,     0,     0,
       0,     0,     0,     0,     0,    23,     0,   256,     0,     0,
      25,     0,     0,     0,     0,   317,   257,     0,    26,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,    23,     0,   268,     0,     0,    25,     0,     0,
       0,     0,   317,   257,     0,    26,     0,     0,     0,     0,
       0,     0,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,    23,     0,    24,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,    26,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
     166,     0,     0,     0,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     0,     0,     0,   167,
       0,     0,    26,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,    78,     0,     0,   132,     0,     0,
       0,     0,    26,    20,    21,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    25,     0,     0,     0,   -55,     0,     0,
       0,    26,     0,     0,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,    25,     0,     0,     0,   -57,     0,     0,
       0,    26,    20,    21,     0,     0,     0,     0,   325,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,    21,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
      26,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    20,
      21,     0,   347,     0,     0,    26,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    20,    21,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,    26,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    20,    21,     0,    78,     0,     0,     0,     0,     0,
       0,     0,    26,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,    26,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    20,    21,     0,    25,   122,     0,     0,
       0,     0,     0,     0,    26,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    20,    21,
       0,     0,     0,    25,   304,     0,     0,     0,     0,     0,
       0,    26,     0,     0,    44,   137,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,     0,     0,   147,    86,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    87,
      88,     0,     0,     0,     0,     0,    26,     0,     0,     0,
       0,     0,   241,    46,    47,    48,    49,    50,    51,    89,
      90,    91,     0,    92,     0,   149,   242,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,    94,    95,    44,   137,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,     0,     0,   147,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,    46,    47,    48,    49,    50,    51,    89,
      90,    91,     0,    92,     0,   149,   242,   316,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,    94,    95,    44,   137,   138,   139,   140,     0,
     141,   142,   143,   144,   145,   146,     0,     0,   147,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,     0,     0,     0,    44,     0,     0,
       0,     0,   241,    46,    47,    48,    49,    50,    51,    89,
      90,    91,    86,    92,     0,   149,   242,     0,     0,     0,
       0,     0,    87,    88,     0,     0,     0,     0,    93,     0,
      44,     0,    94,    95,     0,    45,    46,    47,    48,    49,
      50,    51,    89,    90,    91,    86,    92,     0,     0,   231,
     353,     0,     0,     0,     0,    87,    88,     0,     0,     0,
       0,    93,     0,     0,     0,    94,    95,    44,    45,    46,
      47,    48,    49,    50,    51,    89,    90,    91,     0,    92,
       0,     0,    86,     0,     0,     0,     0,     0,     0,   173,
       0,     0,    87,    88,    93,     0,     0,     0,    94,    95,
      44,     0,     0,     0,     0,    45,    46,    47,    48,    49,
      50,    51,    89,    90,    91,    86,    92,     0,     0,   231,
       0,     0,     0,     0,     0,    87,    88,     0,     0,     0,
       0,    93,     0,    44,     0,    94,    95,     0,    45,    46,
      47,    48,    49,    50,    51,    89,    90,    91,    86,    92,
       0,   248,     0,     0,     0,     0,     0,     0,    87,    88,
       0,     0,     0,     0,    93,     0,    44,     0,    94,    95,
       0,    45,    46,    47,    48,    49,    50,    51,    89,    90,
      91,    86,    92,     0,     0,     0,     0,     0,     0,     0,
     294,    87,    88,     0,     0,     0,     0,    93,     0,    44,
       0,    94,    95,     0,    45,    46,    47,    48,    49,    50,
      51,    89,    90,    91,    86,    92,     0,   309,     0,     0,
       0,     0,     0,     0,    87,    88,     0,     0,     0,     0,
      93,     0,     0,     0,    94,    95,    44,    45,    46,    47,
      48,    49,    50,    51,    89,    90,    91,     0,    92,     0,
       0,    86,     0,     0,     0,     0,     0,     0,   320,     0,
       0,    87,    88,    93,     0,     0,     0,    94,    95,    44,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    89,    90,    91,    86,    92,     0,   339,     0,     0,
       0,     0,     0,     0,    87,    88,     0,     0,     0,     0,
      93,     0,     0,     0,    94,    95,    44,    45,    46,    47,
      48,    49,    50,    51,    89,    90,    91,     0,    92,     0,
       0,    86,     0,     0,     0,     0,     0,     0,   349,     0,
       0,    87,    88,    93,     0,     0,     0,    94,    95,    44,
       0,     0,     0,     0,    45,    46,    47,    48,    49,    50,
      51,    89,    90,    91,    86,    92,     0,     0,     0,     0,
       0,     0,     0,   357,    87,    88,     0,     0,     0,     0,
      93,     0,    44,     0,    94,    95,     0,    45,    46,    47,
      48,    49,    50,    51,    89,    90,    91,    86,    92,     0,
     360,     0,     0,     0,     0,     0,     0,    87,    88,     0,
       0,     0,     0,    93,     0,    44,     0,    94,    95,     0,
      45,    46,    47,    48,    49,    50,    51,    89,    90,    91,
      86,    92,     0,     0,     0,     0,     0,     0,     0,   369,
      87,    88,     0,     0,     0,     0,    93,     0,    44,     0,
      94,    95,     0,    45,    46,    47,    48,    49,    50,    51,
      89,    90,    91,    86,    92,     0,     0,     0,     0,     0,
       0,     0,   371,    87,    88,     0,     0,     0,     0,    93,
       0,    44,     0,    94,    95,     0,    45,    46,    47,    48,
      49,    50,    51,    89,    90,    91,    86,    92,     0,     0,
       0,     0,     0,     0,     0,   381,    87,    88,     0,     0,
       0,     0,    93,     0,    44,     0,    94,    95,     0,    45,
      46,    47,    48,    49,    50,    51,    89,    90,    91,    86,
      92,     0,     0,     0,     0,     0,     0,     0,     0,    87,
      88,     0,     0,     0,     0,    93,     0,    44,     0,    94,
      95,     0,    45,    46,    47,    48,    49,    50,    51,    89,
      90,    91,    86,   177,     0,     0,     0,     0,     0,     0,
       0,     0,    87,    88,     0,     0,     0,     0,    93,     0,
       0,     0,    94,    95,     0,    45,    46,    47,    48,    49,
      50,    51,    89,    90,    91,     0,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    93,     0,     0,     0,    94,    95
};

static const yytype_int16 yycheck[] =
{
       0,     1,    84,    52,    41,    84,    83,    86,    87,    88,
      63,     1,    37,    39,   168,    70,    23,    75,    24,    77,
     119,    59,   231,     0,    79,   124,    32,   181,    28,    21,
      19,    20,   111,    33,    34,    35,   259,   119,   137,    75,
     119,    59,   124,    92,    80,   124,   269,    73,    39,    42,
      43,    58,   111,    53,    80,   137,    73,    82,   137,    65,
      73,    39,    78,    53,    68,    69,    76,    59,    60,    61,
      62,    63,    64,    65,    38,    81,   142,    59,    70,    68,
      59,   132,    73,    83,    88,    59,    68,    83,    70,    68,
      70,    70,   158,    86,    87,    73,    70,    79,   147,    79,
      78,    23,    80,    25,    85,    79,   185,   133,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   131,   335,    59,   177,   228,
      25,    72,   183,    84,    75,    59,    58,   186,    70,    61,
      62,    63,   201,   202,   203,    70,   228,    77,    68,   228,
      70,    77,   152,   153,    79,   133,    78,    75,   257,    79,
      78,   168,   168,    70,   215,    70,    61,    62,    63,   220,
      92,   237,   221,   151,   181,   257,    59,    70,   257,    70,
     231,    59,   235,    78,   250,    68,   252,    70,    72,   238,
     239,   240,   271,    72,    77,   244,    59,    92,    78,    46,
      47,    48,    76,    61,    62,    68,    75,    70,    72,    72,
      80,    75,   271,   135,    74,    75,    76,    77,    74,    75,
      72,   227,   259,    70,    78,   324,   193,   194,   195,   196,
     152,   153,    79,    72,    92,    75,    75,    59,    78,   305,
     135,    59,   324,    77,    91,   324,   323,    77,   330,   256,
     256,   330,    40,    41,    29,   177,   256,   152,   153,    72,
     309,   268,    75,   263,   242,    59,    75,    75,   268,    78,
      78,   337,   338,    75,    78,    72,    78,   343,    75,    70,
     331,    80,   177,    75,   335,    72,    78,    80,    75,    78,
     339,   357,   341,   342,   152,   153,    75,    78,    72,    78,
     366,    75,   368,   369,    75,   371,    75,    78,    78,    78,
     359,   360,   378,   235,   380,   381,    26,    75,    72,   177,
      78,   387,    75,   323,   373,    78,    44,    45,    66,    67,
      74,    75,    74,    75,   191,   192,   197,   198,    28,   135,
     235,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   227,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,   199,   200,   131,   115,   129,   263,   177,
     185,   187,    46,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,   151,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   188,    70,   189,    72,    73,
      74,    76,   190,     2,    -1,    -1,    -1,    81,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    90,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,    90,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    79,    -1,    81,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    78,    79,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    81,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    33,    34,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    -1,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    73,    -1,    -1,    -1,    77,    -1,    -1,
      -1,    81,    33,    34,    -1,    -1,    -1,    -1,    39,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    33,
      34,    -1,    78,    -1,    -1,    81,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    46,
      47,    -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    72,    73,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,
      21,    -1,    89,    90,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    -1,    73,
      74,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    90,    21,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    46,    47,    85,    -1,    -1,    -1,    89,    90,
      21,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    85,    -1,    21,    -1,    89,    90,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    36,    70,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    85,    -1,    21,    -1,    89,    90,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    36,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,    21,
      -1,    89,    90,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    36,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    90,    21,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    46,    47,    85,    -1,    -1,    -1,    89,    90,    21,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    36,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    89,    90,    21,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    46,    47,    85,    -1,    -1,    -1,    89,    90,    21,
      -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    36,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    46,    47,    -1,    -1,    -1,    -1,
      85,    -1,    21,    -1,    89,    90,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    36,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    85,    -1,    21,    -1,    89,    90,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      36,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      46,    47,    -1,    -1,    -1,    -1,    85,    -1,    21,    -1,
      89,    90,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    46,    47,    -1,    -1,    -1,    -1,    85,
      -1,    21,    -1,    89,    90,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    46,    47,    -1,    -1,
      -1,    -1,    85,    -1,    21,    -1,    89,    90,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    85,    -1,    21,    -1,    89,
      90,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    -1,    -1,    89,    90
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      33,    34,    59,    68,    70,    73,    81,    93,    94,    95,
      96,    97,    99,   100,   101,   102,   103,   104,   112,   115,
     116,   117,   128,    93,    21,    59,    60,    61,    62,    63,
      64,    65,    70,   156,   158,    59,   102,   117,   118,   115,
      59,   101,   102,   105,   108,   109,   113,   114,     0,    95,
      72,   106,   107,   115,    99,    99,    99,    59,    73,    97,
      98,    99,   132,    70,    79,   116,    36,    46,    47,    66,
      67,    68,    70,    85,    89,    90,   137,   138,   140,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,    93,    73,   102,   117,    78,    76,
     109,   109,    74,   108,    77,   110,   111,   115,    74,    75,
      72,    75,    76,    98,   132,    73,    21,    22,    23,    24,
      25,    27,    28,    29,    30,    31,    32,    35,    59,    72,
      74,    98,   101,   102,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    97,   132,   115,    59,    78,    99,   119,
     120,   121,   122,    80,   140,   141,   153,    70,   153,   153,
     153,   109,   125,    75,    78,    37,    82,    38,    83,    84,
      85,    40,    41,    42,    43,    86,    87,    44,    45,    66,
      67,    68,    69,    88,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    76,   139,   152,    46,    47,    48,
      70,    79,    91,   113,   141,   141,    72,    75,    77,   114,
     107,    73,   123,   138,   132,   105,   141,    77,    70,    70,
      70,    59,    73,   129,    70,    59,    72,    72,    72,   137,
      77,    74,   133,    74,   129,    72,    70,    79,   115,   117,
     126,   127,    78,    75,    75,    78,    80,   125,    70,   117,
     126,    78,   138,   143,   137,   144,   145,   146,   147,   148,
     148,   149,   149,   149,   149,   150,   150,   151,   151,   152,
     152,   152,   138,    59,    78,   138,   157,   137,    59,    74,
     111,   141,   123,   124,    74,    77,   129,   137,   137,    72,
     137,    29,   137,    72,    72,   129,    74,    78,   119,   126,
      80,   141,   127,    70,    79,    39,   121,    59,    78,   152,
      77,    75,    78,    80,    74,    75,   129,    78,    78,    72,
     137,    72,    70,    78,    78,    78,    80,    78,   119,    80,
     141,   140,   138,    74,   123,   129,   129,    78,   137,    72,
      72,   137,   137,   129,    78,    80,    26,   129,    78,    78,
     137,    78,   137,    72,    78,   129,   129,   129,    78,   129,
      78,    78,   137,    72,   129,   129,   129,    78,   129
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
        case 28:

/* Line 1455 of yacc.c  */
#line 145 "bison.y"
    {printf("\nespecificador_de_tipo : int\n");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 146 "bison.y"
    {printf("especificador_de_tipo : char\n");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 147 "bison.y"
    {printf("especificador_de_tipo : float\n");;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 148 "bison.y"
    {printf("especificador_de_tipo : double\n");;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 315 "bison.y"
    {printf("\nFin de una sentencia de salto\n");;}
    break;



/* Line 1455 of yacc.c  */
#line 2193 "bison.tab.c"
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
#line 500 "bison.y"

int main (int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    if(analisisCorrecto){
        printf("Analisis finalizado correctamente");
        FILE *fpReporte
        fpReporte = fopen("./reporte.txt" , "w");
        imprimirReporte()

        fclose(fpReporte);
    }

    return 0;
}
int yyerror(const char *msg)
{

	printf("\nFallo el analisis en la linea: %d %s\n",yylineno,msg);
	analisisCorrecto = 0;
	return 0;
}
