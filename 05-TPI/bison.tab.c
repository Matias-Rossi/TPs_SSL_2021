/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "bison.y"

#include "tp5.h"


int yylex(void);
int yywrap(){
    return(1);
}

//extern int yylineno;

int idVar = 0;

extern FILE* yyin;


#line 87 "bison.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_BISON_TAB_H_INCLUDED
# define YY_YY_BISON_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "bison.y"

   int idval;
   int ival;
   double dval;
   char* cval;

#line 214 "bison.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_BISON_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

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
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399

#define YYUNDEFTOK  2
#define YYMAXUTOK   322


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   101,   101,   102,   103,   104,   105,   108,   111,   112,
     115,   117,   118,   122,   123,   124,   125,   129,   130,   133,
     134,   137,   138,   139,   140,   141,   142,   146,   147,   148,
     149,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   168,   169,   172,   173,   175,   178,
     179,   182,   183,   187,   188,   192,   193,   197,   201,   202,
     203,   204,   208,   209,   213,   214,   215,   219,   220,   221,
     225,   226,   230,   231,   234,   235,   238,   239,   240,   246,
     250,   256,   262,   270,   271,   272,   273,   277,   278,   282,
     290,   299,   300,   304,   305,   306,   310,   311,   314,   316,
     317,   318,   322,   323,   327,   328,   332,   333,   334,   337,
     338,   339,   340,   341,   343,   344,   345,   346,   349,   353,
     354,   355,   356,   357,   358,   362,   363,   364,   368,   369,
     373,   374,   375,   376,   379,   380,   383,   384,   385,   388,
     389,   390,   391,   392,   393,   394,   395,   396,   397,   400,
     401,   402,   403,   404,   407,   408,   412,   413,   416,   417,
     418,   419,   420,   421,   422,   423,   424,   425,   426,   430,
     431,   434,   438,   439,   443,   444,   447,   448,   451,   452,
     455,   456,   459,   460,   461,   465,   466,   467,   468,   469,
     473,   474,   475,   479,   480,   481,   484,   485,   486,   487,
     491,   492,   496,   497,   498,   499,   500,   501,   504,   505,
     506,   507,   508,   509,   512,   513,   514,   515,   516,   517,
     518,   519,   524,   525,   526,   527,   531,   532,   535,   536,
     539,   540,   541,   542,   543,   544
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "lista_expresiones_argumento", "tipo_identificador", "constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
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

#define YYPACT_NINF (-228)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 105 "bison.y"
                                                                      {yyerror;}
#line 2077 "bison.tab.c"
    break;

  case 7:
#line 108 "bison.y"
                                                              {agregar_token_no_reconocido(listaTokensNR, yychar ,yylineno);}
#line 2083 "bison.tab.c"
    break;

  case 32:
#line 154 "bison.y"
                                                   {aux_tIdentificador=1;}
#line 2089 "bison.tab.c"
    break;

  case 33:
#line 155 "bison.y"
                                                               {aux_tIdentificador=2;}
#line 2095 "bison.tab.c"
    break;

  case 34:
#line 156 "bison.y"
                                                               {aux_tIdentificador=3;}
#line 2101 "bison.tab.c"
    break;

  case 35:
#line 157 "bison.y"
                                                               {aux_tIdentificador=4;}
#line 2107 "bison.tab.c"
    break;

  case 36:
#line 158 "bison.y"
                                                       {aux_tIdentificador=5;}
#line 2113 "bison.tab.c"
    break;

  case 37:
#line 159 "bison.y"
                                                               {aux_tIdentificador=6;}
#line 2119 "bison.tab.c"
    break;

  case 38:
#line 160 "bison.y"
                                                               {aux_tIdentificador=7;}
#line 2125 "bison.tab.c"
    break;

  case 39:
#line 161 "bison.y"
                                                               {aux_tIdentificador=8;}
#line 2131 "bison.tab.c"
    break;

  case 40:
#line 162 "bison.y"
                                                                           {aux_tIdentificador=9;}
#line 2137 "bison.tab.c"
    break;

  case 78:
#line 240 "bison.y"
                                                                                       {
                                                                                        variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-3].cval));
                                                                                        var->tipo=aux_tIdentificador;
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));       
                                                                                       }
#line 2148 "bison.tab.c"
    break;

  case 79:
#line 246 "bison.y"
                                                                                       {variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-2].cval)); 
                                                                                        var->tipo= aux_tIdentificador; 
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));}
#line 2157 "bison.tab.c"
    break;

  case 80:
#line 250 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-3].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        fun->params = inicializarLista(auxListaParametrosConTipos);
                                                                                       }
#line 2168 "bison.tab.c"
    break;

  case 81:
#line 256 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-3].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       }
#line 2179 "bison.tab.c"
    break;

  case 82:
#line 262 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-2].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       }
#line 2190 "bison.tab.c"
    break;

  case 89:
#line 282 "bison.y"
                                                                       {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[0].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        printf("\nSeg?\n");
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof(var));
                                                                        printf("\nSeg\n");
                                                                        }
#line 2203 "bison.tab.c"
    break;

  case 90:
#line 290 "bison.y"
                                                                       {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-2].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof((yyvsp[-2].cval)));
                                                                        }
#line 2214 "bison.tab.c"
    break;

  case 96:
#line 310 "bison.y"
                                                                                  {variable* var; var->nombre_variable=sacar_ultimo_caracter((yyvsp[0].cval)); agregarElemento(auxListaParametrosSinTipos , var, sizeof((yyvsp[0].cval)));}
#line 2220 "bison.tab.c"
    break;

  case 98:
#line 314 "bison.y"
                                                                                  {variable* var; var->nombre_variable=sacar_ultimo_caracter((yyvsp[-2].cval)); agregarElemento(auxListaParametrosSinTipos , var, sizeof((yyvsp[-2].cval)));}
#line 2226 "bison.tab.c"
    break;

  case 228:
#line 535 "bison.y"
                                                 {printf("ACA -> %s, $<cval>1");/*agregarIdentificador(listaVariables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2232 "bison.tab.c"
    break;


#line 2236 "bison.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 547 "bison.y"

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
        listaTokensNR = inicializarListaDeTokensNoReconocidos(listaTokensNR);

        printf("Comenzando anlisis lexico y sintactico\n");


        yyparse();
        fclose(yyin);

        if(analisisCorrecto){

            printf("Imprimiendo reporte\n");

            imprimirVariables(listaVariables);
            imprimirFunciones(listaFunciones);
            imprimirTokensNoReconocidos(listaTokensNR);
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
