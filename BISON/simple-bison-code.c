/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 18 "simple-bison-code.y"

    #include <stdio.h>
    #include <stdlib.h>
    int yylex();
    void yyerror(const char *msg);
    int countCorrectExpr = 0, countWrongExpressions = 0;
    extern int line, countWrongTokens, countCorrectTokens;
    extern char* yytext;

#line 81 "simple-bison-code.c"

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

#include "simple-bison-code.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTCONST = 3,                   /* INTCONST  */
  YYSYMBOL_DOUBLE = 4,                     /* DOUBLE  */
  YYSYMBOL_VARIABLE = 5,                   /* VARIABLE  */
  YYSYMBOL_STRING = 6,                     /* STRING  */
  YYSYMBOL_NAME = 7,                       /* NAME  */
  YYSYMBOL_COMMENT = 8,                    /* COMMENT  */
  YYSYMBOL_BIND = 9,                       /* BIND  */
  YYSYMBOL_TEST = 10,                      /* TEST  */
  YYSYMBOL_READ = 11,                      /* READ  */
  YYSYMBOL_DEFFACTS = 12,                  /* DEFFACTS  */
  YYSYMBOL_DEFRULE = 13,                   /* DEFRULE  */
  YYSYMBOL_PRINTOUT = 14,                  /* PRINTOUT  */
  YYSYMBOL_PLUS = 15,                      /* PLUS  */
  YYSYMBOL_DELIMITER = 16,                 /* DELIMITER  */
  YYSYMBOL_NEWLINE = 17,                   /* NEWLINE  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_MULT = 19,                      /* MULT  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_EQUALS = 21,                    /* EQUALS  */
  YYSYMBOL_LPAR = 22,                      /* LPAR  */
  YYSYMBOL_RPAR = 23,                      /* RPAR  */
  YYSYMBOL_TOKEN_ERROR = 24,               /* TOKEN_ERROR  */
  YYSYMBOL_YYACCEPT = 25,                  /* $accept  */
  YYSYMBOL_program = 26,                   /* program  */
  YYSYMBOL_exprINT = 27,                   /* exprINT  */
  YYSYMBOL_exprDOUBLE = 28,                /* exprDOUBLE  */
  YYSYMBOL_exprEQUALS = 29,                /* exprEQUALS  */
  YYSYMBOL_exprBIND = 30,                  /* exprBIND  */
  YYSYMBOL_exprTEST = 31,                  /* exprTEST  */
  YYSYMBOL_exprEVENTS = 32,                /* exprEVENTS  */
  YYSYMBOL_exprEVENT = 33,                 /* exprEVENT  */
  YYSYMBOL_exprDEFFACTS = 34,              /* exprDEFFACTS  */
  YYSYMBOL_exprDEFRULE = 35,               /* exprDEFRULE  */
  YYSYMBOL_exprPRINTOUT = 36,              /* exprPRINTOUT  */
  YYSYMBOL_expr = 37                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   195

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  25
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  13
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  170

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    56,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   106,   107,   108,   109,   110,   111,
     115,   116,   117,   118,   119,   123,   124,   125,   126,   127,
     128,   129,   134,   135,   136,   140,   144,   148,   152,   156,
     157,   158
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTCONST", "DOUBLE",
  "VARIABLE", "STRING", "NAME", "COMMENT", "BIND", "TEST", "READ",
  "DEFFACTS", "DEFRULE", "PRINTOUT", "PLUS", "DELIMITER", "NEWLINE",
  "MINUS", "MULT", "DIV", "EQUALS", "LPAR", "RPAR", "TOKEN_ERROR",
  "$accept", "program", "exprINT", "exprDOUBLE", "exprEQUALS", "exprBIND",
  "exprTEST", "exprEVENTS", "exprEVENT", "exprDEFFACTS", "exprDEFRULE",
  "exprPRINTOUT", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-17)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -17,    66,   -17,    -5,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,    42,    42,    42,    42,    84,    27,    28,
      41,    56,    65,    72,    81,    93,    96,   124,   -17,    23,
     103,    42,   103,    42,   103,    42,   103,    42,   -17,   -17,
       4,    34,    60,    87,    14,     1,    54,    55,    91,    18,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   106,   121,    80,   122,   125,   126,   130,   131,
     134,     8,    25,   135,    26,   -16,   -17,    18,   -17,   119,
     120,   123,   127,   128,   129,   132,   133,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,    97,    11,    99,   152,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,   -17,
     -17,   153,   154,   155,   174,   175,    92,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   -17,   -17,   -17,   -17,
     167,   168,   169,   170,   171,   -17,   -17,   -17,   -17,   -17
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      13,     0,     1,     0,    31,    69,    70,    71,    50,    55,
      66,    67,    68,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    11,     3,     4,     5,     6,     7,     8,     2,
      33,    34,    32,    36,    37,    35,    39,    40,    38,    42,
      43,    41,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    65,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    14,    16,    15,
      17,    18,    19,    21,    20,    22,    23,    25,    24,    26,
      27,    29,    28,    30,    45,    48,    44,    46,    49,    47,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    56,    54,    52,    53,
       0,     0,     0,     0,     0,    58,    59,    57,    60,    61
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -17,   -17,   -13,    19,    59,   156,   157,    98,   194,   -17,
     -17,   -17,   -17
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    18,    19,    20,    46,    47,    48,    49,    24,
      25,    26,    27
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      30,    32,    34,    36,    38,   114,   115,    72,    39,    73,
       8,     9,    28,   106,   144,   145,   146,    81,    61,    82,
      64,    38,    67,    45,    70,    39,    29,    74,   108,   112,
      29,    83,    31,    33,    35,    37,    29,    75,    40,    76,
      87,    41,    42,    43,    50,    51,     4,    29,   113,    60,
      62,    63,    65,    66,    68,    69,    71,    13,    52,    84,
      14,    15,    16,    77,    29,    78,     2,     3,   107,   109,
       4,     5,     6,    53,     7,     8,     9,    85,    10,    11,
      12,    13,    54,    93,    14,    15,    16,    38,    17,    55,
      79,    39,    80,     8,     9,   153,   154,   155,    56,    40,
     142,     4,    41,    42,    43,    44,    45,     4,   141,    89,
      57,    90,    13,    58,    86,    14,    15,    16,    13,    29,
      44,    14,    15,    16,    91,    94,    92,    95,    96,    98,
      97,    99,   143,   100,   102,   101,   103,   104,   110,   105,
     111,    59,   117,   118,   116,     0,   119,    88,     0,     0,
     120,   121,   122,     0,     0,   123,   124,    21,    22,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   147,   148,   149,   150,   151,
     152,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,    23
};

