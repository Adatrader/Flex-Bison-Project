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
#line 1 "toy.y"


#include <stdio.h>
void yyerror(char *s);
extern int yylex();
int ACCEPT_FLAG = 0;


#line 79 "toy.tab.c"

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
#ifndef YY_YY_TOY_TAB_H_INCLUDED
# define YY_YY_TOY_TAB_H_INCLUDED
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
    _leftbracket = 258,
    _period = 259,
    _not = 260,
    _unaryminus = 261,
    _plus = 262,
    _minus = 263,
    _multiplication = 264,
    _division = 265,
    _mod = 266,
    _less = 267,
    _lessequal = 268,
    _greater = 269,
    _greaterequal = 270,
    _equal = 271,
    _notequal = 272,
    _and = 273,
    _or = 274,
    _assignop = 275,
    _boolean = 276,
    _break = 277,
    _class = 278,
    _double = 279,
    _else = 280,
    _extends = 281,
    _for = 282,
    _if = 283,
    _implements = 284,
    _int = 285,
    _interface = 286,
    _new = 287,
    _newarray = 288,
    _null = 289,
    _println = 290,
    _readln = 291,
    _return = 292,
    _string = 293,
    _this = 294,
    _void = 295,
    _while = 296,
    _semicolon = 297,
    _comma = 298,
    _leftparen = 299,
    _rightparen = 300,
    _rightbracket = 301,
    _leftbrace = 302,
    _rightbrace = 303,
    _intconstant = 304,
    _doubleconstant = 305,
    _stringconstant = 306,
    _booleanconstant = 307,
    _id = 308,
    _exponent = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_TOY_TAB_H_INCLUDED  */



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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  218

#define YYUNDEFTOK  2
#define YYMAXUTOK   309


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    88,    88,    91,    93,    94,    97,    98,    99,   100,
     103,   104,   105,   108,   109,   114,   115,   116,   117,   118,
     119,   120,   123,   124,   127,   128,   131,   132,   133,   136,
     138,   139,   140,   141,   143,   144,   146,   147,   151,   152,
     153,   157,   159,   160,   164,   165,   169,   170,   172,   173,
     175,   176,   180,   181,   182,   183,   184,   185,   186,   187,
     189,   190,   194,   195,   197,   198,   202,   206,   207,   208,
     212,   216,   220,   222,   223,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   253,   254,
     255,   259,   260,   264,   265,   269,   270,   271,   272,   273,
     274
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_leftbracket", "_period", "_not",
  "_unaryminus", "_plus", "_minus", "_multiplication", "_division", "_mod",
  "_less", "_lessequal", "_greater", "_greaterequal", "_equal",
  "_notequal", "_and", "_or", "_assignop", "_boolean", "_break", "_class",
  "_double", "_else", "_extends", "_for", "_if", "_implements", "_int",
  "_interface", "_new", "_newarray", "_null", "_println", "_readln",
  "_return", "_string", "_this", "_void", "_while", "_semicolon", "_comma",
  "_leftparen", "_rightparen", "_rightbracket", "_leftbrace",
  "_rightbrace", "_intconstant", "_doubleconstant", "_stringconstant",
  "_booleanconstant", "_id", "_exponent", "$accept", "START", "PROGRAM",
  "DECLP", "DECL", "VARIABLEDECL", "VARIABLE", "TYPE", "FUNCTIONDECL",
  "FORMALS", "VARIABLEPC", "CLASSDECL", "CLASSDECLO", "IDPC", "FIELDM",
  "FIELD", "INTERFACEDECL", "PROTOTYPEM", "PROTOTYPE", "STMTBLOCK",
  "VARIABLEDECLM", "STMTM", "STMT", "EXPRO", "IFSTMT", "ELSESTMTO",
  "WHILESTMT", "FORSTMT", "BREAKSTMT", "RETURNSTMT", "PRINTSTMT", "EXPRPC",
  "EXPR", "LVALUE", "CALL", "ACTUALS", "CONSTANT", YY_NULLPTR
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
     305,   306,   307,   308,   309
};
# endif

