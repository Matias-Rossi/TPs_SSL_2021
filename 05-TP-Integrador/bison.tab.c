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
#define YYLAST   2142

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  239
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  405

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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
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
     315,   316,   317,   318,   319,   320,   321,    59,   123,   125,
      44,    61,    58,    40,    41,    91,    93,    42,   116,    63,
     124,    94,    38,    60,    62,    43,    45,    47,    37,   126,
      33,    46
};
# endif

#define YYPACT_NINF (-256)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-72)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
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

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
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

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
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
  case 8:
#line 105 "bison.y"
                                                                                                            {definirFuncion(lista_funciones, (yyvsp[0].cval));}
#line 2056 "bison.tab.c"
    break;

  case 9:
#line 106 "bison.y"
                                                                                                            {aux_tFuncion = obtenerTipo((yyvsp[0].cval)); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);}
#line 2062 "bison.tab.c"
    break;

  case 10:
#line 110 "bison.y"
                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2068 "bison.tab.c"
    break;

  case 11:
#line 111 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2074 "bison.tab.c"
    break;

  case 12:
#line 112 "bison.y"
                                                                                                                                    {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2080 "bison.tab.c"
    break;

  case 13:
#line 113 "bison.y"
                                                                                                                            {/*aux_tFuncion = obtenerTipo($<cval>1); agregarFuncion(lista_funciones, aux_nombreFuncion, aux_tFuncion, lista_parametros);*/}
#line 2086 "bison.tab.c"
    break;

  case 30:
#line 149 "bison.y"
                                                   {aux_tIdentificador="int";}
#line 2092 "bison.tab.c"
    break;

  case 31:
#line 150 "bison.y"
                                                               {aux_tIdentificador="char";}
#line 2098 "bison.tab.c"
    break;

  case 32:
#line 151 "bison.y"
                                                               {aux_tIdentificador="float";}
#line 2104 "bison.tab.c"
    break;

  case 33:
#line 152 "bison.y"
                                                               {aux_tIdentificador="double";}
#line 2110 "bison.tab.c"
    break;

  case 34:
#line 153 "bison.y"
                                                       {aux_tIdentificador="short";}
#line 2116 "bison.tab.c"
    break;

  case 35:
#line 154 "bison.y"
                                                               {aux_tIdentificador="void";}
#line 2122 "bison.tab.c"
    break;

  case 36:
#line 155 "bison.y"
                                                               {aux_tIdentificador="long";}
#line 2128 "bison.tab.c"
    break;

  case 37:
#line 156 "bison.y"
                                                               {aux_tIdentificador="signed";}
#line 2134 "bison.tab.c"
    break;

  case 38:
#line 157 "bison.y"
                                                                           {aux_tIdentificador="unsigned";}
#line 2140 "bison.tab.c"
    break;

  case 55:
#line 188 "bison.y"
                                                            {printf("[ERROR-Sintáctico] Línea %d: Falta inicializador en linea\n", yylineno);yyerrok;}
#line 2146 "bison.tab.c"
    break;

  case 75:
#line 235 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[0].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[0].cval)), aux_tIdentificador);}
#line 2152 "bison.tab.c"
    break;

  case 77:
#line 237 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-3].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-3].cval)), aux_tIdentificador);}
#line 2158 "bison.tab.c"
    break;

  case 78:
#line 238 "bison.y"
                                                                                  {if(!identificadorYaExiste(identificadores_variables, sacar_ultimo_caracter((yyvsp[-2].cval)))) agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter((yyvsp[-2].cval)), aux_tIdentificador);}
#line 2164 "bison.tab.c"
    break;

  case 79:
#line 239 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2170 "bison.tab.c"
    break;

  case 80:
#line 240 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2176 "bison.tab.c"
    break;

  case 81:
#line 241 "bison.y"
                                                                                  {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-2].cval));}
#line 2182 "bison.tab.c"
    break;

  case 82:
