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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2440

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  407

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
       0,    96,    96,    97,    98,    99,   100,   103,   110,   111,
     114,   115,   119,   120,   121,   122,   126,   127,   128,   137,
     138,   141,   142,   143,   144,   145,   146,   150,   151,   152,
     153,   154,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   172,   173,   176,   177,   178,   181,
     182,   185,   186,   190,   191,   192,   196,   197,   198,   204,
     209,   210,   211,   212,   216,   217,   221,   222,   223,   227,
     228,   229,   233,   234,   238,   239,   240,   243,   244,   245,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     261,   262,   263,   264,   268,   269,   273,   274,   278,   279,
     283,   284,   285,   286,   287,   288,   291,   292,   296,   297,
     303,   304,   305,   309,   310,   314,   315,   319,   320,   321,
     324,   325,   326,   327,   328,   330,   331,   332,   333,   336,
     340,   341,   342,   343,   344,   345,   346,   350,   351,   352,
     356,   358,   362,   363,   364,   365,   368,   369,   372,   373,
     374,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   389,   390,   391,   392,   393,   394,   397,   398,   402,
     403,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   420,   421,   424,   429,   430,   434,   435,   438,
     439,   442,   443,   446,   447,   450,   451,   452,   456,   457,
     458,   459,   460,   464,   465,   466,   470,   471,   472,   475,
     476,   477,   478,   482,   483,   487,   488,   489,   490,   491,
     492,   493,   496,   497,   498,   499,   500,   501,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   517,   518,   519,
     520,   524,   525,   529,   530,   531,   532,   533,   534
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
  "unidad_de_programa", "noRec", "unidad_de_traduccion",
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

