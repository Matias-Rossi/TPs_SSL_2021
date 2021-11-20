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
#define YYFINAL  74
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2358

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  248
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  406

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
     228,   229,   233,   234,   238,   239,   240,   243,   244,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   260,
     261,   262,   263,   267,   268,   272,   273,   277,   278,   282,
     283,   284,   285,   286,   287,   290,   291,   295,   296,   302,
     303,   304,   308,   309,   313,   314,   318,   319,   320,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   334,   338,
     339,   340,   341,   342,   343,   344,   348,   349,   350,   354,
     356,   360,   361,   362,   363,   366,   367,   370,   371,   372,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     387,   388,   389,   390,   391,   392,   393,   396,   397,   401,
     402,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   419,   420,   423,   428,   429,   433,   434,   437,
     438,   441,   442,   445,   446,   449,   450,   451,   455,   456,
     457,   458,   459,   463,   464,   465,   469,   470,   471,   474,
     475,   476,   477,   481,   482,   486,   487,   488,   489,   490,
     491,   492,   495,   496,   497,   498,   499,   500,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   516,   517,   518,
     519,   523,   524,   528,   529,   530,   531,   532,   533
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

#define YYPACT_NINF (-250)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-222)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1674,  1860,  1674,   210,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
     -47,  -250,  -250,  -250,   -58,  2159,   -15,     2,  -250,    38,
    1674,  1860,  -250,  -250,  -250,   143,  2089,  2089,  2089,  -250,
      -7,  -250,  2126,  -250,   -12,  -250,  1860,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  1516,  1674,  -250,    30,
    1704,  1071,    32,  2267,  2267,  2196,  -250,   113,    92,  -250,
      -9,  -250,  -250,     2,  -250,  -250,  -250,    66,  -250,    22,
    -250,  1890,  -250,  -250,  -250,    44,   337,  -250,  2126,   143,
    -250,  -250,  -250,  1549,  1583,  1583,   594,  -250,  -250,  -250,
    -250,  -250,  -250,   -40,  -250,  -250,     3,   104,   107,   124,
     147,   185,   -14,   168,   194,    13,  -250,   336,  1516,   231,
    -250,  -250,   181,   -47,  -250,   118,   186,   197,  -250,    -6,
    -250,  -250,  -250,   180,  -250,   961,  -250,  -250,  -250,  -250,
    1516,   100,  -250,   209,  -250,   181,  -250,  -250,  -250,  -250,
    -250,   -15,   927,  2126,  -250,  2267,  2269,  1516,   214,   215,
     217,   220,   878,   222,   257,   254,   258,   665,   241,  -250,
    -250,   424,  1937,  1967,  -250,  -250,  -250,  -250,   736,  -250,
    -250,  -250,   126,  -250,  -250,   261,   594,  -250,  -250,  -250,
     159,   226,  1516,  -250,  1516,  1516,  1516,  1516,  1516,  1516,
    1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,  1516,
    1516,  1516,  1516,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  1516,  -250,  -250,  -250,   274,  1119,
    1516,   276,   229,  -250,   232,  -250,  2014,   210,  -250,  -250,
    -250,  -250,  -250,   113,  1516,  -250,  -250,  1152,  -250,  -250,
    -250,  2229,   264,   878,  1516,  1516,  1186,   266,   511,   334,
    1516,   306,  -250,  -250,  -250,   136,   878,  -250,   807,  -250,
    -250,  -250,   300,  1813,  1219,    59,  -250,   178,  1516,  -250,
     104,   191,   107,   124,   147,   185,   -14,   -14,   168,   168,
     168,   168,   194,   194,    13,    13,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,    25,     8,  -250,  -250,   193,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,   233,  -250,   878,  -250,    45,
      50,  1267,   172,   302,    51,  -250,  -250,  -250,  -250,  -250,
    -250,   303,   304,  -250,   305,   178,  2051,  1300,  -250,  1516,
    1516,  -250,  -250,  1779,  1516,  -250,  1019,  -250,   878,   878,
    1348,   177,  1381,  1516,   878,  -250,  -250,  -250,  -250,   320,
    -250,   319,  -250,  -250,   329,    57,   332,  -250,  -250,   351,
    -250,   878,    94,  1415,  1449,   182,    99,  -250,  -250,  -250,
    -250,  -250,  -250,   878,  -250,   878,   878,   105,   878,   108,
    1482,   312,  -250,  -250,  -250,   878,  -250,   878,   878,   167,
    -250,  -250,  -250,  -250,   878,  -250
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    27,    28,    29,    30,    31,    37,
      33,    36,    32,    38,    34,    35,    39,    40,    44,    45,
       0,    49,    50,     7,    79,     0,     0,    90,   128,     0,
       0,     4,     8,    10,    11,     0,    22,    24,    26,    41,
       0,    42,     0,    78,     0,    43,     5,     2,   248,   237,
     239,   243,   244,   245,   247,   246,     0,     0,   238,    71,
      88,     0,    74,    61,    63,     0,    51,     0,     0,    72,
       0,    93,    92,    89,     1,     6,     9,    55,    18,     0,
      53,    56,    21,    23,    25,    47,     0,    19,     0,     0,
      15,    77,   221,     0,     0,     0,     0,   223,   222,   224,
     225,   226,   227,     0,   167,   169,   182,   185,   187,   189,
     191,   193,   195,   198,   203,   206,   209,   213,     0,   215,
     228,     3,     0,   248,    85,   106,    86,    95,    97,    87,
     107,    82,   184,     0,   213,     0,    60,    62,    48,    52,
       0,     0,    64,    66,    70,     0,    80,    94,    91,    17,
      16,     0,     0,     0,    14,     0,   135,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   237,   140,
     142,     0,    24,    26,   145,   129,   130,   131,     0,   133,
     132,   134,     0,    20,    13,    56,     0,   219,   217,   216,
     115,     0,     0,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   172,   173,   174,   175,   177,   176,
     178,   179,   180,   181,     0,   218,   236,   235,     0,     0,
       0,     0,     0,   105,   104,    83,     0,     0,    84,    81,
      75,    68,    59,     0,     0,    73,    54,     0,    57,   109,
      12,     0,     0,     0,     0,     0,     0,   237,     0,     0,
       0,     0,   161,   162,   165,   164,     0,   143,     0,   144,
     146,   139,     0,     0,     0,   116,   114,   118,     0,   168,
     186,     0,   188,   190,   192,   194,   196,   197,   201,   202,
     199,   200,   205,   204,   207,   208,   210,   211,   212,   170,
     234,   232,   241,   231,     0,   233,    69,    99,   103,    96,
      98,   108,    65,    67,   112,     0,    46,     0,   138,     0,
       0,     0,     0,     0,     0,   160,   163,   136,   141,   220,
     125,     0,     0,   121,     0,   117,     0,     0,   214,     0,
       0,   230,   229,     0,     0,   110,     0,   137,     0,     0,
       0,     0,     0,     0,     0,   127,   119,   123,   126,     0,
     122,     0,   183,   242,     0,     0,     0,   111,   113,   147,
     149,     0,     0,     0,     0,     0,     0,   150,   124,   120,
     101,   102,   100,     0,   159,     0,     0,     0,     0,     0,
       0,     0,   148,   158,   157,     0,   155,     0,     0,     0,
     151,   156,   154,   153,     0,   152
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,    31,  -250,   380,   -16,  -250,   -30,   -31,   -34,  -250,
      12,     9,  -250,  -250,   255,  -250,   262,   -59,   155,  -250,
     169,  -250,   292,   272,   -21,   374,   -18,  -250,  -249,  -250,
     183,  -250,    78,  -228,  -250,   236,  -209,   151,  -250,  -139,
    -250,  -250,    36,   279,  -250,  -250,  -250,   -55,  -132,  -250,
     -54,  -108,  -250,   267,   268,   265,   269,   270,   115,   127,
     114,   116,  -101,   -51,  -250,  -250,    -3,  -250,  -250
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    29,    30,    31,    32,    33,    34,   171,    35,    36,
      37,    38,    39,    40,    65,    79,    80,    66,    67,   141,
     142,    41,    68,    69,    42,    43,    44,    73,   126,   127,
     128,   234,   129,   248,   315,   191,   276,   277,    45,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   104,   224,
     105,   133,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   303,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,   103,    82,    83,    84,    70,   139,   132,    89,    72,
     134,    88,    87,    59,    81,    76,    60,   225,    61,   314,
     249,    18,    19,   259,   331,   308,   125,   240,   202,   203,
      76,   192,   241,    47,    64,   193,    71,    63,    74,   270,
     194,   103,   187,   188,   189,    24,   143,    89,    24,   252,
     153,    87,    89,    85,    89,   148,    87,   130,   183,    26,
     279,    75,    26,    27,   332,   237,   146,   134,   185,   238,
     204,   205,    64,    64,    64,    63,    63,    63,    90,   192,
      27,   132,   147,   195,   134,   342,   132,   359,   121,   134,
     150,   210,   299,   151,   364,   173,   340,   302,   172,   122,
     341,   211,   212,   132,   135,    64,   134,   233,    63,   296,
     297,   298,   265,   155,   318,   249,   192,   154,   368,    89,
     348,   192,   192,   183,   184,   349,   354,   327,   237,   270,
     185,   103,   381,   273,   149,   274,   313,    89,    83,    84,
     281,   183,   196,   134,    77,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   144,   145,    64,   192,   334,    63,   242,   385,
     192,   243,   275,    24,   391,   304,   192,   338,   347,   192,
     395,   173,   173,   397,   172,   172,   140,    26,   197,   250,
     132,    27,   139,   134,   271,    64,    27,   192,    63,   319,
     320,   322,   125,    24,   326,   324,   198,   192,   363,   369,
     370,    78,   206,   207,   249,   377,   275,    26,   136,   137,
     132,    27,   143,   134,    89,   200,   201,   134,    87,   361,
     199,    48,   384,   273,   311,   274,   366,    27,   192,   125,
     352,    62,   404,   192,   392,   373,   393,   394,   192,   396,
     390,   190,   336,   192,   337,   275,   401,   239,   402,   403,
      64,   235,   192,    63,   339,   405,   351,   343,   236,   344,
      49,    50,    51,    52,    53,    54,    55,   226,   227,   228,
     208,   209,   244,   132,    56,   362,   134,   253,   134,   254,
     132,   255,   307,   134,   256,   372,   260,   375,   376,   306,
     145,   278,   125,   345,   346,   229,   273,   230,   274,   125,
      27,   -74,   -74,   135,   266,   286,   287,   261,   387,   389,
     292,   293,   262,   231,   294,   295,   263,   136,   137,   288,
     289,   290,   291,   152,   300,   399,   305,   317,   156,   266,
     130,   190,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   123,   157,
     158,   159,   160,   323,   161,   162,   163,   164,   165,   166,
      21,    22,   167,    93,   325,   329,   353,   383,   355,   356,
     400,    46,   357,    94,    95,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   378,   379,   168,    50,    51,
      52,    53,    54,    55,   380,   169,    86,   170,   223,   382,
     251,    96,   312,   246,   232,    97,    28,   245,    91,   310,
      98,   365,   272,    99,   100,   156,   335,   101,   102,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   123,   157,   158,   159,   160,
     268,   161,   162,   163,   164,   165,   166,    21,    22,   167,
      93,   280,   283,     0,   282,     0,     0,   284,     0,   285,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   257,    50,    51,    52,    53,    54,
      55,     0,   169,    86,   267,     0,     0,     0,    96,     0,
       0,     0,    97,    28,     0,     0,     0,    98,     0,     0,
      99,   100,   156,     0,   101,   102,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   123,   157,   158,   159,   160,     0,   161,   162,
     163,   164,   165,   166,    21,    22,   167,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,    95,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   257,    50,    51,    52,    53,    54,    55,     0,   169,
      86,   170,     0,     0,     0,    96,     0,     0,     0,    97,
      28,     0,     0,     0,    98,    92,     0,    99,   100,     0,
       0,   101,   102,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,    95,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,     0,     0,    25,     0,     0,    92,     0,    96,     0,
       0,     0,    97,    28,     0,     0,     0,    98,     0,     0,
      99,   100,     0,     0,   101,   102,    48,  -166,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,     0,     0,
    -166,    93,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,    50,    51,    52,    53,
      54,    55,     0,   264,  -166,  -166,     0,   156,     0,    96,
       0,     0,     0,    97,     0,     0,     0,     0,    98,     0,
       0,    99,   100,     0,     0,   101,   102,    48,   157,   158,
     159,   160,     0,   161,   162,   163,   164,   165,   166,     0,
       0,   167,    93,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,    50,    51,    52,
      53,    54,    55,     0,   169,   258,   269,     0,   156,     0,
      96,     0,     0,     0,    97,     0,     0,     0,     0,    98,
       0,     0,    99,   100,     0,     0,   101,   102,    48,   157,
     158,   159,   160,     0,   161,   162,   163,   164,   165,   166,
       0,     0,   167,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   257,    50,    51,
      52,    53,    54,    55,     0,   169,   258,   328,     0,   156,
       0,    96,     0,     0,     0,    97,     0,     0,     0,     0,
      98,     0,     0,    99,   100,     0,     0,   101,   102,    48,
     157,   158,   159,   160,     0,   161,   162,   163,   164,   165,
     166,     0,     0,   167,    93,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    95,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,    50,
      51,    52,    53,    54,    55,     0,   169,   258,    48,     0,
       0,     0,    96,     0,     0,     0,    97,     0,     0,     0,
       0,    98,    92,    93,    99,   100,     0,     0,   101,   102,
       0,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,     0,   -58,   247,    93,   -58,     0,
       0,    96,     0,     0,     0,    97,     0,    94,    95,     0,
      98,     0,     0,    99,   100,     0,     0,   101,   102,     0,
      92,    49,    50,    51,    52,    53,    54,    55,     0,     0,
       0,   -76,   -76,     0,     0,    96,     0,     0,     0,    97,
      48,     0,     0,     0,    98,     0,     0,    99,   100,     0,
       0,   101,   102,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    94,    95,     0,     0,     0,
       0,     0,    92,     0,     0,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,    55,     0,     0,   247,   367,
       0,     0,    48,    96,     0,     0,     0,    97,     0,     0,
       0,     0,    98,     0,     0,    99,   100,    93,     0,   101,
     102,     0,     0,     0,     0,     0,     0,    94,    95,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,    50,    51,    52,    53,    54,    55,     0,     0,
      48,     0,     0,     0,     0,    96,     0,     0,   131,    97,
       0,     0,     0,    92,    98,    93,     0,    99,   100,     0,
       0,   101,   102,     0,     0,    94,    95,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,    55,     0,    92,    93,     0,
       0,     0,     0,    96,   301,     0,     0,    97,    94,    95,
       0,     0,    98,     0,     0,    99,   100,    48,     0,   101,
     102,     0,    49,    50,    51,    52,    53,    54,    55,     0,
      92,   247,    93,     0,     0,     0,    96,     0,     0,     0,
      97,     0,    94,    95,     0,    98,     0,     0,    99,   100,
      48,     0,   101,   102,     0,     0,    49,    50,    51,    52,
      53,    54,    55,     0,   321,    93,     0,     0,     0,     0,
      96,     0,     0,     0,    97,    94,    95,     0,    92,    98,
       0,     0,    99,   100,     0,     0,   101,   102,     0,    49,
      50,    51,    52,    53,    54,    55,     0,     0,    48,     0,
       0,     0,     0,    96,     0,     0,   333,    97,     0,     0,
       0,    92,    98,    93,     0,    99,   100,     0,     0,   101,
     102,     0,     0,    94,    95,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,     0,     0,    49,    50,    51,
      52,    53,    54,    55,     0,   350,    93,     0,     0,     0,
       0,    96,     0,     0,     0,    97,    94,    95,     0,    92,
      98,     0,     0,    99,   100,     0,     0,   101,   102,     0,
      49,    50,    51,    52,    53,    54,    55,     0,     0,    48,
       0,     0,     0,     0,    96,     0,     0,   360,    97,     0,
       0,     0,    92,    98,    93,     0,    99,   100,     0,     0,
     101,   102,     0,     0,    94,    95,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,     0,     0,    49,    50,
      51,    52,    53,    54,    55,     0,    92,    93,     0,     0,
       0,     0,    96,   371,     0,     0,    97,    94,    95,     0,
       0,    98,     0,     0,    99,   100,    48,     0,   101,   102,
       0,    49,    50,    51,    52,    53,    54,    55,     0,   374,
      92,    93,     0,     0,     0,    96,     0,     0,     0,    97,
       0,    94,    95,     0,    98,     0,     0,    99,   100,     0,
      48,   101,   102,     0,     0,    49,    50,    51,    52,    53,
      54,    55,     0,    92,     0,    93,     0,     0,     0,    96,
     386,     0,     0,    97,     0,    94,    95,     0,    98,     0,
       0,    99,   100,    48,     0,   101,   102,     0,     0,    49,
      50,    51,    52,    53,    54,    55,     0,    92,    93,     0,
       0,     0,     0,    96,   388,     0,     0,    97,    94,    95,
       0,     0,    98,     0,     0,    99,   100,    48,     0,   101,
     102,     0,    49,    50,    51,    52,    53,    54,    55,     0,
      92,     0,    93,     0,     0,     0,    96,   398,     0,     0,
      97,     0,    94,    95,     0,    98,     0,     0,    99,   100,
      48,     0,   101,   102,     0,     0,    49,    50,    51,    52,
      53,    54,    55,     0,    92,    93,     0,     0,     0,     0,
      96,     0,     0,     0,    97,    94,    95,     0,     0,    98,
       0,     0,    99,   100,    48,     0,   101,   102,     0,    49,
      50,    51,    52,    53,    54,    55,     0,     0,     0,    93,
       0,     0,     0,   186,     0,     0,     0,    97,     0,    94,
      95,     0,    98,     0,     0,    99,   100,     0,     0,   101,
     102,     0,     0,    49,    50,    51,    52,    53,    54,    55,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
       0,    97,     0,     0,     0,     0,    98,     0,     0,    99,
     100,     0,     0,   101,   102,     1,     0,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   123,     0,     0,     0,     0,
       0,     0,     0,    23,    24,     0,     0,    21,    22,     0,
       0,     0,     0,    25,     0,     0,     0,     0,    26,     0,
       0,     0,    27,    28,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    54,
      55,     0,     0,    25,     0,     0,     0,     0,    56,   124,
       0,     0,     0,    28,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,    49,
      50,    51,    52,    53,    54,    55,    21,    22,    25,     0,
       0,     0,     0,    56,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    25,     0,     0,     0,     0,   273,   330,   274,
       0,    27,    28,    21,    22,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,     0,     0,
      24,     0,     0,    21,    22,     0,     0,     0,     0,    25,
       0,     0,     0,     0,    26,     0,     0,     0,    27,    28,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    86,
       0,     0,   152,     0,     0,     0,     0,     0,     0,    28,
      21,    22,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,    25,     0,     0,     0,
     -61,     0,     0,     0,     0,     0,    28,     0,     0,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    25,     0,     0,     0,
     -63,     0,     0,     0,     0,     0,    28,    21,    22,     0,
       0,     0,     0,   309,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    21,    22,     0,     0,     0,     0,
       0,     0,     0,    28,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,    21,    22,     0,     0,   358,     0,     0,     0,
      28,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,    62,
       0,     0,     0,     0,     0,     0,     0,     0,    25,    21,
      22,     0,     0,     0,     0,     0,     0,     0,    28,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,     0,    25,   138,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,   316,
      21,    22,     0,     0,     0,     0,  -221,  -221,    28,  -221,
    -221,  -221,  -221,  -221,  -221,     0,     0,     0,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
    -221,  -221,     0,     0,     0,     0,    28,     0,     0,  -221,
    -221,  -221,     0,  -221,  -221,     0,     0,  -221,  -221
};

