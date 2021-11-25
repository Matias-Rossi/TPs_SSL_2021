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
#line 2 "bison.y"

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
    NO_RECONOCIDO = 314,
    IDENTIFICADOR = 315,
    LITERAL_CADENA = 316,
    CONST_OCTAL = 317,
    CONST_HEXADECIMAL = 318,
    CONST_DECIMAL = 319,
    CONST_PTOFLOTANTE = 320,
    CONST_CARACTER = 321,
    IFX = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 18 "bison.y"

   int ival;
   double dval;
   char* cval;

#line 213 "bison.tab.c"

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
#define YYFINAL  79
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2498

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  413

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
       2,     2,     2,    91,     2,     2,     2,    89,    83,     2,
      74,    75,    78,    86,    71,    87,    92,    88,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    68,
      84,    72,    85,    80,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,    79,     2,     2,     2,
       2,     2,     2,    69,    81,    70,    90,     2,     2,     2,
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
      65,    66,    67
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    96,    96,    97,    98,    99,   100,   103,   104,   105,
     106,   109,   112,   113,   116,   117,   121,   122,   123,   124,
     128,   129,   130,   139,   140,   143,   144,   145,   146,   147,
     148,   152,   153,   154,   155,   156,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   174,   175,
     178,   179,   180,   183,   184,   187,   188,   192,   193,   194,
     198,   199,   200,   206,   211,   212,   213,   214,   218,   219,
     223,   224,   225,   229,   230,   231,   235,   236,   240,   241,
     242,   245,   246,   247,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   264,   265,   266,   267,   271,
     272,   276,   277,   281,   282,   286,   287,   288,   289,   290,
     291,   294,   295,   299,   300,   306,   307,   308,   312,   313,
     317,   318,   322,   323,   324,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   338,   342,   343,   344,   345,   346,
     347,   348,   352,   353,   354,   358,   360,   364,   365,   366,
     367,   370,   371,   374,   375,   376,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   391,   392,   393,   394,
     395,   396,   397,   400,   401,   405,   406,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   423,   424,
     427,   432,   433,   437,   438,   441,   442,   445,   446,   449,
     450,   453,   454,   455,   459,   460,   461,   462,   463,   467,
     468,   469,   473,   474,   475,   478,   479,   480,   481,   485,
     486,   490,   491,   492,   493,   494,   495,   496,   499,   500,
     501,   502,   503,   504,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   520,   521,   522,   523,   527,   528,   532,
     533,   534,   535,   536,   537
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
  "O_IGUAL", "NO_RECONOCIDO", "IDENTIFICADOR", "LITERAL_CADENA",
  "CONST_OCTAL", "CONST_HEXADECIMAL", "CONST_DECIMAL", "CONST_PTOFLOTANTE",
  "CONST_CARACTER", "IFX", "';'", "'{'", "'}'", "','", "'='", "':'", "'('",
  "')'", "'['", "']'", "'*'", "'t'", "'?'", "'|'", "'^'", "'&'", "'<'",
  "'>'", "'+'", "'-'", "'/'", "'%'", "'~'", "'!'", "'.'", "$accept",
  "unidad_de_programa", "idNoRec", "noRec", "unidad_de_traduccion",
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
  "lista_expresiones_argumento", "constante", YY_NULLPTR
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
     315,   316,   317,   318,   319,   320,   321,   322,    59,   123,
     125,    44,    61,    58,    40,    41,    91,    93,    42,   116,
      63,   124,    94,    38,    60,    62,    43,    45,    47,    37,
     126,    33,    46
};
# endif

