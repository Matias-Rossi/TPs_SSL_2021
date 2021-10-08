
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

//DEFINICIONES Y DECLARACIONES DE C

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int yylex(void);
int yywrap(){
    return(1);
}
int yyerror(const char* s){
    fprintf (stderr, "%s\n", s);
}
extern FILE* yyin;
extern int yylineno;
int analisisCorrecto = 1;



/* Line 189 of yacc.c  */
#line 94 "bison.tab.c"

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
     DIRECTIVAS_PREPROCESAMIENTO = 258,
     PALABRAS_RESERVADAS_TIPOS_DE_DATOS = 259,
     CALIFICADOR_TIPO = 260,
     LITERAL_CADENA = 261,
     PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL = 262,
     PALABRAS_RESERVADAS_OTHERS = 263,
     TIPO_STRUCT = 264,
     ENUM = 265,
     CASE = 266,
     DEFAULT = 267,
     SWITCH = 268,
     IF = 269,
     ELSE = 270,
     DO = 271,
     WHILE = 272,
     GOTO = 273,
     retornar = 274,
     CONTINUE = 275,
     BREAK = 276,
     IDENTIFICADOR = 277,
     OP_CARACT_DE_PUNTUACION = 278,
     OP_ASIGNACION = 279,
     EXPR_ASIGNACION = 280,
     EXPR_RELACION = 281,
     EXPR_CORRIMIENTO = 282,
     OP_BASICA = 283,
     EXPR_MULTIPLICATIVA = 284,
     OP_INCREMENTO = 285,
     SIZEOF = 286,
     FLECHA = 287,
     OP_UNARIO = 288,
     COMENTARIOS_LINEAL = 289,
     COMENTARIOS_MULTILINEAL = 290,
     CONST_OCTAL = 291,
     CONST_HEXADECIMAL = 292,
     CONST_DECIMAL = 293,
     CONST_PTOFLOTANTE = 294,
     CONST_CARACTER = 295,
     CONST_ENUMERACION = 296
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 23 "bison.y"

   int ival;
   double dval;
   char* cval;