static const yytype_int16 yycheck[] =
{
       3,    56,    36,    37,    38,    26,    65,    61,    42,    27,
      61,    42,    42,    60,    35,    31,    74,   118,    76,   247,
     152,    19,    20,   162,   273,   234,    60,   135,    42,    43,
      46,    71,   140,     2,    25,    75,    27,    25,     0,   178,
      37,    96,    93,    94,    95,    60,    67,    81,    60,   157,
      81,    81,    86,    60,    88,    73,    86,    60,    88,    74,
     192,    30,    74,    78,   273,    71,    75,   118,    89,    75,
      84,    85,    63,    64,    65,    63,    64,    65,    42,    71,
      78,   135,    73,    80,   135,    77,   140,   336,    57,   140,
      68,    78,   224,    71,   343,    86,    71,   229,    86,    69,
      75,    88,    89,   157,    72,    96,   157,   125,    96,   210,
     211,   212,   167,    69,   253,   247,    71,    81,   346,   153,
      75,    71,    71,   153,    88,    75,    75,   266,    71,   268,
     151,   186,    75,    74,    68,    76,   244,   171,   172,   173,
     195,   171,    38,   194,     1,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,    70,    71,   155,    71,   274,   155,    68,    75,
      71,    71,   190,    60,    75,   230,    71,   278,   317,    71,
      75,   172,   173,    75,   172,   173,    73,    74,    81,   153,
     244,    78,   251,   244,    68,   186,    78,    71,   186,   254,
     255,   256,   236,    60,    68,   260,    82,    71,   340,   348,
     349,    68,    44,    45,   346,   354,   234,    74,    63,    64,
     274,    78,   243,   274,   258,    40,    41,   278,   258,   337,
      83,    21,   371,    74,   237,    76,   344,    78,    71,   273,
      68,    60,    75,    71,   383,    68,   385,   386,    71,   388,
      68,    96,    74,    71,    76,   273,   395,    77,   397,   398,
     251,    75,    71,   251,    73,   404,   321,    74,    71,    76,
      60,    61,    62,    63,    64,    65,    66,    46,    47,    48,
      86,    87,    73,   337,    74,   339,   337,    73,   339,    74,
     344,    74,    60,   344,    74,   350,    74,   352,   353,    70,
      71,    75,   336,    70,    71,    74,    74,    76,    76,   343,
      78,    70,    71,    72,    73,   200,   201,    60,   373,   374,
     206,   207,    68,    92,   208,   209,    68,   172,   173,   202,
     203,   204,   205,    72,    60,   390,    60,    73,     1,    73,
     343,   186,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    29,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    68,    75,    74,    26,    75,    75,
      68,     1,    77,    46,    47,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    75,    77,    60,    61,    62,
      63,    64,    65,    66,    75,    68,    69,    70,    72,    77,
     155,    74,   243,   151,   122,    78,    79,   145,    44,   236,
      83,   343,   186,    86,    87,     1,   275,    90,    91,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     171,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   194,   197,    -1,   196,    -1,    -1,   198,    -1,   199,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,    68,    69,    70,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,     1,    -1,    90,    91,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
      69,    70,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    83,     1,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,     1,    -1,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    83,    -1,    -1,
      86,    87,    -1,    -1,    90,    91,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,    68,    69,    70,    -1,     1,    -1,    74,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    83,    -1,
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
      -1,    70,    71,    -1,    -1,    74,    -1,    -1,    -1,    78,
      21,    -1,    -1,    -1,    83,    -1,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    -1,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    69,    70,
      -1,    -1,    21,    74,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    86,    87,    36,    -1,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    -1,
      21,    -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    78,
      -1,    -1,    -1,     1,    83,    36,    -1,    86,    87,    -1,
      -1,    90,    91,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,     1,    36,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    78,    46,    47,
      -1,    -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,
      91,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
       1,    69,    36,    -1,    -1,    -1,    74,    -1,    -1,    -1,
      78,    -1,    46,    47,    -1,    83,    -1,    -1,    86,    87,
      21,    -1,    90,    91,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,    68,    36,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    46,    47,    -1,     1,    83,
      -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    21,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    77,    78,    -1,    -1,
      -1,     1,    83,    36,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,
      63,    64,    65,    66,    -1,    68,    36,    -1,    -1,    -1,
      -1,    74,    -1,    -1,    -1,    78,    46,    47,    -1,     1,
      83,    -1,    -1,    86,    87,    -1,    -1,    90,    91,    -1,
      60,    61,    62,    63,    64,    65,    66,    -1,    -1,    21,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    77,    78,    -1,
      -1,    -1,     1,    83,    36,    -1,    86,    87,    -1,    -1,
      90,    91,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    -1,    -1,    -1,    -1,    -1,    60,    61,
      62,    63,    64,    65,    66,    -1,     1,    36,    -1,    -1,
      -1,    -1,    74,    75,    -1,    -1,    78,    46,    47,    -1,
      -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,    91,
      -1,    60,    61,    62,    63,    64,    65,    66,    -1,    68,
       1,    36,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,
      -1,    46,    47,    -1,    83,    -1,    -1,    86,    87,    -1,
      21,    90,    91,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    -1,     1,    -1,    36,    -1,    -1,    -1,    74,
      75,    -1,    -1,    78,    -1,    46,    47,    -1,    83,    -1,
      -1,    86,    87,    21,    -1,    90,    91,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,     1,    36,    -1,
      -1,    -1,    -1,    74,    75,    -1,    -1,    78,    46,    47,
      -1,    -1,    83,    -1,    -1,    86,    87,    21,    -1,    90,
      91,    -1,    60,    61,    62,    63,    64,    65,    66,    -1,
       1,    -1,    36,    -1,    -1,    -1,    74,    75,    -1,    -1,
      78,    -1,    46,    47,    -1,    83,    -1,    -1,    86,    87,
      21,    -1,    90,    91,    -1,    -1,    60,    61,    62,    63,
      64,    65,    66,    -1,     1,    36,    -1,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    78,    46,    47,    -1,    -1,    83,
      -1,    -1,    86,    87,    21,    -1,    90,    91,    -1,    60,
      61,    62,    63,    64,    65,    66,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    -1,    46,
      47,    -1,    83,    -1,    -1,    86,    87,    -1,    -1,    90,
      91,    -1,    -1,    60,    61,    62,    63,    64,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    83,    -1,    -1,    86,
      87,    -1,    -1,    90,    91,     1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,    65,
      66,    -1,    -1,    69,    -1,    -1,    -1,    -1,    74,    75,
      -1,    -1,    -1,    79,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    60,
      61,    62,    63,    64,    65,    66,    33,    34,    69,    -1,
      -1,    -1,    -1,    74,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    69,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    78,    79,    33,    34,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      60,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    74,    -1,    -1,    -1,    78,    79,
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
      95,    96,    97,    98,    99,   101,   102,   103,   104,   105,
     106,   114,   117,   118,   119,   131,    96,    94,    21,    60,
      61,    62,    63,    64,    65,    66,    74,   159,   161,    60,
      74,    76,    60,   103,   104,   107,   110,   111,   115,   116,
     117,   104,   119,   120,     0,    94,    97,     1,    68,   108,
     109,   117,   101,   101,   101,    60,    69,    99,   100,   101,
     135,   118,     1,    36,    46,    47,    74,    78,    83,    86,
      87,    90,    91,   140,   141,   143,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,    94,    69,    21,    75,   101,   121,   122,   123,   125,
     159,    77,   143,   144,   156,    72,   111,   111,    70,   110,
      73,   112,   113,   117,    70,    71,    75,   104,   119,    68,
      68,    71,    72,   100,   135,    69,     1,    22,    23,    24,
      25,    27,    28,    29,    30,    31,    32,    35,    60,    68,
      70,   100,   103,   104,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    99,   135,   117,    74,   156,   156,   156,
     111,   128,    71,    75,    37,    80,    38,    81,    82,    83,
      40,    41,    42,    43,    84,    85,    44,    45,    86,    87,
      78,    88,    89,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    72,   142,   155,    46,    47,    48,    74,
      76,    92,   115,   119,   124,    75,    71,    71,    75,    77,
     144,   144,    68,    71,    73,   116,   109,    69,   126,   141,
     135,   107,   144,    73,    74,    74,    74,    60,    69,   132,
      74,    60,    68,    68,    68,   140,    73,    70,   136,    70,
     132,    68,   128,    74,    76,   119,   129,   130,    75,   141,
     146,   140,   147,   148,   149,   150,   151,   151,   152,   152,
     152,   152,   153,   153,   154,   154,   155,   155,   155,   141,
      60,    75,   141,   160,   140,    60,    70,    60,   129,    39,
     123,   159,   113,   144,   126,   127,    70,    73,   132,   140,
     140,    68,   140,    29,   140,    68,    68,   132,    70,    75,
      75,   121,   129,    77,   144,   130,    74,    76,   155,    73,
      71,    75,    77,    74,    76,    70,    71,   132,    75,    75,
      68,   140,    68,    74,    75,    75,    75,    77,    75,   121,
      77,   144,   143,   141,   121,   125,   144,    70,   126,   132,
     132,    75,   140,    68,    68,   140,   140,   132,    75,    77,
      75,    75,    77,    26,   132,    75,    75,   140,    75,   140,
      68,    75,   132,   132,   132,    75,   132,    75,    75,   140,
      68,   132,   132,   132,    75,   132
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
     114,   114,   115,   115,   116,   116,   116,   117,   117,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   119,
     119,   119,   119,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   126,   127,   127,   128,   128,   129,   129,   129,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   132,
     132,   132,   132,   132,   132,   132,   133,   133,   133,   134,
     134,   135,   135,   135,   135,   136,   136,   137,   137,   137,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   141,
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
       3,     4,     3,     4,     4,     3,     3,     3,     2,     2,
       1,     3,     2,     1,     2,     1,     3,     1,     3,     3,
       6,     6,     6,     3,     2,     1,     0,     1,     3,     1,
       3,     4,     1,     3,     2,     1,     1,     2,     1,     3,
       4,     2,     3,     3,     4,     2,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       1,     4,     2,     3,     3,     1,     2,     5,     7,     5,
       5,     7,     9,     8,     8,     7,     8,     7,     7,     6,
       3,     2,     2,     3,     2,     2,     1,     1,     3,     1,
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
#line 2102 "bison.tab.c"
    break;

  case 7:
#line 104 "bison.y"
        {
            char* errorMsg = (char*)calloc(sizeof(char), 120);
            sprintf(errorMsg, "[ERROR-Léxico] Línea %d: Cadena %s no reconocida\n", yylineno, (yyvsp[0].cval));
            agregarError(erroresLexicos, errorMsg);
        }
#line 2112 "bison.tab.c"
    break;

  case 10:
#line 114 "bison.y"
                                                                                                            {definirFuncion(lista_funciones, (yyvsp[0].cval));}
#line 2118 "bison.tab.c"
    break;

  case 11:
#line 115 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[0].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2124 "bison.tab.c"
    break;

  case 12:
#line 119 "bison.y"
                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2130 "bison.tab.c"
    break;

  case 13:
#line 120 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2136 "bison.tab.c"
    break;

  case 14:
#line 121 "bison.y"
                                                                                                                                    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2142 "bison.tab.c"
    break;

  case 15:
#line 122 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2148 "bison.tab.c"
    break;

  case 32:
#line 158 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2154 "bison.tab.c"
    break;

  case 33:
#line 159 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2160 "bison.tab.c"
    break;

  case 34:
#line 160 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2166 "bison.tab.c"
    break;

  case 35:
#line 161 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2172 "bison.tab.c"
    break;

  case 36:
#line 162 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2178 "bison.tab.c"
    break;

  case 37:
#line 163 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2184 "bison.tab.c"
    break;

  case 38:
#line 164 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2190 "bison.tab.c"
    break;

  case 39:
#line 165 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2196 "bison.tab.c"
    break;

  case 40:
#line 166 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2202 "bison.tab.c"
    break;

  case 58:
#line 198 "bison.y"
                                                       { char* errorMsg = (char*)malloc(sizeof(char) * 62);
                                                        sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta inicializador\n", yylineno);yyerrok;
                                                        agregarError(erroresSintacticos, errorMsg);}
#line 2210 "bison.tab.c"
    break;

  case 76:
#line 240 "bison.y"
                                                           {yyerrok;char* errorMsg = (char*)malloc(sizeof(char) * 65);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta expresion constante\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2216 "bison.tab.c"
    break;

  case 79:
#line 247 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2222 "bison.tab.c"
    break;

  case 81:
#line 249 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2228 "bison.tab.c"
    break;

  case 82:
#line 250 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2234 "bison.tab.c"
    break;

  case 83:
#line 251 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2240 "bison.tab.c"
    break;

  case 84:
#line 252 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2246 "bison.tab.c"
    break;

  case 85:
#line 253 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2252 "bison.tab.c"
    break;

  case 86:
#line 254 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2258 "bison.tab.c"
    break;

  case 87:
#line 255 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2264 "bison.tab.c"
    break;

  case 88:
#line 256 "bison.y"
                                                                             { char* errorMsg = (char*)malloc(sizeof(char) * 62);sprintf(errorMsg, "[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);agregarError(erroresSintacticos, errorMsg);}
#line 2270 "bison.tab.c"
    break;

  case 97:
#line 277 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2276 "bison.tab.c"
    break;

  case 98:
#line 278 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval));agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2282 "bison.tab.c"
    break;

  case 99:
#line 282 "bison.y"
                                                                                     {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2288 "bison.tab.c"
    break;

  case 100:
#line 283 "bison.y"
                                                                                                                 {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2294 "bison.tab.c"
    break;

  case 101:
#line 284 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2300 "bison.tab.c"
    break;

  case 102:
#line 285 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2306 "bison.tab.c"
    break;

  case 107:
#line 295 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2312 "bison.tab.c"
    break;

  case 129:
#line 338 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2318 "bison.tab.c"
    break;

  case 130:
#line 339 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2324 "bison.tab.c"
    break;

  case 131:
#line 340 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2330 "bison.tab.c"
    break;

  case 132:
#line 341 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2336 "bison.tab.c"
    break;

  case 133:
#line 342 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2342 "bison.tab.c"
    break;

  case 134:
#line 343 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2348 "bison.tab.c"
    break;

  case 164:
#line 391 "bison.y"
                                                     {printf("[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);yyerrok;}
#line 2354 "bison.tab.c"
    break;

  case 166:
#line 393 "bison.y"
                                                    {printf("[ERROR-Sintáctico] Línea %d: Falta punto y coma\n", yylineno);yyerrok;}
#line 2360 "bison.tab.c"
    break;

  case 207:
#line 470 "bison.y"
                                                                                        {if(!chequearSuma(sacar_ultimo_caracter((yyvsp[-2].cval)), ultimas_constantes)) {char* errorMsg = (char*)calloc(sizeof(char), 50);sprintf(errorMsg,"[ERROR-Semántico] Línea %d: Suma inválida\n", yylineno);agregarError(erroresSemanticos, errorMsg);}}
#line 2366 "bison.tab.c"
    break;

  case 211:
#line 476 "bison.y"
                                                                                            {verificarDivisor((yyvsp[0].cval));}
#line 2372 "bison.tab.c"
    break;

  case 230:
#line 505 "bison.y"
                                                                                    { comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval)); }
#line 2378 "bison.tab.c"
    break;

  case 231:
#line 506 "bison.y"
                                                                                 { comprobar_tipos_funcion(lista_funciones, (yyvsp[-2].cval)); yyerrok;}
#line 2384 "bison.tab.c"
    break;

  case 237:
#line 516 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "identificador"); /*printf("Identificador: %s\n", $<cval>1);*/ validarIdentificador((yyvsp[0].cval));}
#line 2390 "bison.tab.c"
    break;

  case 239:
#line 518 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "-", "char*");}
#line 2396 "bison.tab.c"
    break;

  case 243:
#line 528 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2402 "bison.tab.c"
    break;

  case 244:
#line 529 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2408 "bison.tab.c"
    break;

  case 245:
#line 530 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "int");}
#line 2414 "bison.tab.c"
    break;

  case 246:
#line 531 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "char");}
#line 2420 "bison.tab.c"
    break;

  case 247:
#line 532 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "-", "float");}
#line 2426 "bison.tab.c"
    break;


#line 2430 "bison.tab.c"

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
#line 536 "bison.y"

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
        erroresLexicos             = inicializarListaErrores       (erroresLexicos); 
        erroresSintacticos             = inicializarListaErrores       (erroresSintacticos); 
        erroresSemanticos             = inicializarListaErrores       (erroresSemanticos); 

        printf("\n --- Comenzando anlisis lexico y sintactico ---\n\n");

        yyparse();
        //fclose(yyin);

        if(analisisCorrecto){

            printf("\n\n --- Imprimiendo reporte ---");

            crearListadoIdentificadores(identificadores_variables, "VARIABLES DECLARADAS");
            crearListadoIdentificadores(identificadores_funciones, "FUNCIONES DECLARADAS");
            mostrarListadoFunciones(lista_funciones);
            mostrarErrores();
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
