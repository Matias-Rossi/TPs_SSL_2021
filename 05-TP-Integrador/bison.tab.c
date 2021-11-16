
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
#define YYLAST   2161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNRULES -- Number of states.  */
#define YYNSTATES  406

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      73,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    91,     2,     2,     2,    89,    86,     2,
      70,    79,    68,    66,    76,    67,    92,    69,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    78,    72,
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
      65,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    15,    17,    20,    22,
      24,    29,    33,    37,    40,    44,    47,    52,    56,    58,
      61,    64,    66,    69,    71,    74,    76,    78,    80,    82,
      84,    86,    88,    90,    92,    94,    96,    98,   100,   102,
     104,   106,   108,   110,   112,   114,   120,   123,   127,   129,
     131,   133,   136,   138,   142,   144,   148,   152,   155,   157,
     160,   162,   164,   168,   170,   174,   177,   183,   187,   190,
     192,   196,   198,   202,   205,   207,   209,   213,   218,   222,
     227,   232,   236,   241,   246,   250,   253,   255,   259,   262,
     264,   267,   269,   273,   275,   279,   283,   290,   297,   304,
     308,   311,   313,   314,   316,   320,   322,   326,   331,   333,
     337,   340,   342,   344,   347,   349,   353,   358,   361,   365,
     369,   374,   377,   381,   385,   387,   389,   391,   393,   395,
     397,   399,   403,   408,   412,   415,   417,   422,   425,   429,
     433,   435,   438,   444,   452,   458,   464,   472,   482,   491,
     500,   508,   517,   525,   533,   540,   544,   547,   550,   554,
     557,   559,   563,   565,   569,   571,   573,   575,   577,   579,
     581,   583,   585,   587,   589,   591,   593,   599,   601,   603,
     607,   609,   613,   615,   619,   621,   625,   627,   631,   633,
     637,   641,   643,   647,   651,   655,   659,   661,   665,   669,
     671,   675,   679,   681,   685,   689,   693,   695,   700,   702,
     705,   708,   711,   714,   719,   721,   723,   725,   727,   729,
     731,   733,   738,   743,   747,   751,   755,   758,   761,   763,
     765,   767,   771,   773,   777,   779,   781,   783,   785,   787
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      94,     0,    -1,     3,    94,    -1,     4,   158,    94,    -1,
      95,    -1,     1,    95,    -1,    96,    -1,    95,    96,    -1,
      97,    -1,    98,    -1,   100,   116,    99,   134,    -1,   116,
      99,   134,    -1,   100,   116,   134,    -1,   116,   134,    -1,
     100,   107,    72,    -1,   100,    72,    -1,   100,   107,     1,
      73,    -1,   100,     1,    73,    -1,    98,    -1,    99,    98,
      -1,   101,   100,    -1,   101,    -1,   102,   100,    -1,   102,
      -1,   103,   100,    -1,   103,    -1,     5,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,    13,    -1,    11,    -1,
      15,    -1,    16,    -1,    12,    -1,    10,    -1,    14,    -1,
      17,    -1,    18,    -1,   104,    -1,   113,    -1,   130,    -1,
      19,    -1,    20,    -1,   105,    59,    74,   106,    75,    -1,
     105,    59,    -1,    74,   106,    75,    -1,    33,    -1,    34,
      -1,   109,    -1,   106,   109,    -1,   108,    -1,   107,    76,
     108,    -1,   116,    -1,   116,    77,   125,    -1,   110,   111,
      72,    -1,   102,   110,    -1,   102,    -1,   103,   110,    -1,
     103,    -1,   112,    -1,   111,    76,   112,    -1,   116,    -1,
     116,    78,   143,    -1,    78,   143,    -1,    21,    59,    74,
     114,    75,    -1,    74,   114,    75,    -1,    21,    59,    -1,
     115,    -1,   114,    76,   115,    -1,    59,    -1,    59,    77,
     143,    -1,   118,   117,    -1,   117,    -1,    59,    -1,    70,
     116,    79,    -1,    59,    80,   143,    81,    -1,    59,    80,
      81,    -1,    59,    70,   120,    79,    -1,    59,    70,   124,
      79,    -1,    59,    70,    79,    -1,    59,    70,   120,     1,
      -1,    59,    70,   124,     1,    -1,    59,    70,     1,    -1,
      68,   119,    -1,    68,    -1,    68,   119,   118,    -1,    68,
     118,    -1,   103,    -1,   119,   103,    -1,   121,    -1,   121,
      76,    39,    -1,   122,    -1,   121,    76,   122,    -1,   100,
     123,    59,    -1,   100,   123,    59,    80,   143,    81,    -1,
     100,   123,    59,    70,   120,    79,    -1,   100,   123,    59,
      70,   124,    79,    -1,   100,   123,   128,    -1,   100,   123,
      -1,   118,    -1,    -1,   158,    -1,   124,    76,   158,    -1,
     140,    -1,    74,   126,    75,    -1,    74,   126,    76,    75,
      -1,   125,    -1,   126,    76,   125,    -1,   110,   128,    -1,
     110,    -1,   118,    -1,   118,   129,    -1,   129,    -1,    70,
     128,    79,    -1,   129,    80,   143,    81,    -1,    80,    81,
      -1,   129,    80,    81,    -1,    80,   143,    81,    -1,   129,
      70,   120,    79,    -1,    70,    79,    -1,   129,    70,    79,
      -1,    70,   120,    79,    -1,    82,    -1,   132,    -1,   133,
      -1,   134,    -1,   137,    -1,   136,    -1,   138,    -1,    59,
      78,   131,    -1,    22,   143,    78,   131,    -1,    23,    78,
     131,    -1,   139,    72,    -1,    72,    -1,    74,    99,   135,
      75,    -1,    74,    75,    -1,    74,    99,    75,    -1,    74,
     135,    75,    -1,   131,    -1,   135,   131,    -1,    24,    70,
     139,    79,   131,    -1,    24,    70,   139,    79,   131,    26,
     131,    -1,    25,    70,   139,    79,   131,    -1,    29,    70,
     139,    79,   131,    -1,    28,   131,    29,    70,   139,    79,
      72,    -1,    27,    70,   139,    72,   139,    72,   139,    79,
     131,    -1,    27,    70,   139,    72,   139,    72,    79,   131,
      -1,    27,    70,   139,    72,    72,   139,    79,   131,    -1,
      27,    70,   139,    72,    72,    79,   131,    -1,    27,    70,
      72,   139,    72,   139,    79,   131,    -1,    27,    70,    72,
     139,    72,    79,   131,    -1,    27,    70,    72,    72,   139,
      79,   131,    -1,    27,    70,    72,    72,    79,   131,    -1,
      30,    59,    72,    -1,    31,    72,    -1,    32,    72,    -1,
      35,   139,    72,    -1,    35,    72,    -1,   140,    -1,   139,
      76,   140,    -1,   142,    -1,   155,   141,   140,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    55,
      -1,    54,    -1,    56,    -1,    57,    -1,    58,    -1,    77,
      -1,   144,    -1,   144,    83,   139,    78,   142,    -1,   142,
      -1,   145,    -1,   144,    37,   145,    -1,   146,    -1,   145,
      38,   146,    -1,   147,    -1,   146,    84,   147,    -1,   148,
      -1,   147,    85,   148,    -1,   149,    -1,   148,    86,   149,
      -1,   150,    -1,   149,    40,   150,    -1,   149,    41,   150,
      -1,   151,    -1,   150,    87,   151,    -1,   150,    88,   151,
      -1,   150,    42,   151,    -1,   150,    43,   151,    -1,   152,
      -1,   151,    45,   152,    -1,   151,    44,   152,    -1,   153,
      -1,   152,    66,   153,    -1,   152,    67,   153,    -1,   154,
      -1,   153,    68,   154,    -1,   153,    69,   154,    -1,   153,
      89,   154,    -1,   155,    -1,    70,   127,    79,   154,    -1,
     157,    -1,    47,   155,    -1,    46,   155,    -1,   156,   154,
      -1,    36,   155,    -1,    36,    70,   127,    79,    -1,    86,
      -1,    68,    -1,    66,    -1,    67,    -1,    90,    -1,    91,
      -1,   158,    -1,   157,    80,   139,    81,    -1,   157,    70,
     159,    79,    -1,   157,    70,    79,    -1,   157,    92,    59,
      -1,   157,    48,    59,    -1,   157,    47,    -1,   157,    46,
      -1,    59,    -1,   160,    -1,    60,    -1,    70,   139,    79,
      -1,   140,    -1,   159,    76,   140,    -1,    61,    -1,    62,
      -1,    63,    -1,    65,    -1,    64,    -1,    21,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    99,   100,   101,   104,   105,   108,   109,
     113,   114,   115,   116,   120,   121,   122,   123,   126,   127,
     130,   131,   132,   133,   134,   135,   139,   140,   141,   142,
     143,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   161,   162,   165,   166,   167,   170,   171,
     174,   175,   179,   180,   184,   185,   189,   193,   194,   195,
     196,   200,   201,   205,   206,   207,   211,   212,   213,   217,
     218,   222,   223,   227,   228,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   244,   245,   246,   247,   251,
     252,   256,   257,   261,   262,   266,   267,   268,   269,   270,
     271,   274,   275,   279,   280,   286,   287,   288,   292,   293,
     297,   298,   302,   303,   304,   307,   308,   309,   310,   311,
     313,   314,   315,   316,   319,   323,   324,   325,   326,   327,
     328,   332,   333,   334,   338,   339,   343,   344,   345,   346,
     349,   350,   353,   354,   355,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   370,   371,   372,   373,   374,
     377,   378,   382,   383,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   400,   401,   404,   409,   410,
     414,   415,   418,   419,   422,   423,   426,   427,   430,   431,
     432,   436,   437,   438,   439,   440,   444,   445,   446,   450,
     451,   452,   455,   456,   457,   458,   462,   463,   467,   468,
     469,   470,   471,   472,   475,   476,   477,   478,   479,   480,
     483,   484,   485,   486,   487,   488,   489,   490,   495,   496,
     497,   498,   502,   503,   507,   508,   509,   510,   511,   512
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
  "CONST_CARACTER", "'+'", "'-'", "'*'", "'/'", "'('", "IFX", "';'",
  "'\\n'", "'{'", "'}'", "','", "'='", "':'", "')'", "'['", "']'", "'t'",
  "'?'", "'|'", "'^'", "'&'", "'<'", "'>'", "'%'", "'~'", "'!'", "'.'",
  "$accept", "unidad_de_programa", "unidad_de_traduccion",
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
     315,   316,   317,   318,   319,   320,    43,    45,    42,    47,
      40,   321,    59,    10,   123,   125,    44,    61,    58,    41,
      91,    93,   116,    63,   124,    94,    38,    60,    62,    37,
     126,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    95,    95,    96,    96,
      97,    97,    97,    97,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     101,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   103,   103,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   108,   108,   109,   110,   110,   110,
     110,   111,   111,   112,   112,   112,   113,   113,   113,   114,
     114,   115,   115,   116,   116,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   122,   122,
     122,   123,   123,   124,   124,   125,   125,   125,   126,   126,
     127,   127,   128,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   130,   131,   131,   131,   131,   131,
     131,   132,   132,   132,   133,   133,   134,   134,   134,   134,
     135,   135,   136,   136,   136,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   138,   138,   138,   138,   138,
     139,   139,   140,   140,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   142,   142,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   150,   151,   151,   151,   152,
     152,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     155,   155,   155,   155,   156,   156,   156,   156,   156,   156,
     157,   157,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   159,   159,   160,   160,   160,   160,   160,   160
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       4,     3,     3,     2,     3,     2,     4,     3,     1,     2,
       2,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     2,     3,     1,     1,
       1,     2,     1,     3,     1,     3,     3,     2,     1,     2,
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
       0,     0,     0,     0,    26,    27,    28,    29,    30,    36,
      32,    35,    31,    37,    33,    34,    38,    39,    43,    44,
       0,    48,    49,    75,    86,     0,     0,   124,     0,     4,
       6,     8,     9,     0,    21,    23,    25,    40,     0,    41,
       0,    74,     0,    42,     5,     2,   239,   228,   230,   234,
     235,   236,   238,   237,     0,     0,   229,    68,     0,     0,
      89,    88,    85,     0,    71,    58,    60,     0,    50,     0,
       0,    69,     1,     7,     0,    15,     0,    52,    54,    20,
      22,    24,    46,     0,    18,     0,     0,    13,    73,     0,
       0,     0,   216,   217,   215,     0,   214,   218,   219,     0,
     160,   162,   175,   178,   180,   182,   184,   186,   188,   191,
     196,   199,   202,   206,     0,   208,   220,     3,     0,    84,
     239,    81,   102,     0,    91,    93,     0,   103,    78,   177,
       0,   206,    90,    87,    76,     0,    57,    59,    47,    51,
       0,     0,    61,    63,    67,     0,    17,     0,    14,     0,
       0,     0,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   228,   135,   137,     0,    23,
      25,   140,   125,   126,   127,     0,   129,   128,   130,     0,
      19,    11,    54,     0,   212,   210,   209,   111,     0,     0,
     231,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     164,   165,   166,   167,   168,   170,   169,   171,   172,   173,
     174,     0,   211,   227,   226,     0,     0,     0,     0,     0,
     101,   100,    82,    79,     0,    83,     0,    80,    77,    72,
      65,    56,     0,     0,    70,    16,    53,     0,    55,   105,
      10,     0,     0,     0,     0,     0,     0,   228,     0,     0,
       0,     0,   156,   157,   159,     0,     0,   138,     0,   139,
     141,   134,     0,     0,     0,   112,   110,   114,     0,   161,
     179,     0,   181,   183,   185,   187,   189,   190,   194,   195,
     192,   193,   198,   197,   200,   201,   203,   204,   205,   163,
     225,   223,   232,     0,     0,   224,    66,    95,    99,    92,
      94,   104,    62,    64,   108,     0,    45,     0,   133,     0,
       0,     0,     0,     0,     0,   155,   158,   131,   136,   213,
     121,     0,     0,   117,     0,   113,     0,     0,   207,     0,
       0,   222,   221,     0,     0,   106,     0,   132,     0,     0,
       0,     0,     0,     0,     0,   123,   115,   119,   122,     0,
     118,     0,   176,   233,     0,     0,     0,   107,   109,   142,
     144,     0,     0,     0,     0,     0,     0,   145,   120,   116,
      97,    98,    96,     0,   154,     0,     0,     0,     0,     0,
       0,     0,   143,   153,   152,     0,   150,     0,     0,     0,
     146,   151,   149,   148,     0,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,   168,    86,    34,    35,
      36,    37,    38,    67,    76,    77,    68,    69,   141,   142,
      39,    70,    71,    40,    41,    42,    62,   123,   124,   125,
     231,   126,   248,   315,   188,   276,   277,    43,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   100,   221,   101,
     130,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   303,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -256