#line 242 "bison.y"
                                                                                  {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);}
#line 2188 "bison.tab.c"
    break;

  case 83:
#line 243 "bison.y"
                                                                                  {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);}
#line 2194 "bison.tab.c"
    break;

  case 84:
#line 244 "bison.y"
                                                                                  {printf("[ERROR-Sintáctico] Línea %d: Falta paréntesis de cierre\n", yylineno);}
#line 2200 "bison.tab.c"
    break;

  case 93:
#line 265 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2206 "bison.tab.c"
    break;

  case 94:
#line 266 "bison.y"
                                                                        {aux_tIdentificador = sacar_ultimo_caracter((yyvsp[0].cval)); agregarParametro(lista_parametros, aux_nParametro, aux_tIdentificador, identificadores_variables);}
#line 2212 "bison.tab.c"
    break;

  case 95:
#line 270 "bison.y"
                                                                                     {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[0].cval)));}
#line 2218 "bison.tab.c"
    break;

  case 96:
#line 271 "bison.y"
                                                                                                                 {aux_nParametro = sacar_ultimo_caracter(obtenerTipo((yyvsp[-3].cval)));}
#line 2224 "bison.tab.c"
    break;

  case 97:
#line 272 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2230 "bison.tab.c"
    break;

  case 98:
#line 273 "bison.y"
                                                                                                                       {aux_nombreFuncion = cortarIdentificadorFuncion((yyvsp[-3].cval));}
#line 2236 "bison.tab.c"
    break;

  case 103:
#line 283 "bison.y"
                                                                                 {/*agregarIdentificador(identificadores_variables,  sacar_ultimo_caracter($<cval>1), aux_tIdentificador);*/}
#line 2242 "bison.tab.c"
    break;

  case 125:
#line 327 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia etiquetada",   yylineno);}
#line 2248 "bison.tab.c"
    break;

  case 126:
#line 328 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia expresion",    yylineno);}
#line 2254 "bison.tab.c"
    break;

  case 127:
#line 329 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia compuesta",    yylineno);}
#line 2260 "bison.tab.c"
    break;

  case 128:
#line 330 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de iteracion", yylineno);}
#line 2266 "bison.tab.c"
    break;

  case 129:
#line 331 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de seleccion", yylineno);}
#line 2272 "bison.tab.c"
    break;

  case 130:
#line 332 "bison.y"
                                        {agregar_sentencia(lista_sentencias, "Sentencia de salto",     yylineno);}
#line 2278 "bison.tab.c"
    break;

  case 200:
#line 457 "bison.y"
                                                                                        {;if(!chequearSuma(sacar_ultimo_caracter((yyvsp[-2].cval)), ultimas_constantes)) printf("[ERROR] Línea %d: Suma inválida\n", yylineno);}
#line 2284 "bison.tab.c"
    break;

  case 222:
#line 491 "bison.y"
                                                                                    { comprobar_tipos_funcion(lista_funciones, (yyvsp[-3].cval)); }
#line 2290 "bison.tab.c"
    break;

  case 228:
#line 501 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "", "identificador");}
#line 2296 "bison.tab.c"
    break;

  case 230:
#line 503 "bison.y"
                                            {agregarIdentificador(ultimas_constantes, "", "char*");}
#line 2302 "bison.tab.c"
    break;

  case 234:
#line 513 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "", "int");}
#line 2308 "bison.tab.c"
    break;

  case 235:
#line 514 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "", "int");}
#line 2314 "bison.tab.c"
    break;

  case 236:
#line 515 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "", "int");}
#line 2320 "bison.tab.c"
    break;

  case 237:
#line 516 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "", "char");}
#line 2326 "bison.tab.c"
    break;

  case 238:
#line 517 "bison.y"
                                    {agregarIdentificador(ultimas_constantes, "", "float");}
#line 2332 "bison.tab.c"
    break;


#line 2336 "bison.tab.c"

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
#line 521 "bison.y"

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
