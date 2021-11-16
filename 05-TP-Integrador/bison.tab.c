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
# define YYDEBUG 0
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
    IFX = 321
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

#line 212 "bison.tab.c"

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
#define YYFINAL  72
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  404

#define YYUNDEFTOK  2
#define YYMAXUTOK   321


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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    98,    98,    99,   100,   101,   104,   105,   108,   109,
     113,   114,   115,   116,   120,   121,   122,   123,   126,   127,
     130,   131,   132,   133,   134,   135,   139,   140,   141,   142,
     143,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   161,   162,   165,   166,   167,   170,   171,
     174,   175,   179,   180,   184,   185,   189,   193,   194,   195,
     196,   200,   201,   205,   206,   207,   211,   212,   213,   217,
     218,   222,   223,   226,   227,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   243,   244,   245,   246,   250,
     251,   255,   256,   260,   261,   265,   266,   267,   268,   269,
     270,   273,   274,   278,   279,   285,   286,   287,   291,   292,
     296,   297,   301,   302,   303,   306,   307,   308,   309,   310,
     312,   313,   314,   315,   318,   322,   323,   324,   325,   326,
     327,   331,   332,   333,   337,   338,   342,   343,   344,   345,
     348,   349,   352,   353,   354,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   369,   370,   371,   372,   373,
     376,   377,   381,   382,   385,   386,   387,   388,   389,   390,
     391,   392,   393,   394,   395,   399,   400,   403,   408,   409,
     413,   414,   417,   418,   421,   422,   425,   426,   429,   430,
     431,   435,   436,   437,   438,   439,   443,   444,   445,   449,
     450,   451,   454,   455,   456,   457,   461,   462,   466,   467,
     468,   469,   470,   471,   474,   475,   476,   477,   478,   479,
     482,   483,   484,   485,   486,   487,   488,   489,   494,   495,
     496,   497,   501,   502,   506,   507,   508,   509,   510,   511
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
     315,   316,   317,   318,   319,   320,    43,    45,    42,    47,
      40,   321,    59,   123,   125,    44,    61,    58,    41,    91,
      93,   116,    63,   124,    94,    38,    60,    62,    37,   126,
      33,    46
};
# endif