static const yytype_int16 yypact[] =
{
     719,   908,   719,   204,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
     -19,  -256,  -256,   -37,    86,   109,  1219,  -256,    78,   908,
    -256,  -256,  -256,    65,  1146,  1146,  1146,  -256,    26,  -256,
    1181,  -256,    20,  -256,   908,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  2004,   719,  -256,    62,   685,  1564,
    -256,  -256,    86,    32,    73,  1327,  1327,  1254,  -256,   176,
      53,  -256,  -256,  -256,   101,  -256,     8,  -256,   938,  -256,
    -256,  -256,   173,   342,  -256,  1181,    65,  -256,  -256,  2037,
    2070,  2070,  -256,  -256,  -256,   598,  -256,  -256,  -256,    23,
    -256,  -256,   -16,   155,   165,   171,   174,   104,   -11,   141,
     156,   -27,  -256,   256,  2004,    -9,  -256,  -256,   221,  -256,
     -19,  -256,   194,    15,   207,  -256,    10,  -256,  -256,  -256,
     206,  -256,  -256,  -256,  -256,  2004,  -256,  -256,  -256,  -256,
    2004,    66,  -256,   222,  -256,   221,  -256,   249,  -256,   109,
    1597,  1181,  -256,  1327,  2004,   252,   264,   265,   267,  1498,
     268,   280,   270,   274,  1630,   200,  -256,  -256,   429,   988,
    1018,  -256,  -256,  -256,  -256,  1356,  -256,  -256,  -256,   119,
    -256,  -256,   263,   598,  -256,  -256,  -256,    -5,   289,  2004,
    -256,  2004,  2004,  2004,  2004,  2004,  2004,  2004,  2004,  2004,
    2004,  2004,  2004,  2004,  2004,  2004,  2004,  2004,  2004,  2004,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  2004,  -256,  -256,  -256,   320,  1663,  2004,   321,   105,
    -256,   114,  -256,  -256,  1068,  -256,   204,  -256,  -256,  -256,
    -256,  -256,   176,  2004,  -256,  -256,  -256,  1597,  -256,  -256,
    -256,  1292,   303,  1498,  2004,  2004,  1698,   304,   516,   354,
    2004,   312,  -256,  -256,  -256,   120,  1498,  -256,  1427,  -256,
    -256,  -256,   306,   830,  1731,    34,  -256,    37,  2004,  -256,
     155,   -52,   165,   171,   174,   104,   -11,   -11,   141,   141,
     141,   141,   156,   156,   -27,   -27,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,   139,    -7,  -256,  -256,    52,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,   195,  -256,  1498,  -256,   154,
     163,  1764,   126,   316,   172,  -256,  -256,  -256,  -256,  -256,
    -256,   308,   311,  -256,   310,    37,  1103,  1797,  -256,  2004,
    2004,  -256,  -256,   797,  2004,  -256,  1531,  -256,  1498,  1498,
    1830,   136,  1865,  2004,  1498,  -256,  -256,  -256,  -256,   313,
    -256,   314,  -256,  -256,   315,   179,   317,  -256,  -256,   367,
    -256,  1498,   203,  1898,  1933,   144,   209,  -256,  -256,  -256,
    -256,  -256,  -256,  1498,  -256,  1498,  1498,   213,  1498,   244,
    1969,   324,  -256,  -256,  -256,  1498,  -256,  1498,  1498,   250,
    -256,  -256,  -256,  -256,  1498,  -256
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,    18,   396,    16,  -256,    63,    13,     0,  -256,   162,
      30,  -256,  -256,   246,  -256,   251,   -64,   -43,  -256,   169,
    -256,   297,   273,   -18,   377,   -12,  -256,  -255,  -256,   186,
    -256,    79,  -237,  -256,   238,  -203,   148,  -256,  -145,  -256,
    -256,   -21,   257,  -256,  -256,  -256,   -49,   -50,  -256,   -53,
    -127,  -256,   235,   234,   236,   260,   233,    96,   117,    95,
     122,   -89,   -42,  -256,  -256,     1,  -256,  -256
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
      33,    33,    33,   139,    55,    99,   129,    63,   239,   147,
     314,   235,    61,   240,   259,    78,   232,   131,   331,    87,
      45,   191,   136,   137,   189,   222,   339,   252,   308,    33,
     270,   199,   200,    58,    79,    80,    81,   223,   224,   225,
      57,   207,   208,    59,    33,    73,    99,   184,   185,   186,
     133,   143,   187,    85,    60,    33,    66,   152,   122,   127,
      73,   226,   209,    24,   181,   273,    74,   192,   182,   189,
     332,   227,   131,   117,   342,   274,   201,   202,    72,    23,
     148,   359,   129,   228,   149,    82,   236,   129,   364,   237,
      25,   151,   132,   131,   233,    66,    66,    66,   131,   189,
     249,   129,   190,    84,   273,    18,    19,   336,   318,   368,
     230,   134,   131,   170,   274,   265,   313,   337,   296,   297,
     298,   327,   343,   270,    23,    66,   136,   137,   144,   145,
     250,   182,   344,    24,    99,    25,   118,    75,   241,   279,
     187,    84,   242,   281,   197,   198,    84,   334,   180,   131,
     135,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   131,    23,    80,
      81,   299,   347,   307,   146,   275,   302,    24,   304,    25,
     306,   145,    24,    66,   273,   203,   204,   139,    65,   338,
     129,   271,   326,   193,   274,   189,   189,   249,   352,   170,
     170,   131,   189,   369,   370,   319,   320,   322,   373,   377,
     361,   324,   189,    66,   180,   340,   390,   366,   341,   275,
     189,   129,   205,   206,   143,    46,   384,    65,    65,    65,
     189,   180,   131,   348,   122,    23,   131,   311,   392,   189,
     393,   394,   349,   396,    24,   169,    25,   153,   189,   194,
     401,   354,   402,   403,   140,   236,   195,    65,   381,   405,
     196,   275,    24,    47,    48,    49,    50,    51,    52,    53,
     345,   346,   351,   122,    54,   -71,   -71,   135,   266,   189,
      64,    66,   385,   234,   129,   189,   362,   238,   391,   189,
     363,   129,   395,   286,   287,   131,   249,   131,   292,   293,
     243,   372,   131,   375,   376,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,    65,   288,   289,   290,   291,
     189,    84,   245,   397,   387,   389,   189,   294,   295,   404,
     253,   169,   169,   220,   254,   255,   122,   256,   260,   261,
     150,   399,   262,   122,   127,    65,   263,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   120,   154,   155,   156,   157,   278,   158,
     159,   160,   161,   162,   163,    21,    22,   164,    89,   300,
     305,   317,   266,   323,   325,   329,   353,   355,    90,    91,
     356,   357,   378,   383,   380,   379,   400,    44,   382,   251,
     246,   165,    48,    49,    50,    51,    52,    53,    92,    93,
      94,   312,    95,    65,   166,   229,    83,   167,   244,    88,
     310,   272,   365,   335,    27,   268,   280,   282,    96,   285,
     283,     0,    97,    98,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     120,   154,   155,   156,   157,   284,   158,   159,   160,   161,
     162,   163,    21,    22,   164,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,    48,
      49,    50,    51,    52,    53,    92,    93,    94,     0,    95,
       0,   166,     0,    83,   267,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,    96,     0,     0,     0,    97,
      98,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   120,   154,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,    21,
      22,   164,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,    48,    49,    50,    51,
      52,    53,    92,    93,    94,     0,    95,     0,   166,     0,
      83,   167,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,    96,     0,     0,     0,    97,    98,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    92,    93,    94,     0,    95,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     0,    96,     0,   119,     0,    97,    98,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       1,     0,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,    47,    48,    49,    50,    51,    52,
      53,     0,    21,    22,     0,    54,     0,     0,     0,    26,
       0,     0,     0,     0,   121,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,    25,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,    21,    22,     0,     0,    54,     0,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     273,     0,     0,     0,    26,     0,     0,     0,     0,   330,
     274,     0,    27,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,    21,    22,     0,     0,     0,    24,     0,    25,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
      27,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    83,     0,     0,   150,     0,     0,     0,     0,
      27,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,   -58,     0,     0,     0,
      27,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,    26,     0,     0,     0,   -60,     0,     0,     0,
      27,    21,    22,     0,     0,     0,     0,   309,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
      27,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    21,
      22,     0,   358,     0,     0,    27,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,    27,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    83,     0,     0,     0,     0,
       0,     0,     0,    27,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,    26,   138,
       0,     0,     0,     0,     0,     0,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,    26,   316,     0,     0,
       0,     0,     0,     0,    27,     0,     0,    46,   154,   155,
     156,   157,     0,   158,   159,   160,   161,   162,   163,     0,
       0,   164,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    90,    91,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,   257,    48,    49,    50,    51,
      52,    53,    92,    93,    94,     0,    95,     0,   166,     0,
     258,   269,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,    97,    98,    46,   154,
     155,   156,   157,     0,   158,   159,   160,   161,   162,   163,
       0,     0,   164,    89,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,    48,    49,    50,
      51,    52,    53,    92,    93,    94,     0,    95,     0,   166,
       0,   258,   328,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    96,     0,     0,     0,    97,    98,    46,
     154,   155,   156,   157,     0,   158,   159,   160,   161,   162,
     163,     0,     0,   164,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,   257,    48,    49,
      50,    51,    52,    53,    92,    93,    94,    89,    95,     0,
     166,     0,   258,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,    96,    46,     0,     0,    97,    98,
      47,    48,    49,    50,    51,    52,    53,    92,    93,    94,
      89,    95,     0,     0,     0,   247,   367,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,    96,    46,     0,
       0,    97,    98,    47,    48,    49,    50,    51,    52,    53,
      92,    93,    94,    89,    95,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,   128,     0,     0,     0,     0,
      96,    46,     0,     0,    97,    98,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,    95,     0,     0,
       0,   247,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,    96,    46,     0,     0,    97,    98,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,    89,
      95,     0,   264,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,     0,    96,     0,     0,    46,
      97,    98,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,     0,    95,    89,     0,     0,     0,     0,     0,
       0,     0,   301,     0,    90,    91,     0,     0,     0,    96,
       0,     0,    46,    97,    98,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    92,    93,    94,    89,    95,     0,
     321,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,    96,    46,     0,     0,    97,    98,
      47,    48,    49,    50,    51,    52,    53,    92,    93,    94,
      89,    95,     0,     0,     0,     0,     0,     0,     0,     0,
      90,    91,   333,     0,     0,     0,     0,    96,    46,     0,
       0,    97,    98,    47,    48,    49,    50,    51,    52,    53,
      92,    93,    94,    89,    95,     0,   350,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
      96,    46,     0,     0,    97,    98,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,   360,     0,
       0,     0,     0,    96,     0,     0,    46,    97,    98,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,     0,
      95,    89,     0,     0,     0,     0,     0,     0,     0,   371,
       0,    90,    91,     0,     0,     0,    96,     0,     0,    46,
      97,    98,     0,     0,    47,    48,    49,    50,    51,    52,
      53,    92,    93,    94,    89,    95,     0,   374,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
       0,    96,     0,     0,    46,    97,    98,    47,    48,    49,
      50,    51,    52,    53,    92,    93,    94,     0,    95,    89,
       0,     0,     0,     0,     0,     0,     0,   386,     0,    90,
      91,     0,     0,     0,    96,     0,     0,     0,    97,    98,
      46,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,     0,    95,     0,    89,     0,     0,     0,     0,
       0,     0,   388,     0,     0,    90,    91,     0,     0,    96,
       0,     0,     0,    97,    98,    46,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    92,    93,    94,     0,    95,
      89,     0,     0,     0,     0,     0,     0,     0,   398,     0,
      90,    91,     0,     0,     0,    96,     0,     0,    46,    97,
      98,     0,     0,    47,    48,    49,    50,    51,    52,    53,
      92,    93,    94,    89,    95,     0,     0,     0,     0,     0,
       0,     0,     0,    90,    91,     0,     0,     0,     0,     0,
      96,    46,     0,     0,    97,    98,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,   183,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,    96,     0,     0,     0,    97,    98,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,     0,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
      97,    98
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    67,     3,    54,    59,    25,   135,     1,
     247,     1,    24,   140,   159,    33,     1,    59,   273,    40,
       2,    37,    65,    66,    76,   114,    78,   154,   231,    29,
     175,    42,    43,    70,    34,    35,    36,    46,    47,    48,
      59,    68,    69,    80,    44,    29,    95,    89,    90,    91,
      62,    69,    95,    40,    24,    55,    26,    78,    58,    58,
      44,    70,    89,    68,    85,    70,     1,    83,    86,    76,
     273,    80,   114,    55,    81,    80,    87,    88,     0,    59,
      72,   336,   135,    92,    76,    59,    76,   140,   343,    79,
      70,    78,    62,   135,    79,    65,    66,    67,   140,    76,
     150,   154,    79,    40,    70,    19,    20,    70,   253,   346,
     122,    79,   154,    83,    80,   164,   243,    80,   207,   208,
     209,   266,    70,   268,    59,    95,   169,   170,    75,    76,
     151,   149,    80,    68,   183,    70,    74,    72,    72,   189,
     183,    78,    76,   192,    40,    41,    83,   274,    85,   191,
      77,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,    59,   169,
     170,   221,   317,    59,    73,   187,   226,    68,   227,    70,
      75,    76,    68,   153,    70,    44,    45,   251,    26,   278,
     243,    72,    72,    38,    80,    76,    76,   247,    72,   169,
     170,   243,    76,   348,   349,   254,   255,   256,    72,   354,
     337,   260,    76,   183,   151,    76,    72,   344,    79,   231,
      76,   274,    66,    67,   242,    21,   371,    65,    66,    67,
      76,   168,   274,    79,   234,    59,   278,   236,   383,    76,
     385,   386,    79,   388,    68,    83,    70,    74,    76,    84,
     395,    79,   397,   398,    78,    76,    85,    95,    79,   404,
      86,   273,    68,    59,    60,    61,    62,    63,    64,    65,
      75,    76,   321,   273,    70,    75,    76,    77,    78,    76,
      59,   251,    79,    76,   337,    76,   339,    81,    79,    76,
     340,   344,    79,   197,   198,   337,   346,   339,   203,   204,
      78,   350,   344,   352,   353,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,   153,   199,   200,   201,   202,
      76,   258,    73,    79,   373,   374,    76,   205,   206,    79,
      78,   169,   170,    77,    70,    70,   336,    70,    70,    59,
      77,   390,    72,   343,   343,   183,    72,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    79,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    59,
      59,    78,    78,    29,    72,    79,    70,    79,    46,    47,
      79,    81,    79,    26,    79,    81,    72,     1,    81,   153,
     149,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,   242,    70,   251,    72,   118,    74,    75,   145,    42,
     234,   183,   343,   275,    82,   168,   191,   193,    86,   196,
     194,    -1,    90,    91,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   195,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      -1,    72,    -1,    74,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,     1,    -1,    90,    91,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
       1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    -1,    33,    34,    -1,    70,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    82,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    33,    34,    -1,    -1,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,
      80,    -1,    82,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    74,    -1,    -1,    77,    -1,    -1,    -1,    -1,
      82,    33,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    -1,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      82,    33,    34,    -1,    -1,    -1,    -1,    39,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    33,
      34,    -1,    79,    -1,    -1,    82,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    46,    47,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    72,    -1,
      74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    -1,    70,    -1,    72,
      -1,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    36,    70,    -1,
      72,    -1,    74,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    86,    21,    -1,    -1,    90,    91,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      36,    70,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    86,    21,    -1,
      -1,    90,    91,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    81,    -1,    -1,    -1,    -1,
      86,    21,    -1,    -1,    90,    91,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    86,    21,    -1,    -1,    90,    91,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    21,
      90,    91,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    46,    47,    -1,    -1,    -1,    86,
      -1,    -1,    21,    90,    91,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    36,    70,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    86,    21,    -1,    -1,    90,    91,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      36,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    81,    -1,    -1,    -1,    -1,    86,    21,    -1,
      -1,    90,    91,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      86,    21,    -1,    -1,    90,    91,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    81,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    21,    90,    91,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    46,    47,    -1,    -1,    -1,    86,    -1,    -1,    21,
      90,    91,    -1,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    36,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    21,    90,    91,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    -1,    70,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    46,
      47,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      21,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    46,    47,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    21,    -1,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      46,    47,    -1,    -1,    -1,    86,    -1,    -1,    21,    90,
      91,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      86,    21,    -1,    -1,    90,    91,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    68,    70,    74,    82,    94,    95,
      96,    97,    98,   100,   101,   102,   103,   104,   105,   113,
     116,   117,   118,   130,    95,    94,    21,    59,    60,    61,
      62,    63,    64,    65,    70,   158,   160,    59,    70,    80,
     103,   118,   119,   116,    59,   102,   103,   106,   109,   110,
     114,   115,     0,    96,     1,    72,   107,   108,   116,   100,
     100,   100,    59,    74,    98,    99,   100,   134,   117,    36,
      46,    47,    66,    67,    68,    70,    86,    90,    91,   139,
     140,   142,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,    94,    74,     1,
      21,    79,   100,   120,   121,   122,   124,   158,    81,   142,
     143,   155,   103,   118,    79,    77,   110,   110,    75,   109,
      78,   111,   112,   116,    75,    76,    73,     1,    72,    76,
      77,    99,   134,    74,    22,    23,    24,    25,    27,    28,
      29,    30,    31,    32,    35,    59,    72,    75,    99,   102,
     103,   131,   132,   133,   134,   135,   136,   137,   138,   139,
      98,   134,   116,    70,   155,   155,   155,   110,   127,    76,
      79,    37,    83,    38,    84,    85,    86,    40,    41,    42,
      43,    87,    88,    44,    45,    66,    67,    68,    69,    89,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      77,   141,   154,    46,    47,    48,    70,    80,    92,   114,
     118,   123,     1,    79,    76,     1,    76,    79,    81,   143,
     143,    72,    76,    78,   115,    73,   108,    74,   125,   140,
     134,   106,   143,    78,    70,    70,    70,    59,    74,   131,
      70,    59,    72,    72,    72,   139,    78,    75,   135,    75,
     131,    72,   127,    70,    80,   118,   128,   129,    79,   140,
     145,   139,   146,   147,   148,   149,   150,   150,   151,   151,
     151,   151,   152,   152,   153,   153,   154,   154,   154,   140,
      59,    79,   140,   159,   139,    59,    75,    59,   128,    39,
     122,   158,   112,   143,   125,   126,    75,    78,   131,   139,
     139,    72,   139,    29,   139,    72,    72,   131,    75,    79,
      79,   120,   128,    81,   143,   129,    70,    80,   154,    78,
      76,    79,    81,    70,    80,    75,    76,   131,    79,    79,
      72,   139,    72,    70,    79,    79,    79,    81,    79,   120,
      81,   143,   142,   140,   120,   124,   143,    75,   125,   131,
     131,    79,   139,    72,    72,   139,   139,   131,    79,    81,
      79,    79,    81,    26,   131,    79,    79,   139,    79,   139,
      72,    79,   131,   131,   131,    79,   131,    79,    79,   139,
      72,   131,   131,   131,    79,   131
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
        case 10:

/* Line 1455 of yacc.c  */
#line 113 "bison.y"
    {aux_tFuncion = obtenerTipo((yyvsp[(1) - (4)].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 114 "bison.y"
    {aux_tFuncion = obtenerTipo((yyvsp[(1) - (3)].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "bison.y"
    {aux_tFuncion = obtenerTipo((yyvsp[(1) - (3)].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 116 "bison.y"
    {aux_tFuncion = obtenerTipo((yyvsp[(1) - (2)].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 122 "bison.y"
    {printf("[ERROR] Falta punto y coma\n");yyerrok;yyclearin;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 123 "bison.y"
    {/*printf("[ERROR] Falta punto y coma\n")*/;yyerrok;yyclearin;;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 147 "bison.y"
    {aux_tIdentificador="int";;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 148 "bison.y"
    {aux_tIdentificador="char";;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 149 "bison.y"
    {aux_tIdentificador="float";;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 150 "bison.y"
    {aux_tIdentificador="double";;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 151 "bison.y"
    {aux_tIdentificador="short";;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 152 "bison.y"
    {aux_tIdentificador="void";;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 153 "bison.y"
    {aux_tIdentificador="long";;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 154 "bison.y"
    {aux_tIdentificador="signed";;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "bison.y"
    {aux_tIdentificador="unsigned";;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 231 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)), aux_tIdentificador);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 233 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (4)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (4)].cval)), aux_tIdentificador);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 234 "bison.y"
    {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)), aux_tIdentificador);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 235 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (4)].cval));;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 236 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (4)].cval));;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 237 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(1) - (3)].cval));;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 238 "bison.y"
    {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 239 "bison.y"
    {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 240 "bison.y"
    {printf("[ERROR] Falta paréntesis de cierre\n"); yyclearin;;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 261 "bison.y"
    {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[(1) - (1)].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 262 "bison.y"
    {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[(3) - (3)].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 266 "bison.y"
    {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[(3) - (3)].cval)));;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 267 "bison.y"
    {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[(3) - (6)].cval)));;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 268 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(3) - (6)].cval));;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 269 "bison.y"
    {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[(3) - (6)].cval));;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 279 "bison.y"
    {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 323 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 324 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 325 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 326 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 327 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 328 "bison.y"
    {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 451 "bison.y"
    {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)) , (yyvsp[(2) - (3)].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 452 "bison.y"
    {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)) , (yyvsp[(2) - (3)].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 456 "bison.y"
    {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)) , (yyvsp[(2) - (3)].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 457 "bison.y"
    {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)) , (yyvsp[(2) - (3)].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 458 "bison.y"
    {if(!chequearOperador(sacar_ultimo_caracter((yyvsp[(1) - (3)].cval)) , (yyvsp[(2) - (3)].cval))) printf("[ERROR] Suma invalida en %d\n", yylineno);;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 485 "bison.y"
    {comprobar_tipos_funcion(lista_funciones, (yyvsp[(1) - (4)].cval));;}
    break;



/* Line 1455 of yacc.c  */
#line 2478 "bison.tab.c"
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
#line 515 "bison.y"

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
        identificadores_variables = inicializarListaIdentificadores(identificadores_variables);
        lista_funciones = inicializarListaFunciones(lista_funciones);   //especifico tp5

        identificadores_funciones = inicializarListaIdentificadores(identificadores_funciones);
        lista_sentencias          = inicializarListaSentencias     (lista_sentencias);
        lista_parametros          = inicializarListaIdentificadores(lista_parametros);

        printf("Comenzando anlisis lexico y sintactico\n");

        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
            mostrarListadoFunciones(lista_funciones);
            //crearListadoSentencias     (lista_sentencias,          "SENTENCIAS");
        }

    }



    return 0;
}

int yyerror(const char *msg)
{
	printf("\n[ERROR] Fallo el analisis en la linea: %d %s\n", yylineno, msg);
	analisisCorrecto = 0;
	return 0;
}
