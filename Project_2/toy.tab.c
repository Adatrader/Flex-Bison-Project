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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   460

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  212

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
       0,    87,    87,    90,    92,    93,    96,    97,    98,    99,
     102,   103,   104,   107,   108,   113,   114,   115,   116,   117,
     118,   121,   122,   125,   126,   129,   130,   131,   134,   136,
     137,   138,   139,   141,   142,   144,   145,   149,   150,   154,
     156,   157,   161,   162,   166,   168,   169,   171,   172,   176,
     177,   178,   179,   180,   181,   182,   183,   185,   186,   190,
     192,   193,   197,   201,   202,   203,   207,   211,   215,   217,
     218,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   248,   249,   250,   254,   255,   259,
     260,   264,   265,   266,   267,   268,   269
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

#define YYPACT_NINF (-158)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-59)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     390,  -158,   -30,  -158,  -158,   -26,  -158,   -24,    -3,    34,
    -158,  -158,   390,  -158,   -14,     1,  -158,  -158,  -158,    -5,
      -4,    16,    47,  -158,  -158,   290,  -158,    56,    20,    60,
      72,    91,    84,   394,     7,  -158,  -158,  -158,  -158,  -158,
    -158,  -158,   107,  -158,   394,   121,   109,  -158,   177,   100,
    -158,     4,   110,    84,    14,   394,     5,   114,  -158,   102,
     228,  -158,   115,    72,    72,  -158,  -158,   116,   177,   119,
     122,  -158,  -158,   394,  -158,  -158,   132,   138,   228,   228,
     145,   146,  -158,   228,     7,  -158,   354,    11,  -158,   147,
    -158,   132,  -158,  -158,  -158,  -158,   394,   394,  -158,    14,
    -158,   228,   441,   365,   144,   149,   289,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   142,   228,  -158,  -158,   154,   155,    14,   134,
     166,   171,  -158,  -158,   365,   365,    79,    79,    79,   313,
     313,   313,   313,   128,   128,   205,  -158,  -158,   276,  -158,
    -158,   183,   185,  -158,   186,   190,   191,   198,   228,   200,
    -158,   181,   134,   207,  -158,  -158,  -158,  -158,  -158,  -158,
     441,  -158,   127,  -158,  -158,  -158,  -158,   228,   228,   228,
     208,   228,  -158,  -158,  -158,    39,   210,   302,   201,  -158,
     341,  -158,   228,   169,   217,   169,   391,   222,  -158,  -158,
     228,   169,  -158,   215,  -158,   204,    82,  -158,  -158,     6,
     218,  -158
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    17,     0,    16,    15,     0,    18,     0,    20,     0,
       2,     3,     5,     6,     0,     0,     7,     8,     9,    32,
       0,     0,     0,     1,     4,     0,    10,     0,    13,     0,
       0,     0,    41,    24,     0,    14,   106,   101,   102,   103,
     104,   105,    11,    19,    24,    29,    34,    30,    36,     0,
      20,     0,     0,    41,     0,    27,     0,     0,    23,     0,
     100,    12,     0,     0,     0,    37,    38,     0,    36,     0,
       0,    39,    40,    27,    26,    13,     0,     0,     0,     0,
       0,     0,    74,     0,    94,    99,    70,    73,    75,     0,
      72,     0,    31,    33,    28,    35,    24,    24,    25,    46,
      22,   100,    91,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,    21,     0,     0,    46,    48,
       0,     0,    92,    76,    77,    78,    79,    80,    81,    83,
      84,    85,    86,    87,    88,    89,    90,    69,     0,    96,
      71,     0,     0,    45,     0,     0,     0,     0,    58,     0,
      56,     0,    48,     0,    50,    51,    52,    53,    54,    55,
      57,    98,     0,    95,    43,    42,    66,    58,     0,     0,
       0,     0,    44,    47,    49,     0,     0,     0,     0,    67,
       0,    93,     0,    58,     0,    58,     0,    61,    68,    62,
      58,    58,    59,     0,    60,    58,    46,    56,    64,    94,
       0,    63
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -158,  -158,  -158,   251,  -158,    18,    -8,     0,   -35,   -41,
     -36,  -158,  -158,    64,   197,  -158,  -158,   216,  -158,   -75,
     140,  -157,   -94,  -138,  -158,  -158,  -158,  -158,  -158,  -158,
    -158,  -118,   -38,  -158,   248,   170,   249
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,   128,    14,    56,    16,    57,
      58,    17,    31,    47,    67,    68,    18,    52,    53,   160,
     129,   161,   162,   163,   164,   202,   165,   166,   167,   168,
     169,    85,   170,    87,    88,    89,    90
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      15,   100,   147,    62,    27,   183,    25,    27,    27,   -20,
      59,    59,    15,    66,   121,   122,   125,    22,    13,    74,
     180,    29,    86,    19,    30,    55,    22,    20,    26,    21,
      13,   123,    51,    66,    23,     1,    55,    98,     3,   186,
     102,   103,    27,    32,     4,   106,    73,    55,    15,   210,
      60,    60,     6,    51,    28,   126,   127,    70,    75,   -20,
      33,   188,   203,    86,    44,    55,    65,     8,    15,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,    86,   148,   191,   150,    65,    78,    55,    55,
      79,   112,   113,   114,   115,   116,   117,   118,   119,   197,
      34,   199,    43,     1,   154,     1,     3,   204,     3,   155,
     156,   208,     4,    45,     4,    80,    36,   157,    81,   158,
       6,    82,     6,   159,    49,    46,    83,    92,    93,    99,
     207,    37,    38,    39,    40,   209,    41,    50,    48,    78,
     187,    86,    79,   190,   -59,   -59,   118,   119,     1,    61,
      63,     3,    64,    69,   196,    77,   154,     4,    71,    76,
      91,   155,   156,    96,    94,     6,    97,    80,    36,   157,
      81,   158,   185,    82,    78,   159,   -58,    79,    83,    99,
      50,    99,   101,    37,    38,    39,    40,    84,    41,   104,
     105,   154,   124,   131,   132,   149,   155,   156,     1,   151,
     152,     3,    80,    36,   157,    81,   158,     4,    82,    78,
     159,   171,    79,    83,   172,     6,    99,     7,    37,    38,
      39,    40,    84,    41,   119,   174,   154,   175,   176,   182,
       8,   155,   156,    78,   177,   178,    79,    80,    36,   157,
      81,   158,   179,    82,   181,   159,   194,   201,    83,   184,
     189,   206,   192,    37,    38,    39,    40,    84,    41,   198,
     205,    80,    36,    24,    81,    95,   211,    82,   153,    72,
      35,   130,    83,     0,    42,     0,     0,    37,    38,    39,
      40,    84,    41,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   173,     0,    36,   -59,   -59,   -59,   -59,   116,
     117,   118,   119,     0,   133,     0,     0,     0,     0,    37,
      38,    39,    40,     0,    41,     0,     0,   193,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,     0,   195,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,     1,     0,     2,     3,     1,     0,     0,     3,     0,
       4,     5,     0,     0,     4,     0,     0,     0,     6,     0,
       7,     0,     6,   200,     0,     0,     0,    54,     0,     0,
       0,     0,     0,     8,     0,     0,     0,     8,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119
};