#define YYPACT_NINF (-262)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     711,   898,   711,   244,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
     -40,  -262,  -262,   -52,    37,   -31,  1205,  -262,    23,   898,
    -262,  -262,  -262,   120,  1133,  1133,  1133,  -262,    10,  -262,
    1168,  -262,   -18,  -262,   898,  -262,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,  -262,  1987,   711,  -262,     4,   677,  1546,
    -262,  -262,    37,     3,    13,  1312,  1312,  1240,  -262,   169,
     193,  -262,  -262,  -262,  -262,  -262,    19,  -262,   928,  -262,
    -262,  -262,    22,   338,  -262,  1168,   120,  -262,  -262,  2020,
    2053,  2053,  -262,  -262,  -262,   591,  -262,  -262,  -262,    25,
    -262,  -262,   -22,    78,    47,    18,    35,   280,   -11,   281,
     261,    59,  -262,   337,  1987,   150,  -262,  -262,    67,  -262,
     -40,  -262,   107,     8,    98,  -262,     7,  -262,  -262,  -262,
     101,  -262,  -262,  -262,  -262,  1987,  -262,  -262,  -262,  -262,
    1987,    60,  -262,   116,  -262,    67,  -262,  -262,   -31,  1583,
    1168,  -262,  1312,  1987,   140,   142,   153,   155,  1480,   161,
     176,   173,   175,  1616,    64,  -262,  -262,   424,   977,  1007,
    -262,  -262,  -262,  -262,  1340,  -262,  -262,  -262,   110,  -262,
    -262,   167,   591,  -262,  -262,  -262,    20,   178,  1987,  -262,
    1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,
    1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  1987,  -262,
    -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,  -262,
    1987,  -262,  -262,  -262,   201,  1649,  1987,   203,   255,  -262,
     108,  -262,  -262,  1056,  -262,   244,  -262,  -262,  -262,  -262,
    -262,   169,  1987,  -262,  -262,  1583,  -262,  -262,  -262,  1277,
     208,  1480,  1987,  1987,  1682,   221,   510,   249,  1987,   224,
    -262,  -262,  -262,   127,  1480,  -262,  1410,  -262,  -262,  -262,
     233,   821,  1715,   -37,  -262,    -9,  1987,  -262,    78,   -32,
      47,    18,    35,   280,   -11,   -11,   281,   281,   281,   281,
     261,   261,    59,    59,  -262,  -262,  -262,  -262,  -262,  -262,
    -262,   105,    43,  -262,  -262,    17,  -262,  -262,  -262,  -262,
    -262,  -262,  -262,   258,  -262,  1480,  -262,   144,   179,  1752,
     183,   254,   194,  -262,  -262,  -262,  -262,  -262,  -262,   262,
     286,  -262,   297,    -9,  1091,  1785,  -262,  1987,  1987,  -262,
    -262,   788,  1987,  -262,  1513,  -262,  1480,  1480,  1822,   202,
    1855,  1987,  1480,  -262,  -262,  -262,  -262,   300,  -262,   299,
    -262,  -262,   302,   205,   301,  -262,  -262,   356,  -262,  1480,
     209,  1888,  1921,   217,   219,  -262,  -262,  -262,  -262,  -262,
    -262,  1480,  -262,  1480,  1480,   235,  1480,   237,  1954,   311,
    -262,  -262,  -262,  1480,  -262,  1480,  1480,   241,  -262,  -262,
    -262,  -262,  1480,  -262
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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
       0,    69,     1,     7,    17,    15,     0,    52,    54,    20,
      22,    24,    46,     0,    18,     0,     0,    13,    73,     0,
       0,     0,   216,   217,   215,     0,   214,   218,   219,     0,
     160,   162,   175,   178,   180,   182,   184,   186,   188,   191,
     196,   199,   202,   206,     0,   208,   220,     3,     0,    84,
     239,    81,   102,     0,    91,    93,     0,   103,    78,   177,
       0,   206,    90,    87,    76,     0,    57,    59,    47,    51,
       0,     0,    61,    63,    67,     0,    16,    14,     0,     0,
       0,    12,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   228,   135,   137,     0,    23,    25,
     140,   125,   126,   127,     0,   129,   128,   130,     0,    19,
      11,    54,     0,   212,   210,   209,   111,     0,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   164,
     165,   166,   167,   168,   170,   169,   171,   172,   173,   174,
       0,   211,   227,   226,     0,     0,     0,     0,     0,   101,
     100,    82,    79,     0,    83,     0,    80,    77,    72,    65,
      56,     0,     0,    70,    53,     0,    55,   105,    10,     0,
       0,     0,     0,     0,     0,   228,     0,     0,     0,     0,
     156,   157,   159,     0,     0,   138,     0,   139,   141,   134,
       0,     0,     0,   112,   110,   114,     0,   161,   179,     0,
     181,   183,   185,   187,   189,   190,   194,   195,   192,   193,
     198,   197,   200,   201,   203,   204,   205,   163,   225,   223,
     232,     0,     0,   224,    66,    95,    99,    92,    94,   104,
      62,    64,   108,     0,    45,     0,   133,     0,     0,     0,
       0,     0,     0,   155,   158,   131,   136,   213,   121,     0,
       0,   117,     0,   113,     0,     0,   207,     0,     0,   222,
     221,     0,     0,   106,     0,   132,     0,     0,     0,     0,
       0,     0,     0,   123,   115,   119,   122,     0,   118,     0,
     176,   233,     0,     0,     0,   107,   109,   142,   144,     0,
       0,     0,     0,     0,     0,   145,   120,   116,    97,    98,
      96,     0,   154,     0,     0,     0,     0,     0,     0,     0,
     143,   153,   152,     0,   150,     0,     0,     0,   146,   151,
     149,   148,     0,   147
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -262,    12,   395,    -4,  -262,    34,   -27,     0,  -262,    42,
      39,  -262,  -262,   257,  -262,   259,   -60,   149,  -262,   174,
    -262,   296,   271,    -3,   375,   -12,  -262,  -261,  -262,   185,
    -262,    79,  -229,  -262,   239,  -209,   151,  -262,  -120,  -262,
    -262,   -14,   283,  -262,  -262,  -262,   -49,   -96,  -262,   -56,
    -129,  -262,   232,   234,   268,   231,   267,   139,    52,   135,
     171,   -36,   -42,  -262,  -262,     1,  -262,  -262
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    28,    29,    30,    31,    32,   167,    86,    34,    35,
      36,    37,    38,    67,    76,    77,    68,    69,   141,   142,
      39,    70,    71,    40,    41,    42,    62,   123,   124,   125,
     230,   126,   246,   313,   187,   274,   275,    43,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   100,   220,   101,
     130,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   301,    56
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    33,    33,   129,    55,    99,   238,   139,   234,   231,
     329,   239,    61,    85,    45,   190,   312,   131,    58,    57,
     146,   306,    63,    72,   250,    73,    87,    59,    23,    33,
      78,   198,   199,   271,    79,    80,    81,    24,   257,    25,
      73,    23,   272,   188,    33,   337,    99,   183,   184,   185,
     133,   150,    25,   247,   268,    33,    18,    19,   122,   127,
     191,   334,   330,    60,   151,    66,   143,   117,    65,    82,
     335,   180,   131,   357,    84,   200,   201,   118,   221,   129,
     362,   134,   235,   181,   129,   236,   232,   341,    24,   135,
     271,   147,   277,   131,   148,   152,   342,   129,   131,   272,
     188,   132,   194,   189,    66,    66,    66,    65,    65,    65,
     229,   131,    84,   311,   263,   366,   192,    84,   188,   179,
     195,    74,   169,   340,   297,   168,    64,   206,   207,   300,
     193,   316,   240,    99,    66,   241,   248,    65,   -71,   -71,
     135,   264,   279,   332,   325,   181,   268,   208,   131,   247,
     131,   131,   131,   131,   131,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   131,   131,   305,    80,    81,
     294,   295,   296,   233,   273,    24,    24,   302,   271,    23,
     338,   237,   269,   339,   179,   188,   129,   272,    24,   139,
      25,    66,    75,   242,    65,   345,   222,   223,   224,   324,
     131,   179,   188,   317,   318,   320,   359,   169,   169,   322,
     168,   168,   252,   364,   136,   137,   129,   251,   273,   188,
     225,    66,   346,   253,    65,   254,   367,   368,    23,   226,
     131,   258,   375,   122,   131,   259,   309,    24,   143,    25,
     336,   227,   361,   149,   186,   260,   140,   261,   247,   382,
     286,   287,   288,   289,   188,   350,   276,   347,   188,   273,
     298,   390,   303,   391,   392,    46,   394,   144,   145,   188,
     349,   122,   352,   399,   371,   400,   401,   188,   321,   129,
     235,   360,   403,   379,   188,   315,   129,   383,    66,   388,
      84,    65,   188,   131,   188,   131,   323,   389,   264,   370,
     131,   373,   374,    47,    48,    49,    50,    51,    52,    53,
     188,   327,   188,   393,    54,   395,   188,   136,   137,   402,
     196,   197,   385,   387,   351,   202,   203,   204,   205,   304,
     145,   186,   343,   344,   122,   284,   285,   290,   291,   397,
     353,   122,   127,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   120,
     153,   154,   155,   156,   354,   157,   158,   159,   160,   161,
     162,    21,    22,   163,    89,   292,   293,   355,   376,   377,
     378,   380,   381,   398,    90,    91,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    44,   164,    48,    49,
      50,    51,    52,    53,    92,    93,    94,   244,    95,   249,
     165,    83,   166,   219,   228,   310,   243,    88,   308,    27,
     363,   270,   278,    96,   333,   282,   280,    97,    98,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   120,   153,   154,   155,   156,
     266,   157,   158,   159,   160,   161,   162,    21,    22,   163,
      89,   281,   283,     0,     0,     0,     0,     0,     0,     0,
      90,    91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,    48,    49,    50,    51,    52,    53,
      92,    93,    94,     0,    95,     0,   165,    83,   265,     0,
       0,     0,     0,     0,     0,    27,     0,     0,     0,    96,
       0,     0,     0,    97,    98,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,   120,   153,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,    21,    22,   163,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
      48,    49,    50,    51,    52,    53,    92,    93,    94,     0,
      95,     0,   165,    83,   166,     0,     0,     0,     0,     0,
       0,    27,     0,     0,     0,    96,     0,     0,     0,    97,
      98,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    90,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      47,    48,    49,    50,    51,    52,    53,    92,    93,    94,
       0,    95,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,    96,     0,   119,     0,
      97,    98,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,   120,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     1,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,    47,    48,    49,    50,
      51,    52,    53,     0,    21,    22,     0,    54,     0,     0,
      26,     0,     0,     0,     0,   121,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,    25,     0,     0,    26,     0,     0,     0,     0,     0,
       0,     0,    27,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,    47,    48,    49,
      50,    51,    52,    53,    21,    22,     0,     0,    54,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,   271,     0,     0,    26,     0,     0,     0,     0,   328,
     272,     0,    27,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,    23,     0,     0,
       0,    21,    22,     0,     0,     0,    24,     0,    25,     0,
       0,    26,     0,     0,     0,     0,     0,     0,     0,    27,
       0,     0,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,    83,     0,     0,   149,     0,     0,     0,     0,    27,
      21,    22,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,   -58,     0,     0,     0,    27,     0,
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
      26,     0,     0,     0,   -60,     0,     0,     0,    27,    21,
      22,     0,     0,     0,     0,   307,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,    27,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    21,    22,     0,   356,
       0,     0,    27,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,     0,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,    27,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,    22,
       0,    83,     0,     0,     0,     0,     0,     0,     0,    27,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,    64,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    22,     0,     0,     0,    26,     0,
       0,     0,     0,     0,     0,     0,    27,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    22,     0,    26,   138,     0,     0,     0,     0,     0,
       0,    27,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    21,    22,     0,     0,     0,
      26,   314,     0,     0,     0,     0,     0,     0,    27,     0,
       0,    46,   153,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,     0,     0,   163,    89,     0,     0,     0,
       0,     0,     0,     0,     0,    26,    90,    91,     0,     0,
       0,     0,     0,    27,     0,     0,     0,     0,     0,   255,
      48,    49,    50,    51,    52,    53,    92,    93,    94,     0,
      95,     0,   165,   256,   267,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    97,
      98,    46,   153,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,     0,     0,   163,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   255,
      48,    49,    50,    51,    52,    53,    92,    93,    94,     0,
      95,     0,   165,   256,   326,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    97,
      98,    46,   153,   154,   155,   156,     0,   157,   158,   159,
     160,   161,   162,     0,     0,   163,    89,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,   255,
      48,    49,    50,    51,    52,    53,    92,    93,    94,    89,
      95,     0,   165,   256,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,    96,     0,    46,     0,    97,
      98,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,    89,    95,     0,     0,   245,   365,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,    96,     0,
       0,     0,    97,    98,    46,    47,    48,    49,    50,    51,
      52,    53,    92,    93,    94,     0,    95,     0,     0,    89,
       0,     0,     0,     0,     0,     0,   128,     0,     0,    90,
      91,    96,     0,     0,     0,    97,    98,    46,     0,     0,
       0,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,    89,    95,     0,     0,   245,     0,     0,     0,
       0,     0,    90,    91,     0,     0,     0,     0,    96,     0,
      46,     0,    97,    98,     0,    47,    48,    49,    50,    51,
      52,    53,    92,    93,    94,    89,    95,     0,   262,     0,
       0,     0,     0,     0,     0,    90,    91,     0,     0,     0,
       0,    96,     0,    46,     0,    97,    98,     0,    47,    48,
      49,    50,    51,    52,    53,    92,    93,    94,    89,    95,
       0,     0,     0,     0,     0,     0,     0,   299,    90,    91,
       0,     0,     0,     0,    96,     0,    46,     0,    97,    98,
       0,    47,    48,    49,    50,    51,    52,    53,    92,    93,
      94,    89,    95,     0,   319,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,    96,     0,     0,
       0,    97,    98,    46,    47,    48,    49,    50,    51,    52,
      53,    92,    93,    94,     0,    95,     0,     0,    89,     0,
       0,     0,     0,     0,     0,   331,     0,     0,    90,    91,
      96,     0,     0,     0,    97,    98,    46,     0,     0,     0,
       0,    47,    48,    49,    50,    51,    52,    53,    92,    93,
      94,    89,    95,     0,   348,     0,     0,     0,     0,     0,
       0,    90,    91,     0,     0,     0,     0,    96,     0,     0,
       0,    97,    98,    46,    47,    48,    49,    50,    51,    52,
      53,    92,    93,    94,     0,    95,     0,     0,    89,     0,
       0,     0,     0,     0,     0,   358,     0,     0,    90,    91,
      96,     0,     0,     0,    97,    98,    46,     0,     0,     0,
       0,    47,    48,    49,    50,    51,    52,    53,    92,    93,
      94,    89,    95,     0,     0,     0,     0,     0,     0,     0,
     369,    90,    91,     0,     0,     0,     0,    96,     0,    46,
       0,    97,    98,     0,    47,    48,    49,    50,    51,    52,
      53,    92,    93,    94,    89,    95,     0,   372,     0,     0,
       0,     0,     0,     0,    90,    91,     0,     0,     0,     0,
      96,     0,    46,     0,    97,    98,     0,    47,    48,    49,
      50,    51,    52,    53,    92,    93,    94,    89,    95,     0,
       0,     0,     0,     0,     0,     0,   384,    90,    91,     0,
       0,     0,     0,    96,     0,    46,     0,    97,    98,     0,
      47,    48,    49,    50,    51,    52,    53,    92,    93,    94,
      89,    95,     0,     0,     0,     0,     0,     0,     0,   386,
      90,    91,     0,     0,     0,     0,    96,     0,    46,     0,
      97,    98,     0,    47,    48,    49,    50,    51,    52,    53,
      92,    93,    94,    89,    95,     0,     0,     0,     0,     0,
       0,     0,   396,    90,    91,     0,     0,     0,     0,    96,
       0,    46,     0,    97,    98,     0,    47,    48,    49,    50,
      51,    52,    53,    92,    93,    94,    89,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    90,    91,     0,     0,
       0,     0,    96,     0,    46,     0,    97,    98,     0,    47,
      48,    49,    50,    51,    52,    53,    92,    93,    94,    89,
     182,     0,     0,     0,     0,     0,     0,     0,     0,    90,
      91,     0,     0,     0,     0,    96,     0,     0,     0,    97,
      98,     0,    47,    48,    49,    50,    51,    52,    53,    92,
      93,    94,     0,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,    97,    98
};