#define YYPACT_NINF (-256)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1728,  1758,  1728,   365,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,  -256,
     -35,  -256,  -256,  -256,   143,  2241,   117,    -9,  -256,    40,
    1728,  1619,  -256,  -256,  -256,    25,  2171,  2171,  2171,  -256,
      23,  -256,  2208,  -256,   -37,  -256,  -256,  1649,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,  -256,  1464,  1728,  -256,
      -2,  1833,   999,    53,  2349,  2349,  2278,  -256,   109,    46,
    -256,    33,  -256,  -256,    -9,  -256,  -256,  -256,   -44,  -256,
       7,  -256,  1972,  -256,  -256,  -256,    78,   388,  -256,  2208,
      25,  -256,  -256,  -256,  1497,  1531,  1531,   645,  -256,  -256,
    -256,  -256,  -256,  -256,   -36,  -256,  -256,   -15,   146,    98,
     110,   114,   216,   -13,   220,   182,   -45,  -256,   474,  1464,
     225,  -256,  -256,   144,   -35,  -256,   160,   138,   153,  -256,
     -22,  -256,  -256,  -256,   185,  -256,   266,  -256,  -256,  -256,
    -256,  1464,     9,  -256,   197,  -256,   144,  -256,  -256,  -256,
    -256,  -256,   117,   907,  2208,  -256,  2349,  2351,  1464,   206,
     203,   226,   236,   858,   237,   230,   252,   253,  1032,   175,
    -256,  -256,   475,  2019,  2049,  -256,  -256,  -256,  -256,   716,
    -256,  -256,  -256,    29,  -256,  -256,   250,   645,  -256,  -256,
    -256,    12,   248,  1464,  -256,  1464,  1464,  1464,  1464,  1464,
    1464,  1464,  1464,  1464,  1464,  1464,  1464,  1464,  1464,  1464,
    1464,  1464,  1464,  1464,  -256,  -256,  -256,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,  -256,  1464,  -256,  -256,  -256,   264,
    1066,  1464,   265,   204,  -256,    45,  -256,  2096,   365,  -256,
    -256,  -256,  -256,  -256,   109,  1464,  -256,  -256,  1100,  -256,
    -256,  -256,  2311,   260,   858,  1464,  1464,  1134,   261,   562,
     309,  1464,   271,  -256,  -256,  -256,    68,   858,  -256,   787,
    -256,  -256,  -256,   267,  1942,  1167,   147,  -256,   157,  1464,
    -256,   146,   163,    98,   110,   114,   216,   -13,   -13,   220,
     220,   220,   220,   182,   182,   -45,   -45,  -256,  -256,  -256,
    -256,  -256,  -256,  -256,    20,   -29,  -256,  -256,   167,  -256,
    -256,  -256,  -256,  -256,  -256,  -256,   213,  -256,   858,  -256,
      57,    59,  1215,    70,   269,    62,  -256,  -256,  -256,  -256,
    -256,  -256,   272,   273,  -256,   277,   157,  2133,  1248,  -256,
    1464,  1464,  -256,  -256,  1867,  1464,  -256,   941,  -256,   858,
     858,  1296,    97,  1329,  1464,   858,  -256,  -256,  -256,  -256,
     275,  -256,   278,  -256,  -256,   283,    95,   282,  -256,  -256,
     320,  -256,   858,   103,  1363,  1397,   141,   105,  -256,  -256,
    -256,  -256,  -256,  -256,   858,  -256,   858,   858,   118,   858,
     123,  1430,   292,  -256,  -256,  -256,   858,  -256,   858,   858,
     135,  -256,  -256,  -256,  -256,   858,  -256
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    27,    28,    29,    30,    31,    37,
      33,    36,    32,    38,    34,    35,    39,    40,    44,    45,
       0,    49,    50,     7,    80,     0,     0,    91,   129,     0,
       0,     0,     8,    10,    11,     0,    22,    24,    26,    41,
       0,    42,     0,    78,     0,    43,    79,     0,     2,   248,
     237,   239,   243,   244,   245,   247,   246,     0,     0,   238,
      71,    89,     0,    74,    61,    63,     0,    51,     0,     0,
      72,     0,    94,    93,    90,     1,     6,     9,    79,    18,
       0,    53,    56,    21,    23,    25,    47,     0,    19,     0,
       0,    15,    77,   221,     0,     0,     0,     0,   223,   222,
     224,   225,   226,   227,     0,   167,   169,   182,   185,   187,
     189,   191,   193,   195,   198,   203,   206,   209,   213,     0,
     215,   228,     3,     0,   248,    86,   107,    87,    96,    98,
      88,   108,    83,   184,     0,   213,     0,    60,    62,    48,
      52,     0,     0,    64,    66,    70,     0,    81,    95,    92,
      17,    16,     0,     0,     0,    14,     0,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   237,
     141,   143,     0,    24,    26,   146,   130,   131,   132,     0,
     134,   133,   135,     0,    20,    13,    56,     0,   219,   217,
     216,   116,     0,     0,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   175,   177,
     176,   178,   179,   180,   181,     0,   218,   236,   235,     0,
       0,     0,     0,     0,   106,   105,    84,     0,     0,    85,
      82,    75,    68,    59,     0,     0,    73,    54,     0,    57,
     110,    12,     0,     0,     0,     0,     0,     0,   237,     0,
       0,     0,     0,   162,   163,   166,   165,     0,   144,     0,
     145,   147,   140,     0,     0,     0,   117,   115,   119,     0,
     168,   186,     0,   188,   190,   192,   194,   196,   197,   201,
     202,   199,   200,   205,   204,   207,   208,   210,   211,   212,
     170,   234,   232,   241,   231,     0,   233,    69,   100,   104,
      97,    99,   109,    65,    67,   113,     0,    46,     0,   139,
       0,     0,     0,     0,     0,     0,   161,   164,   137,   142,
     220,   126,     0,     0,   122,     0,   118,     0,     0,   214,
       0,     0,   230,   229,     0,     0,   111,     0,   138,     0,
       0,     0,     0,     0,     0,     0,   128,   120,   124,   127,
       0,   123,     0,   183,   242,     0,     0,     0,   112,   114,
     148,   150,     0,     0,     0,     0,     0,     0,   151,   125,
     121,   102,   103,   101,     0,   160,     0,     0,     0,     0,
       0,     0,     0,   149,   159,   158,     0,   156,     0,     0,
       0,   152,   157,   155,   154,     0,   153
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -256,    36,  -256,   360,   -11,  -256,   -27,   -14,   -30,  -256,
     195,   189,  -256,  -256,   208,  -256,   214,   -62,    -1,  -256,
     121,  -256,   244,   224,   -17,   327,   -24,  -256,  -255,  -256,
     136,  -256,    28,  -243,  -256,   187,  -218,    99,  -256,  -147,
    -256,  -256,   -28,   205,  -256,  -256,  -256,   -56,  -119,  -256,
     -60,   -57,  -256,   183,   184,   181,   186,   180,    92,   100,
     101,   106,   -98,   -49,  -256,  -256,    -3,  -256,  -256
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,    32,    33,    34,   172,    35,    36,
      37,    38,    39,    40,    66,    80,    81,    67,    68,   142,
     143,    41,    69,    70,    42,    43,    44,    74,   127,   128,
     129,   235,   130,   249,   316,   192,   277,   278,    45,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   105,   225,
     106,   134,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   304,    59
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      58,   104,   133,    73,   140,   315,    83,    84,    85,    71,
      18,    19,    90,   135,    91,    88,   260,   309,    82,   332,
      77,   226,   195,    24,   150,    60,    78,   -55,    89,   203,
     204,   126,   271,   211,   250,   193,    77,    26,    48,   194,
      75,   104,   193,   212,   213,   188,   189,   190,   343,   238,
     149,   144,    90,   239,   155,    88,   333,    90,   131,    90,
      88,   185,   184,   137,   138,   196,    76,   123,   154,    27,
     135,   205,   206,   186,   280,   151,   133,   243,   152,   241,
     244,   133,   360,    86,   242,    24,   274,   135,   275,   365,
      27,   341,   135,    79,   122,   342,   191,   272,   133,    26,
     193,   253,   234,    27,   369,   308,   300,   319,   147,   135,
      46,   303,   266,   297,   298,   299,   145,   146,    46,   274,
     328,   275,   271,    27,    90,   136,   251,   184,   193,   250,
     193,   104,   349,   193,   350,   186,   327,   355,   353,   193,
     282,   193,    90,    84,    85,   184,   135,   156,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   374,   238,   276,   193,    24,
     382,   348,   137,   138,   193,   305,   193,    24,   386,   198,
     392,   339,   141,    26,   197,   133,   191,    27,   314,   193,
     140,    26,   199,   396,   193,    27,   135,   200,   398,   320,
     321,   323,   370,   371,    63,   325,   193,   126,   378,   391,
     405,   276,   193,   236,    65,   133,    72,    61,   335,    62,
      64,   274,   364,   275,   237,   385,   135,   144,   250,    90,
     135,   337,    88,   338,   193,   312,   340,   393,    27,   394,
     395,   344,   397,   345,   126,   -74,   -74,   136,   267,   402,
     276,   403,   404,    65,    65,    65,   201,   202,   406,    64,
      64,    64,   240,   148,   207,   208,   352,    93,   209,   210,
     245,   227,   228,   229,   307,   146,   174,   255,   133,   254,
     363,   362,   173,   346,   347,   133,    65,    49,   367,   135,
     262,   135,    64,   287,   288,   373,   135,   376,   377,   230,
     256,   231,    94,   289,   290,   291,   292,   126,   293,   294,
     257,   261,    95,    96,   126,   295,   296,   232,   388,   390,
     263,   264,   153,   279,   301,   306,    50,    51,    52,    53,
      54,    55,    56,   318,   267,   400,   -76,   -76,   324,   326,
      97,   131,   330,   354,    98,    65,   384,   356,   357,    99,
     379,    64,   100,   101,   358,   380,   102,   103,   381,   383,
     401,    47,   174,   174,   252,   313,   247,   233,   173,   173,
     246,    92,   366,   311,   273,   336,    65,   269,   281,   284,
     286,   283,    64,     0,     0,   285,    49,     0,     0,   157,
       0,     0,     0,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   124,
     158,   159,   160,   161,     0,   162,   163,   164,   165,   166,
     167,    21,    22,   168,    94,    50,    51,    52,    53,    54,
      55,    56,     0,     0,    95,    96,     0,     0,     0,    57,
       0,    65,     0,     0,     0,     0,     0,    64,   169,    51,
      52,    53,    54,    55,    56,     0,   170,    87,   171,     0,
       0,     0,    97,     0,     0,     0,    98,    28,     0,     0,
       0,    99,     0,     0,   100,   101,   157,     0,   102,   103,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   124,   158,   159,   160,
     161,     0,   162,   163,   164,   165,   166,   167,    21,    22,
     168,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,     0,     0,   258,    51,    52,    53,    54,
      55,    56,     0,   170,    87,   268,   224,     0,     0,    97,
       0,     0,     0,    98,    28,     0,     0,     0,    99,     0,
       0,   100,   101,   157,     0,   102,   103,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   124,   158,   159,   160,   161,     0,   162,
     163,   164,   165,   166,   167,    21,    22,   168,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   258,    51,    52,    53,    54,    55,    56,     0,
     170,    87,   171,     0,     0,     0,    97,     0,     0,     0,
      98,    28,     0,     0,     0,    99,    93,     0,   100,   101,
       0,     0,   102,   103,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   124,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
      55,    56,     0,     0,    25,     0,     0,   157,     0,    97,
       0,     0,     0,    98,    28,     0,     0,     0,    99,     0,
       0,   100,   101,     0,     0,   102,   103,    49,   158,   159,
     160,   161,     0,   162,   163,   164,   165,   166,   167,     0,
       0,   168,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   258,    51,    52,    53,
      54,    55,    56,     0,   170,   259,   270,     0,   157,     0,
      97,     0,     0,     0,    98,     0,     0,     0,     0,    99,
       0,     0,   100,   101,     0,     0,   102,   103,    49,   158,
     159,   160,   161,     0,   162,   163,   164,   165,   166,   167,
       0,     0,   168,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   258,    51,    52,
      53,    54,    55,    56,     0,   170,   259,   329,     0,   157,
       0,    97,     0,     0,     0,    98,     0,     0,     0,     0,
      99,     0,     0,   100,   101,     0,     0,   102,   103,    49,
     158,   159,   160,   161,     0,   162,   163,   164,   165,   166,
     167,     0,     0,   168,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,    96,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   258,    51,
      52,    53,    54,    55,    56,     0,   170,   259,    49,     0,
       0,     0,    97,     0,     0,     0,    98,     0,     0,     0,
       0,    99,    93,    94,   100,   101,     0,     0,   102,   103,
       0,     0,     0,    95,    96,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,    56,     0,   -58,   248,    94,   -58,     0,
       0,    97,     0,     0,     0,    98,     0,    95,    96,     0,
      99,     0,     0,   100,   101,     0,     0,   102,   103,     0,
      93,    50,    51,    52,    53,    54,    55,    56,     0,     0,
     248,   368,     0,     0,     0,    97,     0,     0,     0,    98,
      49,     0,     0,     0,    99,     0,     0,   100,   101,     0,
       0,   102,   103,    93,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,    96,     0,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,    50,
      51,    52,    53,    54,    55,    56,     0,    93,    94,     0,
       0,     0,     0,    97,     0,     0,   132,    98,    95,    96,
       0,     0,    99,     0,     0,   100,   101,    49,     0,   102,
     103,     0,    50,    51,    52,    53,    54,    55,    56,     0,
     265,    93,    94,     0,     0,     0,    97,     0,     0,     0,
      98,     0,    95,    96,     0,    99,     0,     0,   100,   101,
       0,    49,   102,   103,     0,     0,    50,    51,    52,    53,
      54,    55,    56,     0,     0,    93,    94,     0,     0,     0,
      97,   302,     0,     0,    98,     0,    95,    96,     0,    99,
       0,     0,   100,   101,     0,    49,   102,   103,     0,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    93,   248,
      94,     0,     0,     0,    97,     0,     0,     0,    98,     0,
      95,    96,     0,    99,     0,     0,   100,   101,    49,     0,
     102,   103,     0,     0,    50,    51,    52,    53,    54,    55,
      56,     0,   322,    94,     0,     0,     0,     0,    97,     0,
       0,     0,    98,    95,    96,     0,    93,    99,     0,     0,
     100,   101,     0,     0,   102,   103,     0,    50,    51,    52,
      53,    54,    55,    56,     0,     0,    49,     0,     0,     0,
       0,    97,     0,     0,   334,    98,     0,     0,     0,    93,
      99,    94,     0,   100,   101,     0,     0,   102,   103,     0,
       0,    95,    96,     0,     0,     0,     0,     0,     0,    49,
       0,     0,     0,     0,     0,    50,    51,    52,    53,    54,
      55,    56,     0,   351,    94,     0,     0,     0,     0,    97,
       0,     0,     0,    98,    95,    96,     0,    93,    99,     0,
       0,   100,   101,     0,     0,   102,   103,     0,    50,    51,
      52,    53,    54,    55,    56,     0,     0,    49,     0,     0,
       0,     0,    97,     0,     0,   361,    98,     0,     0,     0,
      93,    99,    94,     0,   100,   101,     0,     0,   102,   103,
       0,     0,    95,    96,     0,     0,     0,     0,     0,     0,
      49,     0,     0,     0,     0,     0,    50,    51,    52,    53,
      54,    55,    56,     0,    93,    94,     0,     0,     0,     0,
      97,   372,     0,     0,    98,    95,    96,     0,     0,    99,
       0,     0,   100,   101,    49,     0,   102,   103,     0,    50,
      51,    52,    53,    54,    55,    56,     0,   375,    93,    94,
       0,     0,     0,    97,     0,     0,     0,    98,     0,    95,
      96,     0,    99,     0,     0,   100,   101,     0,    49,   102,
     103,     0,     0,    50,    51,    52,    53,    54,    55,    56,
       0,    93,     0,    94,     0,     0,     0,    97,   387,     0,
       0,    98,     0,    95,    96,     0,    99,     0,     0,   100,
     101,    49,     0,   102,   103,     0,     0,    50,    51,    52,
      53,    54,    55,    56,     0,    93,    94,     0,     0,     0,
       0,    97,   389,     0,     0,    98,    95,    96,     0,     0,
      99,     0,     0,   100,   101,    49,     0,   102,   103,     0,
      50,    51,    52,    53,    54,    55,    56,     0,    93,     0,
      94,     0,     0,     0,    97,   399,     0,     0,    98,     0,
      95,    96,     0,    99,     0,     0,   100,   101,    49,     0,
     102,   103,     0,     0,    50,    51,    52,    53,    54,    55,
      56,     0,    93,    94,     0,     0,     0,     0,    97,     0,
       0,     0,    98,    95,    96,     0,     0,    99,     0,     0,
     100,   101,    49,     0,   102,   103,     0,    50,    51,    52,
      53,    54,    55,    56,     0,     0,     0,    94,     0,     0,
       0,   187,     0,     0,     0,    98,     0,    95,    96,     0,
      99,     0,     0,   100,   101,     0,     0,   102,   103,     0,
       0,    50,    51,    52,    53,    54,    55,    56,     0,     0,
       0,     0,     0,     0,     0,    57,     0,     0,     0,    98,
       0,     0,     0,     0,    99,     0,     0,   100,   101,    -4,
      46,   102,   103,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    -5,
      46,     0,    21,    22,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,    21,    22,     0,     0,     0,     0,    25,     0,
       0,     0,     0,    26,     0,     0,     0,    27,    28,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,     0,    26,     0,     0,     0,    27,    28,     1,
       0,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    23,    24,     0,
       0,    21,    22,     0,     0,     0,     0,    25,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   124,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,     0,     0,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   124,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      21,    22,    25,     0,     0,     0,     0,    57,   125,     0,
       0,     0,    28,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,    51,    52,
      53,    54,    55,    56,     0,     0,    25,     0,     0,     0,
       0,    57,     0,     0,     0,     0,    28,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    25,     0,     0,     0,     0,   274,   331,   275,     0,
      27,    28,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    87,     0,     0,   153,     0,     0,     0,     0,     0,
       0,    28,    21,    22,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    25,     0,
       0,     0,   -61,     0,     0,     0,     0,     0,    28,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    25,     0,
       0,     0,   -63,     0,     0,     0,     0,     0,    28,    21,
      22,     0,     0,     0,     0,   310,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    21,    22,     0,     0,
       0,     0,     0,     0,     0,    28,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,    21,    22,     0,     0,   359,     0,
       0,     0,    28,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    21,    22,     0,     0,     0,     0,     0,     0,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    63,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    21,    22,     0,     0,     0,     0,     0,     0,     0,
      28,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,    25,   139,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,   317,    21,    22,     0,     0,     0,     0,  -221,  -221,
      28,  -221,  -221,  -221,  -221,  -221,  -221,     0,     0,     0,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       0,     0,  -221,  -221,     0,     0,     0,     0,    28,     0,
       0,  -221,  -221,  -221,     0,  -221,  -221,     0,     0,  -221,
    -221
};