static const yytype_int16 yycheck[] =
{
       0,    76,   120,    44,     3,   162,    20,     3,     3,     3,
       4,     4,    12,    48,     3,     4,    91,    20,     0,    55,
     158,    26,    60,    53,    29,    33,    20,    53,    42,    53,
      12,    20,    32,    68,     0,    21,    44,    73,    24,   177,
      78,    79,     3,    47,    30,    83,    54,    55,    48,   206,
      44,    44,    38,    53,    53,    96,    97,    53,    53,    53,
      44,   179,   200,   101,    44,    73,    48,    53,    68,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,    45,   123,    68,     5,    96,    97,
       8,    12,    13,    14,    15,    16,    17,    18,    19,   193,
      53,   195,    46,    21,    22,    21,    24,   201,    24,    27,
      28,   205,    30,    53,    30,    33,    34,    35,    36,    37,
      38,    39,    38,    41,    40,    53,    44,    63,    64,    47,
     205,    49,    50,    51,    52,    53,    54,    53,    47,     5,
     178,   179,     8,   181,    16,    17,    18,    19,    21,    42,
      29,    24,    43,    53,   192,    53,    22,    30,    48,    45,
      45,    27,    28,    44,    48,    38,    44,    33,    34,    35,
      36,    37,   172,    39,     5,    41,    42,     8,    44,    47,
      53,    47,    44,    49,    50,    51,    52,    53,    54,    44,
      44,    22,    45,    49,    45,    53,    27,    28,    21,    45,
      45,    24,    33,    34,    35,    36,    37,    30,    39,     5,
      41,    45,     8,    44,    43,    38,    47,    40,    49,    50,
      51,    52,    53,    54,    19,    42,    22,    42,    42,    48,
      53,    27,    28,     5,    44,    44,     8,    33,    34,    35,
      36,    37,    44,    39,    44,    41,    45,    25,    44,    42,
      42,    47,    42,    49,    50,    51,    52,    53,    54,    42,
      45,    33,    34,    12,    36,    68,    48,    39,   128,    53,
      22,   101,    44,    -1,    25,    -1,    -1,    49,    50,    51,
      52,    53,    54,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    46,    -1,    34,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    45,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    -1,    54,    -1,    -1,    45,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    45,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    21,    -1,    23,    24,    21,    -1,    -1,    24,    -1,
      30,    31,    -1,    -1,    30,    -1,    -1,    -1,    38,    -1,
      40,    -1,    38,    42,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    53,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    21,    23,    24,    30,    31,    38,    40,    53,    56,
      57,    58,    59,    60,    61,    62,    63,    66,    71,    53,
      53,    53,    20,     0,    58,    20,    42,     3,    53,    26,
      29,    67,    47,    44,    53,    89,    34,    49,    50,    51,
      52,    54,    91,    46,    44,    53,    53,    68,    47,    40,
      53,    62,    72,    73,    43,    61,    62,    64,    65,     4,
      44,    42,    64,    29,    43,    60,    63,    69,    70,    53,
      53,    48,    72,    61,    65,    53,    45,    53,     5,     8,
      33,    36,    39,    44,    53,    86,    87,    88,    89,    90,
      91,    45,    68,    68,    48,    69,    44,    44,    65,    47,
      74,    44,    87,    87,    44,    44,    87,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      43,     3,     4,    20,    45,    74,    64,    64,    60,    75,
      90,    49,    45,    45,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    86,    87,    53,
      87,    45,    45,    75,    22,    27,    28,    35,    37,    41,
      74,    76,    77,    78,    79,    81,    82,    83,    84,    85,
      87,    45,    43,    46,    42,    42,    42,    44,    44,    44,
      78,    44,    48,    76,    42,    62,    78,    87,    86,    42,
      87,    45,    42,    45,    45,    45,    87,    77,    42,    77,
      42,    25,    80,    78,    77,    45,    47,    74,    77,    53,
      76,    48
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    55,    56,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    62,    62,    62,    62,    62,
      62,    63,    63,    64,    64,    65,    65,    65,    66,    67,
      67,    67,    67,    68,    68,    69,    69,    70,    70,    71,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    77,    77,    77,    77,    78,    78,    79,
      80,    80,    81,    82,    82,    82,    83,    84,    85,    86,
      86,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    88,    88,    88,    89,    89,    90,
      90,    91,    91,    91,    91,    91,    91
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     3,     4,     2,     3,     1,     1,     1,     1,     3,
       1,     6,     6,     1,     0,     3,     2,     0,     6,     2,
       2,     4,     0,     3,     1,     2,     0,     1,     1,     5,
       2,     0,     6,     6,     4,     2,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     6,
       2,     0,     5,    11,     9,     9,     2,     3,     5,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     3,     6,     1,     4,     3,     4,     6,     1,
       0,     1,     1,     1,     1,     1,     1
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
#line 87 "toy.y"
                                        {printf("\n[accept]\n"); ACCEPT_FLAG = 1;}
#line 1558 "toy.tab.c"
    break;

  case 3:
#line 90 "toy.y"
                                      {printf("[reduce 1]");}
#line 1564 "toy.tab.c"
    break;

  case 4:
#line 92 "toy.y"
                                           {printf("[reduce 2]");}
#line 1570 "toy.tab.c"
    break;

  case 5:
#line 93 "toy.y"
                                     {printf("[reduce 3]");}
#line 1576 "toy.tab.c"
    break;

  case 6:
#line 96 "toy.y"
                                             {printf("[reduce 4]");}
#line 1582 "toy.tab.c"
    break;

  case 7:
#line 97 "toy.y"
                                             {printf("[reduce 5]");}
#line 1588 "toy.tab.c"
    break;

  case 8:
#line 98 "toy.y"
                                          {printf("[reduce 6]");}
#line 1594 "toy.tab.c"
    break;

  case 9:
#line 99 "toy.y"
                                              {printf("[reduce 7]");}
#line 1600 "toy.tab.c"
    break;

  case 10:
#line 102 "toy.y"
                                                    {printf("[reduce 8]");}
#line 1606 "toy.tab.c"
    break;

  case 11:
#line 103 "toy.y"
                                                               {printf("[reduce 9]");}
#line 1612 "toy.tab.c"
    break;

  case 12:
#line 104 "toy.y"
                                                  {printf("[reduce 10]");}
#line 1618 "toy.tab.c"
    break;

  case 13:
#line 107 "toy.y"
                                         {printf("[reduce 11]");}
#line 1624 "toy.tab.c"
    break;

  case 14:
#line 108 "toy.y"
                                 {printf("[reduce 12]");}
#line 1630 "toy.tab.c"
    break;

  case 15:
#line 113 "toy.y"
                     {printf("[reduce 13]");}
#line 1636 "toy.tab.c"
    break;

  case 16:
#line 114 "toy.y"
                                        {printf("[reduce 14]");}
#line 1642 "toy.tab.c"
    break;

  case 17:
#line 115 "toy.y"
                                         {printf("[reduce 15]");}
#line 1648 "toy.tab.c"
    break;

  case 18:
#line 116 "toy.y"
                                        {printf("[reduce 16]");}
#line 1654 "toy.tab.c"
    break;

  case 19:
#line 117 "toy.y"
                                                                {printf("[reduce 17]");}
#line 1660 "toy.tab.c"
    break;

  case 20:
#line 118 "toy.y"
                                    {printf("[reduce 18]");}
#line 1666 "toy.tab.c"
    break;

  case 21:
#line 121 "toy.y"
                                                                                  {printf("[reduce 19]");}
#line 1672 "toy.tab.c"
    break;

  case 22:
#line 122 "toy.y"
                                                                                            {printf("[reduce 20]");}
#line 1678 "toy.tab.c"
    break;

  case 23:
#line 125 "toy.y"
                                           {printf("[reduce 21]");}
#line 1684 "toy.tab.c"
    break;

  case 24:
#line 126 "toy.y"
                                {printf("[reduce 22]");}
#line 1690 "toy.tab.c"
    break;

  case 25:
#line 129 "toy.y"
                                                                {printf("[reduce 23]");}
#line 1696 "toy.tab.c"
    break;

  case 26:
#line 130 "toy.y"
                                                    {printf("[reduce 24]");}
#line 1702 "toy.tab.c"
    break;

  case 27:
#line 131 "toy.y"
                                {printf("[reduce 25]");}
#line 1708 "toy.tab.c"
    break;

  case 28:
#line 134 "toy.y"
                                                                                    {printf("[reduce 26]");}
#line 1714 "toy.tab.c"
    break;

  case 29:
#line 136 "toy.y"
                                             {printf("[reduce 27]");}
#line 1720 "toy.tab.c"
    break;

  case 30:
#line 137 "toy.y"
                                                 {printf("[reduce 28]");}
#line 1726 "toy.tab.c"
    break;

  case 31:
#line 138 "toy.y"
                                                              {printf("[reduce 29]");}
#line 1732 "toy.tab.c"
    break;

  case 32:
#line 139 "toy.y"
                                {printf("[reduce 30]");}
#line 1738 "toy.tab.c"
    break;

  case 33:
#line 141 "toy.y"
                                                {printf("[reduce 31]");}
#line 1744 "toy.tab.c"
    break;

  case 34:
#line 142 "toy.y"
                                    {printf("[reduce 32]");}
#line 1750 "toy.tab.c"
    break;

  case 35:
#line 144 "toy.y"
                                             {printf("[reduce 33]");}
#line 1756 "toy.tab.c"
    break;

  case 36:
#line 145 "toy.y"
                                {printf("[reduce 34]");}
#line 1762 "toy.tab.c"
    break;

  case 37:
#line 149 "toy.y"
                                             {printf("[reduce 35]");}
#line 1768 "toy.tab.c"
    break;

  case 38:
#line 150 "toy.y"
                                             {printf("[reduce 36]");}
#line 1774 "toy.tab.c"
    break;

  case 39:
#line 154 "toy.y"
                                                                                 {printf("[reduce 37]");}
#line 1780 "toy.tab.c"
    break;

  case 40:
#line 156 "toy.y"
                                                     {printf("[reduce 38]");}
#line 1786 "toy.tab.c"
    break;

  case 41:
#line 157 "toy.y"
                                {printf("[reduce 39]");}
#line 1792 "toy.tab.c"
    break;

  case 42:
#line 161 "toy.y"
                                                                                   {printf("[reduce 40]");}
#line 1798 "toy.tab.c"
    break;

  case 43:
#line 162 "toy.y"
                                                                                    {printf("[reduce 41]");}
#line 1804 "toy.tab.c"
    break;

  case 44:
#line 166 "toy.y"
                                                                           {printf("[reduce 42]");}
#line 1810 "toy.tab.c"
    break;

  case 45:
#line 168 "toy.y"
                                                           {printf("[reduce 43]");}
#line 1816 "toy.tab.c"
    break;

  case 46:
#line 169 "toy.y"
                                {printf("[reduce 44]");}
#line 1822 "toy.tab.c"
    break;

  case 47:
#line 171 "toy.y"
                                           {printf("[reduce 45]");}
#line 1828 "toy.tab.c"
    break;

  case 48:
#line 172 "toy.y"
                                {printf("[reduce 46]");}
#line 1834 "toy.tab.c"
    break;

  case 49:
#line 176 "toy.y"
                                                 {printf("[reduce 47]");}
#line 1840 "toy.tab.c"
    break;

  case 50:
#line 177 "toy.y"
                                       {printf("[reduce 48]");}
#line 1846 "toy.tab.c"
    break;

  case 51:
#line 178 "toy.y"
                                          {printf("[reduce 49]");}
#line 1852 "toy.tab.c"
    break;

  case 52:
#line 179 "toy.y"
                                        {printf("[reduce 50]");}
#line 1858 "toy.tab.c"
    break;

  case 53:
#line 180 "toy.y"
                                          {printf("[reduce 51]");}
#line 1864 "toy.tab.c"
    break;

  case 54:
#line 181 "toy.y"
                                           {printf("[reduce 52]");}
#line 1870 "toy.tab.c"
    break;

  case 55:
#line 182 "toy.y"
                                          {printf("[reduce 53]");}
#line 1876 "toy.tab.c"
    break;

  case 56:
#line 183 "toy.y"
                                          {printf("[reduce 54]");}
#line 1882 "toy.tab.c"
    break;

  case 57:
#line 185 "toy.y"
                                     {printf("[reduce 55]");}
#line 1888 "toy.tab.c"
    break;

  case 58:
#line 186 "toy.y"
                                {printf("[reduce 56]");}
#line 1894 "toy.tab.c"
    break;

  case 59:
#line 190 "toy.y"
                                                                               {printf("[reduce 57]");}
#line 1900 "toy.tab.c"
    break;

  case 60:
#line 192 "toy.y"
                                           {printf("[reduce 58]");}
#line 1906 "toy.tab.c"
    break;

  case 61:
#line 193 "toy.y"
                                {printf("[reduce 59]");}
#line 1912 "toy.tab.c"
    break;

  case 62:
#line 197 "toy.y"
                                                                        {printf("[reduce 60]");}
#line 1918 "toy.tab.c"
    break;

  case 63:
#line 201 "toy.y"
                                                                                                        {printf("[reduce 61]");}
#line 1924 "toy.tab.c"
    break;

  case 64:
#line 202 "toy.y"
                                                                                {printf("[reduce 62]");}
#line 1930 "toy.tab.c"
    break;

  case 65:
#line 203 "toy.y"
                                                                                     {printf("[reduce 63]");}
#line 1936 "toy.tab.c"
    break;

  case 66:
#line 207 "toy.y"
                                                  {printf("[reduce 64]");}
#line 1942 "toy.tab.c"
    break;

  case 67:
#line 211 "toy.y"
                                                         {printf("[reduce 65]");}
#line 1948 "toy.tab.c"
    break;

  case 68:
#line 215 "toy.y"
                                                                                  {printf("[reduce 66]");}
#line 1954 "toy.tab.c"
    break;

  case 69:
#line 217 "toy.y"
                                                   {printf("[reduce 67]");}
#line 1960 "toy.tab.c"
    break;

  case 70:
#line 218 "toy.y"
                                     {printf("[reduce 68]");}
#line 1966 "toy.tab.c"
    break;

  case 71:
#line 222 "toy.y"
                                                      {printf("[reduce 69]");}
#line 1972 "toy.tab.c"
    break;

  case 72:
#line 223 "toy.y"
                                         {printf("[reduce 70]");}
#line 1978 "toy.tab.c"
    break;

  case 73:
#line 224 "toy.y"
                                       {printf("[reduce 71]");}
#line 1984 "toy.tab.c"
    break;

  case 74:
#line 225 "toy.y"
                                {printf("[reduce 72]");}
#line 1990 "toy.tab.c"
    break;

  case 75:
#line 226 "toy.y"
                                     {printf("[reduce 73]");}
#line 1996 "toy.tab.c"
    break;

  case 76:
#line 227 "toy.y"
                                                            {printf("[reduce 74]");}
#line 2002 "toy.tab.c"
    break;

  case 77:
#line 228 "toy.y"
                                                {printf("[reduce 75]");}
#line 2008 "toy.tab.c"
    break;

  case 78:
#line 229 "toy.y"
                                                 {printf("[reduce 76]");}
#line 2014 "toy.tab.c"
    break;

  case 79:
#line 230 "toy.y"
                                                          {printf("[reduce 77]");}
#line 2020 "toy.tab.c"
    break;

  case 80:
#line 231 "toy.y"
                                                    {printf("[reduce 78]");}
#line 2026 "toy.tab.c"
    break;

  case 81:
#line 232 "toy.y"
                                               {printf("[reduce 79]");}
#line 2032 "toy.tab.c"
    break;

  case 82:
#line 233 "toy.y"
                                            {printf("[reduce 80]");}
#line 2038 "toy.tab.c"
    break;

  case 83:
#line 234 "toy.y"
                                                {printf("[reduce 81]");}
#line 2044 "toy.tab.c"
    break;

  case 84:
#line 235 "toy.y"
                                                     {printf("[reduce 82]");}
#line 2050 "toy.tab.c"
    break;

  case 85:
#line 236 "toy.y"
                                                   {printf("[reduce 83]");}
#line 2056 "toy.tab.c"
    break;

  case 86:
#line 237 "toy.y"
                                                        {printf("[reduce 84]");}
#line 2062 "toy.tab.c"
    break;

  case 87:
#line 238 "toy.y"
                                                 {printf("[reduce 85]");}
#line 2068 "toy.tab.c"
    break;

  case 88:
#line 239 "toy.y"
                                                    {printf("[reduce 86]");}
#line 2074 "toy.tab.c"
    break;

  case 89:
#line 240 "toy.y"
                                               {printf("[reduce 87]");}
#line 2080 "toy.tab.c"
    break;

  case 90:
#line 241 "toy.y"
                                              {printf("[reduce 88]");}
#line 2086 "toy.tab.c"
    break;

  case 91:
#line 242 "toy.y"
                                          {printf("[reduce 89]");}
#line 2092 "toy.tab.c"
    break;

  case 92:
#line 243 "toy.y"
                                                               {printf("[reduce 90]");}
#line 2098 "toy.tab.c"
    break;

  case 93:
#line 244 "toy.y"
                                                                                          {printf("[reduce 91]");}
#line 2104 "toy.tab.c"
    break;

  case 94:
#line 248 "toy.y"
                                    {printf("[reduce 92]");}
#line 2110 "toy.tab.c"
    break;

  case 95:
#line 249 "toy.y"
                                                                       {printf("[reduce 93]");}
#line 2116 "toy.tab.c"
    break;

  case 96:
#line 250 "toy.y"
                                                   {printf("[reduce 94]");}
#line 2122 "toy.tab.c"
    break;

  case 97:
#line 254 "toy.y"
                                                                   {printf("[reduce 95]");}
#line 2128 "toy.tab.c"
    break;

  case 98:
#line 255 "toy.y"
                                                                               {printf("[reduce 96]");}
#line 2134 "toy.tab.c"
    break;

  case 99:
#line 259 "toy.y"
                                       {printf("[reduce 97]");}
#line 2140 "toy.tab.c"
    break;

  case 100:
#line 260 "toy.y"
                                {printf("[reduce 98]");}
#line 2146 "toy.tab.c"
    break;

  case 101:
#line 264 "toy.y"
                                             {printf("[reduce 99]");}
#line 2152 "toy.tab.c"
    break;

  case 102:
#line 265 "toy.y"
                                                {printf("[reduce 100]");}
#line 2158 "toy.tab.c"
    break;

  case 103:
#line 266 "toy.y"
                                                {printf("[reduce 101]");}
#line 2164 "toy.tab.c"
    break;

  case 104:
#line 267 "toy.y"
                                                 {printf("[reduce 102]");}
#line 2170 "toy.tab.c"
    break;

  case 105:
#line 268 "toy.y"
                  {printf("[reduce 103]");}
#line 2176 "toy.tab.c"
    break;

  case 106:
#line 269 "toy.y"
                                      {printf("[reduce 104]");}
#line 2182 "toy.tab.c"
    break;


#line 2186 "toy.tab.c"

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
#line 271 "toy.y"


void yyerror(char *s) {
	// fprintf(stderr, "%s\n", s);
	if (ACCEPT_FLAG == 0)
 		printf("\n[reject]\n");
}

int main(){
    yyparse();
    return 0;
}