static const yytype_int16 yycheck[] =
{
       0,     1,     2,    59,     3,    54,   135,    67,     1,     1,
     271,   140,    24,    40,     2,    37,   245,    59,    70,    59,
       1,   230,    25,     0,   153,    29,    40,    79,    59,    29,
      33,    42,    43,    70,    34,    35,    36,    68,   158,    70,
      44,    59,    79,    75,    44,    77,    95,    89,    90,    91,
      62,    78,    70,   149,   174,    55,    19,    20,    58,    58,
      82,    70,   271,    24,    78,    26,    69,    55,    26,    59,
      79,    85,   114,   334,    40,    86,    87,    73,   114,   135,
     341,    78,    75,    86,   140,    78,    78,    70,    68,    76,
      70,    72,   188,   135,    75,    73,    79,   153,   140,    79,
      75,    62,    84,    78,    65,    66,    67,    65,    66,    67,
     122,   153,    78,   242,   163,   344,    38,    83,    75,    85,
      85,     1,    83,    80,   220,    83,    59,    68,    69,   225,
      83,   251,    72,   182,    95,    75,   150,    95,    74,    75,
      76,    77,   191,   272,   264,   148,   266,    88,   190,   245,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,    59,   168,   169,
     206,   207,   208,    75,   186,    68,    68,   226,    70,    59,
      75,    80,    72,    78,   150,    75,   242,    79,    68,   249,
      70,   152,    72,    77,   152,   315,    46,    47,    48,    72,
     242,   167,    75,   252,   253,   254,   335,   168,   169,   258,
     168,   169,    70,   342,    65,    66,   272,    77,   230,    75,
      70,   182,    78,    70,   182,    70,   346,   347,    59,    79,
     272,    70,   352,   233,   276,    59,   235,    68,   241,    70,
     276,    91,   338,    76,    95,    72,    77,    72,   344,   369,
     198,   199,   200,   201,    75,    72,    78,    78,    75,   271,
      59,   381,    59,   383,   384,    21,   386,    74,    75,    75,
     319,   271,    78,   393,    72,   395,   396,    75,    29,   335,
      75,   337,   402,    78,    75,    77,   342,    78,   249,    72,
     256,   249,    75,   335,    75,   337,    72,    78,    77,   348,
     342,   350,   351,    59,    60,    61,    62,    63,    64,    65,
      75,    78,    75,    78,    70,    78,    75,   168,   169,    78,
      40,    41,   371,   372,    70,    44,    45,    66,    67,    74,
      75,   182,    74,    75,   334,   196,   197,   202,   203,   388,
      78,   341,   341,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    78,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,   204,   205,    80,    78,    80,
      78,    80,    26,    72,    46,    47,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,     1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,   148,    70,   152,
      72,    73,    74,    76,   118,   241,   145,    42,   233,    81,
     341,   182,   190,    85,   273,   194,   192,    89,    90,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     167,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,   193,   195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    -1,    70,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    89,    90,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    85,    -1,     1,    -1,
      89,    90,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,     1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    59,    60,    61,    62,
      63,    64,    65,    -1,    33,    34,    -1,    70,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    81,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    59,    60,    61,
      62,    63,    64,    65,    33,    34,    -1,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      79,    -1,    81,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    68,    -1,    70,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      -1,    -1,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      33,    34,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    -1,
      -1,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    -1,
      73,    -1,    -1,    -1,    77,    -1,    -1,    -1,    81,    33,
      34,    -1,    -1,    -1,    -1,    39,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    73,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    -1,    33,    34,    -1,    78,
      -1,    -1,    81,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,    34,
      -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      33,    34,    -1,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    81,    -1,
      -1,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    46,    47,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    -1,
      70,    -1,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    21,    22,    23,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    -1,    -1,    -1,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    72,    73,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    85,    -1,    21,    -1,    89,
      90,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    -1,    73,    74,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90,    21,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    -1,    70,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    46,
      47,    85,    -1,    -1,    -1,    89,    90,    21,    -1,    -1,
      -1,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    36,    70,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,
      21,    -1,    89,    90,    -1,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    36,    70,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    85,    -1,    21,    -1,    89,    90,    -1,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    36,    70,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    46,    47,
      -1,    -1,    -1,    -1,    85,    -1,    21,    -1,    89,    90,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    36,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    21,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    46,    47,
      85,    -1,    -1,    -1,    89,    90,    21,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    36,    70,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    89,    90,    21,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    -1,    70,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    46,    47,
      85,    -1,    -1,    -1,    89,    90,    21,    -1,    -1,    -1,
      -1,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    36,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    46,    47,    -1,    -1,    -1,    -1,    85,    -1,    21,
      -1,    89,    90,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    36,    70,    -1,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      85,    -1,    21,    -1,    89,    90,    -1,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    36,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    46,    47,    -1,
      -1,    -1,    -1,    85,    -1,    21,    -1,    89,    90,    -1,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      36,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      46,    47,    -1,    -1,    -1,    -1,    85,    -1,    21,    -1,
      89,    90,    -1,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    36,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    46,    47,    -1,    -1,    -1,    -1,    85,
      -1,    21,    -1,    89,    90,    -1,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    36,    70,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    85,    -1,    21,    -1,    89,    90,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    36,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    89,
      90,    -1,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    89,    90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    33,    34,    59,    68,    70,    73,    81,    93,    94,
      95,    96,    97,    99,   100,   101,   102,   103,   104,   112,
     115,   116,   117,   129,    94,    93,    21,    59,    60,    61,
      62,    63,    64,    65,    70,   157,   159,    59,    70,    79,
     102,   117,   118,   115,    59,   101,   102,   105,   108,   109,
     113,   114,     0,    95,     1,    72,   106,   107,   115,    99,
      99,    99,    59,    73,    97,    98,    99,   133,   116,    36,
      46,    47,    66,    67,    68,    70,    85,    89,    90,   138,
     139,   141,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,    93,    73,     1,
      21,    78,    99,   119,   120,   121,   123,   157,    80,   141,
     142,   154,   102,   117,    78,    76,   109,   109,    74,   108,
      77,   110,   111,   115,    74,    75,     1,    72,    75,    76,
      98,   133,    73,    22,    23,    24,    25,    27,    28,    29,
      30,    31,    32,    35,    59,    72,    74,    98,   101,   102,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    97,
     133,   115,    70,   154,   154,   154,   109,   126,    75,    78,
      37,    82,    38,    83,    84,    85,    40,    41,    42,    43,
      86,    87,    44,    45,    66,    67,    68,    69,    88,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    76,
     140,   153,    46,    47,    48,    70,    79,    91,   113,   117,
     122,     1,    78,    75,     1,    75,    78,    80,   142,   142,
      72,    75,    77,   114,   107,    73,   124,   139,   133,   105,
     142,    77,    70,    70,    70,    59,    73,   130,    70,    59,
      72,    72,    72,   138,    77,    74,   134,    74,   130,    72,
     126,    70,    79,   117,   127,   128,    78,   139,   144,   138,
     145,   146,   147,   148,   149,   149,   150,   150,   150,   150,
     151,   151,   152,   152,   153,   153,   153,   139,    59,    78,
     139,   158,   138,    59,    74,    59,   127,    39,   121,   157,
     111,   142,   124,   125,    74,    77,   130,   138,   138,    72,
     138,    29,   138,    72,    72,   130,    74,    78,    78,   119,
     127,    80,   142,   128,    70,    79,   153,    77,    75,    78,
      80,    70,    79,    74,    75,   130,    78,    78,    72,   138,
      72,    70,    78,    78,    78,    80,    78,   119,    80,   142,
     141,   139,   119,   123,   142,    74,   124,   130,   130,    78,
     138,    72,    72,   138,   138,   130,    78,    80,    78,    78,
      80,    26,   130,    78,    78,   138,    78,   138,    72,    78,
     130,   130,   130,    78,   130,    78,    78,   138,    72,   130,
     130,   130,    78,   130
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    97,    98,    98,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   107,   107,   108,   109,   109,   109,
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     2,     1,     2,     1,     1,
       4,     3,     3,     2,     3,     2,     3,     2,     1,     2,
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
  case 10:
#line 113 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-3].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2056 "bison.tab.c"
    break;

  case 11:
#line 114 "bison.y"
                                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-2].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2062 "bison.tab.c"
    break;

  case 12:
#line 115 "bison.y"
                                                                                                                                    {aux_tFuncion = obtenerTipo((yyvsp[-2].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2068 "bison.tab.c"
    break;

  case 13:
#line 116 "bison.y"
                                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[-1].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2074 "bison.tab.c"
    break;

  case 16:
#line 122 "bison.y"
                                                                                                            {printf("[ERROR] Falta punto y coma\n")}
#line 2080 "bison.tab.c"
    break;

  case 17:
#line 123 "bison.y"
                                                                                    {printf("[ERROR] Falta punto y coma\n")}
#line 2086 "bison.tab.c"
    break;

  case 31:
#line 147 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2092 "bison.tab.c"
    break;

  case 32:
#line 148 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2098 "bison.tab.c"
    break;

  case 33:
#line 149 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2104 "bison.tab.c"
    break;

  case 34:
#line 150 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2110 "bison.tab.c"
    break;

  case 35:
#line 151 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2116 "bison.tab.c"
    break;

  case 36:
#line 152 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2122 "bison.tab.c"
    break;

  case 37:
#line 153 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2128 "bison.tab.c"
    break;

  case 38:
#line 154 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2134 "bison.tab.c"
    break;

  case 39:
#line 155 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2140 "bison.tab.c"
    break;

  case 75:
#line 230 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2146 "bison.tab.c"
    break;

  case 77:
#line 232 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2152 "bison.tab.c"
    break;

  case 78:
#line 233 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2158 "bison.tab.c"
    break;

  case 79:
#line 234 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2164 "bison.tab.c"
    break;

  case 80:
#line 235 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2170 "bison.tab.c"
    break;

  case 81:
#line 236 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2176 "bison.tab.c"
    break;

  case 82:
#line 237 "bison.y"
                                                                                  {printf("[ERROR] Falta paréntesis de cierre\n");}
#line 2182 "bison.tab.c"
    break;

  case 83:
#line 238 "bison.y"
                                                                                  {printf("[ERROR] Falta paréntesis de cierre\n");}
#line 2188 "bison.tab.c"
    break;

  case 84:
#line 239 "bison.y"
                                                         {printf("[ERROR] Falta paréntesis de cierre\n");}
#line 2194 "bison.tab.c"
    break;

  case 93:
#line 260 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2200 "bison.tab.c"
    break;

  case 94:
#line 261 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2206 "bison.tab.c"
    break;

  case 95:
#line 265 "bison.y"
                                                                                     {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2212 "bison.tab.c"
    break;

  case 96:
#line 266 "bison.y"
                                                                                                                 {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2218 "bison.tab.c"
    break;

  case 97:
#line 267 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2224 "bison.tab.c"
    break;

  case 98:
#line 268 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2230 "bison.tab.c"
    break;

  case 103:
#line 278 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2236 "bison.tab.c"
    break;

  case 125:
#line 322 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2242 "bison.tab.c"
    break;

  case 126:
#line 323 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2248 "bison.tab.c"
    break;

  case 127:
#line 324 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2254 "bison.tab.c"
    break;

  case 128:
#line 325 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2260 "bison.tab.c"
    break;

  case 129:
#line 326 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2266 "bison.tab.c"
    break;

  case 130:
#line 327 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2272 "bison.tab.c"
    break;

  case 200:
#line 450 "bison.y"
                                                                                        {if(!chequearSuma(sacar_ultimo_caracter((yyvsp[-2].cval)))) printf("[ERROR] Suma invalida en %d\n", yylineno);}
#line 2278 "bison.tab.c"
    break;

  case 222:
#line 484 "bison.y"
                                                                                    { comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval)); }
#line 2284 "bison.tab.c"
    break;


#line 2288 "bison.tab.c"

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
#line 514 "bison.y"

int main (int argc, char **argv)
{
    #ifdef YYDEBUG
        //yydebug = 1;
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
        //fclose(yyin);

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