/* Line 214 of yacc.c  */
#line 179 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 191 "bison.tab.c"

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNRULES -- Number of states.  */
#define YYNSTATES  322

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    59,     2,     2,     2,     2,     2,    57,     2,
      48,    49,    52,     2,    42,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    47,    43,
       2,    46,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,    51,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    56,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    18,    22,    27,
      32,    36,    39,    41,    44,    47,    49,    52,    54,    57,
      59,    61,    63,    65,    67,    69,    75,    78,    82,    84,
      87,    89,    93,    95,    99,   101,   103,   106,   108,   111,
     113,   115,   119,   121,   125,   128,   134,   138,   141,   143,
     147,   149,   153,   156,   158,   160,   164,   169,   173,   178,
     183,   187,   190,   192,   196,   199,   201,   204,   206,   210,
     212,   216,   219,   222,   224,   226,   230,   232,   236,   241,
     243,   247,   250,   252,   254,   257,   259,   263,   268,   271,
     275,   279,   284,   287,   291,   295,   297,   299,   301,   303,
     305,   307,   309,   313,   318,   322,   325,   327,   332,   335,
     339,   343,   345,   348,   354,   362,   368,   374,   382,   391,
     395,   398,   401,   405,   407,   409,   411,   415,   417,   421,
     423,   429,   431,   433,   437,   439,   443,   445,   449,   451,
     455,   457,   461,   463,   467,   469,   473,   475,   479,   481,
     485,   487,   491,   493,   498,   500,   503,   506,   509,   514,
     516,   521,   526,   530,   534,   538,   541,   543,   545,   547,
     551,   553,   557,   559,   563,   565,   567,   569,   571,   573
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      61,     0,    -1,    62,    -1,    61,    62,    -1,    63,    -1,
      64,    -1,    66,    80,    65,    42,    97,    -1,    80,    42,
      97,    -1,    66,    80,    42,    97,    -1,    80,    65,    42,
      97,    -1,    66,    71,    43,    -1,    66,    43,    -1,    64,
      -1,    65,    64,    -1,    67,    66,    -1,    67,    -1,    68,
      66,    -1,    68,    -1,     5,    66,    -1,     5,    -1,     8,
      -1,     4,    -1,    69,    -1,    77,    -1,    93,    -1,     9,
      22,    44,    70,    45,    -1,     9,    22,    -1,    44,    70,
      45,    -1,    73,    -1,    70,    73,    -1,    72,    -1,    71,
      42,    72,    -1,    80,    -1,    80,    46,    88,    -1,    74,
      -1,    75,    -1,    68,    74,    -1,    68,    -1,     5,    74,
      -1,     5,    -1,    76,    -1,    75,    42,    76,    -1,    80,
      -1,    80,    47,   106,    -1,    47,   106,    -1,    10,    22,
      44,    78,    45,    -1,    44,    78,    45,    -1,    10,    22,
      -1,    79,    -1,    78,    42,    79,    -1,    22,    -1,    22,
      46,   106,    -1,    82,    81,    -1,    81,    -1,    22,    -1,
      48,    80,    49,    -1,    81,    50,   106,    51,    -1,    81,
      50,    51,    -1,    81,    48,    84,    49,    -1,    81,    48,
      87,    49,    -1,    81,    48,    49,    -1,    52,    83,    -1,
      52,    -1,    52,    83,    82,    -1,    52,    82,    -1,     5,
      -1,    83,     5,    -1,    85,    -1,    85,    42,    53,    -1,
      86,    -1,    85,    42,    86,    -1,    66,    80,    -1,    66,
      91,    -1,    66,    -1,    22,    -1,    87,    42,    22,    -1,
     104,    -1,    44,    89,    45,    -1,    44,    89,    42,    45,
      -1,    88,    -1,    89,    42,    88,    -1,    74,    91,    -1,
      74,    -1,    82,    -1,    82,    92,    -1,    92,    -1,    48,
      91,    49,    -1,    92,    50,   106,    51,    -1,    50,    51,
      -1,    92,    50,    51,    -1,    50,   106,    51,    -1,    92,
      48,    84,    49,    -1,    48,    49,    -1,    92,    48,    49,
      -1,    48,    84,    49,    -1,    22,    -1,    95,    -1,    96,
      -1,    97,    -1,    99,    -1,   100,    -1,   101,    -1,    22,
      47,    94,    -1,    11,   106,    47,    94,    -1,    12,    47,
      94,    -1,   103,    43,    -1,    43,    -1,    44,    65,    98,
      45,    -1,    44,    45,    -1,    44,    65,    45,    -1,    44,
      98,    45,    -1,    94,    -1,    98,    94,    -1,    14,    48,
     103,    49,    94,    -1,    14,    48,   103,    49,    94,    15,
      94,    -1,    13,    48,   103,    49,    94,    -1,    17,    48,
     103,    49,    94,    -1,    16,    94,    17,    48,   103,    49,
      43,    -1,    48,   102,    43,   102,    43,   102,    49,    94,
      -1,    18,    22,    43,    -1,    20,    43,    -1,    21,    43,
      -1,    19,   102,    43,    -1,   103,    -1,    54,    -1,   104,
      -1,   103,    42,   104,    -1,   105,    -1,   118,    24,   104,
      -1,   107,    -1,   107,    55,   103,    47,   105,    -1,   105,
      -1,   108,    -1,   107,    56,   108,    -1,   109,    -1,   108,
      57,   109,    -1,   110,    -1,   109,    56,   110,    -1,   111,
      -1,   110,    58,   111,    -1,   112,    -1,   111,    57,   112,
      -1,   113,    -1,   112,    25,   113,    -1,   114,    -1,   113,
      26,   114,    -1,   115,    -1,   114,    27,   115,    -1,   116,
      -1,   115,    28,   116,    -1,   117,    -1,   116,    29,   117,
      -1,   118,    -1,    48,    90,    49,   117,    -1,   119,    -1,
      30,   118,    -1,    33,   117,    -1,    31,   118,    -1,    31,
      48,    90,    49,    -1,   120,    -1,   119,    50,   103,    51,
      -1,   119,    48,   121,    49,    -1,   119,    48,    49,    -1,
     119,    53,    22,    -1,   119,    32,    22,    -1,   119,    30,
      -1,    22,    -1,   123,    -1,   122,    -1,    48,   103,    49,
      -1,   104,    -1,   121,    42,   104,    -1,    22,    -1,    22,
      59,   122,    -1,    36,    -1,    37,    -1,    38,    -1,    40,
      -1,    39,    -1,    41,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    81,    82,    86,    87,    88,    89,
      93,    94,    98,    99,   103,   104,   105,   106,   107,   108,
     112,   117,   118,   119,   120,   123,   124,   125,   128,   129,
     133,   134,   138,   139,   143,   144,   148,   149,   150,   151,
     155,   156,   160,   161,   162,   166,   167,   168,   172,   173,
     177,   178,   182,   183,   187,   188,   189,   190,   191,   192,
     193,   197,   198,   199,   200,   204,   205,   209,   210,   214,
     215,   219,   220,   221,   225,   226,   230,   231,   232,   236,
     237,   241,   242,   246,   247,   248,   251,   252,   253,   254,
     255,   257,   258,   259,   260,   263,   267,   268,   269,   270,
     271,   272,   276,   277,   278,   282,   283,   287,   288,   289,
     290,   293,   294,   298,   299,   300,   303,   304,   305,   308,
     309,   310,   311,   315,   315,   317,   318,   322,   323,   327,
     328,   331,   335,   336,   340,   341,   344,   345,   348,   349,
     352,   353,   356,   357,   361,   362,   366,   367,   371,   372,
     376,   377,   381,   382,   386,   387,   388,   389,   390,   393,
     394,   395,   396,   397,   398,   399,   404,   405,   406,   407,
     411,   412,   415,   416,   420,   421,   422,   423,   424,   425
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DIRECTIVAS_PREPROCESAMIENTO",
  "PALABRAS_RESERVADAS_TIPOS_DE_DATOS", "CALIFICADOR_TIPO",
  "LITERAL_CADENA", "PALABRAS_RESERVADAS_ESTRUCTURA_DE_CONTROL",
  "PALABRAS_RESERVADAS_OTHERS", "TIPO_STRUCT", "ENUM", "CASE", "DEFAULT",
  "SWITCH", "IF", "ELSE", "DO", "WHILE", "GOTO", "retornar", "CONTINUE",
  "BREAK", "IDENTIFICADOR", "OP_CARACT_DE_PUNTUACION", "OP_ASIGNACION",
  "EXPR_ASIGNACION", "EXPR_RELACION", "EXPR_CORRIMIENTO", "OP_BASICA",
  "EXPR_MULTIPLICATIVA", "OP_INCREMENTO", "SIZEOF", "FLECHA", "OP_UNARIO",
  "COMENTARIOS_LINEAL", "COMENTARIOS_MULTILINEAL", "CONST_OCTAL",
  "CONST_HEXADECIMAL", "CONST_DECIMAL", "CONST_PTOFLOTANTE",
  "CONST_CARACTER", "CONST_ENUMERACION", "','", "';'", "'{'", "'}'", "'='",
  "':'", "'('", "')'", "'['", "']'", "'*'", "'.'", "'\\n'", "'?'", "'|'",
  "'&'", "'^'", "' '", "$accept", "unidad_de_traduccion",
  "declaracion_externa", "definicion_de_funcion", "declaracion",
  "lista_de_declaracion", "especificadores_de_declaracion",
  "especificador_categoria_almacenamiento", "especificador_de_tipo",
  "especificador_estructura_o_union", "lista_declaraciones_struct",
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
  "expresion_opt", "expresion", "expresion_de_asignacion",
  "expresion_condicional", "expresion_constante", "expresion_logica_OR",
  "expresion_logica_AND", "expresion_OR_inclusivo",
  "expresion_OR_exclusivo", "expresion_AND", "expresion_de_igualdad",
  "expresion_relacional", "expresion_de_corrimiento", "expresion_aditiva",
  "expresion_multiplicativa", "expresion_cast", "expresion_unaria",
  "expresion_posfija", "expresion_primaria", "lista_expresiones_argumento",
  "cadena", "constante", 0
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
     295,   296,    44,    59,   123,   125,    61,    58,    40,    41,
      91,    93,    42,    46,    10,    63,   124,    38,    94,    32
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    61,    62,    62,    63,    63,    63,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    68,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76,    76,    77,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    84,    84,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    91,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    95,    96,    96,    97,    97,    97,
      97,    98,    98,    99,    99,    99,   100,   100,   100,   101,
     101,   101,   101,   102,   102,   103,   103,   104,   104,   105,
     105,   106,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   119,
     119,   119,   119,   119,   119,   119,   120,   120,   120,   120,
     121,   121,   122,   122,   123,   123,   123,   123,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     5,     3,     4,     4,
       3,     2,     1,     2,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     5,     2,     3,     1,     2,
       1,     3,     1,     3,     1,     1,     2,     1,     2,     1,
       1,     3,     1,     3,     2,     5,     3,     2,     1,     3,
       1,     3,     2,     1,     1,     3,     4,     3,     4,     4,
       3,     2,     1,     3,     2,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     3,     4,     1,
       3,     2,     1,     1,     2,     1,     3,     4,     2,     3,
       3,     4,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     1,     4,     2,     3,
       3,     1,     2,     5,     7,     5,     5,     7,     8,     3,
       2,     2,     3,     1,     1,     1,     3,     1,     3,     1,
       5,     1,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     2,     2,     2,     4,     1,
       4,     4,     3,     3,     3,     2,     1,     1,     1,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    21,    19,    20,     0,     0,    54,     0,     0,    62,
       0,     2,     4,     5,     0,    15,    17,    22,    23,     0,
      53,     0,    24,    95,    18,    26,    47,    39,    54,     0,
      37,     0,    28,    34,    35,    40,     0,    48,    42,    54,
       0,    65,    64,    61,     1,     3,    11,     0,    30,    32,
      14,    16,     0,    12,     0,     0,     0,     0,    52,     0,
       0,    38,     0,   166,     0,     0,     0,   174,   175,   176,
     178,   177,   179,     0,   131,    44,   129,   132,   134,   136,
     138,   140,   142,   144,   146,   148,   150,   152,   154,   159,
     168,   167,    36,    27,    29,     0,     0,    46,     0,    55,
      66,    63,     0,    10,     0,     0,     0,     0,     7,     0,
      13,    32,    95,    60,    73,     0,    67,    69,     0,    57,
       0,     0,    50,     0,    51,     0,     0,   155,     0,   157,
     156,   166,    82,     0,     0,   125,   127,   152,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   165,
       0,     0,     0,     0,    41,    49,    43,    31,     8,     0,
      33,    76,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   166,   106,     0,   108,     0,     0,   111,
      96,    97,    98,     0,    99,   100,   101,     0,     9,     0,
       0,    71,    83,    72,    85,    58,     0,     0,    59,    56,
      25,    45,   172,   173,     0,     0,    83,    81,     0,     0,
     169,     0,     0,   133,   135,   137,   139,   141,   143,   145,
     147,   149,   151,   164,   162,   170,     0,     0,   163,    79,
       0,     6,     0,     0,     0,     0,   166,     0,     0,     0,
     124,     0,   123,   120,   121,     0,    19,   166,     0,    17,
       0,   123,   109,     0,   110,   112,   105,    92,     0,     0,
      88,     0,    84,     0,     0,    68,    70,    75,   158,   153,
     126,   128,     0,     0,   161,   160,     0,    77,     0,   104,
       0,     0,     0,     0,   119,   122,   102,   166,     0,     0,
     107,    94,    86,    90,    93,     0,    89,     0,   130,   171,
      78,    80,   103,     0,     0,     0,     0,     0,    91,    87,
     115,   113,     0,   116,     0,     0,     0,     0,   114,   117,
       0,   118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    53,   178,    55,    15,    16,    17,
      31,    47,    48,    32,    33,    34,    35,    18,    36,    37,
      38,    20,    21,    43,   258,   116,   117,   118,   160,   230,
     133,   259,   194,    22,   179,   180,   181,   182,   183,   184,
     185,   186,   250,   187,   135,   136,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   137,    88,
      89,   226,    90,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
     607,  -166,   207,  -166,    51,    66,    -9,   643,    10,    23,
     369,  -166,  -166,  -166,    20,   207,   207,  -166,  -166,   839,
     129,    60,  -166,  -166,  -166,    -1,    48,    42,   110,  1131,
      42,   587,  -166,  -166,    69,  -166,    67,  -166,    97,  -166,
     104,  -166,  -166,    25,  -166,  -166,  -166,   152,  -166,   832,
    -166,  -166,   113,  -166,   847,    20,   323,  1005,   129,   652,
     161,  -166,  1131,   143,  1144,  1164,  1131,  -166,  -166,  -166,
    -166,  -166,  -166,   781,  -166,  -166,   179,   157,   162,   163,
     167,   203,   206,   211,   213,   210,  -166,  -166,   138,  -166,
    -166,  -166,  -166,  -166,  -166,    13,   161,  -166,  1131,  -166,
    -166,  -166,    10,  -166,   113,  1111,   855,   697,  -166,   113,
    -166,   198,    54,  -166,    49,   196,   205,  -166,    71,  -166,
     199,   597,   216,   142,  -166,   231,  1131,  -166,   781,  -166,
    -166,   316,   128,   208,    81,  -166,  -166,   235,  1131,  1131,
    1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,  1131,  -166,
     241,  1071,  1131,   242,  -166,  -166,  -166,  -166,  -166,  1111,
    -166,  -166,   113,  1131,   221,   223,   228,   965,   230,   257,
     985,   237,   238,   292,  -166,   477,  -166,   430,   739,  -166,
    -166,  -166,  -166,   889,  -166,  -166,  -166,   194,  -166,   529,
    1027,  -166,    56,  -166,   150,  -166,    85,   262,  -166,  -166,
    -166,  -166,   143,  -166,   236,   578,   183,  -166,  1131,  1131,
    -166,  1131,    84,   157,   162,   163,   167,   203,   206,   211,
     213,   210,  -166,  -166,  -166,  -166,    83,   -13,  -166,  -166,
     151,  -166,   243,   965,  1131,  1131,   -10,   272,  1131,   249,
    -166,   250,   252,  -166,  -166,   965,   676,   265,   389,   788,
     255,    81,  -166,   927,  -166,  -166,  -166,  -166,   246,   254,
    -166,   248,   150,   348,  1049,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  1131,  1131,  -166,  -166,  1091,  -166,   965,  -166,
      92,    94,   256,    98,  -166,  -166,  -166,   337,   522,   985,
    -166,  -166,  -166,  -166,  -166,   267,  -166,   268,  -166,  -166,
    -166,  -166,  -166,   965,   965,  1131,   965,   263,  -166,  -166,
    -166,   290,   132,  -166,   985,   965,   275,   273,  -166,  -166,
     965,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,   313,  -166,    12,    21,     3,  -166,    -6,  -166,
     270,  -166,   232,    -5,   -23,  -166,   253,  -166,   277,   234,
       0,   -19,    14,  -166,   -50,  -166,   147,  -166,  -143,  -166,
     222,   -78,  -165,  -166,   -48,  -166,  -166,   -35,   171,  -166,
    -166,  -166,  -139,   -28,   -72,   -18,   -42,  -166,   215,   240,
     214,   219,   220,   218,   226,   244,   229,   -57,    19,  -166,
    -166,  -166,   258,  -166
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -96
static const yytype_int16 yytable[] =
{
      19,    30,    58,    14,    61,    24,   115,    92,    40,   130,
      19,    74,    13,    14,    49,   120,   229,   108,    50,    51,
     124,    30,    13,    42,    30,    30,    94,   262,    41,   209,
     100,   241,    39,   161,   -95,    39,   193,   245,   275,    74,
      54,   262,    39,    59,    74,   134,     1,    27,    87,   125,
     132,     4,     5,    30,   207,   111,   156,   101,     8,   114,
      29,     8,     9,    46,    23,     9,   110,    30,     8,   158,
     106,    39,     9,    25,   188,     9,    87,     9,    39,   225,
      74,    87,    39,   127,   129,    87,     7,   161,    26,     1,
       2,   222,    60,     3,     4,     5,   -74,   189,   134,   190,
     134,     9,   111,   -74,   189,   132,   190,    23,     8,    96,
     212,    95,    97,   197,   191,    30,    94,    87,   110,   237,
     198,   232,    30,   209,   227,   273,   209,   231,   192,     7,
     210,   272,   274,   301,   209,   255,   209,   270,   265,   271,
     209,   303,   242,   304,    98,    74,   206,   306,   261,   251,
     307,   269,   -50,    99,   132,   -50,    62,   107,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,   149,   249,
     150,    30,    74,    58,   209,   317,   205,    56,   190,    57,
       9,   316,    87,   122,    96,   279,   151,   201,   152,    40,
     110,   153,   114,   276,   102,   103,   277,   286,   263,   114,
     264,   299,   125,   192,   161,   255,   280,   281,   114,    87,
     283,     1,     2,   295,   140,     3,     4,     5,   141,   206,
     251,   142,   297,    61,   143,   132,    92,    87,   144,    23,
     302,   205,   145,   190,   138,   139,   209,   256,   146,   148,
     249,   147,    30,   249,   105,   195,    74,   196,    40,    24,
     199,     7,    51,   202,   298,   310,   311,   208,   313,   211,
     134,   242,    62,   223,   228,   132,   114,   318,   233,   -54,
     -54,   234,   321,   -95,   -54,   -54,   235,   312,   238,   239,
     243,   244,    30,    87,   267,   268,   242,   -54,    40,   282,
     278,    87,   284,   285,   209,   291,   -95,   -95,   289,   293,
     -95,   -95,   -95,   292,   305,   315,   314,   -50,   -95,   -54,
     -50,    62,   245,   -54,   -95,   -54,   308,   -54,   319,   309,
     -95,   -95,   320,    45,   125,   -95,   -95,     1,     2,   121,
     155,     3,     4,     5,   157,   -95,   -95,   123,   -95,   245,
     -95,   -95,   -95,   266,   -95,   112,   -95,   -95,   154,   253,
     204,   125,     1,     2,   213,   215,     3,     4,     5,   -95,
     -95,   216,   218,   217,   -95,   -95,   -95,     7,   -95,    44,
      23,   219,   113,     1,     2,   125,   221,     3,     4,     5,
     214,   -95,     0,   203,     0,   -54,   -54,   -54,     0,   -95,
     220,     6,     7,     1,    27,     0,   125,   294,     4,     5,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   287,     0,     7,     0,     0,     0,     8,     0,    64,
      65,     9,    66,     0,     0,    67,    68,    69,    70,    71,
      72,     0,     0,     7,     1,    27,     0,   288,     0,     4,
       5,     9,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,   131,     0,     0,     0,     0,     0,     0,     0,
      64,    65,     0,    66,     0,     0,    67,    68,    69,    70,
      71,    72,     0,     0,     7,     0,     0,     0,    73,     0,
       0,     1,   246,     0,   240,     3,     4,     5,   163,   164,
     165,   166,     0,   167,   168,   169,   170,   171,   172,   247,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,     0,     0,    67,    68,    69,    70,    71,    72,     0,
     174,   175,   176,     0,    29,   248,     1,    27,     0,     9,
       0,     4,     5,     1,     2,     0,     0,     3,     4,     5,
       0,     0,     0,     0,   287,     0,     0,     0,     0,     0,
       0,     6,    64,    65,     0,    66,     0,     0,    67,    68,
      69,    70,    71,    72,     0,     0,     7,     0,     0,     0,
     288,     0,     0,     7,     9,     0,     0,   189,   257,   190,
       0,     9,     1,     2,     0,     0,     3,     4,     5,     0,
       0,     1,    27,     0,     0,     0,     4,     5,     0,     0,
      23,     1,    27,     0,     0,     0,     4,     5,     0,     6,
       0,     1,     2,     0,     0,     3,     4,     5,     0,     6,
       0,     0,     7,     0,     0,     0,   205,   257,   190,     6,
       9,     7,    93,     0,    29,     8,     0,     0,     0,     9,
       0,     7,   200,     0,    29,     8,     0,     1,    27,     9,
       0,     7,     4,     5,     0,     8,     1,    27,     0,     9,
       0,     4,     5,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       1,   246,     0,     0,     3,     4,     5,     7,     0,     0,
      29,     8,     0,     0,     0,     9,     7,     0,    23,    29,
       8,     1,     2,     0,     9,     3,     4,     5,   163,   164,
     165,   166,     0,   167,   168,   169,   170,   171,   172,   173,
       7,   -39,     0,   -39,     0,     0,     0,    64,    65,     0,
      66,     0,     0,    67,    68,    69,    70,    71,    72,     0,
     174,   175,   176,     1,     2,   177,     0,     3,     4,     5,
     163,   164,   165,   166,     0,   167,   168,   169,   170,   171,
     172,   173,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,     0,     0,    67,    68,    69,    70,    71,
      72,     0,   174,   175,   252,     1,    27,   177,     0,     0,
       4,     5,     1,   246,     0,     0,     3,     4,     5,     0,
       0,     0,     0,   131,     0,     0,     0,     0,     0,     0,
      23,    64,    65,     0,    66,     0,     0,    67,    68,    69,
      70,    71,    72,     0,     0,     7,     0,     0,     0,    73,
       0,     0,     7,   -37,     0,   -37,     1,     2,     0,     0,
       3,     4,     5,     1,     2,     0,     0,     3,     4,     5,
       0,     1,     2,     0,    23,     3,     4,     5,     0,     1,
       2,    23,     0,     3,     4,     5,     0,     0,     0,    23,
       0,     0,     0,     0,   104,     0,     7,    23,   105,     0,
       0,    52,     0,     7,     0,     0,     0,     0,     0,   109,
       0,     7,     0,     0,     0,     0,     0,   162,     0,     7,
     163,   164,   165,   166,     0,   167,   168,   169,   170,   171,
     172,   236,     0,     0,     0,     0,     0,     0,     0,    64,
      65,     0,    66,     0,     0,    67,    68,    69,    70,    71,
      72,     0,   174,   107,   254,     0,     0,   177,   163,   164,
     165,   166,     0,   167,   168,   169,   170,   171,   172,   236,
       0,     0,     0,     0,     0,     0,     0,    64,    65,     0,
      66,     0,     0,    67,    68,    69,    70,    71,    72,     0,
     174,   107,   290,     0,     0,   177,   163,   164,   165,   166,
       0,   167,   168,   169,   170,   171,   172,   236,     0,     0,
       0,     0,     0,     0,     0,    64,    65,     0,    66,     0,
       0,    67,    68,    69,    70,    71,    72,    63,   174,   107,
       0,     0,     0,   177,     0,    64,    65,     0,    66,     0,
       0,    67,    68,    69,    70,    71,    72,    63,     0,     0,
       0,     0,     0,    73,     0,    64,    65,     0,    66,   240,
       0,    67,    68,    69,    70,    71,    72,     0,     0,    63,
       0,     0,     0,    73,     0,     0,   119,    64,    65,     0,
      66,     0,     0,    67,    68,    69,    70,    71,    72,     0,
       0,    63,     0,     0,     0,    73,     0,     0,   260,    64,
      65,     0,    66,     0,     0,    67,    68,    69,    70,    71,
      72,     0,     0,    63,     0,     0,     0,    73,     0,     0,
     296,    64,    65,     0,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    63,     0,     0,     0,     0,     0,    73,
     224,    64,    65,     0,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    63,     0,   159,   300,     0,     0,    73,
       0,    64,    65,     0,    66,     0,     0,    67,    68,    69,
      70,    71,    72,    63,     0,   159,     0,     0,     0,    73,
       0,    64,    65,     0,    66,     0,    63,    67,    68,    69,
      70,    71,    72,     0,    64,    65,     0,    66,     0,    73,
      67,    68,    69,    70,    71,    72,    63,     0,     0,     0,
       0,     0,   126,     0,    64,    65,     0,    66,     0,     0,
      67,    68,    69,    70,    71,    72,     0,     0,     0,     0,
       0,     0,   128
};

