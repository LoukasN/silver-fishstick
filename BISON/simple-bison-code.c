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
    #include <string.h>
    int yylex();
    /* Συνάρτηση για εμφάνιση συντακτικών λαθών*/
    void yyerror(const char *msg);
    /* Μετρητές */
    int countCorrectExpr = 0, countWrongExpr = 0, countFatalErrors = 0;
    /* Συναρτήσεις που δηλώνονται σε άλλα αρχεία*/
    extern int line, countWrongTokens, countCorrectTokens;
    extern char* yytext;

#line 85 "simple-bison-code.c"

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
  YYSYMBOL_MINUS = 16,                     /* MINUS  */
  YYSYMBOL_MULT = 17,                      /* MULT  */
  YYSYMBOL_DIV = 18,                       /* DIV  */
  YYSYMBOL_EQUALS = 19,                    /* EQUALS  */
  YYSYMBOL_LPAR = 20,                      /* LPAR  */
  YYSYMBOL_RPAR = 21,                      /* RPAR  */
  YYSYMBOL_DELIMITER = 22,                 /* DELIMITER  */
  YYSYMBOL_NEWLINE = 23,                   /* NEWLINE  */
  YYSYMBOL_TOKEN_ERROR = 24,               /* TOKEN_ERROR  */
  YYSYMBOL_ARROW = 25,                     /* ARROW  */
  YYSYMBOL_YYACCEPT = 26,                  /* $accept  */
  YYSYMBOL_program = 27,                   /* program  */
  YYSYMBOL_line = 28,                      /* line  */
  YYSYMBOL_exprERRORCALC = 29,             /* exprERRORCALC  */
  YYSYMBOL_exprERRORCOMP = 30,             /* exprERRORCOMP  */
  YYSYMBOL_expr = 31,                      /* expr  */
  YYSYMBOL_exprVALUE = 32,                 /* exprVALUE  */
  YYSYMBOL_exprINT = 33,                   /* exprINT  */
  YYSYMBOL_exprDOUBLE = 34,                /* exprDOUBLE  */
  YYSYMBOL_exprCOMPARISON = 35,            /* exprCOMPARISON  */
  YYSYMBOL_exprEVENTS = 36,                /* exprEVENTS  */
  YYSYMBOL_exprEVENT = 37,                 /* exprEVENT  */
  YYSYMBOL_exprGROUPS = 38,                /* exprGROUPS  */
  YYSYMBOL_exprGROUP = 39,                 /* exprGROUP  */
  YYSYMBOL_exprELEMENTS = 40               /* exprELEMENTS  */
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
#define YYLAST   251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  26
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  203

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   280


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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    63,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    79,    80,    81,    82,    83,    84,    85,
      86,    90,    91,    95,    96,    97,    98,    99,   100,   101,
     102,   106,   107,   108,   109,   110,   111,   112,   116,   117,
     118,   119,   120,   121,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   142,   143,
     144,   145,   146,   149,   150,   154,   157,   158,   162,   165,
     166,   167,   168,   169,   170
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
  "DEFFACTS", "DEFRULE", "PRINTOUT", "PLUS", "MINUS", "MULT", "DIV",
  "EQUALS", "LPAR", "RPAR", "DELIMITER", "NEWLINE", "TOKEN_ERROR", "ARROW",
  "$accept", "program", "line", "exprERRORCALC", "exprERRORCOMP", "expr",
  "exprVALUE", "exprINT", "exprDOUBLE", "exprCOMPARISON", "exprEVENTS",
  "exprEVENT", "exprGROUPS", "exprGROUP", "exprELEMENTS", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -83,    74,   -83,   -20,   -83,   -83,   -83,   -83,   -83,   156,
     -83,   -83,   -83,   -83,    21,    22,    27,    32,    46,    26,
     -83,    13,    13,    13,    13,    13,    65,    51,    66,    75,
      73,    20,    20,    20,    20,    34,    13,   -83,   -83,   -83,
     -83,   -83,    13,   -83,   -83,   -83,   -83,   -83,   -83,     9,
      76,    70,    26,    26,    91,   -83,    72,    20,    20,    20,
      20,    20,    20,    20,    20,     1,    48,    20,    93,   -83,
     -83,   -83,   134,    96,   -83,   -83,   -83,    34,   -83,    97,
      99,    13,   101,    91,    20,    20,    20,    20,   119,   120,
     121,   122,   123,   125,   126,   133,   143,   146,   159,   160,
     161,   162,   163,   164,   166,    83,   167,   172,   180,   181,
     182,   183,   -83,   184,   -83,    23,    37,   -83,    82,   185,
     186,   -83,    20,    20,    20,    20,    20,    20,    20,    20,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    44,    44,    44,
      44,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   172,   -83,
      92,    51,   -83,   -83,   187,   188,   189,   190,   191,   192,
     193,   194,   -83,    44,    44,    44,    44,    20,    20,    20,
      20,   195,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
      37,    37,    37,    37,    87,   197,   208,   203,    91,   204,
     205,   206,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,    38,    44,    23,    24,    25,    69,
       4,     3,     5,     6,     0,     0,     0,     0,     0,    63,
      12,    69,    69,    69,    69,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    69,     7,     8,     9,
      10,    11,    69,    64,    71,    72,    74,    73,    70,     0,
       0,     0,    63,     0,    66,    39,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    31,
      32,    33,     0,     0,    35,    36,    37,     0,    27,     0,
       0,    69,     0,    66,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    26,     0,     0,    28,     0,     0,
       0,    67,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    13,    17,    46,    41,    14,    18,    47,    42,    15,
      19,    48,    43,    16,    20,    49,    62,     0,     0,     0,
       0,    60,    61,    58,    21,    22,    59,    34,     0,    45,
       0,     0,    68,    30,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,     0,    66,     0,
       0,     0,    29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -83,   -83,   -83,   -83,   -83,   -83,   -83,    71,    -1,   -22,
     -17,   -83,   -82,   -83,   -14
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    11,    12,    13,    14,    73,    88,    91,    17,
      18,    19,    82,    83,    36
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      16,   121,    43,    20,     4,    51,   104,    44,    45,    46,
      47,    48,    69,    70,    55,    71,    21,    22,    23,    24,
      25,   105,    68,     4,     5,    55,     4,    76,   158,    72,
      58,    60,    62,    64,    67,    79,    80,     4,     5,    65,
      56,     5,   159,   105,    37,    38,    42,     4,    75,   172,
      39,     4,     5,   107,    56,    40,    89,   160,    93,    95,
      97,    99,   101,   103,   105,   109,   111,   119,    56,    41,
      49,    50,    15,    52,     2,     3,   116,     4,     5,     6,
       7,     8,    53,   123,   125,   127,   129,    84,    85,    86,
      87,    78,   161,    54,     9,    77,     0,    10,   147,   148,
     149,   150,    57,    59,    61,    63,    66,   177,   178,   179,
     180,    81,   195,     0,   112,   111,   199,   114,   117,   118,
      74,   164,   120,   166,    95,   168,    99,   170,   103,    90,
      92,    94,    96,    98,   100,   102,   106,   108,   110,   181,
     130,   131,   132,   133,   134,   113,   135,   136,   115,    84,
      85,    86,    87,    77,   137,   122,   124,   126,   128,    21,
      22,    23,    24,    25,   138,    26,    27,   139,    28,    29,
      30,    31,    32,    33,    34,    35,   123,   125,   127,   129,
     140,   141,   142,   143,   144,   145,   108,   146,   151,   164,
     166,   168,   170,   152,   165,    92,   167,    96,   169,   100,
     171,   153,   154,   155,   156,   157,   162,   163,   182,   183,
     184,   185,   186,   187,   188,   189,   194,   196,   173,   174,
     175,   176,   197,   198,     0,   200,   201,   202,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    96,   100,   190,   191,
     192,   193
};