#define YYPACT_NINF (-249)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-228)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1786,  1816,  1786,   163,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
     -45,  -249,  -249,  -249,    60,  2299,    33,     0,  -249,    35,
     206,  1786,  1677,  -249,  -249,  -249,   237,  2229,  2229,  2229,
    -249,   -34,  -249,  2266,  -249,    40,  -249,  -249,  -249,  1707,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  1522,
    1786,  -249,   -17,   244,  1891,  1077,   206,   -25,  2407,  2407,
    2336,  -249,   260,   242,  -249,   -11,  -249,  -249,     0,  -249,
    -249,  -249,  -249,  -249,    61,  -249,    69,  -249,  2030,  -249,
    -249,  -249,   -10,   343,  -249,  2266,   237,  -249,  -249,  -249,
    1555,  1589,  1589,   600,  -249,  -249,  -249,  -249,  -249,  -249,
      53,  -249,  -249,   -12,    18,     9,   101,   -14,   284,   -13,
     282,   243,    37,  -249,   342,  1522,    95,  -249,  -249,    34,
     -45,  -249,   123,   131,   145,  -249,    99,  -249,  -249,  -249,
     156,  -249,   967,  -249,  -249,  -249,  -249,  1522,   107,  -249,
     207,  -249,    34,  -249,  -249,  -249,  -249,  -249,    33,   933,
    2266,  -249,  2407,  2409,  1522,   213,   200,   220,   224,   884,
     247,   256,   250,   269,   671,   219,  -249,  -249,   430,  2077,
    2107,  -249,  -249,  -249,  -249,   742,  -249,  -249,  -249,   121,
    -249,  -249,   274,   600,  -249,  -249,  -249,   -36,   253,  1522,
    -249,  1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,
    1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,  1522,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  1522,  -249,  -249,  -249,   309,  1125,  1522,   322,   265,
    -249,   -37,  -249,  2154,   163,  -249,  -249,  -249,  -249,  -249,
     260,  1522,  -249,  -249,  1158,  -249,  -249,  -249,  2369,   310,
     884,  1522,  1522,  1192,   311,   517,   358,  1522,   320,  -249,
    -249,  -249,   140,   884,  -249,   813,  -249,  -249,  -249,   326,
    2000,  1225,    47,  -249,    75,  1522,  -249,    18,   186,     9,
     101,   -14,   284,   -13,   -13,   282,   282,   282,   282,   243,
     243,    37,    37,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
     105,   -53,  -249,  -249,   199,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,   270,  -249,   884,  -249,   115,   120,  1273,   181,
     328,   168,  -249,  -249,  -249,  -249,  -249,  -249,   340,   341,
    -249,   346,    75,  2191,  1306,  -249,  1522,  1522,  -249,  -249,
    1925,  1522,  -249,  1025,  -249,   884,   884,  1354,   211,  1387,
    1522,   884,  -249,  -249,  -249,  -249,   344,  -249,   347,  -249,
    -249,   345,   169,   348,  -249,  -249,   392,  -249,   884,   171,
    1421,  1455,   216,   183,  -249,  -249,  -249,  -249,  -249,  -249,
     884,  -249,   884,   884,   193,   884,   196,  1488,   359,  -249,
    -249,  -249,   884,  -249,   884,   884,   201,  -249,  -249,  -249,
    -249,   884,  -249
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    31,    32,    33,    34,    35,    41,
      37,    40,    36,    42,    38,    39,    43,    44,    48,    49,
       0,    53,    54,    11,    84,     0,     0,    96,   134,     0,
      94,     0,     0,    12,    14,    15,     0,    26,    28,    30,
      45,     0,    46,     0,    82,     0,    47,    83,     7,     0,
       2,   254,   243,   245,   249,   250,   251,   253,   252,     0,
       0,   244,    75,     0,    93,     0,    10,    78,    65,    67,
       0,    55,     0,     0,    76,     0,    99,    98,    95,     1,
       9,     8,     6,    13,    83,    22,     0,    57,    60,    25,
      27,    29,    51,     0,    23,     0,     0,    19,    81,   227,
       0,     0,     0,     0,   229,   228,   230,   231,   232,   233,
       0,   173,   175,   188,   191,   193,   195,   197,   199,   201,
     204,   209,   212,   215,   219,     0,   221,   234,     3,     0,
     254,    90,   112,    91,   101,   103,    92,   113,    87,   190,
       0,   219,     0,    64,    66,    52,    56,     0,     0,    68,
      70,    74,     0,    85,   100,    97,    21,    20,     0,     0,
       0,    18,     0,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   243,   146,   148,     0,    28,
      30,   151,   135,   136,   137,     0,   139,   138,   140,     0,
      24,    17,    60,     0,   225,   223,   222,   121,     0,     0,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     177,   178,   179,   180,   181,   183,   182,   184,   185,   186,
     187,     0,   224,   242,   241,     0,     0,     0,     0,     0,
     111,   110,    88,     0,     0,    89,    86,    79,    72,    63,
       0,     0,    77,    58,     0,    61,   115,    16,     0,     0,
       0,     0,     0,     0,   243,     0,     0,     0,     0,   167,
     168,   171,   170,     0,   149,     0,   150,   152,   145,     0,
       0,     0,   122,   120,   124,     0,   174,   192,     0,   194,
     196,   198,   200,   202,   203,   207,   208,   205,   206,   211,
     210,   213,   214,   216,   217,   218,   176,   240,   238,   247,
     237,     0,   239,    73,   105,   109,   102,   104,   114,    69,
      71,   118,     0,    50,     0,   144,     0,     0,     0,     0,
       0,     0,   166,   169,   142,   147,   226,   131,     0,     0,
     127,     0,   123,     0,     0,   220,     0,     0,   236,   235,
       0,     0,   116,     0,   143,     0,     0,     0,     0,     0,
       0,     0,   133,   125,   129,   132,     0,   128,     0,   189,
     248,     0,     0,     0,   117,   119,   153,   155,     0,     0,
       0,     0,     0,     0,   156,   130,   126,   107,   108,   106,
       0,   165,     0,     0,     0,     0,     0,     0,     0,   154,
     164,   163,     0,   161,     0,     0,     0,   157,   162,   160,
     159,     0,   158
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -249,    26,    12,   592,   427,   -16,  -249,   -30,   -21,   -33,
    -249,   152,    19,  -249,  -249,   294,  -249,   312,   -61,    14,
    -249,   182,  -249,   338,   316,   -19,   424,   -24,  -249,  -248,
    -249,   228,  -249,   122,  -243,  -249,   280,  -171,   192,  -249,
    -142,  -249,  -249,   -22,   297,  -249,  -249,  -249,   -58,  -151,
    -249,   -63,   -66,  -249,   277,   276,   278,   275,   279,   135,
      97,   167,   170,  -113,   -51,  -249,  -249,    -3,  -249,  -249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    48,    32,    33,    34,    35,   178,    36,
      37,    38,    39,    40,    41,    70,    86,    87,    71,    72,
     148,   149,    42,    73,    74,    43,    44,    45,    78,   133,
     134,   135,   241,   136,   255,   322,   198,   283,   284,    46,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   111,
     231,   112,   140,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   310,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,   110,   139,    77,    89,    90,    91,    75,   256,   146,
      96,   321,   232,    94,   141,    62,    83,    88,   199,    18,
      19,    97,    95,   314,   349,   201,    92,   266,    50,   209,
     210,   132,   338,    83,    47,    79,    66,   280,   280,   281,
     281,    27,    27,   277,    69,   110,    76,   142,   286,   194,
     195,   196,   129,   150,   155,    96,   203,    82,    94,   162,
      96,   137,    96,    94,   153,   190,   161,   160,   202,   206,
     315,   211,   212,   191,   141,    66,   247,   192,    27,   139,
     306,   248,   143,   144,   139,   309,   128,    69,    69,    69,
     204,   141,    23,    24,    67,   366,   141,   154,   259,    23,
      24,   139,   371,   256,   303,   304,   305,    26,   240,   339,
     375,    27,   180,   141,    26,   217,   272,   197,   325,    23,
      63,   280,    69,   281,   199,   218,   219,    96,   200,   156,
     190,   334,   -59,   277,    64,   110,    65,   157,   257,   192,
     158,   233,   234,   235,   288,    96,    90,    91,   190,   343,
     141,   344,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   236,
     244,   237,   345,   282,   245,   249,   347,    68,   250,   311,
     348,    69,   354,   205,    51,   320,   199,   238,   139,   278,
     355,   199,   199,   143,   144,   356,   370,   146,   180,   180,
     141,    27,   256,   326,   327,   329,   242,   197,   333,   331,
     132,   199,    69,   376,   377,   341,   243,   282,   139,   384,
      68,    68,    68,    52,    53,    54,    55,    56,    57,    58,
     141,   150,    96,   246,   141,    94,   391,    59,    84,   199,
     244,   318,   199,   361,   388,   179,   392,   132,   399,   359,
     400,   401,   199,   403,   199,    68,   282,   199,   398,   346,
     408,    47,   409,   410,   199,    23,    80,   199,   402,   412,
     358,   404,   199,   350,   261,   351,   411,    69,   368,   380,
     251,   139,   199,   369,   397,   373,   260,   199,   139,   -78,
     -78,   142,   273,   141,   262,   141,    23,    24,   263,   379,
     141,   382,   383,    23,    63,    85,   295,   296,   297,   298,
     132,    26,   151,   152,    68,    27,   268,   132,   269,    23,
      24,   267,   394,   396,   207,   208,   213,   214,   285,   215,
     216,   179,   179,   147,    26,   313,   152,   270,    27,   406,
     352,   353,   293,   294,   163,    68,   159,   137,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   130,   164,   165,   166,   167,   307,
     168,   169,   170,   171,   172,   173,    21,    22,   174,   100,
     299,   300,   312,   324,   273,   301,   302,   330,   332,   101,
     102,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   336,   360,   175,    53,    54,    55,    56,    57,    58,
      68,   176,    93,   177,   230,   362,   363,   103,   390,   385,
     387,   104,    28,   364,   386,   389,   105,   407,    49,   106,
     107,   163,   319,   108,   109,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   130,   164,   165,   166,   167,   258,   168,   169,   170,
     171,   172,   173,    21,    22,   174,   100,   239,   252,    98,
     253,   317,   372,   279,   342,   275,   101,   102,   287,   289,
     291,     0,   290,     0,     0,   292,     0,     0,     0,     0,
     264,    53,    54,    55,    56,    57,    58,     0,   176,    93,
     274,     0,     0,     0,   103,     0,     0,     0,   104,    28,
       0,     0,     0,   105,     0,     0,   106,   107,   163,     0,
     108,   109,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   130,   164,
     165,   166,   167,     0,   168,   169,   170,   171,   172,   173,
      21,    22,   174,   100,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,   102,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   264,    53,    54,
      55,    56,    57,    58,     0,   176,    93,   177,     0,     0,
       0,   103,    31,     0,    31,   104,    28,     0,     0,     0,
     105,    99,     0,   106,   107,     0,     0,   108,   109,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   130,    81,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,   100,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   101,   102,     0,     0,
       0,     0,    31,     0,     0,     0,     0,     0,    81,     0,
      52,    53,    54,    55,    56,    57,    58,     0,     0,    25,
       0,     0,    99,     0,   103,     0,     0,     0,   104,    28,
       0,     0,     0,   105,     0,     0,   106,   107,     0,     0,
     108,   109,    51,  -172,  -172,  -172,  -172,  -172,  -172,  -172,
    -172,  -172,  -172,  -172,     0,     0,  -172,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   101,   102,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     0,   271,
    -172,  -172,     0,   163,     0,   103,     0,     0,     0,   104,
       0,     0,     0,     0,   105,     0,     0,   106,   107,     0,
       0,   108,   109,    51,   164,   165,   166,   167,     0,   168,
     169,   170,   171,   172,   173,     0,     0,   174,   100,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   264,    53,    54,    55,    56,    57,    58,     0,
     176,   265,   276,     0,   163,     0,   103,     0,     0,     0,
     104,     0,     0,     0,     0,   105,     0,     0,   106,   107,
       0,     0,   108,   109,    51,   164,   165,   166,   167,     0,
     168,   169,   170,   171,   172,   173,     0,     0,   174,   100,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   264,    53,    54,    55,    56,    57,    58,
       0,   176,   265,   335,     0,   163,     0,   103,     0,     0,
       0,   104,     0,     0,     0,     0,   105,     0,     0,   106,
     107,     0,     0,   108,   109,    51,   164,   165,   166,   167,
       0,   168,   169,   170,   171,   172,   173,     0,     0,   174,
     100,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     101,   102,     0,     0,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   264,    53,    54,    55,    56,    57,
      58,     0,   176,   265,    51,     0,     0,     0,   103,     0,
       0,     0,   104,     0,     0,     0,     0,   105,    99,   100,
     106,   107,     0,     0,   108,   109,     0,     0,     0,   101,
     102,     0,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       0,   -62,   254,   100,   -62,     0,     0,   103,     0,     0,
       0,   104,     0,   101,   102,     0,   105,     0,     0,   106,
     107,     0,     0,   108,   109,     0,    99,    52,    53,    54,
      55,    56,    57,    58,     0,     0,     0,   -80,   -80,     0,
       0,   103,     0,     0,     0,   104,    51,     0,     0,     0,
     105,     0,     0,   106,   107,     0,     0,   108,   109,     0,
       0,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   101,   102,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,   254,   374,     0,     0,    51,   103,
       0,     0,     0,   104,     0,     0,     0,     0,   105,     0,
       0,   106,   107,   100,     0,   108,   109,     0,     0,     0,
       0,     0,     0,   101,   102,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,    53,    54,
      55,    56,    57,    58,     0,     0,    51,     0,     0,     0,
       0,   103,     0,     0,   138,   104,     0,     0,     0,    99,
     105,   100,     0,   106,   107,     0,     0,   108,   109,     0,
       0,   101,   102,     0,     0,     0,     0,     0,     0,    51,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,    99,   100,     0,     0,     0,     0,   103,
     308,     0,     0,   104,   101,   102,     0,     0,   105,     0,
       0,   106,   107,    51,     0,   108,   109,     0,    52,    53,
      54,    55,    56,    57,    58,     0,    99,   254,   100,     0,
       0,     0,   103,     0,     0,     0,   104,     0,   101,   102,
       0,   105,     0,     0,   106,   107,    51,     0,   108,   109,
       0,     0,    52,    53,    54,    55,    56,    57,    58,     0,
     328,   100,     0,     0,     0,     0,   103,     0,     0,     0,
     104,   101,   102,     0,    99,   105,     0,     0,   106,   107,
       0,     0,   108,   109,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,    51,     0,     0,     0,     0,   103,
       0,     0,   340,   104,     0,     0,     0,    99,   105,   100,
       0,   106,   107,     0,     0,   108,   109,     0,     0,   101,
     102,     0,     0,     0,     0,     0,     0,    51,     0,     0,
       0,     0,     0,    52,    53,    54,    55,    56,    57,    58,
       0,   357,   100,     0,     0,     0,     0,   103,     0,     0,
       0,   104,   101,   102,     0,    99,   105,     0,     0,   106,
     107,     0,     0,   108,   109,     0,    52,    53,    54,    55,
      56,    57,    58,     0,     0,    51,     0,     0,     0,     0,
     103,     0,     0,   367,   104,     0,     0,     0,    99,   105,
     100,     0,   106,   107,     0,     0,   108,   109,     0,     0,
     101,   102,     0,     0,     0,     0,     0,     0,    51,     0,
       0,     0,     0,     0,    52,    53,    54,    55,    56,    57,
      58,     0,    99,   100,     0,     0,     0,     0,   103,   378,
       0,     0,   104,   101,   102,     0,     0,   105,     0,     0,
     106,   107,    51,     0,   108,   109,     0,    52,    53,    54,
      55,    56,    57,    58,     0,   381,    99,   100,     0,     0,
       0,   103,     0,     0,     0,   104,     0,   101,   102,     0,
     105,     0,     0,   106,   107,     0,    51,   108,   109,     0,
       0,    52,    53,    54,    55,    56,    57,    58,     0,    99,
       0,   100,     0,     0,     0,   103,   393,     0,     0,   104,
       0,   101,   102,     0,   105,     0,     0,   106,   107,    51,
       0,   108,   109,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,    99,   100,     0,     0,     0,     0,   103,
     395,     0,     0,   104,   101,   102,     0,     0,   105,     0,
       0,   106,   107,    51,     0,   108,   109,     0,    52,    53,
      54,    55,    56,    57,    58,     0,    99,     0,   100,     0,
       0,     0,   103,   405,     0,     0,   104,     0,   101,   102,
       0,   105,     0,     0,   106,   107,    51,     0,   108,   109,
       0,     0,    52,    53,    54,    55,    56,    57,    58,     0,
      99,   100,     0,     0,     0,     0,   103,     0,     0,     0,
     104,   101,   102,     0,     0,   105,     0,     0,   106,   107,
      51,     0,   108,   109,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,     0,   100,     0,     0,     0,   193,
       0,     0,     0,   104,     0,   101,   102,     0,   105,     0,
       0,   106,   107,     0,     0,   108,   109,     0,     0,    52,
      53,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    59,     0,     0,     0,   104,     0,     0,
       0,     0,   105,     0,     0,   106,   107,    -4,    47,   108,
     109,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,    -5,    47,     0,
      21,    22,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,    23,    24,     0,     0,
      21,    22,     0,     0,     0,     0,    25,     0,     0,     0,
       0,    26,     0,     0,     0,    27,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       0,    26,     0,     0,     0,    27,    28,     1,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    21,
      22,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,    23,    24,     0,     0,    21,
      22,     0,     0,     0,     0,    25,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,     0,     0,     0,
       0,     0,     0,     0,     0,    25,     0,     0,     0,     0,
      26,     0,     0,     0,    27,    28,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   130,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,     0,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   130,     0,     0,     0,
       0,    52,    53,    54,    55,    56,    57,    58,    21,    22,
      25,     0,     0,     0,     0,    59,   131,     0,     0,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    52,    53,    54,    55,    56,
      57,    58,     0,     0,    25,     0,     0,     0,     0,    59,
       0,     0,     0,     0,    28,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,     0,    25,
       0,     0,     0,     0,   280,   337,   281,     0,    27,    28,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    93,
       0,     0,   159,     0,     0,     0,     0,     0,     0,    28,
      21,    22,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,    25,     0,     0,     0,
     -65,     0,     0,     0,     0,     0,    28,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    25,     0,     0,     0,
     -67,     0,     0,     0,     0,     0,    28,    21,    22,     0,
       0,     0,     0,   316,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    21,    22,     0,     0,     0,     0,
       0,     0,     0,    28,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    21,    22,     0,     0,   365,     0,     0,     0,
      28,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    25,   145,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,   323,
      21,    22,     0,     0,     0,     0,  -227,  -227,    28,  -227,
    -227,  -227,  -227,  -227,  -227,     0,     0,     0,  -227,  -227,
    -227,  -227,  -227,  -227,  -227,  -227,  -227,  -227,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
    -227,  -227,     0,     0,     0,     0,    28,     0,     0,  -227,
    -227,  -227,     0,  -227,  -227,     0,     0,  -227,  -227
};