#define YYPACT_NINF (-164)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-62)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     454,  -164,   -34,  -164,  -164,   -33,  -164,    19,   -29,    22,
      28,  -164,  -164,   454,  -164,    -3,     5,  -164,  -164,  -164,
      -8,     1,  -164,     9,    91,  -164,  -164,   354,  -164,     4,
      10,     3,    12,    38,    68,    80,    91,    91,    42,  -164,
      47,  -164,    91,  -164,  -164,  -164,  -164,     8,  -164,   532,
      43,  -164,  -164,    52,  -164,    80,    71,    54,  -164,   149,
      49,  -164,    30,    55,    68,   475,    80,    34,    72,  -164,
     532,   429,    67,    75,   353,    69,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    73,    91,  -164,    83,    12,    12,    87,    88,    90,
      92,    91,    19,    93,   465,    40,  -164,  -164,    98,   149,
    -164,  -164,   257,    89,  -164,  -164,  -164,  -164,  -164,  -164,
     532,   105,   107,  -164,  -164,    80,  -164,  -164,   106,   109,
    -164,  -164,   111,  -164,   418,   117,   429,   429,   377,   377,
     377,   439,   439,   439,   439,   142,   142,   137,  -164,   340,
    -164,  -164,   106,  -164,  -164,  -164,    91,    91,    91,   123,
      91,   475,   118,   222,  -164,  -164,  -164,  -164,    80,    80,
    -164,  -164,   485,    91,    91,  -164,  -164,  -164,   125,   366,
     124,  -164,   405,  -164,  -164,   475,   129,   130,     6,   133,
    -164,    91,   257,   126,   257,   132,   152,   155,  -164,  -164,
     455,   179,  -164,  -164,  -164,  -164,  -164,    91,   257,  -164,
     160,  -164,   292,   187,  -164,  -164,   158,  -164
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    17,     0,    16,    15,     0,    18,     0,     0,    20,
       0,     2,     3,     5,     6,     0,     0,     7,     8,     9,
      33,     0,    21,     0,     0,     1,     4,     0,    10,     0,
      13,     0,     0,     0,    43,    25,     0,     0,     0,   110,
       0,    78,     0,   105,   106,   107,   108,    98,   109,    14,
      77,    79,    76,    11,    19,    25,    30,    35,    31,    37,
       0,    20,     0,     0,    43,     0,    28,     0,     0,    24,
      95,    86,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,     0,     0,     0,     0,     0,     0,
       0,    61,    78,     0,    49,    98,    38,    39,     0,    37,
      59,    40,    51,     0,    53,    54,    55,    56,    57,    58,
      60,     0,     0,    41,    42,    28,    27,    13,     0,     0,
      96,    80,     0,   103,    74,     0,    81,    82,    83,    84,
      85,    87,    88,    89,    90,    91,    92,    93,    94,     0,
     100,    75,     0,    32,    34,    70,    61,     0,     0,     0,
       0,    49,     0,    51,    29,    36,    50,    52,    25,    25,
      26,    23,     0,   104,     0,   101,    99,    22,     0,     0,
       0,    71,     0,    48,    47,    49,     0,     0,     0,     0,
      73,     0,    61,     0,    61,     0,     0,     0,    97,   102,
       0,    62,    72,    66,    46,    45,    44,    61,    61,    63,
       0,    64,    61,    49,    59,    68,     0,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,   194,  -164,     2,   -30,     0,   -21,   -54,
     -44,  -101,  -164,   -85,   103,  -164,  -164,   154,  -164,  -122,
    -145,  -108,  -163,   -94,  -164,  -164,  -164,  -164,  -164,  -164,
    -164,  -117,   -10,  -164,  -164,    46,   186
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    10,    11,    12,    13,   161,    15,    67,    17,    68,
      69,    18,    33,    58,   108,   109,    19,    63,    64,   110,
     163,   111,   112,   113,   114,   209,   115,   116,   117,   118,
     119,   133,   120,    50,    51,   135,    52
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    94,    14,   162,   166,    66,   171,   159,    29,    29,
     153,   154,    75,    16,    49,    14,   183,    27,    31,    20,
      21,    32,   126,    22,    23,    66,    70,    71,    25,   201,
     177,   203,    74,    29,    62,   125,    66,    29,   107,    28,
     195,   180,    24,   -20,    75,   211,    90,    91,    34,   215,
      54,   198,    76,    35,    55,   185,    56,   190,    30,    16,
      24,   106,   178,    92,    62,    57,   134,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   170,   151,   122,    76,    59,    72,   127,   107,     1,
     214,    73,     3,   -20,    93,    66,    36,    96,     4,    37,
      95,     1,   121,   123,     3,   216,     6,     7,    60,    16,
       4,   106,   162,   210,   186,   187,   129,   128,     6,     7,
     130,    61,   132,    65,    38,    39,   150,    40,   152,   155,
      41,   167,   156,     9,   157,    42,   158,   160,    66,    66,
      43,    44,    45,    46,    47,    48,   164,   179,   134,   168,
     182,   169,   172,   104,    36,   173,    89,    37,   -62,   -62,
      88,    89,   175,   134,   134,   181,   184,   191,   202,   193,
       1,    97,   188,     3,   196,   197,    98,    99,   199,     4,
     204,   200,    38,    39,   100,    40,   101,     6,   102,     8,
     103,   -51,    36,    42,   205,    37,   104,   206,    43,    44,
      45,    46,   105,    48,   208,   212,   217,    26,     1,    97,
       2,     3,   165,    53,    98,    99,     0,     4,   124,   189,
      38,    39,   100,    40,   101,     6,   102,    36,   103,     0,
      37,    42,     0,     0,   104,     0,    43,    44,    45,    46,
     105,    48,     0,     0,    97,     0,     0,     0,     0,    98,
      99,     0,     0,     0,     0,    38,    39,   100,    40,   101,
       0,    41,    36,   103,   -61,    37,    42,     0,     0,   104,
       0,    43,    44,    45,    46,    47,    48,     0,     0,    97,
       0,     0,     0,     0,    98,    99,     0,     0,     0,     0,
      38,    39,   100,    40,   101,     0,    41,    36,   103,     0,
      37,    42,     0,     0,   104,     0,    43,    44,    45,    46,
      47,    48,     0,     0,    97,     0,     0,     0,     0,    98,
      99,     0,     0,     0,     0,    38,    39,   100,    40,   101,
       0,    41,     0,   103,     0,     0,    42,     0,     0,   213,
       0,    43,    44,    45,    46,    47,    48,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,   176,     0,    39,    82,
      83,    84,    85,    86,    87,    88,    89,     0,   131,     0,
       0,     0,     0,    43,    44,    45,    46,     0,    48,     0,
       0,   192,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,     0,
     194,   -62,   -62,   -62,   -62,    86,    87,    88,    89,     0,
       0,   174,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,     1,     0,     2,     3,     0,
       0,     0,     0,     0,     4,     5,     1,     0,     2,     3,
       0,     0,     6,     7,     8,     4,     1,   207,     0,     3,
       0,     0,     0,     6,     7,     4,     1,     9,     0,     3,
       0,     0,     0,     6,     7,     4,     0,     0,     9,     0,
       0,     0,     0,     6,     7,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89
};