static const yytype_int16 yycheck[] =
{
       1,    83,    19,    23,     3,    27,     5,    21,    22,    23,
      24,    25,     3,     4,     5,     6,     3,     4,     5,     6,
       7,    20,    36,     3,     4,     5,     3,    49,     5,    20,
      31,    32,    33,    34,    35,    52,    53,     3,     4,     5,
      20,     4,     5,    20,    23,    23,    20,     3,    49,     5,
      23,     3,     4,     5,    20,    23,    57,    20,    59,    60,
      61,    62,    63,    64,    20,    66,    67,    81,    20,    23,
       5,    20,     1,     7,     0,     1,    77,     3,     4,     5,
       6,     7,     7,    84,    85,    86,    87,    15,    16,    17,
      18,    21,    10,    20,    20,    19,    -1,    23,    15,    16,
      17,    18,    31,    32,    33,    34,    35,    15,    16,    17,
      18,    20,    25,    -1,    21,   116,   198,    21,    21,    20,
      49,   122,    21,   124,   125,   126,   127,   128,   129,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,   161,
      21,    21,    21,    21,    21,    11,    21,    21,    77,    15,
      16,    17,    18,    19,    21,    84,    85,    86,    87,     3,
       4,     5,     6,     7,    21,     9,    10,    21,    12,    13,
      14,    15,    16,    17,    18,    19,   177,   178,   179,   180,
      21,    21,    21,    21,    21,    21,   115,    21,    21,   190,
     191,   192,   193,    21,   123,   124,   125,   126,   127,   128,
     129,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    20,   147,   148,
     149,   150,    14,    20,    -1,    21,    21,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,
     179,   180
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    27,     0,     1,     3,     4,     5,     6,     7,    20,
      23,    28,    29,    30,    31,    33,    34,    35,    36,    37,
      23,     3,     4,     5,     6,     7,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    40,    23,    23,    23,
      23,    23,    20,    36,    40,    40,    40,    40,    40,     5,
      20,    35,     7,     7,    20,     5,    20,    33,    34,    33,
      34,    33,    34,    33,    34,     5,    33,    34,    40,     3,
       4,     6,    20,    32,    33,    34,    35,    19,    21,    36,
      36,    20,    38,    39,    15,    16,    17,    18,    33,    34,
      33,    34,    33,    34,    33,    34,    33,    34,    33,    34,
      33,    34,    33,    34,     5,    20,    33,     5,    33,    34,
      33,    34,    21,    11,    21,    33,    34,    21,    20,    40,
      21,    38,    33,    34,    33,    34,    33,    34,    33,    34,
      21,    21,    21,    21,    21,    21,    21,    21,    21,    21,
      21,    21,    21,    21,    21,    21,    21,    15,    16,    17,
      18,    21,    21,    21,    21,    21,    21,    21,     5,     5,
      20,    10,    21,    21,    34,    33,    34,    33,    34,    33,
      34,    33,     5,    33,    33,    33,    33,    15,    16,    17,
      18,    35,    21,    21,    21,    21,    21,    21,    21,    21,
      33,    33,    33,    33,    21,    25,    20,    14,    20,    38,
      21,    21,    21
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    26,    27,    27,    28,    28,    28,    28,    28,    28,
      28,    28,    28,    29,    29,    29,    29,    29,    29,    29,
      29,    30,    30,    31,    31,    31,    31,    31,    31,    31,
      31,    32,    32,    32,    32,    32,    32,    32,    33,    33,
      33,    33,    33,    33,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    34,    35,    35,
      35,    35,    35,    36,    36,    37,    38,    38,    39,    40,
      40,    40,    40,    40,    40
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     2,     2,     2,
       2,     2,     2,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     1,     1,     1,     5,     4,     5,    16,
       6,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       5,     5,     5,     5,     1,     1,     5,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     5,     5,     0,     2,     4,     0,     2,     3,     0,
       2,     2,     2,     2,     2
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
  case 4: /* line: NEWLINE  */
#line 67 "simple-bison-code.y"
                { }
#line 1239 "simple-bison-code.c"
    break;

  case 5: /* line: exprERRORCALC  */
#line 68 "simple-bison-code.y"
                        { countWrongExpr++; }
#line 1245 "simple-bison-code.c"
    break;

  case 6: /* line: exprERRORCOMP  */
#line 69 "simple-bison-code.y"
                        { countWrongExpr++; }
#line 1251 "simple-bison-code.c"
    break;

  case 7: /* line: expr NEWLINE  */
#line 70 "simple-bison-code.y"
                       { countCorrectExpr++; }
#line 1257 "simple-bison-code.c"
    break;

  case 8: /* line: exprINT NEWLINE  */
#line 71 "simple-bison-code.y"
                          { countCorrectExpr++; }
#line 1263 "simple-bison-code.c"
    break;

  case 9: /* line: exprDOUBLE NEWLINE  */
#line 72 "simple-bison-code.y"
                             { countCorrectExpr++; }
#line 1269 "simple-bison-code.c"
    break;

  case 10: /* line: exprCOMPARISON NEWLINE  */
#line 73 "simple-bison-code.y"
                                 { countCorrectExpr++; }
#line 1275 "simple-bison-code.c"
    break;

  case 11: /* line: exprEVENTS NEWLINE  */
#line 74 "simple-bison-code.y"
                             { countCorrectExpr++; }
#line 1281 "simple-bison-code.c"
    break;

  case 12: /* line: error NEWLINE  */
#line 75 "simple-bison-code.y"
                        {  countWrongExpr++; yyerrok; }
#line 1287 "simple-bison-code.c"
    break;

  case 13: /* exprERRORCALC: LPAR PLUS exprINT exprDOUBLE RPAR  */
#line 79 "simple-bison-code.y"
                                          { printf("WARNING: Cannot add integer with double on line %d\n", line); }
#line 1293 "simple-bison-code.c"
    break;

  case 14: /* exprERRORCALC: LPAR MINUS exprINT exprDOUBLE RPAR  */
#line 80 "simple-bison-code.y"
                                             { printf("WARNING: Cannot subtract integer with double on line %d\n", line); }
#line 1299 "simple-bison-code.c"
    break;

  case 15: /* exprERRORCALC: LPAR MULT exprINT exprDOUBLE RPAR  */
#line 81 "simple-bison-code.y"
                                            { printf("WARNING: Cannot multiply integer with double on line %d\n", line); }
#line 1305 "simple-bison-code.c"
    break;

  case 16: /* exprERRORCALC: LPAR DIV exprINT exprDOUBLE RPAR  */
#line 82 "simple-bison-code.y"
                                           { printf("WARNING: Cannot divide integer with double on line %d\n", line); }
#line 1311 "simple-bison-code.c"
    break;

  case 17: /* exprERRORCALC: LPAR PLUS exprDOUBLE exprINT RPAR  */
#line 83 "simple-bison-code.y"
                                            { printf("WARNING: Cannot add double with integer on line %d\n", line); }
#line 1317 "simple-bison-code.c"
    break;

  case 18: /* exprERRORCALC: LPAR MINUS exprDOUBLE exprINT RPAR  */
#line 84 "simple-bison-code.y"
                                             { printf("WARNING: Cannot subtract double with integer on line %d\n", line); }
#line 1323 "simple-bison-code.c"
    break;

  case 19: /* exprERRORCALC: LPAR MULT exprDOUBLE exprINT RPAR  */
#line 85 "simple-bison-code.y"
                                            { printf("WARNING: Cannot multiply double with integer on line %d\n", line); }
#line 1329 "simple-bison-code.c"
    break;

  case 20: /* exprERRORCALC: LPAR DIV exprDOUBLE exprINT RPAR  */
#line 86 "simple-bison-code.y"
                                           { printf("WARNING: Cannot divide double with integer on line %d\n", line); }
#line 1335 "simple-bison-code.c"
    break;

  case 21: /* exprERRORCOMP: LPAR EQUALS exprINT exprDOUBLE RPAR  */
#line 90 "simple-bison-code.y"
                                            { printf("WARNING: Cannot compare integer with double on line %d\n", line); }
#line 1341 "simple-bison-code.c"
    break;

  case 22: /* exprERRORCOMP: LPAR EQUALS exprDOUBLE exprINT RPAR  */
#line 91 "simple-bison-code.y"
                                              { printf("WARNING: Cannot compare double with integer on line %d\n", line); }
#line 1347 "simple-bison-code.c"
    break;

  case 23: /* expr: VARIABLE  */
#line 95 "simple-bison-code.y"
                 { }
#line 1353 "simple-bison-code.c"
    break;

  case 24: /* expr: STRING  */
#line 96 "simple-bison-code.y"
                 { }
#line 1359 "simple-bison-code.c"
    break;

  case 25: /* expr: NAME  */
#line 97 "simple-bison-code.y"
               { }
#line 1365 "simple-bison-code.c"
    break;

  case 26: /* expr: LPAR BIND VARIABLE exprVALUE RPAR  */
#line 98 "simple-bison-code.y"
                                            { }
#line 1371 "simple-bison-code.c"
    break;

  case 27: /* expr: LPAR TEST exprCOMPARISON RPAR  */
#line 99 "simple-bison-code.y"
                                        { }
#line 1377 "simple-bison-code.c"
    break;

  case 28: /* expr: LPAR DEFFACTS NAME exprEVENTS RPAR  */
#line 100 "simple-bison-code.y"
                                             { }
#line 1383 "simple-bison-code.c"
    break;

  case 29: /* expr: LPAR DEFRULE NAME exprEVENTS LPAR TEST exprCOMPARISON RPAR ARROW LPAR PRINTOUT LPAR exprGROUPS RPAR RPAR RPAR  */
#line 101 "simple-bison-code.y"
                                                                                                                        { }
#line 1389 "simple-bison-code.c"
    break;

  case 30: /* expr: LPAR PRINTOUT LPAR exprGROUPS RPAR RPAR  */
#line 102 "simple-bison-code.y"
                                                  { }
#line 1395 "simple-bison-code.c"
    break;

  case 31: /* exprVALUE: INTCONST  */
#line 106 "simple-bison-code.y"
                 { }
#line 1401 "simple-bison-code.c"
    break;

  case 32: /* exprVALUE: DOUBLE  */
#line 107 "simple-bison-code.y"
                 { }
#line 1407 "simple-bison-code.c"
    break;

  case 33: /* exprVALUE: STRING  */
#line 108 "simple-bison-code.y"
                 { }
#line 1413 "simple-bison-code.c"
    break;

  case 34: /* exprVALUE: LPAR READ RPAR  */
#line 109 "simple-bison-code.y"
                         { }
#line 1419 "simple-bison-code.c"
    break;

  case 35: /* exprVALUE: exprINT  */
#line 110 "simple-bison-code.y"
                  { }
#line 1425 "simple-bison-code.c"
    break;

  case 36: /* exprVALUE: exprDOUBLE  */
#line 111 "simple-bison-code.y"
                     { }
#line 1431 "simple-bison-code.c"
    break;

  case 37: /* exprVALUE: exprCOMPARISON  */
#line 112 "simple-bison-code.y"
                         { }
#line 1437 "simple-bison-code.c"
    break;

  case 38: /* exprINT: INTCONST  */
#line 116 "simple-bison-code.y"
                 {  }
#line 1443 "simple-bison-code.c"
    break;

  case 39: /* exprINT: VARIABLE  */
#line 117 "simple-bison-code.y"
                   { }
#line 1449 "simple-bison-code.c"
    break;

  case 40: /* exprINT: LPAR PLUS exprINT exprINT RPAR  */
#line 118 "simple-bison-code.y"
                                         { }
#line 1455 "simple-bison-code.c"
    break;

  case 41: /* exprINT: LPAR MINUS exprINT exprINT RPAR  */
#line 119 "simple-bison-code.y"
                                          { }
#line 1461 "simple-bison-code.c"
    break;

  case 42: /* exprINT: LPAR MULT exprINT exprINT RPAR  */
#line 120 "simple-bison-code.y"
                                         { }
#line 1467 "simple-bison-code.c"
    break;

  case 43: /* exprINT: LPAR DIV exprINT exprINT RPAR  */
#line 121 "simple-bison-code.y"
                                        { }
#line 1473 "simple-bison-code.c"
    break;

  case 44: /* exprDOUBLE: DOUBLE  */
#line 125 "simple-bison-code.y"
               {  }
#line 1479 "simple-bison-code.c"
    break;

  case 45: /* exprDOUBLE: VARIABLE  */
#line 126 "simple-bison-code.y"
                   { }
#line 1485 "simple-bison-code.c"
    break;

  case 46: /* exprDOUBLE: LPAR PLUS exprDOUBLE exprDOUBLE RPAR  */
#line 127 "simple-bison-code.y"
                                               { }
#line 1491 "simple-bison-code.c"
    break;

  case 47: /* exprDOUBLE: LPAR MINUS exprDOUBLE exprDOUBLE RPAR  */
#line 128 "simple-bison-code.y"
                                                { }
#line 1497 "simple-bison-code.c"
    break;

  case 48: /* exprDOUBLE: LPAR MULT exprDOUBLE exprDOUBLE RPAR  */
#line 129 "simple-bison-code.y"
                                               { }
#line 1503 "simple-bison-code.c"
    break;

  case 49: /* exprDOUBLE: LPAR DIV exprDOUBLE exprDOUBLE RPAR  */
#line 130 "simple-bison-code.y"
                                              { }
#line 1509 "simple-bison-code.c"
    break;

  case 50: /* exprDOUBLE: LPAR PLUS exprINT exprDOUBLE RPAR  */
#line 131 "simple-bison-code.y"
                                            { }
#line 1515 "simple-bison-code.c"
    break;

  case 51: /* exprDOUBLE: LPAR PLUS exprDOUBLE exprINT RPAR  */
#line 132 "simple-bison-code.y"
                                            { }
#line 1521 "simple-bison-code.c"
    break;

  case 52: /* exprDOUBLE: LPAR MINUS exprINT exprDOUBLE RPAR  */
#line 133 "simple-bison-code.y"
                                             { }
#line 1527 "simple-bison-code.c"
    break;

  case 53: /* exprDOUBLE: LPAR MINUS exprDOUBLE exprINT RPAR  */
#line 134 "simple-bison-code.y"
                                             { }
#line 1533 "simple-bison-code.c"
    break;

  case 54: /* exprDOUBLE: LPAR MULT exprINT exprDOUBLE RPAR  */
#line 135 "simple-bison-code.y"
                                            { }
#line 1539 "simple-bison-code.c"
    break;

  case 55: /* exprDOUBLE: LPAR MULT exprDOUBLE exprINT RPAR  */
#line 136 "simple-bison-code.y"
                                            { }
#line 1545 "simple-bison-code.c"
    break;

  case 56: /* exprDOUBLE: LPAR DIV exprINT exprDOUBLE RPAR  */
#line 137 "simple-bison-code.y"
                                           { }
#line 1551 "simple-bison-code.c"
    break;

  case 57: /* exprDOUBLE: LPAR DIV exprDOUBLE exprINT RPAR  */
#line 138 "simple-bison-code.y"
                                           { }
#line 1557 "simple-bison-code.c"
    break;

  case 58: /* exprCOMPARISON: LPAR EQUALS exprINT exprINT RPAR  */
#line 142 "simple-bison-code.y"
                                         { }
#line 1563 "simple-bison-code.c"
    break;

  case 59: /* exprCOMPARISON: LPAR EQUALS exprDOUBLE exprDOUBLE RPAR  */
#line 143 "simple-bison-code.y"
                                                 { }
#line 1569 "simple-bison-code.c"
    break;

  case 60: /* exprCOMPARISON: LPAR EQUALS VARIABLE exprINT RPAR  */
#line 144 "simple-bison-code.y"
                                            { }
#line 1575 "simple-bison-code.c"
    break;

  case 61: /* exprCOMPARISON: LPAR EQUALS exprINT VARIABLE RPAR  */
#line 145 "simple-bison-code.y"
                                            { }
#line 1581 "simple-bison-code.c"
    break;

  case 62: /* exprCOMPARISON: LPAR EQUALS VARIABLE VARIABLE RPAR  */
#line 146 "simple-bison-code.y"
                                             { }
#line 1587 "simple-bison-code.c"
    break;


#line 1591 "simple-bison-code.c"

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

#line 173 "simple-bison-code.y"


void yyerror(const char *msg) {
    fprintf(stderr, "Bison ERROR on line: %d with error message: %s\n", line, msg);
    countFatalErrors++;
}

/* Όταν ξεκινήσει το πρόγραμμα καλεί απευθείας το yyparse() για να
ξεκινήσει η ανάλυση */
int main(void)  {
        yyparse();
        printf("\n");
        /* Αποτελέσματα λεκτικής και συντακτικής ανάλυσης */
        printf("Correct tokens = %d\n", countCorrectTokens);
        printf("Correct expressions = %d\n", countCorrectExpr);
        printf("Wrong tokens = %d\n", countWrongTokens);
        printf("Wrong expressions = %d\n", countWrongExpr);
        printf("Fatal error(s) = %d\n", countFatalErrors);
        return 0;
}