static const yytype_int16 yycheck[] =
{
       3,    57,    62,    27,    66,   248,    36,    37,    38,    26,
      19,    20,    42,    62,    42,    42,   163,   235,    35,   274,
      31,   119,    37,    60,    68,    60,     1,    71,    42,    42,
      43,    61,   179,    78,   153,    71,    47,    74,     2,    75,
       0,    97,    71,    88,    89,    94,    95,    96,    77,    71,
      74,    68,    82,    75,    82,    82,   274,    87,    61,    89,
      87,    89,    89,    64,    65,    80,    30,    69,    82,    78,
     119,    84,    85,    90,   193,    68,   136,    68,    71,   136,
      71,   141,   337,    60,   141,    60,    74,   136,    76,   344,
      78,    71,   141,    68,    58,    75,    97,    68,   158,    74,
      71,   158,   126,    78,   347,    60,   225,   254,    75,   158,
       1,   230,   168,   211,   212,   213,    70,    71,     1,    74,
     267,    76,   269,    78,   154,    72,   154,   154,    71,   248,
      71,   187,    75,    71,    75,   152,    68,    75,    68,    71,
     196,    71,   172,   173,   174,   172,   195,    69,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,    68,    71,   191,    71,    60,
      75,   318,   173,   174,    71,   231,    71,    60,    75,    81,
      75,   279,    73,    74,    38,   245,   187,    78,   245,    71,
     252,    74,    82,    75,    71,    78,   245,    83,    75,   255,
     256,   257,   349,   350,    60,   261,    71,   237,   355,    68,
      75,   235,    71,    75,    25,   275,    27,    74,   275,    76,
      25,    74,   341,    76,    71,   372,   275,   244,   347,   259,
     279,    74,   259,    76,    71,   238,    73,   384,    78,   386,
     387,    74,   389,    76,   274,    70,    71,    72,    73,   396,
     274,   398,   399,    64,    65,    66,    40,    41,   405,    64,
      65,    66,    77,    74,    44,    45,   322,     1,    86,    87,
      73,    46,    47,    48,    70,    71,    87,    74,   338,    73,
     340,   338,    87,    70,    71,   345,    97,    21,   345,   338,
      60,   340,    97,   201,   202,   351,   345,   353,   354,    74,
      74,    76,    36,   203,   204,   205,   206,   337,   207,   208,
      74,    74,    46,    47,   344,   209,   210,    92,   374,   375,
      68,    68,    72,    75,    60,    60,    60,    61,    62,    63,
      64,    65,    66,    73,    73,   391,    70,    71,    29,    68,
      74,   344,    75,    74,    78,   156,    26,    75,    75,    83,
      75,   156,    86,    87,    77,    77,    90,    91,    75,    77,
      68,     1,   173,   174,   156,   244,   152,   123,   173,   174,
     146,    44,   344,   237,   187,   276,   187,   172,   195,   198,
     200,   197,   187,    -1,    -1,   199,    21,    -1,    -1,     1,
      -1,    -1,    -1,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    46,    47,    -1,    -1,    -1,    74,
      -1,   252,    -1,    -1,    -1,    -1,    -1,   252,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    70,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    83,    -1,    -1,    86,    87,     1,    -1,    90,    91,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    72,    -1,    -1,    74,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,     1,    -1,    90,    91,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,    69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    79,    -1,    -1,    -1,    83,     1,    -1,    86,    87,
      -1,    -1,    90,    91,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    -1,    69,    -1,    -1,     1,    -1,    74,
      -1,    -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    21,    22,    23,
      24,    25,    -1,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    69,    70,    -1,     1,    -1,
      74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    70,    -1,     1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    21,
      22,    23,    24,    25,    -1,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,    68,    69,    21,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    83,     1,    36,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    69,    36,    71,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    46,    47,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
       1,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      21,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,     1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,     1,    36,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    78,    46,    47,
      -1,    -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,
      91,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
      68,     1,    36,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    46,    47,    -1,    83,    -1,    -1,    86,    87,
      -1,    21,    90,    91,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    -1,     1,    36,    -1,    -1,    -1,
      74,    75,    -1,    -1,    78,    -1,    46,    47,    -1,    83,
      -1,    -1,    86,    87,    -1,    21,    90,    91,    -1,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,     1,    69,
      36,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,
      46,    47,    -1,    83,    -1,    -1,    86,    87,    21,    -1,
      90,    91,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    36,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    46,    47,    -1,     1,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    91,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,     1,
      83,    36,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    36,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    78,    46,    47,    -1,     1,    83,    -1,
      -1,    86,    87,    -1,    -1,    90,    91,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,    -1,    21,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    77,    78,    -1,    -1,    -1,
       1,    83,    36,    -1,    86,    87,    -1,    -1,    90,    91,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,     1,    36,    -1,    -1,    -1,    -1,
      74,    75,    -1,    -1,    78,    46,    47,    -1,    -1,    83,
      -1,    -1,    86,    87,    21,    -1,    90,    91,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    68,     1,    36,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    46,
      47,    -1,    83,    -1,    -1,    86,    87,    -1,    21,    90,
      91,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,     1,    -1,    36,    -1,    -1,    -1,    74,    75,    -1,
      -1,    78,    -1,    46,    47,    -1,    83,    -1,    -1,    86,
      87,    21,    -1,    90,    91,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,     1,    36,    -1,    -1,    -1,
      -1,    74,    75,    -1,    -1,    78,    46,    47,    -1,    -1,
      83,    -1,    -1,    86,    87,    21,    -1,    90,    91,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,     1,    -1,
      36,    -1,    -1,    -1,    74,    75,    -1,    -1,    78,    -1,
      46,    47,    -1,    83,    -1,    -1,    86,    87,    21,    -1,
      90,    91,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,     1,    36,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    46,    47,    -1,    -1,    83,    -1,    -1,
      86,    87,    21,    -1,    90,    91,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    -1,    46,    47,    -1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,     0,
       1,    90,    91,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     0,
       1,    -1,    33,    34,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,     1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,    33,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    33,    34,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    74,    -1,    -1,    -1,    78,    79,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      33,    34,    69,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    -1,    69,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    -1,    79,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    74,    75,    76,    -1,
      78,    79,    -1,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    33,    34,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    69,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    79,    33,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    33,    34,    -1,    -1,    75,    -1,
      -1,    -1,    79,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    69,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    33,    34,    -1,    -1,    -1,    -1,    37,    38,
      79,    40,    41,    42,    43,    44,    45,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    -1,    71,    72,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    80,    81,    82,    -1,    84,    85,    -1,    -1,    88,
      89
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    60,    69,    74,    78,    79,    94,
      95,    96,    97,    98,    99,   101,   102,   103,   104,   105,
     106,   114,   117,   118,   119,   131,     1,    96,    94,    21,
      60,    61,    62,    63,    64,    65,    66,    74,   159,   161,
      60,    74,    76,    60,   103,   104,   107,   110,   111,   115,
     116,   117,   104,   119,   120,     0,    94,    97,     1,    68,
     108,   109,   117,   101,   101,   101,    60,    69,    99,   100,
     101,   135,   118,     1,    36,    46,    47,    74,    78,    83,
      86,    87,    90,    91,   140,   141,   143,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,    94,    69,    21,    75,   101,   121,   122,   123,
     125,   159,    77,   143,   144,   156,    72,   111,   111,    70,
     110,    73,   112,   113,   117,    70,    71,    75,   104,   119,
      68,    68,    71,    72,   100,   135,    69,     1,    22,    23,
      24,    25,    27,    28,    29,    30,    31,    32,    35,    60,
      68,    70,   100,   103,   104,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    99,   135,   117,    74,   156,   156,
     156,   111,   128,    71,    75,    37,    80,    38,    81,    82,
      83,    40,    41,    42,    43,    84,    85,    44,    45,    86,
      87,    78,    88,    89,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    72,   142,   155,    46,    47,    48,
      74,    76,    92,   115,   119,   124,    75,    71,    71,    75,
      77,   144,   144,    68,    71,    73,   116,   109,    69,   126,
     141,   135,   107,   144,    73,    74,    74,    74,    60,    69,
     132,    74,    60,    68,    68,    68,   140,    73,    70,   136,
      70,   132,    68,   128,    74,    76,   119,   129,   130,    75,
     141,   146,   140,   147,   148,   149,   150,   151,   151,   152,
     152,   152,   152,   153,   153,   154,   154,   155,   155,   155,
     141,    60,    75,   141,   160,   140,    60,    70,    60,   129,
      39,   123,   159,   113,   144,   126,   127,    70,    73,   132,
     140,   140,    68,   140,    29,   140,    68,    68,   132,    70,
      75,    75,   121,   129,    77,   144,   130,    74,    76,   155,
      73,    71,    75,    77,    74,    76,    70,    71,   132,    75,
      75,    68,   140,    68,    74,    75,    75,    75,    77,    75,
     121,    77,   144,   143,   141,   121,   125,   144,    70,   126,
     132,   132,    75,   140,    68,    68,   140,   140,   132,    75,
      77,    75,    75,    77,    26,   132,    75,    75,   140,    75,
     140,    68,    75,   132,   132,   132,    75,   132,    75,    75,
     140,    68,   132,   132,   132,    75,   132
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    94,    94,    94,    94,    95,    96,    96,
      97,    97,    98,    98,    98,    98,    99,    99,    99,   100,
     100,   101,   101,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   104,   104,   105,   105,   105,   106,
     106,   107,   107,   108,   108,   108,   109,   109,   109,   110,
     111,   111,   111,   111,   112,   112,   113,   113,   113,   114,
     114,   114,   115,   115,   116,   116,   116,   117,   117,   117,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     119,   119,   119,   119,   120,   120,   121,   121,   122,   122,
     123,   123,   123,   123,   123,   123,   124,   124,   125,   125,
     126,   126,   126,   127,   127,   128,   128,   129,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     132,   132,   132,   132,   132,   132,   132,   133,   133,   133,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   139,   139,   139,   140,   140,   141,
     141,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   150,   150,   151,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   154,
     154,   154,   154,   155,   155,   156,   156,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   159,   159,   159,
     159,   160,   160,   161,   161,   161,   161,   161,   161
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     2,     1,     1,     2,
       1,     1,     4,     3,     3,     2,     3,     3,     2,     1,
       2,     2,     1,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     2,     3,     1,
       1,     1,     2,     1,     3,     1,     1,     3,     2,     3,
       2,     1,     2,     1,     1,     3,     1,     3,     2,     5,
       3,     2,     1,     3,     1,     3,     2,     2,     1,     1,
       1,     3,     4,     3,     4,     4,     3,     3,     3,     2,
       2,     1,     3,     2,     1,     2,     1,     3,     1,     3,
       3,     6,     6,     6,     3,     2,     1,     0,     1,     3,
       1,     3,     4,     1,     3,     2,     1,     1,     2,     1,
       3,     4,     2,     3,     3,     4,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     1,     4,     2,     3,     3,     1,     2,     5,     7,
       5,     5,     7,     9,     8,     8,     7,     8,     7,     7,
       6,     3,     2,     2,     3,     2,     2,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     4,     1,     2,     2,     2,     2,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     3,     3,     3,     2,     2,     1,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1
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
#line 2120 "bison.tab.c"
    break;

  case 7:
#line 104 "bison.y"
        {
            char* errorMsg = (char*)calloc(sizeof(char), 120);
            sprintf(errorMsg, "[ERROR-Léxico] Línea %d: Cadena %s no reconocida\n", yylineno, (yyvsp[0].cval));
            agregarError(listaErrores, errorMsg);
        }
#line 2130 "bison.tab.c"
    break;

  case 10:
#line 114 "bison.y"
                                                                                                            {definirFuncion(lista_funciones, (yyvsp[0].cval));}
#line 2136 "bison.tab.c"
    break;

  case 11:
#line 115 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[0].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2142 "bison.tab.c"
    break;

  case 12:
#line 119 "bison.y"
                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2148 "bison.tab.c"
    break;

  case 13:
#line 120 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2154 "bison.tab.c"
    break;

  case 14:
#line 121 "bison.y"
                                                                                                                                    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2160 "bison.tab.c"
    break;

  case 15:
#line 122 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2166 "bison.tab.c"
    break;

  case 32:
#line 158 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2172 "bison.tab.c"
    break;

  case 33:
#line 159 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2178 "bison.tab.c"
    break;

  case 34:
#line 160 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2184 "bison.tab.c"
    break;

  case 35:
#line 161 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2190 "bison.tab.c"
    break;

  case 36:
#line 162 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2196 "bison.tab.c"
    break;

  case 37:
#line 163 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2202 "bison.tab.c"
    break;

  case 38:
#line 164 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2208 "bison.tab.c"
    break;

  case 39:
#line 165 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2214 "bison.tab.c"
    break;

  case 40:
#line 166 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2220 "bison.tab.c"
    break;

  case 58:
#line 198 "bison.y"
                                                       {
                                                        printf("[ERROR-Sintáctico] Línea %d: Falta inicializador\n", yylineno);yyerrok;
                                                        }
#line 2228 "bison.tab.c"
    break;

  case 76:
#line 240 "bison.y"
                                                           {yyerrok;printf("[ERROR-Sintáctico] Línea %d: Falta expresion constante\n", yylineno);}
#line 2234 "bison.tab.c"
    break;

  case 80:
#line 248 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2240 "bison.tab.c"
    break;

  case 82:
#line 250 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2246 "bison.tab.c"
    break;

  case 83:
#line 251 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2252 "bison.tab.c"
    break;

  case 84:
#line 252 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2258 "bison.tab.c"
    break;

  case 85:
#line 253 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2264 "bison.tab.c"
    break;

  case 86:
#line 254 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2270 "bison.tab.c"
    break;

  case 87:
#line 255 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(listaErrores, errorMsg);}
#line 2276 "bison.tab.c"
    break;

  case 88:
#line 256 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(listaErrores, errorMsg);}
#line 2282 "bison.tab.c"
    break;

  case 89:
#line 257 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(listaErrores, errorMsg);}
#line 2288 "bison.tab.c"
    break;

  case 98:
#line 278 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2294 "bison.tab.c"
    break;

  case 99:
#line 279 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval));agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2300 "bison.tab.c"
    break;

  case 100:
#line 283 "bison.y"
                                                                                     {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2306 "bison.tab.c"
    break;

  case 101:
#line 284 "bison.y"
                                                                                                                 {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2312 "bison.tab.c"
    break;

  case 102:
#line 285 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2318 "bison.tab.c"
    break;

  case 103:
#line 286 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2324 "bison.tab.c"
    break;

  case 108:
#line 296 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2330 "bison.tab.c"
    break;

  case 130:
#line 340 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2336 "bison.tab.c"
    break;

  case 131:
#line 341 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2342 "bison.tab.c"
    break;

  case 132:
#line 342 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2348 "bison.tab.c"
    break;

  case 133:
#line 343 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2354 "bison.tab.c"
    break;

  case 134:
#line 344 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2360 "bison.tab.c"
    break;

  case 135:
#line 345 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2366 "bison.tab.c"
    break;

  case 165:
#line 393 "bison.y"
                                                     {printf("[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);yyerrok;yyclearin;}
#line 2372 "bison.tab.c"
    break;

  case 207:
#line 471 "bison.y"
                                                                                        {if(!chequearSuma(sacar_ultimo_caracter((yyvsp[-2].cval)), ultimas_constantes)) {char* errorMsg = (char*)calloc(sizeof(char), 50);sprintf(errorMsg,"[ERROR] Línea %d: Suma inválida\n", yylineno);agregarError(listaErrores, errorMsg);}}
#line 2378 "bison.tab.c"
    break;

  case 211:
#line 477 "bison.y"
                                                                                            {verificarDivisor((yyvsp[0].cval));}
#line 2384 "bison.tab.c"
    break;

  case 230:
#line 506 "bison.y"
                                                                                    { comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval)); }
#line 2390 "bison.tab.c"
    break;

  case 231:
#line 507 "bison.y"
                                                                                 { comprobar_tipos_funcion(lista_funciones, (yyvsp[-2].cval)); yyerrok;}
#line 2396 "bison.tab.c"
    break;

  case 237:
#line 517 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "identificador"); /*printf("Identificador: %s\n", $<cval>1);*/ validarIdentificador((yyvsp[0].cval));}
#line 2402 "bison.tab.c"
    break;

  case 239:
#line 519 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "char*");}
#line 2408 "bison.tab.c"
    break;

  case 243:
#line 529 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2414 "bison.tab.c"
    break;

  case 244:
#line 530 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2420 "bison.tab.c"
    break;

  case 245:
#line 531 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2426 "bison.tab.c"
    break;

  case 246:
#line 532 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "char");}
#line 2432 "bison.tab.c"
    break;

  case 247:
#line 533 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "float");}
#line 2438 "bison.tab.c"
    break;


#line 2442 "bison.tab.c"

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
#line 537 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        yydebug = 0;
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