static const yytype_int16 yycheck[] =
{
       3,    59,    65,    27,    37,    38,    39,    26,   159,    70,
      43,   254,   125,    43,    65,    60,    32,    36,    71,    19,
      20,    43,    43,    60,    77,    37,    60,   169,     2,    42,
      43,    64,   280,    49,     1,     0,    24,    74,    74,    76,
      76,    78,    78,   185,    25,   103,    27,    72,   199,   100,
     101,   102,    69,    72,    78,    88,    38,    31,    88,    69,
      93,    64,    95,    93,    75,    95,    88,    88,    80,    83,
     241,    84,    85,    95,   125,    63,   142,    96,    78,   142,
     231,   147,    68,    69,   147,   236,    60,    68,    69,    70,
      81,   142,    59,    60,    60,   343,   147,    78,   164,    59,
      60,   164,   350,   254,   217,   218,   219,    74,   132,   280,
     353,    78,    93,   164,    74,    78,   174,   103,   260,    59,
      60,    74,   103,    76,    71,    88,    89,   160,    75,    68,
     160,   273,    71,   275,    74,   193,    76,    68,   160,   158,
      71,    46,    47,    48,   202,   178,   179,   180,   178,    74,
     201,    76,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,    74,
      71,    76,   285,   197,    75,    68,    71,    25,    71,   237,
      75,   162,   324,    82,    21,   251,    71,    92,   251,    68,
      75,    71,    71,   179,   180,    75,   347,   258,   179,   180,
     251,    78,   353,   261,   262,   263,    75,   193,    68,   267,
     243,    71,   193,   355,   356,   281,    71,   241,   281,   361,
      68,    69,    70,    60,    61,    62,    63,    64,    65,    66,
     281,   250,   265,    77,   285,   265,   378,    74,     1,    71,
      71,   244,    71,    75,    75,    93,    75,   280,   390,    68,
     392,   393,    71,   395,    71,   103,   280,    71,    75,    73,
     402,     1,   404,   405,    71,    59,    60,    71,    75,   411,
     328,    75,    71,    74,    74,    76,    75,   258,   344,    68,
      73,   344,    71,   346,    68,   351,    73,    71,   351,    70,
      71,    72,    73,   344,    74,   346,    59,    60,    74,   357,
     351,   359,   360,    59,    60,    68,   209,   210,   211,   212,
     343,    74,    70,    71,   162,    78,    60,   350,    68,    59,
      60,    74,   380,   381,    40,    41,    44,    45,    75,    86,
      87,   179,   180,    73,    74,    70,    71,    68,    78,   397,
      70,    71,   207,   208,     1,   193,    72,   350,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    60,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
     213,   214,    60,    73,    73,   215,   216,    29,    68,    46,
      47,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    75,    74,    60,    61,    62,    63,    64,    65,    66,
     258,    68,    69,    70,    72,    75,    75,    74,    26,    75,
      75,    78,    79,    77,    77,    77,    83,    68,     1,    86,
      87,     1,   250,    90,    91,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   162,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,   129,   152,    45,
     158,   243,   350,   193,   282,   178,    46,    47,   201,   203,
     205,    -1,   204,    -1,    -1,   206,    -1,    -1,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,    68,    69,
      70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,     1,    -1,
      90,    91,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,    -1,
      -1,    74,     0,    -1,     2,    78,    79,    -1,    -1,    -1,
      83,     1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    69,
      -1,    -1,     1,    -1,    74,    -1,    -1,    -1,    78,    79,
      -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,
      90,    91,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,     1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,     1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    21,    22,    23,    24,    25,    -1,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    70,    -1,     1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    21,    22,    23,    24,    25,
      -1,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    21,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    83,     1,    36,
      86,    87,    -1,    -1,    90,    91,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    69,    36,    71,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    46,    47,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    -1,     1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    70,    71,    -1,
      -1,    74,    -1,    -1,    -1,    78,    21,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    70,    -1,    -1,    21,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    36,    -1,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,     1,
      83,    36,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,     1,    36,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    78,    46,    47,    -1,    -1,    83,    -1,
      -1,    86,    87,    21,    -1,    90,    91,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,     1,    69,    36,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    46,    47,
      -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,    91,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    36,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    46,    47,    -1,     1,    83,    -1,    -1,    86,    87,
      -1,    -1,    90,    91,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    21,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    77,    78,    -1,    -1,    -1,     1,    83,    36,
      -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,    68,    36,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    46,    47,    -1,     1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,    21,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    77,    78,    -1,    -1,    -1,     1,    83,
      36,    -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,     1,    36,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    78,    46,    47,    -1,    -1,    83,    -1,    -1,
      86,    87,    21,    -1,    90,    91,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,     1,    36,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    46,    47,    -1,
      83,    -1,    -1,    86,    87,    -1,    21,    90,    91,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,     1,
      -1,    36,    -1,    -1,    -1,    74,    75,    -1,    -1,    78,
      -1,    46,    47,    -1,    83,    -1,    -1,    86,    87,    21,
      -1,    90,    91,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,     1,    36,    -1,    -1,    -1,    -1,    74,
      75,    -1,    -1,    78,    46,    47,    -1,    -1,    83,    -1,
      -1,    86,    87,    21,    -1,    90,    91,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,     1,    -1,    36,    -1,
      -1,    -1,    74,    75,    -1,    -1,    78,    -1,    46,    47,
      -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,    91,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
       1,    36,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    46,    47,    -1,    -1,    83,    -1,    -1,    86,    87,
      21,    -1,    90,    91,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    -1,    36,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    46,    47,    -1,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,     0,     1,    90,
      91,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,     1,    -1,
      33,    34,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    79,     1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    33,
      34,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    33,
      34,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    79,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    33,    34,
      69,    -1,    -1,    -1,    -1,    74,    75,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    79,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    75,    76,    -1,    78,    79,
      -1,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    69,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      33,    34,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    69,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    79,    33,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    33,    34,    -1,    -1,    75,    -1,    -1,    -1,
      79,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    33,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,
      33,    34,    -1,    -1,    -1,    -1,    37,    38,    79,    40,
      41,    42,    43,    44,    45,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,
      71,    72,    -1,    -1,    -1,    -1,    79,    -1,    -1,    80,
      81,    82,    -1,    84,    85,    -1,    -1,    88,    89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    60,    69,    74,    78,    79,    94,
      95,    96,    97,    98,    99,   100,   102,   103,   104,   105,
     106,   107,   115,   118,   119,   120,   132,     1,    96,    97,
      94,    21,    60,    61,    62,    63,    64,    65,    66,    74,
     160,   162,    60,    60,    74,    76,    95,    60,   104,   105,
     108,   111,   112,   116,   117,   118,   105,   120,   121,     0,
      60,    96,    94,    98,     1,    68,   109,   110,   118,   102,
     102,   102,    60,    69,   100,   101,   102,   136,   119,     1,
      36,    46,    47,    74,    78,    83,    86,    87,    90,    91,
     141,   142,   144,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,    94,    69,
      21,    75,   102,   122,   123,   124,   126,   160,    77,   144,
     145,   157,    72,   112,   112,    70,   111,    73,   113,   114,
     118,    70,    71,    75,   105,   120,    68,    68,    71,    72,
     101,   136,    69,     1,    22,    23,    24,    25,    27,    28,
      29,    30,    31,    32,    35,    60,    68,    70,   101,   104,
     105,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     100,   136,   118,    74,   157,   157,   157,   112,   129,    71,
      75,    37,    80,    38,    81,    82,    83,    40,    41,    42,
      43,    84,    85,    44,    45,    86,    87,    78,    88,    89,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      72,   143,   156,    46,    47,    48,    74,    76,    92,   116,
     120,   125,    75,    71,    71,    75,    77,   145,   145,    68,
      71,    73,   117,   110,    69,   127,   142,   136,   108,   145,
      73,    74,    74,    74,    60,    69,   133,    74,    60,    68,
      68,    68,   141,    73,    70,   137,    70,   133,    68,   129,
      74,    76,   120,   130,   131,    75,   142,   147,   141,   148,
     149,   150,   151,   152,   152,   153,   153,   153,   153,   154,
     154,   155,   155,   156,   156,   156,   142,    60,    75,   142,
     161,   141,    60,    70,    60,   130,    39,   124,   160,   114,
     145,   127,   128,    70,    73,   133,   141,   141,    68,   141,
      29,   141,    68,    68,   133,    70,    75,    75,   122,   130,
      77,   145,   131,    74,    76,   156,    73,    71,    75,    77,
      74,    76,    70,    71,   133,    75,    75,    68,   141,    68,
      74,    75,    75,    75,    77,    75,   122,    77,   145,   144,
     142,   122,   126,   145,    70,   127,   133,   133,    75,   141,
      68,    68,   141,   141,   133,    75,    77,    75,    75,    77,
      26,   133,    75,    75,   141,    75,   141,    68,    75,   133,
     133,   133,    75,   133,    75,    75,   141,    68,   133,   133,
     133,    75,   133
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    95,    95,    95,
      95,    96,    97,    97,    98,    98,    99,    99,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     102,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   106,   107,   107,   108,   108,   109,   109,   109,
     110,   110,   110,   111,   112,   112,   112,   112,   113,   113,
     114,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     117,   118,   118,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   120,   120,   121,
     121,   122,   122,   123,   123,   124,   124,   124,   124,   124,
     124,   125,   125,   126,   126,   127,   127,   127,   128,   128,
     129,   129,   130,   130,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   132,   133,   133,   133,   133,   133,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   136,
     136,   137,   137,   138,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   141,   141,   142,   142,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     145,   146,   146,   147,   147,   148,   148,   149,   149,   150,
     150,   151,   151,   151,   152,   152,   152,   152,   152,   153,
     153,   153,   154,   154,   154,   155,   155,   155,   155,   156,
     156,   157,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   160,   161,   161,   162,
     162,   162,   162,   162,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     2,     1,     2,     2,
       2,     1,     1,     2,     1,     1,     4,     3,     3,     2,
       3,     3,     2,     1,     2,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     2,     3,     1,     1,     1,     2,     1,     3,     1,
       1,     3,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     3,     2,     5,     3,     2,     1,     3,     1,     3,
       2,     2,     1,     1,     1,     3,     4,     3,     4,     4,
       3,     3,     3,     2,     1,     2,     1,     3,     2,     1,
       2,     1,     3,     1,     3,     3,     6,     6,     6,     3,
       2,     1,     0,     1,     3,     1,     3,     4,     1,     3,
       2,     1,     1,     2,     1,     3,     4,     2,     3,     3,
       4,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     1,     4,     2,     3,
       3,     1,     2,     5,     7,     5,     5,     7,     9,     8,
       8,     7,     8,     7,     7,     6,     3,     2,     2,     3,
       2,     2,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     4,     3,     3,     3,
       3,     2,     2,     1,     1,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1
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
  case 5:
#line 99 "bison.y"
                                               {yyerrok;}
#line 2136 "bison.tab.c"
    break;

  case 14:
#line 116 "bison.y"
                                                                                                            {definirFuncion(lista_funciones, (yyvsp[0].cval));}
#line 2142 "bison.tab.c"
    break;

  case 15:
#line 117 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[0].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2148 "bison.tab.c"
    break;

  case 16:
#line 121 "bison.y"
                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2154 "bison.tab.c"
    break;

  case 17:
#line 122 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2160 "bison.tab.c"
    break;

  case 18:
#line 123 "bison.y"
                                                                                                                                    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2166 "bison.tab.c"
    break;

  case 19:
#line 124 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2172 "bison.tab.c"
    break;

  case 36:
#line 160 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2178 "bison.tab.c"
    break;

  case 37:
#line 161 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2184 "bison.tab.c"
    break;

  case 38:
#line 162 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2190 "bison.tab.c"
    break;

  case 39:
#line 163 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2196 "bison.tab.c"
    break;

  case 40:
#line 164 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2202 "bison.tab.c"
    break;

  case 41:
#line 165 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2208 "bison.tab.c"
    break;

  case 42:
#line 166 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2214 "bison.tab.c"
    break;

  case 43:
#line 167 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2220 "bison.tab.c"
    break;

  case 44:
#line 168 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2226 "bison.tab.c"
    break;

  case 62:
#line 200 "bison.y"
                                                       { char* errorMsg = (char*)malloc(sizeof(char) * 62);
                                                        sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta inicializador\n", yylineno);yyerrok;
                                                        agregarError(erroresSintacticos, errorMsg);}
#line 2234 "bison.tab.c"
    break;

  case 80:
#line 242 "bison.y"
                                                           {yyerrok;char* errorMsg = (char*)malloc(sizeof(char) * 65);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta expresion constante\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2240 "bison.tab.c"
    break;

  case 84:
#line 250 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2246 "bison.tab.c"
    break;

  case 86:
#line 252 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2252 "bison.tab.c"
    break;

  case 87:
#line 253 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2258 "bison.tab.c"
    break;

  case 88:
#line 254 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2264 "bison.tab.c"
    break;

  case 89:
#line 255 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2270 "bison.tab.c"
    break;

  case 90:
#line 256 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2276 "bison.tab.c"
    break;

  case 91:
#line 257 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2282 "bison.tab.c"
    break;

  case 92:
#line 258 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2288 "bison.tab.c"
    break;

  case 93:
#line 259 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2294 "bison.tab.c"
    break;

  case 103:
#line 281 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2300 "bison.tab.c"
    break;

  case 104:
#line 282 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval));agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2306 "bison.tab.c"
    break;

  case 105:
#line 286 "bison.y"
                                                                                     {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2312 "bison.tab.c"
    break;

  case 106:
#line 287 "bison.y"
                                                                                                                 {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2318 "bison.tab.c"
    break;

  case 107:
#line 288 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2324 "bison.tab.c"
    break;

  case 108:
#line 289 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2330 "bison.tab.c"
    break;

  case 113:
#line 299 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2336 "bison.tab.c"
    break;

  case 135:
#line 342 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2342 "bison.tab.c"
    break;

  case 136:
#line 343 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2348 "bison.tab.c"
    break;

  case 137:
#line 344 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2354 "bison.tab.c"
    break;

  case 138:
#line 345 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2360 "bison.tab.c"
    break;

  case 139:
#line 346 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2366 "bison.tab.c"
    break;

  case 140:
#line 347 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2372 "bison.tab.c"
    break;

  case 170:
#line 395 "bison.y"
                                                     {char* errorMsg = (char*)calloc(sizeof(char), 60);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);agregarError(erroresSintacticos, errorMsg);yyerrok;}
#line 2378 "bison.tab.c"
    break;

  case 172:
#line 397 "bison.y"
                                                    {char* errorMsg = (char*)calloc(sizeof(char), 60);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);agregarError(erroresSintacticos, errorMsg);yyerrok;}
#line 2384 "bison.tab.c"
    break;

  case 213:
#line 474 "bison.y"
                                                                                        {if(!chequearSuma(sacar_ultimo_caracter((yyvsp[-2].cval)), ultimas_constantes)) {char* errorMsg = (char*)calloc(sizeof(char), 50);sprintf(errorMsg,"[ERROR-Semántico] Línea %d: Suma inválida\n", yylineno);agregarError(erroresSemanticos, errorMsg);}}
#line 2390 "bison.tab.c"
    break;

  case 217:
#line 480 "bison.y"
                                                                                            {verificarDivisor((yyvsp[0].cval));}
#line 2396 "bison.tab.c"
    break;

  case 236:
#line 509 "bison.y"
                                                                                    { comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval)); }
