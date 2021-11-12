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
#define YYFINAL  56
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2125

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  229
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  387

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

#define YYPACT_NINF (-251)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
  case 2:
#line 109 "bison.y"
                                                              {agregar_token_no_reconocido(listaTokensNR, (yyvsp[0].idval) ,yylineno);}
#line 2046 "bison.tab.c"
    break;

  case 26:
#line 155 "bison.y"
                                                   {aux_tIdentificador=1;}
#line 2052 "bison.tab.c"
    break;

  case 27:
#line 156 "bison.y"
                                                               {aux_tIdentificador=2;}
#line 2058 "bison.tab.c"
    break;

  case 28:
#line 157 "bison.y"
                                                               {aux_tIdentificador=3;}
#line 2064 "bison.tab.c"
    break;

  case 29:
#line 158 "bison.y"
                                                               {aux_tIdentificador=4;}
#line 2070 "bison.tab.c"
    break;

  case 30:
#line 159 "bison.y"
                                                       {aux_tIdentificador=5;}
#line 2076 "bison.tab.c"
    break;

  case 31:
#line 160 "bison.y"
                                                               {aux_tIdentificador=6;}
#line 2082 "bison.tab.c"
    break;

  case 32:
#line 161 "bison.y"
                                                               {aux_tIdentificador=7;}
#line 2088 "bison.tab.c"
    break;

  case 33:
#line 162 "bison.y"
                                                               {aux_tIdentificador=8;}
#line 2094 "bison.tab.c"
    break;

  case 34:
#line 163 "bison.y"
                                                                           {aux_tIdentificador=9;}
#line 2100 "bison.tab.c"
    break;

  case 72:
#line 241 "bison.y"
                                                                                       {
                                                                                        variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-3].cval));
                                                                                        var->tipo=aux_tIdentificador;
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));       
                                                                                       }
#line 2111 "bison.tab.c"
    break;

  case 73:
#line 247 "bison.y"
                                                                                       {variable* var = malloc(sizeof(funcion));
                                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-2].cval)); 
                                                                                        var->tipo= aux_tIdentificador; 
                                                                                        agregarElemento(listaVariables, var, sizeof(variable));}
#line 2120 "bison.tab.c"
    break;

  case 74:
#line 251 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-3].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        fun->params = inicializarLista(auxListaParametrosConTipos);
                                                                                       }
#line 2131 "bison.tab.c"
    break;

  case 75:
#line 257 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-3].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       }
#line 2142 "bison.tab.c"
    break;

  case 76:
#line 263 "bison.y"
                                                                                       {
                                                                                        funcion* fun = malloc(sizeof(funcion));
                                                                                        fun->nombre_funcion = (yyvsp[-2].cval);
                                                                                        fun->tipo_salida=aux_tIdentificador;
                                                                                        //parametrosFuncion = $<cval>1;
                                                                                       }
#line 2153 "bison.tab.c"
    break;

  case 83:
#line 283 "bison.y"
                                                                       {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = calloc(strlen((yyvsp[0].cval)), sizeof(char));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[0].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof(variable));  //TODO: Segfault
                                                                        }
#line 2165 "bison.tab.c"
    break;

  case 84:
#line 290 "bison.y"
                                                                       {
                                                                        variable* var = malloc(sizeof(variable));
                                                                        var->nombre_variable = sacar_ultimo_caracter((yyvsp[-2].cval));
                                                                        var->tipo=aux_tIdentificador;
                                                                        agregarElemento(auxListaParametrosConTipos, var, sizeof((yyvsp[-2].cval)));
                                                                        }
#line 2176 "bison.tab.c"
    break;

  case 90:
#line 310 "bison.y"
                                                                                  {
                                                                                    variable* var = malloc(sizeof(variable)); 
                                                                                    var->nombre_variable = calloc(strlen((yyvsp[0].cval)), sizeof(char));
                                                                                    var->nombre_variable = sacar_ultimo_caracter((yyvsp[0].cval)); 
                                                                                    agregarElemento(auxListaParametrosSinTipos , var, sizeof(variable));
                                                                                    }
#line 2187 "bison.tab.c"
    break;

  case 92:
#line 319 "bison.y"
                                                                                  {
                                                                                    variable* var = malloc(sizeof(variable)); 
                                                                                    var->nombre_variable = calloc(strlen((yyvsp[-2].cval)), sizeof(char));
                                                                                    var->nombre_variable = sacar_ultimo_caracter((yyvsp[-2].cval)); 
                                                                                    agregarElemento(auxListaParametrosSinTipos , var, sizeof(variable));
                                                                                   }
#line 2198 "bison.tab.c"
    break;

  case 222:
#line 545 "bison.y"
                                                 {/*agregarIdentificador(listaVariables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2204 "bison.tab.c"
    break;


#line 2208 "bison.tab.c"

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