static const yytype_int16 yycheck[] =
{
       0,    55,     0,   104,   112,    35,   128,   101,     3,     3,
      95,    96,     4,    13,    24,    13,   161,    20,    26,    53,
      53,    29,    66,     4,    53,    55,    36,    37,     0,   192,
     152,   194,    42,     3,    34,    65,    66,     3,    59,    42,
     185,   158,    20,     3,     4,   208,     3,     4,    47,   212,
      46,    45,    44,    44,    44,   163,    53,   174,    53,    59,
      20,    59,   156,    20,    64,    53,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   125,    92,    53,    44,    47,    44,    53,   109,    21,
     212,    44,    24,    53,    42,   125,     5,    43,    30,     8,
      29,    21,    53,    48,    24,   213,    38,    39,    40,   109,
      30,   109,   213,   207,   168,   169,    49,    45,    38,    39,
      45,    53,    53,    43,    33,    34,    53,    36,    45,    42,
      39,    42,    44,    53,    44,    44,    44,    44,   168,   169,
      49,    50,    51,    52,    53,    54,    48,   157,   158,    44,
     160,    44,    43,    47,     5,    44,    19,     8,    16,    17,
      18,    19,    45,   173,   174,    42,    48,    42,    42,    45,
      21,    22,   172,    24,    45,    45,    27,    28,    45,    30,
      48,   191,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,     5,    44,    42,     8,    47,    42,    49,    50,
      51,    52,    53,    54,    25,    45,    48,    13,    21,    22,
      23,    24,   109,    27,    27,    28,    -1,    30,    64,   173,
      33,    34,    35,    36,    37,    38,    39,     5,    41,    -1,
       8,    44,    -1,    -1,    47,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,     5,    41,    42,     8,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    27,    28,    -1,    -1,    -1,    -1,
      33,    34,    35,    36,    37,    -1,    39,     5,    41,    -1,
       8,    44,    -1,    -1,    47,    -1,    49,    50,    51,    52,
      53,    54,    -1,    -1,    22,    -1,    -1,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    49,    50,    51,    52,    53,    54,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    46,    -1,    34,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    45,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    -1,    54,    -1,
      -1,    45,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      45,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    43,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    21,    -1,    23,    24,    -1,
      -1,    -1,    -1,    -1,    30,    31,    21,    -1,    23,    24,
      -1,    -1,    38,    39,    40,    30,    21,    42,    -1,    24,
      -1,    -1,    -1,    38,    39,    30,    21,    53,    -1,    24,
      -1,    -1,    -1,    38,    39,    30,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    23,    24,    30,    31,    38,    39,    40,    53,
      56,    57,    58,    59,    60,    61,    62,    63,    66,    71,
      53,    53,     4,    53,    20,     0,    58,    20,    42,     3,
      53,    26,    29,    67,    47,    44,     5,     8,    33,    34,
      36,    39,    44,    49,    50,    51,    52,    53,    54,    87,
      88,    89,    91,    91,    46,    44,    53,    53,    68,    47,
      40,    53,    62,    72,    73,    43,    61,    62,    64,    65,
      87,    87,    44,    44,    87,     4,    44,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       3,     4,    20,    42,    64,    29,    43,    22,    27,    28,
      35,    37,    39,    41,    47,    53,    60,    63,    69,    70,
      74,    76,    77,    78,    79,    81,    82,    83,    84,    85,
      87,    53,    53,    48,    72,    61,    65,    53,    45,    49,
      45,    45,    53,    86,    87,    90,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      53,    87,    45,    68,    68,    42,    44,    44,    44,    78,
      44,    60,    66,    75,    48,    69,    76,    42,    44,    44,
      65,    74,    43,    44,    43,    45,    46,    74,    78,    87,
      86,    42,    87,    75,    48,    76,    64,    64,    62,    90,
      86,    42,    45,    45,    45,    75,    45,    45,    45,    45,
      87,    77,    42,    77,    48,    42,    42,    42,    25,    80,
      78,    77,    45,    47,    74,    77,    76,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    63,    63,    64,    64,    65,    65,    65,    66,
      67,    67,    67,    67,    68,    68,    69,    69,    70,    70,
      70,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    77,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    82,    82,    82,
      83,    84,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    90,    90,    91,    91,    91,    91,    91,
      91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     4,     2,     3,     1,     1,     1,     1,     3,
       1,     2,     6,     6,     1,     0,     3,     2,     0,     6,
       2,     2,     4,     0,     3,     1,     2,     0,     1,     1,
       1,     5,     2,     0,     6,     6,     5,     3,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     5,     6,     2,     0,     5,    11,     9,     9,
       2,     3,     5,     3,     1,     3,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     3,     6,     1,     4,
       3,     4,     6,     1,     0,     1,     1,     1,     1,     1,
       1
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
#line 88 "toy.y"
                                        {printf("\n[accept]\n"); ACCEPT_FLAG = 1;}
#line 1579 "toy.tab.c"
    break;

  case 3:
#line 91 "toy.y"
                                      {printf("[reduce 1]");}
#line 1585 "toy.tab.c"
    break;

  case 4:
#line 93 "toy.y"
                                           {printf("[reduce 2]");}
#line 1591 "toy.tab.c"
    break;

  case 5:
#line 94 "toy.y"
                                     {printf("[reduce 3]");}
#line 1597 "toy.tab.c"
    break;

  case 6:
#line 97 "toy.y"
                                             {printf("[reduce 4]");}
#line 1603 "toy.tab.c"
    break;

  case 7:
#line 98 "toy.y"
                                             {printf("[reduce 5]");}
#line 1609 "toy.tab.c"
    break;

  case 8:
#line 99 "toy.y"
                                          {printf("[reduce 6]");}
#line 1615 "toy.tab.c"
    break;

  case 9:
#line 100 "toy.y"
                                              {printf("[reduce 7]");}
#line 1621 "toy.tab.c"
    break;

  case 10:
#line 103 "toy.y"
                                                    {printf("[reduce 8]");}
#line 1627 "toy.tab.c"
    break;

  case 11:
#line 104 "toy.y"
                                                            {printf("[reduce 9]");}
#line 1633 "toy.tab.c"
    break;

  case 12:
#line 105 "toy.y"
                                                                       {printf("[reduce 10]");}
#line 1639 "toy.tab.c"
    break;

  case 13:
#line 108 "toy.y"
                                         {printf("[reduce 11]");}
#line 1645 "toy.tab.c"
    break;

  case 14:
#line 109 "toy.y"
                                                   {printf("[reduce 12]");}
#line 1651 "toy.tab.c"
    break;

  case 15:
#line 114 "toy.y"
                                     {printf("[reduce 13]");}
#line 1657 "toy.tab.c"
    break;

  case 16:
#line 115 "toy.y"
                                        {printf("[reduce 14]");}
#line 1663 "toy.tab.c"
    break;

  case 17:
#line 116 "toy.y"
                                         {printf("[reduce 15]");}
#line 1669 "toy.tab.c"
    break;

  case 18:
#line 117 "toy.y"
                                        {printf("[reduce 16]");}
#line 1675 "toy.tab.c"
    break;

  case 19:
#line 118 "toy.y"
                                                                {printf("[reduce 17]");}
#line 1681 "toy.tab.c"
    break;

  case 20:
#line 119 "toy.y"
                                    {printf("[reduce 18]");}
#line 1687 "toy.tab.c"
    break;

  case 21:
#line 120 "toy.y"
                                              {printf("[reduce 19]");}
#line 1693 "toy.tab.c"
    break;

  case 22:
#line 123 "toy.y"
                                                                                  {printf("[reduce 20]");}
#line 1699 "toy.tab.c"
    break;

  case 23:
#line 124 "toy.y"
                                                                                   {printf("[reduce 21]");}
#line 1705 "toy.tab.c"
    break;

  case 24:
#line 127 "toy.y"
                                           {printf("[reduce 22]");}
#line 1711 "toy.tab.c"
    break;

  case 25:
#line 128 "toy.y"
                                {printf("[reduce 23]");}
#line 1717 "toy.tab.c"
    break;

  case 26:
#line 131 "toy.y"
                                                                {printf("[reduce 24]");}
#line 1723 "toy.tab.c"
    break;

  case 27:
#line 132 "toy.y"
                                                    {printf("[reduce 25]");}
#line 1729 "toy.tab.c"
    break;

  case 28:
#line 133 "toy.y"
                                {printf("[reduce 26]");}
#line 1735 "toy.tab.c"
    break;

  case 29:
#line 136 "toy.y"
                                                                                    {printf("[reduce 27]");}
#line 1741 "toy.tab.c"
    break;

  case 30:
#line 138 "toy.y"
                                             {printf("[reduce 28]");}
#line 1747 "toy.tab.c"
    break;

  case 31:
#line 139 "toy.y"
                                                 {printf("[reduce 29]");}
#line 1753 "toy.tab.c"
    break;

  case 32:
#line 140 "toy.y"
                                                              {printf("[reduce 30]");}
#line 1759 "toy.tab.c"
    break;

  case 33:
#line 141 "toy.y"
                                {printf("[reduce 31]");}
#line 1765 "toy.tab.c"
    break;

  case 34:
#line 143 "toy.y"
                                                {printf("[reduce 32]");}
#line 1771 "toy.tab.c"
    break;

  case 35:
#line 144 "toy.y"
                                    {printf("[reduce 33]");}
#line 1777 "toy.tab.c"
    break;

  case 36:
#line 146 "toy.y"
                                             {printf("[reduce 34]");}
#line 1783 "toy.tab.c"
    break;

  case 37:
#line 147 "toy.y"
                                {printf("[reduce 35]");}
#line 1789 "toy.tab.c"
    break;

  case 38:
#line 151 "toy.y"
                                             {printf("[reduce 36]");}
#line 1795 "toy.tab.c"
    break;

  case 39:
#line 152 "toy.y"
                                             {printf("[reduce 37]");}
#line 1801 "toy.tab.c"
    break;

  case 40:
#line 153 "toy.y"
                                      {printf("[reduce 38]");}
#line 1807 "toy.tab.c"
    break;

  case 41:
#line 157 "toy.y"
                                                                                 {printf("[reduce 39]");}
#line 1813 "toy.tab.c"
    break;

  case 42:
#line 159 "toy.y"
                                                     {printf("[reduce 40]");}
#line 1819 "toy.tab.c"
    break;

  case 43:
#line 160 "toy.y"
                                {printf("[reduce 41]");}
#line 1825 "toy.tab.c"
    break;

  case 44:
#line 164 "toy.y"
                                                                                   {printf("[reduce 42]");}
#line 1831 "toy.tab.c"
    break;

  case 45:
#line 165 "toy.y"
                                                                                    {printf("[reduce 43]");}
#line 1837 "toy.tab.c"
    break;

  case 46:
#line 169 "toy.y"
                                                                                         {printf("[reduce 44]");}
#line 1843 "toy.tab.c"
    break;

  case 47:
#line 170 "toy.y"
                                                                 {printf("[reduce 45]");}
#line 1849 "toy.tab.c"
    break;

  case 48:
#line 172 "toy.y"
                                                           {printf("[reduce 46]");}
#line 1855 "toy.tab.c"
    break;

  case 49:
#line 173 "toy.y"
                                {printf("[reduce 47]");}
#line 1861 "toy.tab.c"
    break;

  case 50:
#line 175 "toy.y"
                                           {printf("[reduce 48]");}
#line 1867 "toy.tab.c"
    break;

  case 51:
#line 176 "toy.y"
                                {printf("[reduce 49]");}
#line 1873 "toy.tab.c"
    break;

  case 52:
#line 180 "toy.y"
                                                 {printf("[reduce 50]");}
#line 1879 "toy.tab.c"
    break;

  case 53:
#line 181 "toy.y"
                                       {printf("[reduce 51]");}
#line 1885 "toy.tab.c"
    break;

  case 54:
#line 182 "toy.y"
                                          {printf("[reduce 52]");}
#line 1891 "toy.tab.c"
    break;

  case 55:
#line 183 "toy.y"
                                        {printf("[reduce 53]");}
#line 1897 "toy.tab.c"
    break;

  case 56:
#line 184 "toy.y"
                                          {printf("[reduce 54]");}
#line 1903 "toy.tab.c"
    break;

  case 57:
#line 185 "toy.y"
                                           {printf("[reduce 55]");}
#line 1909 "toy.tab.c"
    break;

  case 58:
#line 186 "toy.y"
                                          {printf("[reduce 56]");}
#line 1915 "toy.tab.c"
    break;

  case 59:
#line 187 "toy.y"
                                          {printf("[reduce 57]");}
#line 1921 "toy.tab.c"
    break;

  case 60:
#line 189 "toy.y"
                                     {printf("[reduce 58]");}
#line 1927 "toy.tab.c"
    break;

  case 61:
#line 190 "toy.y"
                                {printf("[reduce 59]");}
#line 1933 "toy.tab.c"
    break;

  case 62:
#line 194 "toy.y"
                                                                     {printf("[reduce 60]");}
#line 1939 "toy.tab.c"
    break;

  case 63:
#line 195 "toy.y"
                                                                               {printf("[reduce 61]");}
#line 1945 "toy.tab.c"
    break;

  case 64:
#line 197 "toy.y"
                                           {printf("[reduce 62]");}
#line 1951 "toy.tab.c"
    break;

  case 65:
#line 198 "toy.y"
                                {printf("[reduce 63]");}
#line 1957 "toy.tab.c"
    break;

  case 66:
#line 202 "toy.y"
                                                                        {printf("[reduce 64]");}
#line 1963 "toy.tab.c"
    break;

  case 67:
#line 206 "toy.y"
                                                                                                                                {printf("[reduce 65]");}
#line 1969 "toy.tab.c"
    break;

  case 68:
#line 207 "toy.y"
                                                                                                        {printf("[reduce 66]");}
#line 1975 "toy.tab.c"
    break;

  case 69:
#line 208 "toy.y"
                                                                                                             {printf("[reduce 67]");}
#line 1981 "toy.tab.c"
    break;

  case 70:
#line 212 "toy.y"
                                                  {printf("[reduce 68]");}
#line 1987 "toy.tab.c"
    break;

  case 71:
#line 216 "toy.y"
                                                         {printf("[reduce 69]");}
#line 1993 "toy.tab.c"
    break;

  case 72:
#line 220 "toy.y"
                                                                                  {printf("[reduce 70]");}
#line 1999 "toy.tab.c"
    break;

  case 73:
#line 222 "toy.y"
                                                   {printf("[reduce 71]");}
#line 2005 "toy.tab.c"
    break;

  case 74:
#line 223 "toy.y"
                                     {printf("[reduce 72]");}
#line 2011 "toy.tab.c"
    break;

  case 75:
#line 227 "toy.y"
                                                      {printf("[reduce 73]");}
#line 2017 "toy.tab.c"
    break;

  case 76:
#line 228 "toy.y"
                                         {printf("[reduce 74]");}
#line 2023 "toy.tab.c"
    break;

  case 77:
#line 229 "toy.y"
                                       {printf("[reduce 75]");}
#line 2029 "toy.tab.c"
    break;

  case 78:
#line 230 "toy.y"
                                      {printf("[reduce 76]");}
#line 2035 "toy.tab.c"
    break;

  case 79:
#line 231 "toy.y"
                                     {printf("[reduce 77]");}
#line 2041 "toy.tab.c"
    break;

  case 80:
#line 232 "toy.y"
                                                            {printf("[reduce 78]");}
#line 2047 "toy.tab.c"
    break;

  case 81:
#line 233 "toy.y"
                                                {printf("[reduce 79]");}
#line 2053 "toy.tab.c"
    break;

  case 82:
#line 234 "toy.y"
                                                 {printf("[reduce 80]");}
#line 2059 "toy.tab.c"
    break;

  case 83:
#line 235 "toy.y"
                                                          {printf("[reduce 81]");}
#line 2065 "toy.tab.c"
    break;

  case 84:
#line 236 "toy.y"
                                                    {printf("[reduce 82]");}
#line 2071 "toy.tab.c"
    break;

  case 85:
#line 237 "toy.y"
                                               {printf("[reduce 83]");}
#line 2077 "toy.tab.c"
    break;

  case 86:
#line 238 "toy.y"
                                            {printf("[reduce 84]");}
#line 2083 "toy.tab.c"
    break;

  case 87:
#line 239 "toy.y"
                                                {printf("[reduce 85]");}
#line 2089 "toy.tab.c"
    break;

  case 88:
#line 240 "toy.y"
                                                     {printf("[reduce 86]");}
#line 2095 "toy.tab.c"
    break;

  case 89:
#line 241 "toy.y"
                                                   {printf("[reduce 87]");}
#line 2101 "toy.tab.c"
    break;

  case 90:
#line 242 "toy.y"
                                                        {printf("[reduce 88]");}
#line 2107 "toy.tab.c"
    break;

  case 91:
#line 243 "toy.y"
                                                 {printf("[reduce 89]");}
#line 2113 "toy.tab.c"
    break;

  case 92:
#line 244 "toy.y"
                                                    {printf("[reduce 90]");}
#line 2119 "toy.tab.c"
    break;

  case 93:
#line 245 "toy.y"
                                               {printf("[reduce 91]");}
#line 2125 "toy.tab.c"
    break;

  case 94:
#line 246 "toy.y"
                                              {printf("[reduce 92]");}
#line 2131 "toy.tab.c"
    break;

  case 95:
#line 247 "toy.y"
                                          {printf("[reduce 93]");}
#line 2137 "toy.tab.c"
    break;

  case 96:
#line 248 "toy.y"
                                                               {printf("[reduce 94]");}
#line 2143 "toy.tab.c"
    break;

  case 97:
#line 249 "toy.y"
                                                                                          {printf("[reduce 95]");}
#line 2149 "toy.tab.c"
    break;

  case 98:
#line 253 "toy.y"
                                    {printf("[reduce 96]");}
#line 2155 "toy.tab.c"
    break;

  case 99:
#line 254 "toy.y"
                                                                       {printf("[reduce 97]");}
#line 2161 "toy.tab.c"
    break;

  case 100:
#line 255 "toy.y"
                                                   {printf("[reduce 98]");}
#line 2167 "toy.tab.c"
    break;

  case 101:
#line 259 "toy.y"
                                                                   {printf("[reduce 99]");}
#line 2173 "toy.tab.c"
    break;

  case 102:
#line 260 "toy.y"
                                                                               {printf("[reduce 100]");}
#line 2179 "toy.tab.c"
    break;

  case 103:
#line 264 "toy.y"
                                       {printf("[reduce 101]");}
#line 2185 "toy.tab.c"
    break;

  case 104:
#line 265 "toy.y"
                                {printf("[reduce 102]");}
#line 2191 "toy.tab.c"
    break;

  case 105:
#line 269 "toy.y"
                                             {printf("[reduce 103]");}
#line 2197 "toy.tab.c"
    break;

  case 106:
#line 270 "toy.y"
                                                {printf("[reduce 104]");}
#line 2203 "toy.tab.c"
    break;

  case 107:
#line 271 "toy.y"
                                                {printf("[reduce 105]");}
#line 2209 "toy.tab.c"
    break;

  case 108:
#line 272 "toy.y"
                                                 {printf("[reduce 106]");}
#line 2215 "toy.tab.c"
    break;

  case 109:
#line 273 "toy.y"
                                          {printf("[reduce 107]");}
#line 2221 "toy.tab.c"
    break;

  case 110:
#line 274 "toy.y"
                                      {printf("[reduce 108]");}
#line 2227 "toy.tab.c"
    break;


#line 2231 "toy.tab.c"

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
#line 276 "toy.y"


void yyerror(char *s) {
	// fprintf(stderr, "%s\n", s);
	if (ACCEPT_FLAG == 0)
 		printf("\n[reject]\n");
}

int main(){
    yyparse();
    return 0;
}