#line 2402 "bison.tab.c"
    break;

  case 237:
#line 510 "bison.y"
                                                                                 { comprobar_tipos_funcion(lista_funciones, (yyvsp[-2].cval)); yyerrok;}
#line 2408 "bison.tab.c"
    break;

  case 243:
#line 520 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "identificador"); /*printf("Identificador: %s\n", $<cval>1);*/ validarIdentificador((yyvsp[0].cval));}
#line 2414 "bison.tab.c"
    break;

  case 245:
#line 522 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "char*");}
#line 2420 "bison.tab.c"
    break;

  case 249:
#line 532 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2426 "bison.tab.c"
    break;

  case 250:
#line 533 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2432 "bison.tab.c"
    break;

  case 251:
#line 534 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2438 "bison.tab.c"
    break;

  case 252:
#line 535 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "char");}
#line 2444 "bison.tab.c"
    break;

  case 253:
#line 536 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "float");}
#line 2450 "bison.tab.c"
    break;


#line 2454 "bison.tab.c"

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
#line 540 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        //yydebug = 1;
    #endif
    
    system("clear");

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
        erroresLexicos             = inicializarListaErrores       (erroresLexicos); 
        erroresSintacticos             = inicializarListaErrores       (erroresSintacticos); 
        erroresSemanticos             = inicializarListaErrores       (erroresSemanticos); 

        printf("\n --- Comenzando anlisis lexico y sintactico ---\n\n");

        yyparse();
        //fclose(yyin);

       

        printf("\n\n --- Imprimiendo reporte ---");

        crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
        crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
        mostrarListadoFunciones(lista_funciones);
        mostrarErrores();
        //crearListadoSentencias     (lista_sentencias,          "SENTENCIAS");
       

    }



    return 0;
}

int yyerror(const char *msg)
{
	printf("\n[ERROR-Sintáctico] Línea %d, fallo de análisis: %s\n", yylineno, msg);
	return 0;
}