static const yytype_int8 yycheck[] =
{
      13,    14,    15,    16,     3,    21,    22,     3,     7,     5,
       9,    10,    17,     5,     3,     4,     5,     3,    31,     5,
      33,     3,    35,    22,    37,     7,    22,    40,     3,     3,
      22,    44,    13,    14,    15,    16,    22,     3,    15,     5,
      22,    18,    19,    20,    17,    17,     4,    22,    22,    30,
      31,    32,    33,    34,    35,    36,    37,    15,    17,     5,
      18,    19,    20,     3,    22,     5,     0,     1,    81,    82,
       4,     5,     6,    17,     8,     9,    10,    22,    12,    13,
      14,    15,    17,     3,    18,    19,    20,     3,    22,    17,
       3,     7,     5,     9,    10,     3,     4,     5,    17,    15,
     113,     4,    18,    19,    20,    21,    22,     4,    11,     3,
      17,     5,    15,    17,    23,    18,    19,    20,    15,    22,
      21,    18,    19,    20,     3,     3,     5,     5,     3,     3,
       5,     5,   113,     3,     3,     5,     5,     3,     3,     5,
       5,    17,    23,    23,    85,    -1,    23,    49,    -1,    -1,
      23,    23,    23,    -1,    -1,    23,    23,     1,     1,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,     5,
       5,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,     1
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    26,     0,     1,     4,     5,     6,     8,     9,    10,
      12,    13,    14,    15,    18,    19,    20,    22,    27,    28,
      29,    30,    31,    33,    34,    35,    36,    37,    17,    22,
      27,    28,    27,    28,    27,    28,    27,    28,     3,     7,
      15,    18,    19,    20,    21,    22,    30,    31,    32,    33,
      17,    17,    17,    17,    17,    17,    17,    17,    17,    17,
      28,    27,    28,    28,    27,    28,    28,    27,    28,    28,
      27,    28,     3,     5,    27,     3,     5,     3,     5,     3,
       5,     3,     5,    27,     5,    22,    23,    22,    32,     3,
       5,     3,     5,     3,     3,     5,     3,     5,     3,     5,
       3,     5,     3,     5,     3,     5,     5,    27,     3,    27,
       3,     5,     3,    22,    21,    22,    29,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23,
      23,    11,    27,    28,     3,     4,     5,    23,    23,    23,
      23,     5,     5,     3,     4,     5,    23,    23,    23,    23,
      23,    23,    23,    23,    23,    23,    23,    23,    23,    23
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    25,    26,    26,    26,    26,    26,    26,    26,    26,
      26,    26,    26,    26,    27,    27,    27,    27,    27,    27,
      27,    27,    27,    27,    27,    27,    27,    27,    27,    27,
      27,    28,    28,    28,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    28,    29,    29,    29,    29,    29,    29,
      30,    30,    30,    30,    30,    31,    31,    31,    31,    31,
      31,    31,    32,    32,    32,    33,    34,    35,    36,    37,
      37,    37
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     5,     5,     5,     5,     5,
       1,     5,     7,     7,     7,     1,     6,     8,     8,     8,
       8,     8,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: program expr NEWLINE  */
#line 56 "simple-bison-code.y"
                             { printf("expr %s\n", (yyvsp[-1].strVal)); countCorrectExpr++; }
#line 1207 "simple-bison-code.c"
    break;

  case 3: /* program: program exprBIND NEWLINE  */
#line 57 "simple-bison-code.y"
                                   { countCorrectExpr++; }
#line 1213 "simple-bison-code.c"
    break;

  case 4: /* program: program exprTEST NEWLINE  */
#line 58 "simple-bison-code.y"
                                   { countCorrectExpr++; }
#line 1219 "simple-bison-code.c"
    break;

  case 5: /* program: program exprEVENT NEWLINE  */
#line 59 "simple-bison-code.y"
                                    { printf("%s\n", (yyvsp[-1].strVal)); countCorrectExpr++; }
#line 1225 "simple-bison-code.c"
    break;

  case 6: /* program: program exprDEFFACTS NEWLINE  */
#line 60 "simple-bison-code.y"
                                       { printf("%s\n", (yyvsp[-1].strVal)); countCorrectExpr++; }
#line 1231 "simple-bison-code.c"
    break;

  case 7: /* program: program exprDEFRULE NEWLINE  */
#line 61 "simple-bison-code.y"
                                      { printf("%s\n", (yyvsp[-1].strVal)); countCorrectExpr++; }
#line 1237 "simple-bison-code.c"
    break;

  case 8: /* program: program exprPRINTOUT NEWLINE  */
#line 62 "simple-bison-code.y"
                                       { printf("%s\n", (yyvsp[-1].strVal)); countCorrectExpr++; }
#line 1243 "simple-bison-code.c"
    break;

  case 9: /* program: program exprINT NEWLINE  */
#line 63 "simple-bison-code.y"
                                  { printf("%d\n", (yyvsp[-1].intVal)); countCorrectExpr++; }
#line 1249 "simple-bison-code.c"
    break;

  case 10: /* program: program exprDOUBLE NEWLINE  */
#line 64 "simple-bison-code.y"
                                     { countCorrectExpr++; }
#line 1255 "simple-bison-code.c"
    break;

  case 11: /* program: program exprEQUALS NEWLINE  */
#line 65 "simple-bison-code.y"
                                     { countCorrectExpr++; }
#line 1261 "simple-bison-code.c"
    break;

  case 12: /* program: program error NEWLINE  */
#line 66 "simple-bison-code.y"
                                { countWrongExpressions++; }
#line 1267 "simple-bison-code.c"
    break;

  case 14: /* exprINT: LPAR PLUS INTCONST INTCONST RPAR  */
#line 70 "simple-bison-code.y"
                                         { }
#line 1273 "simple-bison-code.c"
    break;

  case 15: /* exprINT: LPAR PLUS VARIABLE INTCONST RPAR  */
#line 71 "simple-bison-code.y"
                                           { }
#line 1279 "simple-bison-code.c"
    break;

  case 16: /* exprINT: LPAR PLUS INTCONST VARIABLE RPAR  */
#line 72 "simple-bison-code.y"
                                           { }
#line 1285 "simple-bison-code.c"
    break;

  case 17: /* exprINT: LPAR PLUS VARIABLE VARIABLE RPAR  */
#line 73 "simple-bison-code.y"
                                           { }
#line 1291 "simple-bison-code.c"
    break;

  case 18: /* exprINT: LPAR PLUS exprINT INTCONST RPAR  */
#line 74 "simple-bison-code.y"
                                          { (yyval.intVal) = (yyvsp[-2].intVal) + (yyvsp[-1].intVal); }
#line 1297 "simple-bison-code.c"
    break;

  case 19: /* exprINT: LPAR MINUS INTCONST INTCONST RPAR  */
#line 75 "simple-bison-code.y"
                                             { (yyval.intVal) = (yyvsp[-2].intVal) - (yyvsp[-1].intVal); }
#line 1303 "simple-bison-code.c"
    break;

  case 20: /* exprINT: LPAR MINUS VARIABLE INTCONST RPAR  */
#line 76 "simple-bison-code.y"
                                            { }
#line 1309 "simple-bison-code.c"
    break;

  case 21: /* exprINT: LPAR MINUS INTCONST VARIABLE RPAR  */
#line 77 "simple-bison-code.y"
                                            { }
#line 1315 "simple-bison-code.c"
    break;

  case 22: /* exprINT: LPAR MINUS VARIABLE VARIABLE RPAR  */
#line 78 "simple-bison-code.y"
                                            { }
#line 1321 "simple-bison-code.c"
    break;

  case 23: /* exprINT: LPAR MULT INTCONST INTCONST RPAR  */
#line 79 "simple-bison-code.y"
                                          { (yyval.intVal) = (yyvsp[-2].intVal) * (yyvsp[-1].intVal); }
#line 1327 "simple-bison-code.c"
    break;

  case 24: /* exprINT: LPAR MULT VARIABLE INTCONST RPAR  */
#line 80 "simple-bison-code.y"
                                          { }
#line 1333 "simple-bison-code.c"
    break;

  case 25: /* exprINT: LPAR MULT INTCONST VARIABLE RPAR  */
#line 81 "simple-bison-code.y"
                                          { }
#line 1339 "simple-bison-code.c"
    break;

  case 26: /* exprINT: LPAR MULT VARIABLE VARIABLE RPAR  */
#line 82 "simple-bison-code.y"
                                           { }
#line 1345 "simple-bison-code.c"
    break;

  case 27: /* exprINT: LPAR DIV INTCONST INTCONST RPAR  */
#line 83 "simple-bison-code.y"
                                          { (yyval.intVal) = (yyvsp[-2].intVal) / (yyvsp[-1].intVal); }
#line 1351 "simple-bison-code.c"
    break;

  case 28: /* exprINT: LPAR DIV VARIABLE INTCONST RPAR  */
#line 84 "simple-bison-code.y"
                                         { }
#line 1357 "simple-bison-code.c"
    break;

  case 29: /* exprINT: LPAR DIV INTCONST VARIABLE RPAR  */
#line 85 "simple-bison-code.y"
                                         { }
#line 1363 "simple-bison-code.c"
    break;

  case 30: /* exprINT: LPAR DIV VARIABLE VARIABLE RPAR  */
#line 86 "simple-bison-code.y"
                                          { }
#line 1369 "simple-bison-code.c"
    break;

  case 31: /* exprDOUBLE: DOUBLE  */
#line 90 "simple-bison-code.y"
               { (yyval.doubleVal) = (yyvsp[0].doubleVal); }
#line 1375 "simple-bison-code.c"
    break;

  case 32: /* exprDOUBLE: PLUS exprDOUBLE exprDOUBLE  */
#line 91 "simple-bison-code.y"
                                     { (yyval.doubleVal) = (yyvsp[-1].doubleVal) + (yyvsp[0].doubleVal); }
#line 1381 "simple-bison-code.c"
    break;

  case 33: /* exprDOUBLE: PLUS exprINT exprDOUBLE  */
#line 92 "simple-bison-code.y"
                                  { (yyval.doubleVal) = (yyvsp[-1].intVal) + (yyvsp[0].doubleVal); }
#line 1387 "simple-bison-code.c"
    break;

  case 34: /* exprDOUBLE: PLUS exprDOUBLE exprINT  */
#line 93 "simple-bison-code.y"
                                  { (yyval.doubleVal) = (yyvsp[-1].doubleVal) + (yyvsp[0].intVal); }
#line 1393 "simple-bison-code.c"
    break;

  case 35: /* exprDOUBLE: MINUS exprDOUBLE exprDOUBLE  */
#line 94 "simple-bison-code.y"
                                        { (yyval.doubleVal) = (yyvsp[-1].doubleVal) - (yyvsp[0].doubleVal); }
#line 1399 "simple-bison-code.c"
    break;

  case 36: /* exprDOUBLE: MINUS exprINT exprDOUBLE  */
#line 95 "simple-bison-code.y"
                                     { (yyval.doubleVal) = (yyvsp[-1].intVal) - (yyvsp[0].doubleVal); }
#line 1405 "simple-bison-code.c"
    break;

  case 37: /* exprDOUBLE: MINUS exprDOUBLE exprINT  */
#line 96 "simple-bison-code.y"
                                     { (yyval.doubleVal) = (yyvsp[-1].doubleVal) - (yyvsp[0].intVal); }
#line 1411 "simple-bison-code.c"
    break;

  case 38: /* exprDOUBLE: MULT exprDOUBLE exprDOUBLE  */
#line 97 "simple-bison-code.y"
                                       { (yyval.doubleVal) = (yyvsp[-1].doubleVal) * (yyvsp[0].doubleVal); }
#line 1417 "simple-bison-code.c"
    break;

  case 39: /* exprDOUBLE: MULT exprINT exprDOUBLE  */
#line 98 "simple-bison-code.y"
                                    { (yyval.doubleVal) = (yyvsp[-1].intVal) * (yyvsp[0].doubleVal); }
#line 1423 "simple-bison-code.c"
    break;

  case 40: /* exprDOUBLE: MULT exprDOUBLE exprINT  */
#line 99 "simple-bison-code.y"
                                    { (yyval.doubleVal) = (yyvsp[-1].doubleVal) * (yyvsp[0].intVal); }
#line 1429 "simple-bison-code.c"
    break;

  case 41: /* exprDOUBLE: DIV exprDOUBLE exprDOUBLE  */
#line 100 "simple-bison-code.y"
                                      { (yyval.doubleVal) = (yyvsp[-1].doubleVal) / (yyvsp[0].doubleVal); }
#line 1435 "simple-bison-code.c"
    break;

  case 42: /* exprDOUBLE: DIV exprINT exprDOUBLE  */
#line 101 "simple-bison-code.y"
                                   { (yyval.doubleVal) = (yyvsp[-1].intVal) / (yyvsp[0].doubleVal); }
#line 1441 "simple-bison-code.c"
    break;

  case 43: /* exprDOUBLE: DIV exprDOUBLE exprINT  */
#line 102 "simple-bison-code.y"
                                   { (yyval.doubleVal) = (yyvsp[-1].doubleVal) / (yyvsp[0].intVal); }
#line 1447 "simple-bison-code.c"
    break;

  case 44: /* exprEQUALS: LPAR EQUALS VARIABLE INTCONST RPAR  */
#line 106 "simple-bison-code.y"
                                           { }
#line 1453 "simple-bison-code.c"
    break;

  case 45: /* exprEQUALS: LPAR EQUALS INTCONST VARIABLE RPAR  */
#line 107 "simple-bison-code.y"
                                             { }
#line 1459 "simple-bison-code.c"
    break;

  case 46: /* exprEQUALS: LPAR EQUALS VARIABLE exprINT RPAR  */
#line 108 "simple-bison-code.y"
                                            { }
#line 1465 "simple-bison-code.c"
    break;

  case 47: /* exprEQUALS: LPAR EQUALS exprINT VARIABLE RPAR  */
#line 109 "simple-bison-code.y"
                                            { }
#line 1471 "simple-bison-code.c"
    break;

  case 48: /* exprEQUALS: LPAR EQUALS INTCONST exprINT RPAR  */
#line 110 "simple-bison-code.y"
                                            { }
#line 1477 "simple-bison-code.c"
    break;

  case 49: /* exprEQUALS: LPAR EQUALS exprINT INTCONST RPAR  */
#line 111 "simple-bison-code.y"
                                            { }
#line 1483 "simple-bison-code.c"
    break;

  case 50: /* exprBIND: BIND  */
#line 115 "simple-bison-code.y"
         { (yyval.strVal) = (yyvsp[0].strVal);  }
#line 1489 "simple-bison-code.c"
    break;

  case 51: /* exprBIND: LPAR exprBIND VARIABLE INTCONST RPAR  */
#line 116 "simple-bison-code.y"
                                           { (yyval.strVal) = (yyvsp[-2].strVal); }
#line 1495 "simple-bison-code.c"
    break;

  case 52: /* exprBIND: LPAR exprBIND VARIABLE LPAR exprINT RPAR RPAR  */
#line 117 "simple-bison-code.y"
                                                    { (yyval.strVal) = (yyvsp[-4].strVal); }
#line 1501 "simple-bison-code.c"
    break;

  case 53: /* exprBIND: LPAR exprBIND VARIABLE LPAR exprDOUBLE RPAR RPAR  */
#line 118 "simple-bison-code.y"
                                                       { (yyval.strVal) = (yyvsp[-4].strVal); }
#line 1507 "simple-bison-code.c"
    break;

  case 54: /* exprBIND: LPAR exprBIND VARIABLE LPAR READ RPAR RPAR  */
#line 119 "simple-bison-code.y"
                                                 { (yyval.strVal) = (yyvsp[-4].strVal); }
#line 1513 "simple-bison-code.c"
    break;

  case 55: /* exprTEST: TEST  */
#line 123 "simple-bison-code.y"
         {  }
#line 1519 "simple-bison-code.c"
    break;

  case 56: /* exprTEST: LPAR exprTEST LPAR exprEQUALS RPAR RPAR  */
#line 124 "simple-bison-code.y"
                                              { (yyval.intVal) = (yyvsp[-2].intVal);  }
#line 1525 "simple-bison-code.c"
    break;

  case 57: /* exprTEST: LPAR exprTEST LPAR EQUALS VARIABLE INTCONST RPAR RPAR  */
#line 125 "simple-bison-code.y"
                                                            { }
#line 1531 "simple-bison-code.c"
    break;

  case 58: /* exprTEST: LPAR exprTEST LPAR EQUALS INTCONST VARIABLE RPAR RPAR  */
#line 126 "simple-bison-code.y"
                                                            { }
#line 1537 "simple-bison-code.c"
    break;

  case 59: /* exprTEST: LPAR exprTEST LPAR EQUALS DOUBLE VARIABLE RPAR RPAR  */
#line 127 "simple-bison-code.y"
                                                          { }
#line 1543 "simple-bison-code.c"
    break;

  case 60: /* exprTEST: LPAR exprTEST LPAR EQUALS VARIABLE DOUBLE RPAR RPAR  */
#line 128 "simple-bison-code.y"
                                                          { }
#line 1549 "simple-bison-code.c"
    break;

  case 61: /* exprTEST: LPAR exprTEST LPAR EQUALS VARIABLE VARIABLE RPAR RPAR  */
#line 129 "simple-bison-code.y"
                                                            { }
#line 1555 "simple-bison-code.c"
    break;

  case 62: /* exprEVENTS: NAME  */
#line 134 "simple-bison-code.y"
         { }
#line 1561 "simple-bison-code.c"
    break;

  case 63: /* exprEVENTS: INTCONST  */
#line 135 "simple-bison-code.y"
               { }
#line 1567 "simple-bison-code.c"
    break;

  case 64: /* exprEVENTS: exprEVENT exprEVENTS  */
#line 136 "simple-bison-code.y"
                           { }
#line 1573 "simple-bison-code.c"
    break;

  case 65: /* exprEVENT: LPAR exprEVENTS RPAR  */
#line 140 "simple-bison-code.y"
                         { }
#line 1579 "simple-bison-code.c"
    break;

  case 66: /* exprDEFFACTS: DEFFACTS  */
#line 144 "simple-bison-code.y"
             { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1585 "simple-bison-code.c"
    break;

  case 67: /* exprDEFRULE: DEFRULE  */
#line 148 "simple-bison-code.y"
            { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1591 "simple-bison-code.c"
    break;

  case 68: /* exprPRINTOUT: PRINTOUT  */
#line 152 "simple-bison-code.y"
             { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1597 "simple-bison-code.c"
    break;

  case 69: /* expr: VARIABLE  */
#line 156 "simple-bison-code.y"
             { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1603 "simple-bison-code.c"
    break;

  case 70: /* expr: STRING  */
#line 157 "simple-bison-code.y"
             { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1609 "simple-bison-code.c"
    break;

  case 71: /* expr: COMMENT  */
#line 158 "simple-bison-code.y"
              { (yyval.strVal) = (yyvsp[0].strVal); }
#line 1615 "simple-bison-code.c"
    break;


#line 1619 "simple-bison-code.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 161 "simple-bison-code.y"


void yyerror(const char *msg) {
    fprintf(stderr, "Bison ERROR on line: %d with error message: %s\n", line, msg);
}

/* Όταν ξεκινήσει το πρόγραμμα καλεί απευθείας το yyparse() για να
ξεκινήσει η ανάλυση */
int main(void)  {
        yyparse();
        printf("\n");
        printf("Correct tokens = %d\n", countCorrectTokens); // WRONG
        printf("Correct expressions = %d\n", countCorrectExpr);
        printf("Wrong tokens = %d\n", countWrongTokens);
        printf("Wrong expressions = %d\n", countWrongExpressions);
        return 0;
}