static const yytype_int16 yycheck[] =
{
       0,     7,    21,     0,    27,     2,    56,    30,     8,    66,
      10,    29,     0,    10,    14,    57,   159,    52,    15,    16,
      62,    27,    10,     9,    30,    31,    31,   192,     5,    42,
       5,   170,    22,   105,    43,    22,   114,    47,    51,    57,
      19,   206,    22,    44,    62,    73,     4,     5,    29,    59,
      73,     9,    10,    59,   132,    55,    98,    43,    48,    56,
      47,    48,    52,    43,    22,    52,    54,    73,    48,   104,
      49,    22,    52,    22,   109,    52,    57,    52,    22,   151,
      98,    62,    22,    64,    65,    66,    44,   159,    22,     4,
       5,   148,    44,     8,     9,    10,    42,    48,   126,    50,
     128,    52,   102,    49,    48,   128,    50,    22,    48,    42,
     138,    42,    45,    42,   114,   121,   121,    98,   106,   167,
      49,   163,   128,    42,   152,    42,    42,   162,   114,    44,
      49,    47,    49,   276,    42,   183,    42,   209,    53,   211,
      42,    49,   170,    49,    47,   163,   132,    49,   190,   177,
     289,   208,    42,    49,   177,    45,    46,    44,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    30,   175,
      32,   177,   190,   192,    42,   314,    48,    48,    50,    50,
      52,    49,   163,    22,    42,   233,    48,    45,    50,   189,
     178,    53,   189,    42,    42,    43,    45,   245,    48,   196,
      50,   273,    59,   189,   276,   253,   234,   235,   205,   190,
     238,     4,     5,   263,    57,     8,     9,    10,    56,   205,
     248,    58,   264,   246,    57,   248,   249,   208,    25,    22,
     278,    48,    26,    50,    55,    56,    42,    43,    27,    29,
     246,    28,   248,   249,    46,    49,   264,    42,   248,   246,
      51,    44,   249,    22,   272,   303,   304,    49,   306,    24,
     288,   289,    46,    22,    22,   288,   263,   315,    47,     4,
       5,    48,   320,     8,     9,    10,    48,   305,    48,    22,
      43,    43,   288,   264,    22,    49,   314,    22,   288,    17,
      47,   272,    43,    43,    42,    49,     4,     5,    43,    51,
       8,     9,    10,    49,    48,    15,    43,    42,    43,    44,
      45,    46,    47,    48,    22,    50,    49,    52,    43,    51,
       4,     5,    49,    10,    59,     9,    10,     4,     5,    59,
      96,     8,     9,    10,   102,    43,    44,    60,    22,    47,
      48,     4,     5,   196,    52,    22,     9,    10,    95,   178,
     128,    59,     4,     5,   139,   141,     8,     9,    10,    22,
      44,   142,   144,   143,    48,    49,    50,    44,    52,     0,
      22,   145,    49,     4,     5,    59,   147,     8,     9,    10,
     140,    44,    -1,   125,    -1,    48,    49,    50,    -1,    52,
     146,    22,    44,     4,     5,    -1,    59,    49,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    44,    -1,    -1,    -1,    48,    -1,    30,
      31,    52,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    44,     4,     5,    -1,    48,    -1,     9,
      10,    52,    -1,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    33,    -1,    -1,    36,    37,    38,    39,
      40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    -1,
      -1,     4,     5,    -1,    54,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    47,    48,     4,     5,    -1,    52,
      -1,     9,    10,     4,     5,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    30,    31,    -1,    33,    -1,    -1,    36,    37,
      38,    39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    44,    52,    -1,    -1,    48,    49,    50,
      -1,    52,     4,     5,    -1,    -1,     8,     9,    10,    -1,
      -1,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      22,     4,     5,    -1,    -1,    -1,     9,    10,    -1,    22,
      -1,     4,     5,    -1,    -1,     8,     9,    10,    -1,    22,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    22,
      52,    44,    45,    -1,    47,    48,    -1,    -1,    -1,    52,
      -1,    44,    45,    -1,    47,    48,    -1,     4,     5,    52,
      -1,    44,     9,    10,    -1,    48,     4,     5,    -1,    52,
      -1,     9,    10,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,
       4,     5,    -1,    -1,     8,     9,    10,    44,    -1,    -1,
      47,    48,    -1,    -1,    -1,    52,    44,    -1,    22,    47,
      48,     4,     5,    -1,    52,     8,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      44,    45,    -1,    47,    -1,    -1,    -1,    30,    31,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,     4,     5,    48,    -1,     8,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,     4,     5,    48,    -1,    -1,
       9,    10,     4,     5,    -1,    -1,     8,     9,    10,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    30,    31,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    -1,    44,    45,    -1,    47,     4,     5,    -1,    -1,
       8,     9,    10,     4,     5,    -1,    -1,     8,     9,    10,
      -1,     4,     5,    -1,    22,     8,     9,    10,    -1,     4,
       5,    22,    -1,     8,     9,    10,    -1,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    42,    -1,    44,    22,    46,    -1,
      -1,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    42,    -1,    44,
      11,    12,    13,    14,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    43,    44,    45,    -1,    -1,    48,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      43,    44,    45,    -1,    -1,    48,    11,    12,    13,    14,
      -1,    16,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    22,    43,    44,
      -1,    -1,    -1,    48,    -1,    30,    31,    -1,    33,    -1,
      -1,    36,    37,    38,    39,    40,    41,    22,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    30,    31,    -1,    33,    54,
      -1,    36,    37,    38,    39,    40,    41,    -1,    -1,    22,
      -1,    -1,    -1,    48,    -1,    -1,    51,    30,    31,    -1,
      33,    -1,    -1,    36,    37,    38,    39,    40,    41,    -1,
      -1,    22,    -1,    -1,    -1,    48,    -1,    -1,    51,    30,
      31,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    -1,    -1,    22,    -1,    -1,    -1,    48,    -1,    -1,
      51,    30,    31,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    22,    -1,    -1,    -1,    -1,    -1,    48,
      49,    30,    31,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    22,    -1,    44,    45,    -1,    -1,    48,
      -1,    30,    31,    -1,    33,    -1,    -1,    36,    37,    38,
      39,    40,    41,    22,    -1,    44,    -1,    -1,    -1,    48,
      -1,    30,    31,    -1,    33,    -1,    22,    36,    37,    38,
      39,    40,    41,    -1,    30,    31,    -1,    33,    -1,    48,
      36,    37,    38,    39,    40,    41,    22,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    30,    31,    -1,    33,    -1,    -1,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     8,     9,    10,    22,    44,    48,    52,
      61,    62,    63,    64,    66,    67,    68,    69,    77,    80,
      81,    82,    93,    22,    66,    22,    22,     5,    22,    47,
      68,    70,    73,    74,    75,    76,    78,    79,    80,    22,
      80,     5,    82,    83,     0,    62,    43,    71,    72,    80,
      66,    66,    42,    64,    65,    66,    48,    50,    81,    44,
      44,    74,    46,    22,    30,    31,    33,    36,    37,    38,
      39,    40,    41,    48,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     122,   123,    74,    45,    73,    42,    42,    45,    47,    49,
       5,    82,    42,    43,    42,    46,    65,    44,    97,    42,
      64,    80,    22,    49,    66,    84,    85,    86,    87,    51,
     106,    70,    22,    78,   106,    59,    48,   118,    48,   118,
     117,    22,    74,    90,   103,   104,   105,   118,    55,    56,
      57,    56,    58,    57,    25,    26,    27,    28,    29,    30,
      32,    48,    50,    53,    76,    79,   106,    72,    97,    44,
      88,   104,    42,    11,    12,    13,    14,    16,    17,    18,
      19,    20,    21,    22,    43,    44,    45,    48,    65,    94,
      95,    96,    97,    98,    99,   100,   101,   103,    97,    48,
      50,    80,    82,    91,    92,    49,    42,    42,    49,    51,
      45,    45,    22,   122,    90,    48,    82,    91,    49,    42,
      49,    24,   103,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    22,    49,   104,   121,   103,    22,    88,
      89,    97,   106,    47,    48,    48,    22,    94,    48,    22,
      54,   102,   103,    43,    43,    47,     5,    22,    48,    68,
     102,   103,    45,    98,    45,    94,    43,    49,    84,    91,
      51,   106,    92,    48,    50,    53,    86,    22,    49,   117,
     104,   104,    47,    42,    49,    51,    42,    45,    47,    94,
     103,   103,    17,   103,    43,    43,    94,    22,    48,    43,
      45,    49,    49,    51,    49,    84,    51,   106,   105,   104,
      45,    88,    94,    49,    49,    48,    49,   102,    49,    51,
      94,    94,   103,    94,    43,    15,    49,   102,    94,    43,
      49,    94
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
      

/* Line 1455 of yacc.c  */
#line 1886 "bison.tab.c"
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
#line 428 "bison.y"


// DECLARACIONES

//CÓDIGO C DE USUARIO -> Código C que ejecuta el analizado     léxico
/* int yyerror(const char* msg){
    printf("Fallo del analisis en la linea %d %s", yylineno, msg);
    analisisCorrecto = 0;
    return 0;
}
 */
int main (int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    fclose(yyin);

    if(analisisCorrecto){
        printf("Analisis finalizado correctamente");
    }

    return 0;
}
