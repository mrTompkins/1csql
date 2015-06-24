
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 10 "us\\1csql\\1csql.y"

#include "1csql.tab.h"
#include "1csql.h"
#include "CAst.h"
#include "Dump.h"
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <stdio.h>

void yyerror(char *s, ...);
void emit(char *s, ...);
#define YYDEBUG 1


/* Line 189 of yacc.c  */
#line 89 "us\\1csql\\1csql.tab.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAME = 258,
     STRING = 259,
     INTNUM = 260,
     BOOL = 261,
     APPROXNUM = 262,
     UNION = 263,
     USERVAR = 264,
     ASSIGN = 265,
     JOIN = 266,
     STRAIGHT_JOIN = 267,
     NATURAL = 268,
     CROSS = 269,
     OUTER = 270,
     INNER = 271,
     RIGHT = 272,
     LEFT = 273,
     USING = 274,
     ON = 275,
     OR = 276,
     XOR = 277,
     ANDOP = 278,
     REGEXP = 279,
     LIKE = 280,
     IS = 281,
     IN = 282,
     NOT = 283,
     BETWEEN = 284,
     COMPARISON = 285,
     SHIFT = 286,
     CONCAT = 287,
     MOD = 288,
     PARASSIGN = 289,
     OUTPLUS = 290,
     PRIOR = 291,
     UMINUS = 292,
     ADD = 293,
     ALL = 294,
     ALTER = 295,
     ALLOWED = 296,
     ANALYZE = 297,
     AND = 298,
     ANY = 299,
     AS = 300,
     ASC = 301,
     AUTO_INCREMENT = 302,
     BEFORE = 303,
     BIGINT = 304,
     BINARY = 305,
     BIT = 306,
     BLOB = 307,
     BOTH = 308,
     BY = 309,
     CALL = 310,
     CASCADE = 311,
     CASE = 312,
     CHANGE = 313,
     CHAR = 314,
     CHECK = 315,
     COLLATE = 316,
     COLUMN = 317,
     COMMENT = 318,
     CONDITION = 319,
     CONNECT = 320,
     CONSTRAINT = 321,
     CONTINUE = 322,
     CONVERT = 323,
     CREATE = 324,
     CURRENT_DATE = 325,
     CURRENT_TIME = 326,
     CURRENT_TIMESTAMP = 327,
     CURRENT_USER = 328,
     CURRENT = 329,
     CURSOR = 330,
     DAY = 331,
     DATABASE = 332,
     DATABASES = 333,
     DATE = 334,
     DATETIME = 335,
     DAY_HOUR = 336,
     DAY_MICROSECOND = 337,
     DAY_MINUTE = 338,
     DAY_SECOND = 339,
     DECIMAL = 340,
     DECLARE = 341,
     DEFAULT = 342,
     DELAYED = 343,
     DELETE = 344,
     DESC = 345,
     DESCRIBE = 346,
     DETERMINISTIC = 347,
     DISTINCT = 348,
     DISTINCTROW = 349,
     DIV = 350,
     DOUBLE = 351,
     DROP = 352,
     EACH = 353,
     ELSE = 354,
     ELSEIF = 355,
     ENCLOSED = 356,
     END = 357,
     ENUM = 358,
     ESCAPED = 359,
     EXISTS = 360,
     EXIT = 361,
     EXPLAIN = 362,
     FEXPRESS = 363,
     FETCH = 364,
     FIRST = 365,
     FLOAT = 366,
     FOLLOWING = 367,
     FOR = 368,
     FORCE = 369,
     FOREIGN = 370,
     FROM = 371,
     FULLTEXT = 372,
     GRANT = 373,
     GROUP = 374,
     HAVING = 375,
     HIGH_PRIORITY = 376,
     HOUR = 377,
     HOUR_MICROSECOND = 378,
     HOUR_MINUTE = 379,
     HOUR_SECOND = 380,
     IF = 381,
     IGNORE = 382,
     INDEX = 383,
     INFILE = 384,
     INOUT = 385,
     INSENSITIVE = 386,
     INSERT = 387,
     INT = 388,
     INTEGER = 389,
     INTERVAL = 390,
     INTO = 391,
     ITERATE = 392,
     KEY = 393,
     KEYS = 394,
     KILL = 395,
     LEADING = 396,
     LEAVE = 397,
     LIMIT = 398,
     LINES = 399,
     LOAD = 400,
     LOCALTIME = 401,
     LOCALTIMESTAMP = 402,
     LOCK = 403,
     LONG = 404,
     LONGBLOB = 405,
     LONGTEXT = 406,
     LOOP = 407,
     LOW_PRIORITY = 408,
     MATCH = 409,
     MEDIUMBLOB = 410,
     MEDIUMINT = 411,
     MEDIUMTEXT = 412,
     MINUTE = 413,
     MINUTE_MICROSECOND = 414,
     MINUTE_SECOND = 415,
     MODIFIES = 416,
     MONTH = 417,
     NONCYCLE = 418,
     NO_WRITE_TO_BINLOG = 419,
     NULLX = 420,
     NUMBER = 421,
     ONDUPLICATE = 422,
     OPTIMIZE = 423,
     OPTION = 424,
     OPTIONALLY = 425,
     ORDER = 426,
     OVER = 427,
     OUT = 428,
     OUTFILE = 429,
     PARTITION = 430,
     PRECEDING = 431,
     PRECISION = 432,
     PRIMARY = 433,
     PROCEDURE = 434,
     PURGE = 435,
     QUICK = 436,
     RANGE = 437,
     READ = 438,
     READS = 439,
     REAL = 440,
     REFERENCES = 441,
     RELEASE = 442,
     RENAME = 443,
     REPEAT = 444,
     REPLACE = 445,
     REQUIRE = 446,
     RESTRICT = 447,
     RETURN = 448,
     REVOKE = 449,
     ROLLUP = 450,
     ROWS = 451,
     ROW = 452,
     SCHEMA = 453,
     SCHEMAS = 454,
     SECOND = 455,
     SECOND_MICROSECOND = 456,
     SELECT = 457,
     SENSITIVE = 458,
     SEPARATOR = 459,
     SET = 460,
     SHOW = 461,
     SMALLINT = 462,
     SOME = 463,
     SONAME = 464,
     SPATIAL = 465,
     SPECIFIC = 466,
     SQL = 467,
     SQLEXCEPTION = 468,
     SQLSTATE = 469,
     SQLWARNING = 470,
     SQL_BIG_RESULT = 471,
     SQL_CALC_FOUND_ROWS = 472,
     SQL_SMALL_RESULT = 473,
     SSL = 474,
     START = 475,
     STARTING = 476,
     TABLE = 477,
     TEMPORARY = 478,
     TEXT = 479,
     TERMINATED = 480,
     THEN = 481,
     TIME = 482,
     TIMESTAMP = 483,
     TINYBLOB = 484,
     TINYINT = 485,
     TINYTEXT = 486,
     TO = 487,
     TOTAL = 488,
     TRAILING = 489,
     TRIGGER = 490,
     UNBOUNDED = 491,
     UNDO = 492,
     UNIQUE = 493,
     UNLOCK = 494,
     UNSIGNED = 495,
     UPDATE = 496,
     USAGE = 497,
     USE = 498,
     UTC_DATE = 499,
     UTC_TIME = 500,
     UTC_TIMESTAMP = 501,
     VALUES = 502,
     VARBINARY = 503,
     VARCHAR = 504,
     VARYING = 505,
     WHEN = 506,
     WHERE = 507,
     WHILE = 508,
     WITH = 509,
     WRITE = 510,
     YEAR = 511,
     YEAR_MONTH = 512,
     ZEROFILL = 513,
     FSUBSTRING = 514,
     FTRIM = 515,
     FDATE_ADD = 516,
     FDATE_SUB = 517,
     FCOUNT = 518
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 "us\\1csql\\1csql.y"

	class CAst* a;
	int intval;
	double floatval;
	bool boolval;
	char *strval;
	int subtok;
	struct quot_psz* qpsz;
	class CName* cname;



/* Line 214 of yacc.c  */
#line 401 "us\\1csql\\1csql.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 413 "us\\1csql\\1csql.tab.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2054

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  278
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
/* YYNRULES -- Number of states.  */
#define YYNSTATES  481

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   518

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,     2,     2,    40,    33,     2,
     276,   277,    38,    36,   274,    37,   275,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   273,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    32,     2,     2,     2,     2,     2,
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
      25,    26,    27,    29,    30,    31,    34,    35,    41,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    18,    20,    22,
      30,    46,    47,    49,    51,    54,    57,    58,    63,    68,
      70,    75,    79,    80,    83,    88,    93,    96,   101,   102,
     104,   106,   107,   110,   113,   114,   118,   119,   123,   127,
     128,   132,   136,   137,   142,   145,   150,   151,   155,   156,
     159,   164,   166,   170,   171,   174,   176,   180,   182,   184,
     186,   188,   191,   193,   195,   197,   199,   201,   203,   206,
     207,   209,   211,   215,   218,   221,   223,   226,   228,   232,
     236,   238,   242,   244,   246,   248,   250,   254,   258,   264,
     267,   270,   272,   273,   278,   282,   289,   295,   301,   306,
     313,   319,   324,   328,   330,   332,   333,   335,   337,   339,
     342,   345,   346,   349,   354,   361,   368,   375,   376,   379,
     380,   382,   386,   390,   394,   397,   398,   401,   405,   411,
     413,   415,   417,   419,   421,   423,   427,   431,   435,   439,
     443,   447,   451,   455,   458,   462,   466,   470,   474,   479,
     484,   489,   493,   497,   501,   505,   508,   511,   514,   517,
     521,   525,   527,   529,   531,   535,   540,   544,   549,   555,
     556,   559,   562,   567,   573,   576,   578,   584,   591,   597,
     602,   605,   611,   616,   618,   620,   626,   632,   636,   637,
     641,   642,   645,   651,   653,   655,   658,   661,   664,   667,
     670,   675,   681,   683,   688,   695,   704,   709,   717,   724,
     726,   728,   730,   737,   744,   749,   753,   757,   761,   765,
     769,   773,   777,   781,   785,   789,   793,   797,   801,   805,
     809,   814,   821,   825,   831,   836,   842,   846,   851,   855,
     860,   862,   864,   866
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     279,     0,    -1,   280,   273,    -1,   279,   280,   273,    -1,
     281,    -1,   283,    -1,   282,     8,   282,    -1,   281,    -1,
     323,    -1,   325,   211,   305,   306,   301,   293,   295,    -1,
     325,   211,   305,   306,   301,   125,   309,   287,   285,   284,
     293,   294,   299,   295,   296,    -1,    -1,   288,    -1,   292,
      -1,   288,   292,    -1,   292,   288,    -1,    -1,   229,   263,
     327,   286,    -1,   286,   229,   263,   327,    -1,   286,    -1,
      74,    63,   172,   327,    -1,    74,    63,   327,    -1,    -1,
     261,   327,    -1,   128,    63,   289,   291,    -1,   128,    20,
     289,   291,    -1,   327,   290,    -1,   289,   274,   327,   290,
      -1,    -1,    55,    -1,    99,    -1,    -1,   263,   204,    -1,
     129,   327,    -1,    -1,   122,   250,   289,    -1,    -1,   180,
      63,   289,    -1,   180,    20,   289,    -1,    -1,   137,    63,
     289,    -1,   137,    20,   289,    -1,    -1,   242,   289,    20,
     289,    -1,   327,   290,    -1,   297,   274,   327,   290,    -1,
      -1,   180,    63,   297,    -1,    -1,   152,   327,    -1,   152,
     327,   274,   327,    -1,     3,    -1,   300,   275,     3,    -1,
      -1,   145,     3,    -1,     3,    -1,   302,   274,     3,    -1,
      48,    -1,    50,    -1,   102,    -1,   103,    -1,   119,     5,
      -1,   130,    -1,    12,    -1,   227,    -1,   225,    -1,   226,
      -1,   303,    -1,   304,   303,    -1,    -1,   304,    -1,   307,
      -1,   306,   274,   307,    -1,   327,   313,    -1,   323,   313,
      -1,    38,    -1,   174,   313,    -1,   310,    -1,   308,   274,
     311,    -1,   324,   274,   311,    -1,   311,    -1,   309,   274,
     311,    -1,   312,    -1,   314,    -1,   310,    -1,   324,    -1,
     300,   313,   320,    -1,   276,   308,   277,    -1,   231,   276,
     331,   277,   313,    -1,   331,   313,    -1,    54,     3,    -1,
       3,    -1,    -1,   311,    11,   311,   319,    -1,   311,    11,
     311,    -1,   311,   317,   316,    11,   311,   319,    -1,   311,
     317,   316,    11,   311,    -1,   311,   315,    11,   311,   319,
      -1,   311,   315,    11,   311,    -1,   311,    13,   318,    11,
     311,   319,    -1,   311,    13,   318,    11,   311,    -1,   311,
      12,   311,   319,    -1,   311,    12,   311,    -1,    16,    -1,
      14,    -1,    -1,    15,    -1,    18,    -1,    17,    -1,    18,
     316,    -1,    17,   316,    -1,    -1,    20,   327,    -1,    19,
     276,   302,   277,    -1,   252,   147,   321,   276,   322,   277,
      -1,   136,   147,   321,   276,   322,   277,    -1,   123,   147,
     321,   276,   322,   277,    -1,    -1,   122,    11,    -1,    -1,
       3,    -1,   322,   274,     3,    -1,   276,   281,   277,    -1,
     276,   323,   277,    -1,   323,   313,    -1,    -1,   263,   326,
      -1,     3,    54,   323,    -1,   326,   274,     3,    54,   323,
      -1,     9,    -1,   300,    -1,     4,    -1,     5,    -1,     7,
      -1,     6,    -1,   328,    36,   328,    -1,   328,    37,   328,
      -1,   328,    38,   328,    -1,   328,    39,   328,    -1,   328,
      40,   328,    -1,   328,    41,   328,    -1,   328,    35,   328,
      -1,   328,    43,   328,    -1,    37,   328,    -1,   328,    23,
     328,    -1,   328,    21,   328,    -1,   328,    22,   328,    -1,
     328,    31,   328,    -1,   328,    31,    53,   328,    -1,   328,
      31,   217,   328,    -1,   328,    31,    48,   328,    -1,   328,
      32,   328,    -1,   328,    33,   328,    -1,   328,    42,   328,
      -1,   328,    34,   328,    -1,    29,   328,    -1,    28,   328,
      -1,   328,    44,    -1,    45,   328,    -1,     9,    10,   328,
      -1,   276,   327,   277,    -1,   327,    -1,   323,    -1,   174,
      -1,   328,    26,   174,    -1,   328,    26,    29,   174,    -1,
     328,    26,     6,    -1,   328,    26,    29,     6,    -1,   328,
      30,   328,    52,   328,    -1,    -1,   327,   313,    -1,   174,
     313,    -1,   329,   274,   328,   313,    -1,   323,   313,   274,
     328,   313,    -1,   329,   274,    -1,   329,    -1,   328,    27,
     276,   329,   277,    -1,   328,    29,    27,   276,   329,   277,
      -1,   328,    27,   276,   281,   277,    -1,   328,    29,    27,
     323,    -1,   114,   323,    -1,   300,   275,   276,   330,   277,
      -1,   300,   276,   330,   277,    -1,   331,    -1,   332,    -1,
     331,   181,   276,   333,   277,    -1,   338,   181,   276,   333,
     277,    -1,   334,   298,   335,    -1,    -1,   184,    63,   329,
      -1,    -1,   336,   337,    -1,   336,    30,   337,    52,   337,
      -1,   205,    -1,   191,    -1,   245,   185,    -1,   245,   121,
      -1,    83,   206,    -1,   328,   185,    -1,   328,   121,    -1,
     272,   276,    38,   277,    -1,   272,   276,   305,   328,   277,
      -1,   338,    -1,   268,   276,   329,   277,    -1,   268,   276,
     328,   125,   328,   277,    -1,   268,   276,   328,   125,   328,
     122,   328,   277,    -1,   269,   276,   329,   277,    -1,   269,
     276,   339,   328,   125,   329,   277,    -1,   117,   276,   328,
      54,   328,   277,    -1,   150,    -1,   243,    -1,    62,    -1,
     270,   276,   328,   274,   340,   277,    -1,   271,   276,   328,
     274,   340,   277,    -1,   199,   276,   329,   277,    -1,   144,
     328,    90,    -1,   144,   328,    91,    -1,   144,   328,    92,
      -1,   144,   328,    93,    -1,   144,   328,   266,    -1,   144,
     328,   265,    -1,   144,   328,   132,    -1,   144,   328,   133,
      -1,   144,   328,   134,    -1,   144,     4,   209,    -1,   144,
       4,   167,    -1,   144,     4,   131,    -1,   144,     4,    85,
      -1,   144,     4,   171,    -1,   144,     4,   265,    -1,    66,
     328,   341,   111,    -1,    66,   328,   341,   108,   328,   111,
      -1,    66,   341,   111,    -1,    66,   341,   108,   328,   111,
      -1,   260,   328,   235,   328,    -1,   341,   260,   328,   235,
     328,    -1,   328,    25,   328,    -1,   328,    29,    25,   328,
      -1,   328,    24,   328,    -1,   328,    29,    24,   328,    -1,
      81,    -1,    79,    -1,    80,    -1,    59,   328,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   345,   345,   346,   351,   354,   355,   358,   359,   362,
     364,   370,   371,   372,   373,   374,   377,   378,   379,   380,
     383,   384,   387,   388,   391,   393,   397,   399,   403,   404,
     405,   408,   409,   412,   414,   415,   418,   419,   420,   423,
     424,   425,   428,   429,   432,   434,   438,   438,   441,   441,
     442,   445,   446,   449,   450,   453,   454,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   469,   470,   473,
     474,   477,   478,   481,   482,   483,   484,   488,   489,   490,
     494,   495,   498,   499,   503,   504,   508,   509,   510,   511,
     514,   515,   516,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   538,   542,   543,   546,   547,   550,   551,   554,
     555,   556,   560,   561,   565,   567,   569,   571,   574,   575,
     578,   579,   582,   583,   586,   589,   590,   593,   594,   599,
     600,   601,   602,   603,   604,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   636,   637,   638,   641,   642,   643,   644,   647,   650,
     651,   652,   653,   654,   655,   659,   662,   663,   664,   665,
     666,   669,   672,   675,   676,   680,   681,   684,   687,   688,
     691,   692,   693,   696,   697,   700,   701,   702,   703,   704,
     708,   709,   712,   714,   715,   716,   717,   718,   719,   722,
     723,   724,   727,   728,   731,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   745,   746,   747,   748,   749,   750,
     753,   754,   755,   756,   759,   760,   763,   764,   767,   768,
     771,   772,   773,   776
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "UNION", "USERVAR", "ASSIGN", "JOIN", "STRAIGHT_JOIN",
  "NATURAL", "CROSS", "OUTER", "INNER", "RIGHT", "LEFT", "USING", "ON",
  "OR", "XOR", "ANDOP", "REGEXP", "LIKE", "IS", "IN", "'!'", "NOT",
  "BETWEEN", "COMPARISON", "'|'", "'&'", "SHIFT", "CONCAT", "'+'", "'-'",
  "'*'", "'/'", "'%'", "MOD", "'^'", "PARASSIGN", "OUTPLUS", "PRIOR",
  "UMINUS", "ADD", "ALL", "ALTER", "ALLOWED", "ANALYZE", "AND", "ANY",
  "AS", "ASC", "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT",
  "BLOB", "BOTH", "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR",
  "CHECK", "COLLATE", "COLUMN", "COMMENT", "CONDITION", "CONNECT",
  "CONSTRAINT", "CONTINUE", "CONVERT", "CREATE", "CURRENT_DATE",
  "CURRENT_TIME", "CURRENT_TIMESTAMP", "CURRENT_USER", "CURRENT", "CURSOR",
  "DAY", "DATABASE", "DATABASES", "DATE", "DATETIME", "DAY_HOUR",
  "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL", "DECLARE",
  "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE", "DETERMINISTIC",
  "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP", "EACH", "ELSE",
  "ELSEIF", "ENCLOSED", "END", "ENUM", "ESCAPED", "EXISTS", "EXIT",
  "EXPLAIN", "FEXPRESS", "FETCH", "FIRST", "FLOAT", "FOLLOWING", "FOR",
  "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING",
  "HIGH_PRIORITY", "HOUR", "HOUR_MICROSECOND", "HOUR_MINUTE",
  "HOUR_SECOND", "IF", "IGNORE", "INDEX", "INFILE", "INOUT", "INSENSITIVE",
  "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "ITERATE", "KEY", "KEYS",
  "KILL", "LEADING", "LEAVE", "LIMIT", "LINES", "LOAD", "LOCALTIME",
  "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP",
  "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT",
  "MINUTE", "MINUTE_MICROSECOND", "MINUTE_SECOND", "MODIFIES", "MONTH",
  "NONCYCLE", "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ONDUPLICATE",
  "OPTIMIZE", "OPTION", "OPTIONALLY", "ORDER", "OVER", "OUT", "OUTFILE",
  "PARTITION", "PRECEDING", "PRECISION", "PRIMARY", "PROCEDURE", "PURGE",
  "QUICK", "RANGE", "READ", "READS", "REAL", "REFERENCES", "RELEASE",
  "RENAME", "REPEAT", "REPLACE", "REQUIRE", "RESTRICT", "RETURN", "REVOKE",
  "ROLLUP", "ROWS", "ROW", "SCHEMA", "SCHEMAS", "SECOND",
  "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW",
  "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC", "SQL",
  "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "START", "STARTING",
  "TABLE", "TEMPORARY", "TEXT", "TERMINATED", "THEN", "TIME", "TIMESTAMP",
  "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TOTAL", "TRAILING", "TRIGGER",
  "UNBOUNDED", "UNDO", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE", "USAGE",
  "USE", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP", "VALUES", "VARBINARY",
  "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE", "WITH", "WRITE", "YEAR",
  "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FCOUNT", "';'", "','", "'.'", "'('", "')'", "$accept",
  "stmt_list", "stmt", "union_select_stmt", "union_or_subquery",
  "select_stmt", "opt_hav_group", "opt_hierarchy", "connect_by",
  "opt_where", "groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "having", "opt_for_update", "opt_orderby",
  "opt_indexed", "opt_total", "an_orderby_list", "an_opt_orderby",
  "opt_limit", "compose_name", "opt_into_list", "column_list",
  "select_opt", "select_opts", "opt_select_opts", "select_expr_list",
  "select_expr", "table_references", "table_references_or_subquery",
  "table_reference", "table_reference_or_subquery", "table_factor",
  "opt_as_alias", "join_table", "inner_cross", "opt_outer",
  "left_or_right", "opt_left_or_right_outer", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "table_subquery_alias", "opt_with", "with_list", "expr",
  "expr_or_subquery", "val_list", "opt_val_list", "func", "analytic_func",
  "analytic", "opt_partition", "opt_windowing", "rows_range",
  "windowing_bound", "f_count", "trim_ltb", "interval_exp", "case_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    33,   283,
     284,   285,   124,    38,   286,   287,    43,    45,    42,    47,
      37,   288,    94,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   518,    59,    44,    46,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   278,   279,   279,   280,   281,   281,   282,   282,   283,
     283,   284,   284,   284,   284,   284,   285,   285,   285,   285,
     286,   286,   287,   287,   288,   288,   289,   289,   290,   290,
     290,   291,   291,   292,   293,   293,   294,   294,   294,   295,
     295,   295,   296,   296,   297,   297,   298,   298,   299,   299,
     299,   300,   300,   301,   301,   302,   302,   303,   303,   303,
     303,   303,   303,   303,   303,   303,   303,   304,   304,   305,
     305,   306,   306,   307,   307,   307,   307,   308,   308,   308,
     309,   309,   310,   310,   311,   311,   312,   312,   312,   312,
     313,   313,   313,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   318,   319,   319,   320,   320,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   325,   325,   326,   326,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   328,   328,   328,   327,   327,   327,   327,   327,   329,
     329,   329,   329,   329,   329,   330,   327,   327,   327,   327,
     327,   327,   331,   327,   327,   332,   332,   333,   334,   334,
     335,   335,   335,   336,   336,   337,   337,   337,   337,   337,
     338,   338,   327,   327,   327,   327,   327,   327,   327,   339,
     339,   339,   327,   327,   327,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   341,   341,   327,   327,   327,   327,
     327,   327,   327,   327
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     3,     1,     1,     7,
      15,     0,     1,     1,     2,     2,     0,     4,     4,     1,
       4,     3,     0,     2,     4,     4,     2,     4,     0,     1,
       1,     0,     2,     2,     0,     3,     0,     3,     3,     0,
       3,     3,     0,     4,     2,     4,     0,     3,     0,     2,
       4,     1,     3,     0,     2,     1,     3,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     0,
       1,     1,     3,     2,     2,     1,     2,     1,     3,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     5,     2,
       2,     1,     0,     4,     3,     6,     5,     5,     4,     6,
       5,     4,     3,     1,     1,     0,     1,     1,     1,     2,
       2,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     3,     2,     0,     2,     3,     5,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     3,     3,     3,     3,     4,     4,
       4,     3,     3,     3,     3,     2,     2,     2,     2,     3,
       3,     1,     1,     1,     3,     4,     3,     4,     5,     0,
       2,     2,     4,     5,     2,     1,     5,     6,     5,     4,
       2,     5,     4,     1,     1,     5,     5,     3,     0,     3,
       0,     2,     5,     1,     1,     2,     2,     2,     2,     2,
       4,     5,     1,     4,     6,     8,     4,     7,     6,     1,
       1,     1,     6,     6,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     6,     3,     5,     4,     5,     3,     4,     3,     4,
       1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     125,     0,   125,   125,     0,     4,     0,     5,     8,     0,
       0,   126,     7,     8,     1,     0,     2,   125,    69,     0,
       0,   122,   123,     3,     7,     6,    63,    57,    58,    59,
      60,     0,    62,    65,    66,    64,    67,    70,     0,   127,
       0,    61,    68,    51,   131,   132,   134,   133,   129,     0,
       0,     0,    75,     0,     0,     0,   241,   242,   240,     0,
       0,     0,   163,     0,     0,     0,     0,     0,     0,   125,
     130,    53,    71,   162,   161,     0,   183,   184,   202,     0,
       0,   163,   162,   161,   156,   155,   143,   158,   243,     0,
       0,     0,   180,     0,     0,    91,     0,    76,   169,   169,
     169,     0,     0,    69,   162,   161,     0,   169,     0,     0,
      34,    74,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   157,     0,     0,   128,   159,
       0,     0,     0,   232,     0,     0,   227,   226,   225,   228,
     224,   229,    90,   163,   162,   161,     0,     0,     0,   211,
     209,   210,     0,     0,     0,     0,     0,     0,   160,    52,
     169,   175,     0,    54,    72,     0,     0,    39,   145,   146,
     144,   238,   236,   166,     0,   164,   169,     0,     0,     0,
       0,     0,     0,     0,   147,   151,   152,   154,   141,   135,
     136,   137,   138,   139,   140,   153,   142,   188,   188,     0,
       0,   230,     0,     0,     0,   171,     0,   170,   174,   214,
       0,   203,   206,     0,     0,     0,   200,     0,     0,   182,
       0,     0,   125,    92,    22,    84,    80,    82,    83,    92,
      85,    92,     0,     9,   167,   165,     7,   162,     0,   239,
     237,   169,   179,     0,   150,   148,   149,     0,     0,    46,
       0,   234,     0,   233,     0,     0,     0,    92,     0,   169,
       0,     0,     0,   201,   181,    35,   161,     0,     0,    84,
       0,    92,    85,     0,   117,     0,     0,    16,     0,     0,
     111,   104,   103,   108,   107,     0,   105,   124,    89,     0,
       0,   178,   176,   162,     0,   168,   169,   185,     0,   190,
     186,   231,   235,   208,    92,   172,     0,   204,     0,     0,
     212,   213,     0,    29,    30,    26,     0,     0,     0,    87,
       0,     0,     0,     0,    86,   161,    81,     0,     0,    11,
      19,    94,   102,   105,   105,     0,     0,   106,     0,    41,
      40,   177,   189,     0,   194,   193,   187,     0,   173,     0,
     207,   215,   216,   217,   218,   221,   222,   223,   220,   219,
     161,    92,    78,    79,   119,   119,   119,     0,     0,     0,
       0,    34,    12,    13,     0,     0,     0,    93,   101,   110,
     109,     0,    98,     0,    47,   161,     0,     0,     0,     0,
     191,   205,    27,    88,     0,     0,     0,     0,     0,   161,
     161,     0,     0,   161,    36,    14,    15,     0,     0,   112,
     100,    97,    96,     0,    44,     0,   197,   196,   195,   199,
     198,   118,     0,     0,     0,   161,    17,    31,    31,     0,
      48,   161,    55,     0,    99,    95,   161,     0,   120,     0,
       0,     0,     0,    25,    24,     0,     0,     0,    39,     0,
     113,    45,   192,     0,   116,   115,   114,    32,    38,    37,
     161,    42,    56,   121,     0,     0,    10,   161,     0,     0,
      43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    12,     6,     7,   381,   339,   340,   287,
     382,   275,   325,   453,   383,   177,   440,   243,   476,   394,
     309,   458,    70,   110,   443,    36,    37,    38,    71,    72,
     278,   234,   235,   236,   237,   216,   238,   295,   348,   296,
     345,   387,   334,   405,   449,    82,   240,     9,    11,    83,
      75,   171,   172,    76,    77,   258,   259,   356,   357,   400,
      78,   163,   271,    91
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -341
static const yytype_int16 yypact[] =
{
    -152,     3,  -152,     1,  -237,    60,    64,  -341,  -341,  -110,
      59,  -155,  -149,  -118,  -341,  -102,  -341,  -152,   566,  -100,
     200,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
    -341,   205,  -341,  -341,  -341,  -341,  -341,   566,   770,  -341,
     158,  -341,  -341,  -341,  -341,  -341,  -341,  -341,   223,  1065,
    1065,  1065,  -341,  1065,  1065,   816,  -341,  -341,  -341,  -100,
     -41,   239,    13,   -21,    -4,    21,    37,    42,    47,   917,
    -230,  -111,  -341,    13,    13,  1922,    78,  -341,    84,  -100,
    1065,  -341,  -341,  -341,  1286,  1286,  -341,  -341,  -341,  1065,
    1474,   -61,  -341,  1065,    30,  -341,   278,  -341,  1132,  1132,
     321,  1065,  1065,   632,    -6,    26,     6,  1132,   302,   770,
      20,  -341,  -341,  1065,  1065,  1065,  1065,  1065,   104,    53,
     143,  1065,   421,  1065,  1065,  1065,  1065,  1065,  1065,  1065,
    1065,  1065,  1065,  1065,  1065,  -341,    56,    58,  -341,  1922,
    1523,   -53,  1065,  -341,  1065,  1872,  -341,  -341,  -341,  -341,
    -341,  -341,  -341,    45,    46,    45,  -128,  1634,   -94,  -341,
    -341,  -341,   -88,  1065,  1388,  1412,    77,  1065,  -341,  -341,
    1132,    81,    80,  -341,  -341,   111,     9,   227,  1738,  1968,
    1989,  2010,  2010,  -341,    14,  -341,   570,  1065,  1065,    89,
    1898,  1065,  1065,  1065,  1115,  1424,  1485,   899,   746,   180,
     180,   172,   172,   172,   172,    93,   323,   185,   185,  1065,
    1065,  -341,  1706,  1570,  1065,  -341,    98,  -341,  1065,  -341,
    1065,  -341,  -341,  1658,   231,   231,  -341,  1256,    99,  -341,
    1065,   101,     7,     0,  -131,  -341,   687,  -341,  -341,    48,
    -341,    48,    62,  -341,  -341,  -341,   105,    67,   -84,  2010,
    2010,   570,  -341,  1065,  1115,  1115,  1115,   318,   107,   208,
     113,  1922,  1789,  -341,  1065,  1321,  1065,  1831,  1193,  1132,
    1065,   114,   115,  -341,  -341,   119,   848,   391,   -66,   -48,
     687,    29,   121,   394,    -7,  1065,     9,   -63,     9,     9,
     178,  -341,  -341,  -341,  -341,   388,   389,  -341,  -341,  1065,
    1065,  -341,  -341,    22,   -33,  1219,  1132,  -341,   340,  -163,
    -341,  -341,  1922,  -341,  1831,  -341,  1065,  -341,   -25,  1450,
    -341,  -341,  1065,  -341,  -341,  -341,    68,   128,     9,  -341,
       9,   259,   260,   265,  -341,   179,   687,   352,   153,   160,
     191,   729,   729,   389,   389,   411,     9,  -341,   412,   119,
     119,  -341,    81,  1065,  -341,  -341,  -341,   487,  -341,  1345,
    -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,  -341,
     848,    48,   687,   687,   307,   307,   307,   998,  1065,    97,
    1065,   309,   303,   305,   171,   163,  1065,  -341,  -341,  -341,
    -341,     9,   729,     9,   166,   -26,   636,   237,   -62,  1602,
    -341,  -341,  -341,  -341,   433,   169,   170,   175,  1065,    25,
     373,  1065,  1065,   381,   268,  -341,  -341,  1065,   450,  1946,
     729,  -341,   729,  1065,  -341,   402,  -341,  -341,  -341,  -341,
    -341,  -341,   452,   452,   452,   234,  -341,  -222,  -222,   106,
     308,   360,  -341,   -17,  -341,  -341,   -26,   636,  -341,   -11,
      35,    40,   253,  -341,  -341,  1065,  1065,  1065,   227,   456,
    -341,  -341,  -341,   458,  -341,  -341,  -341,  -341,   119,   119,
     136,   220,  -341,  -341,  1065,  1065,  -341,    27,   -16,  1065,
     119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -341,  -341,   461,    23,   451,  -341,  -341,  -341,    57,  -341,
      87,   251,  -261,    34,    95,    94,  -341,    28,  -341,  -341,
    -341,  -341,   266,  -341,  -341,   441,  -341,   376,  -341,   372,
    -341,  -341,   252,   241,  -341,   -35,  -341,  -341,     2,  -341,
    -341,  -220,  -341,   -23,   -96,     5,   267,  -341,  -341,   -38,
     -36,    41,   313,   735,  -341,   277,  -341,  -341,  -341,  -340,
    -341,  -341,   279,   415
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -162
static const yytype_int16 yytable[] =
{
      74,    14,    -8,    95,   479,     8,    10,    13,     8,   169,
      43,   337,    43,    84,    85,    86,    95,    87,    88,    90,
     244,   -92,     8,     5,    39,    95,     5,    97,   354,   323,
      -8,   105,    95,   -21,   108,   -50,    16,    -8,   111,   112,
      24,   452,   355,    73,   139,   106,   107,   142,    95,    95,
     143,    95,   322,   140,    96,   210,   425,   145,   211,   427,
     155,   155,   155,   157,    92,   164,   165,    96,    -7,   155,
      95,    74,    17,   324,   104,    -8,    96,   178,   179,   180,
     181,   182,   299,    96,   138,   190,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,    96,
      96,    18,    96,   154,   154,   154,   212,   462,   213,   402,
     183,     1,   154,    19,    73,   146,   331,   411,   215,    20,
     217,    96,   388,   428,     2,   300,   455,   223,    21,   332,
     285,   227,   155,   184,   424,   -92,   134,   135,   -92,   156,
     158,   162,   175,   286,   -49,   176,   218,   -21,   155,   219,
     -92,   249,   250,   -21,   -21,   254,   255,   256,   -92,    22,
     412,   147,   -21,   109,   -50,   -28,   338,   187,   188,   456,
     189,    23,   421,   261,   262,   154,     2,   -21,   265,   -28,
     218,   239,   267,   221,   268,   461,   218,   -23,   245,   222,
     218,   247,   276,   302,   252,   343,   344,   148,   284,   144,
     444,   149,   445,    40,   297,   -21,   298,   144,   328,   246,
      41,   329,    79,   155,   133,   134,   135,   305,   129,   130,
     131,   132,   133,   134,   135,   -92,   -77,   248,   312,   -77,
     314,   155,   315,    80,   319,    93,   -92,   281,   231,   150,
     231,   218,   -20,    94,   351,   333,   297,   335,   -28,   218,
     -92,   -28,   360,   -23,   -21,    98,   303,   459,   322,   136,
     460,   276,   276,   463,     1,   137,   464,   -21,   155,   -50,
       1,    22,    99,   -49,   154,   283,   107,     2,   185,   358,
     359,   152,   170,   232,   370,   232,   -92,   -92,   379,   380,
     -92,   239,   304,   239,   239,   151,   -92,   100,   -21,    22,
     -50,   -23,   -21,   168,   -50,   173,    22,   -23,   -23,   463,
     318,   154,   465,   101,   463,   395,   -23,   466,   102,   -92,
     -92,   399,   -92,   103,    43,    44,    45,    46,    47,   186,
      48,   -23,   207,   239,   208,   239,   403,   450,   451,   409,
     410,   -92,   413,   283,   107,   389,   390,   352,   419,    49,
      50,   239,   406,   407,   226,   218,   -20,   229,    51,   -23,
     399,   230,   -20,   -20,   242,   251,    53,   135,   -18,   257,
     435,   -20,   266,   276,   276,   270,   274,   277,   -49,   441,
      54,   306,   301,   159,   307,   446,   -20,    55,   308,   -33,
     310,   320,   321,   322,    43,   330,   239,   169,   239,   346,
      56,    57,    58,   353,   347,   371,   374,   375,   -23,   -49,
     474,   399,   376,   -49,   -20,   377,   378,   276,   276,   470,
     384,   -23,   391,   393,    43,    44,    45,    46,    47,   404,
      48,   175,   380,   379,   417,    59,   477,   276,    60,   418,
     423,   276,   233,   426,   431,   432,   433,   337,   439,    49,
      50,   434,   -23,   442,   447,   448,   -23,   467,    51,   472,
     457,   473,   475,   -20,    15,    61,    53,   436,    25,   191,
     416,   160,   454,   280,   192,   414,   -20,   415,    42,   167,
      54,   174,   -18,   228,   279,   260,   471,    55,   -18,   -18,
      43,    44,    45,    46,    47,   153,    48,   -18,   233,   282,
      56,    57,    58,   -33,   272,   141,     0,   -20,     0,   -33,
       0,   -20,   -18,     0,     0,    49,    50,   396,   -33,     0,
      63,     0,     0,     0,    51,     0,     0,   336,     0,   341,
     342,     0,    53,   -33,     0,    59,     0,     0,    60,     0,
     -18,     0,     0,   326,     0,     0,    54,     0,     0,     0,
     349,   350,   233,    55,   233,   233,     0,     0,     0,     0,
       0,   -33,     0,     0,   161,    61,    56,    57,    58,   372,
     397,   373,     0,    43,    44,    45,    46,    47,    26,    48,
       0,     0,     0,     0,     0,     0,     0,   392,     0,    64,
      65,    66,    67,    68,   233,    81,   233,    69,    49,    50,
       0,    59,   -18,     0,    60,     0,     0,    51,     0,     0,
       0,     0,   233,     0,    27,    53,    28,     0,     0,     0,
      63,     0,     0,   -33,     0,     0,     0,     0,     0,    54,
       0,    61,   420,   -18,   422,     0,    55,   -18,   193,    43,
      44,    45,    46,    47,    26,    48,     0,     0,     0,    56,
      57,    58,     0,     0,   -33,     0,     0,   233,   -33,   233,
       0,    81,   437,   438,    49,    50,     0,     0,    29,    30,
     166,     0,     0,    51,     0,     0,     0,     0,     0,     0,
      27,    53,    28,     0,    59,    31,    63,    60,     0,    64,
      65,    66,    67,    68,     0,    54,    32,    69,   288,   289,
     290,   291,    55,   292,   293,   294,   468,   469,     0,     0,
       0,     0,     0,     0,    61,    56,    57,    58,     0,   397,
       0,     0,     0,     0,     0,     0,   478,     0,     0,     0,
     480,     0,   398,     0,    29,    30,     0,     0,     0,     0,
     288,   289,   290,   291,   153,   292,   293,   294,   385,   386,
      59,    31,     0,    60,     0,    64,    65,    66,    67,    68,
       0,     0,    32,    69,     0,     0,     0,     0,     0,    63,
       0,     0,     0,    43,    44,    45,    46,    47,     0,    48,
      61,  -125,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    33,    34,    35,     0,     0,     0,     0,    49,    50,
       0,     0,     0,     0,     0,     0,     0,    51,    52,     0,
      81,     0,     0,     0,     0,    53,     0,     0,     0,    43,
      44,    45,    46,    47,     0,    48,     0,     0,     0,    54,
       0,     0,     0,     1,     0,    63,    55,     0,    64,    65,
      66,    67,    68,     0,    49,    50,    69,     0,     0,    56,
      57,    58,     0,    51,     0,     0,   -28,    33,    34,    35,
       0,    53,     0,     0,     0,     0,     0,     0,   -28,     0,
       0,     0,     0,     0,     0,    54,     0,     0,     0,     0,
       0,   398,    55,     0,    59,     0,     0,    60,     0,     0,
       0,     0,     0,     0,     0,    56,    57,    58,     0,     0,
       0,     0,     0,   323,    64,    65,    66,    67,    68,     0,
       0,   241,    69,     0,    61,     0,     0,     0,     0,     0,
      43,    44,    45,    46,    47,     0,    48,     0,     0,     0,
      59,     0,     0,    60,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    62,    49,    50,   324,     0,     0,
       0,     0,     0,     0,    51,     0,     0,     0,     0,     0,
      61,     0,    53,     0,     0,     0,     0,   241,     0,    63,
     -28,     0,     0,     0,     0,     0,    54,   -28,     0,     0,
       0,     0,     0,    55,     0,   -28,     0,     0,     0,     0,
      81,     0,     0,     0,     0,     0,    56,    57,    58,     0,
     -28,    43,    44,    45,    46,    47,     0,    48,     0,     0,
       0,     0,   327,     0,     0,    63,     0,     0,     0,     0,
       0,   241,     0,   241,   241,     0,    49,    50,   -28,     0,
       0,    59,     0,     0,    60,    51,     0,     0,    64,    65,
      66,    67,    68,    53,     0,     0,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    54,     0,     0,
       0,    61,     0,   241,    55,   241,     0,     0,    43,    44,
      45,    46,    47,     0,    48,     0,    89,    56,    57,    58,
       0,   241,     0,     0,    64,    65,    66,    67,    68,     0,
     -28,    81,    69,    49,    50,     0,     0,     0,     0,     0,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
      53,   -28,    59,     0,     0,    60,    63,     0,     0,     0,
       0,   -28,   -28,     0,    54,   -28,   241,     0,   241,     0,
       0,    55,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    48,    61,     0,    56,    57,    58,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      49,    50,     0,     0,     0,     0,     0,     0,     0,    51,
     408,     0,    81,     0,     0,     0,     0,    53,     0,    59,
       1,     0,    60,     0,     0,    64,    65,    66,    67,    68,
       0,    54,     0,    69,     0,     0,     0,    63,    55,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    61,
       0,    56,    57,    58,   113,   114,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,    81,
       0,     0,     0,     0,     0,     0,    59,     0,     0,    60,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    63,     0,    64,    65,    66,    67,
      68,     0,     0,     0,    69,     0,    61,   113,   114,   115,
     116,   117,   118,   119,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,     0,     0,     0,     0,   153,     0,     0,     0,
       0,     0,     0,     0,     0,   316,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    63,     0,    64,    65,    66,    67,    68,     0,     0,
       0,    69,   113,   114,   115,   116,   117,   118,   119,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    65,    66,    67,    68,     0,     0,     0,    69,   113,
     114,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   113,   114,   115,   116,   117,   118,   119,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     0,
     317,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   113,   114,   115,   116,   117,
     118,   119,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,     0,     0,   273,     0,     0,     0,     0,     0,     0,
     361,   362,   363,   364,   113,   114,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   365,   366,   367,     0,     0,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   119,   313,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,     0,     0,     0,
       0,     0,   401,   113,   114,   115,   116,   117,   118,   119,
       0,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,     0,
       0,     0,     0,     0,     0,   113,   114,   115,   116,   117,
     118,   119,   224,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   113,
     114,   115,   116,   117,   118,   119,   225,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   368,   369,     0,     0,     0,
       0,     0,     0,   429,     0,     0,     0,   113,   114,   115,
     116,   117,   118,   119,    89,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,     0,     0,     0,     0,     0,     0,   209,   220,
     114,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   269,     0,     0,     0,   430,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   264,     0,     0,     0,     0,
     113,   114,   115,   116,   117,   118,   119,   263,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   113,   114,   115,   116,   117,   118,   119,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,   113,   114,   115,   116,   117,   118,   119,
     311,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,   113,
     114,   115,   116,   117,   118,   119,   214,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   113,   114,   115,   116,   117,   118,   119,
     253,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,     0,  -161,  -161,  -161,  -161,  -161,
    -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,  -161,
    -161,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   116,   117,   118,   119,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,  -162,  -162,  -162,  -162,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
      38,     0,     8,     3,    20,     0,     3,     2,     3,     3,
       3,    74,     3,    49,    50,    51,     3,    53,    54,    55,
       6,     8,    17,     0,    19,     3,     3,    62,   191,    55,
       8,    69,     3,     8,   145,     8,   273,     8,    73,    74,
      17,   263,   205,    38,    80,   275,   276,   108,     3,     3,
     111,     3,   274,    89,    54,   108,   396,    93,   111,   121,
      98,    99,   100,    99,    59,   101,   102,    54,     8,   107,
       3,   109,     8,    99,    69,     8,    54,   113,   114,   115,
     116,   117,    20,    54,    79,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    54,
      54,   211,    54,    98,    99,   100,   142,   447,   144,   370,
       6,   263,   107,    54,   109,    85,   123,    20,   153,   274,
     155,    54,   342,   185,   276,    63,    20,   163,   277,   136,
     261,   167,   170,    29,   395,   122,    43,    44,   125,    98,
      99,   100,   122,   274,     8,   125,   274,   122,   186,   277,
     137,   187,   188,   128,   129,   191,   192,   193,   145,   277,
      63,   131,   137,   274,   137,   191,   229,    24,    25,    63,
      27,   273,   392,   209,   210,   170,   276,   152,   214,   205,
     274,   176,   218,   277,   220,   446,   274,     8,   174,   277,
     274,   186,   230,   277,   189,    17,    18,   167,   233,   260,
     420,   171,   422,     3,   239,   180,   241,   260,   274,   186,
       5,   277,    54,   251,    42,    43,    44,   253,    38,    39,
      40,    41,    42,    43,    44,   180,   274,   186,   264,   277,
     266,   269,   267,    10,   270,   276,   191,   232,   231,   209,
     231,   274,     8,     4,   277,   252,   281,   285,   274,   274,
     205,   277,   277,    74,   229,   276,   251,   274,   274,   181,
     277,   299,   300,   274,   263,   181,   277,   242,   306,   242,
     263,   277,   276,   137,   269,   275,   276,   276,   174,   314,
     316,     3,   276,   276,   322,   276,   273,   274,   128,   129,
     277,   286,   251,   288,   289,   265,   274,   276,   273,   277,
     273,   122,   277,   277,   277,     3,   277,   128,   129,   274,
     269,   306,   277,   276,   274,   353,   137,   277,   276,   274,
     274,   357,   277,   276,     3,     4,     5,     6,     7,   276,
       9,   152,   276,   328,   276,   330,   371,   433,   434,   377,
     378,   274,   380,   275,   276,   343,   344,   306,   386,    28,
      29,   346,   375,   376,   277,   274,   122,   277,    37,   180,
     396,   250,   128,   129,   137,   276,    45,    44,     8,   184,
     408,   137,   274,   411,   412,   144,   277,   276,   242,   417,
      59,    63,   277,    62,   277,   423,   152,    66,   180,     8,
     277,   277,   277,   274,     3,   274,   391,     3,   393,    11,
      79,    80,    81,    63,    15,   277,   147,   147,   229,   273,
     274,   447,   147,   277,   180,    63,   263,   455,   456,   457,
     229,   242,    11,    11,     3,     4,     5,     6,     7,   122,
       9,   122,   129,   128,   263,   114,   474,   475,   117,   276,
     274,   479,   176,   206,    11,   276,   276,    74,   180,    28,
      29,   276,   273,     3,    52,     3,   277,   204,    37,     3,
     152,     3,   242,   229,     3,   144,    45,   410,    17,    48,
     383,   150,   438,   232,    53,   381,   242,   382,    37,   103,
      59,   109,   122,   170,   232,   208,   458,    66,   128,   129,
       3,     4,     5,     6,     7,   174,     9,   137,   232,   232,
      79,    80,    81,   122,   225,    90,    -1,   273,    -1,   128,
      -1,   277,   152,    -1,    -1,    28,    29,    30,   137,    -1,
     199,    -1,    -1,    -1,    37,    -1,    -1,   286,    -1,   288,
     289,    -1,    45,   152,    -1,   114,    -1,    -1,   117,    -1,
     180,    -1,    -1,   277,    -1,    -1,    59,    -1,    -1,    -1,
     299,   300,   286,    66,   288,   289,    -1,    -1,    -1,    -1,
      -1,   180,    -1,    -1,   243,   144,    79,    80,    81,   328,
      83,   330,    -1,     3,     4,     5,     6,     7,    12,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,    -1,   268,
     269,   270,   271,   272,   328,   174,   330,   276,    28,    29,
      -1,   114,   242,    -1,   117,    -1,    -1,    37,    -1,    -1,
      -1,    -1,   346,    -1,    48,    45,    50,    -1,    -1,    -1,
     199,    -1,    -1,   242,    -1,    -1,    -1,    -1,    -1,    59,
      -1,   144,   391,   273,   393,    -1,    66,   277,   217,     3,
       4,     5,     6,     7,    12,     9,    -1,    -1,    -1,    79,
      80,    81,    -1,    -1,   273,    -1,    -1,   391,   277,   393,
      -1,   174,   411,   412,    28,    29,    -1,    -1,   102,   103,
      38,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    45,    50,    -1,   114,   119,   199,   117,    -1,   268,
     269,   270,   271,   272,    -1,    59,   130,   276,    11,    12,
      13,    14,    66,    16,    17,    18,   455,   456,    -1,    -1,
      -1,    -1,    -1,    -1,   144,    79,    80,    81,    -1,    83,
      -1,    -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,
     479,    -1,   245,    -1,   102,   103,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,   174,    16,    17,    18,    19,    20,
     114,   119,    -1,   117,    -1,   268,   269,   270,   271,   272,
      -1,    -1,   130,   276,    -1,    -1,    -1,    -1,    -1,   199,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
     144,   211,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   225,   226,   227,    -1,    -1,    -1,    -1,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
     174,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,    59,
      -1,    -1,    -1,   263,    -1,   199,    66,    -1,   268,   269,
     270,   271,   272,    -1,    28,    29,   276,    -1,    -1,    79,
      80,    81,    -1,    37,    -1,    -1,     8,   225,   226,   227,
      -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,   245,    66,    -1,   114,    -1,    -1,   117,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,    -1,
      -1,    -1,    -1,    55,   268,   269,   270,   271,   272,    -1,
      -1,   176,   276,    -1,   144,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,    -1,    -1,    -1,
     114,    -1,    -1,   117,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,   174,    28,    29,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,
     144,    -1,    45,    -1,    -1,    -1,    -1,   232,    -1,   199,
     122,    -1,    -1,    -1,    -1,    -1,    59,   129,    -1,    -1,
      -1,    -1,    -1,    66,    -1,   137,    -1,    -1,    -1,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    -1,
     152,     3,     4,     5,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,   277,    -1,    -1,   199,    -1,    -1,    -1,    -1,
      -1,   286,    -1,   288,   289,    -1,    28,    29,   180,    -1,
      -1,   114,    -1,    -1,   117,    37,    -1,    -1,   268,   269,
     270,   271,   272,    45,    -1,    -1,   276,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,
      -1,   144,    -1,   328,    66,   330,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    -1,   260,    79,    80,    81,
      -1,   346,    -1,    -1,   268,   269,   270,   271,   272,    -1,
     242,   174,   276,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,   263,   114,    -1,    -1,   117,   199,    -1,    -1,    -1,
      -1,   273,   274,    -1,    59,   277,   391,    -1,   393,    -1,
      -1,    66,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,   144,    -1,    79,    80,    81,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
     172,    -1,   174,    -1,    -1,    -1,    -1,    45,    -1,   114,
     263,    -1,   117,    -1,    -1,   268,   269,   270,   271,   272,
      -1,    59,    -1,   276,    -1,    -1,    -1,   199,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   144,
      -1,    79,    80,    81,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,   174,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,    -1,   117,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,   199,    -1,   268,   269,   270,   271,
     272,    -1,    -1,    -1,   276,    -1,   144,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,   174,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   199,    -1,   268,   269,   270,   271,   272,    -1,    -1,
      -1,   276,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     268,   269,   270,   271,   272,    -1,    -1,    -1,   276,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
     277,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,   277,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    92,    93,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,   133,   134,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,   277,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   277,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,   274,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    21,
      22,    23,    24,    25,    26,    27,   274,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   265,   266,    -1,    -1,    -1,
      -1,    -1,    -1,   121,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,   260,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   235,   125,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,   125,    -1,    -1,    -1,   185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,   111,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
     111,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    54,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    22,    23,    24,    25,    26,    27,
      52,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   263,   276,   279,   280,   281,   282,   283,   323,   325,
       3,   326,   281,   323,     0,   280,   273,     8,   211,    54,
     274,   277,   277,   273,   281,   282,    12,    48,    50,   102,
     103,   119,   130,   225,   226,   227,   303,   304,   305,   323,
       3,     5,   303,     3,     4,     5,     6,     7,     9,    28,
      29,    37,    38,    45,    59,    66,    79,    80,    81,   114,
     117,   144,   174,   199,   268,   269,   270,   271,   272,   276,
     300,   306,   307,   323,   327,   328,   331,   332,   338,    54,
      10,   174,   323,   327,   328,   328,   328,   328,   328,   260,
     328,   341,   323,   276,     4,     3,    54,   313,   276,   276,
     276,   276,   276,   276,   323,   327,   275,   276,   145,   274,
     301,   313,   313,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   181,   181,   323,   328,
     328,   341,   108,   111,   260,   328,    85,   131,   167,   171,
     209,   265,     3,   174,   323,   327,   329,   328,   329,    62,
     150,   243,   329,   339,   328,   328,    38,   305,   277,     3,
     276,   329,   330,     3,   307,   122,   125,   293,   328,   328,
     328,   328,   328,     6,    29,   174,   276,    24,    25,    27,
     328,    48,    53,   217,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   276,   276,   235,
     108,   111,   328,   328,    54,   313,   313,   313,   274,   277,
     125,   277,   277,   328,   274,   274,   277,   328,   330,   277,
     250,   231,   276,   300,   309,   310,   311,   312,   314,   323,
     324,   331,   137,   295,     6,   174,   281,   323,   329,   328,
     328,   276,   323,    52,   328,   328,   328,   184,   333,   334,
     333,   328,   328,   111,   235,   328,   274,   328,   328,   125,
     144,   340,   340,   277,   277,   289,   327,   276,   308,   310,
     311,   323,   324,   275,   313,   261,   274,   287,    11,    12,
      13,    14,    16,    17,    18,   315,   317,   313,   313,    20,
      63,   277,   277,   323,   329,   328,    63,   277,   180,   298,
     277,   111,   328,   277,   328,   313,   122,   277,   329,   328,
     277,   277,   274,    55,    99,   290,   300,   331,   274,   277,
     274,   123,   136,   252,   320,   327,   311,    74,   229,   285,
     286,   311,   311,    17,    18,   318,    11,    15,   316,   289,
     289,   277,   329,    63,   191,   205,   335,   336,   313,   328,
     277,    90,    91,    92,    93,   132,   133,   134,   265,   266,
     327,   277,   311,   311,   147,   147,   147,    63,   263,   128,
     129,   284,   288,   292,   229,    19,    20,   319,   319,   316,
     316,    11,   311,    11,   297,   327,    30,    83,   245,   328,
     337,   277,   290,   313,   122,   321,   321,   321,   172,   327,
     327,    20,    63,   327,   293,   292,   288,   263,   276,   327,
     311,   319,   311,   274,   290,   337,   206,   121,   185,   121,
     185,    11,   276,   276,   276,   327,   286,   289,   289,   180,
     294,   327,     3,   302,   319,   319,   327,    52,     3,   322,
     322,   322,   263,   291,   291,    20,    63,   152,   299,   274,
     277,   290,   337,   274,   277,   277,   277,   204,   289,   289,
     327,   295,     3,     3,   274,   242,   296,   327,   289,    20,
     289
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 345 "us\\1csql\\1csql.y"
    { /*$$ = $1;*/ GAst = newCStmtList((yyvsp[(1) - (2)].a)); (yyval.a) = GAst; ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 346 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCStmtList((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 351 "us\\1csql\\1csql.y"
    { emit("STMT"); (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 354 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 355 "us\\1csql\\1csql.y"
    { emit("UNION"); (yyval.a) = newCUnion((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 358 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 359 "us\\1csql\\1csql.y"
    { emit("UNION SUBQUERY"); (yyval.a) = newCUnionSub((yyvsp[(1) - (1)].a)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 363 "us\\1csql\\1csql.y"
    { emit("SELECTNODATA"); (yyval.a) = newCSelect((yyvsp[(1) - (7)].a), (yyvsp[(3) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(5) - (7)].a), NULL, NULL, NULL, NULL, (yyvsp[(6) - (7)].a), NULL, (yyvsp[(7) - (7)].a), NULL); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 367 "us\\1csql\\1csql.y"
    { emit("SELECT"); (yyval.a) = newCSelect((yyvsp[(1) - (15)].a), (yyvsp[(3) - (15)].a), (yyvsp[(4) - (15)].a), (yyvsp[(5) - (15)].a), (yyvsp[(7) - (15)].a), (yyvsp[(8) - (15)].a), (yyvsp[(9) - (15)].a), (yyvsp[(10) - (15)].a), (yyvsp[(11) - (15)].a), (yyvsp[(12) - (15)].a), (yyvsp[(14) - (15)].a), (yyvsp[(15) - (15)].a)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 370 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup(NULL, NULL); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 371 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup(NULL, (yyvsp[(1) - (1)].a)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 372 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 373 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(2) - (2)].a), (yyvsp[(1) - (2)].a)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 374 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 377 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 378 "us\\1csql\\1csql.y"
    { emit("START WITH"); (yyval.a) = newCHierarchy((yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 379 "us\\1csql\\1csql.y"
    { emit("START WITH"); (yyval.a) = newCHierarchy((yyvsp[(4) - (4)].a), (yyvsp[(1) - (4)].a)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 380 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHierarchy(NULL, (yyvsp[(1) - (1)].a)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 383 "us\\1csql\\1csql.y"
    { emit("CONNECT BY"); (yyval.a) = newCConnect((yyvsp[(4) - (4)].a), true); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 384 "us\\1csql\\1csql.y"
    { emit("CONNECT BY"); (yyval.a) = newCConnect((yyvsp[(3) - (3)].a), false); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 387 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 388 "us\\1csql\\1csql.y"
    { emit("WHERE"); (yyval.a) = newCWhere((yyvsp[(2) - (2)].a)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 392 "us\\1csql\\1csql.y"
    { emit("GROUPBYLIST"); (yyval.a) =  newCGroup((yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].boolval)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 394 "us\\1csql\\1csql.y"
    { emit("GROUPBYLIST"); (yyval.a) =  newCGroup((yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].boolval)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 398 "us\\1csql\\1csql.y"
    { emit("GROUPBY"); (yyval.a) = newCGroupList((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].strval)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 400 "us\\1csql\\1csql.y"
    { emit("GROUPBY"); (yyval.a) = addtoCGroupList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 403 "us\\1csql\\1csql.y"
    { (yyval.strval) = ""; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 404 "us\\1csql\\1csql.y"
    { (yyval.strval) = "asc"; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 405 "us\\1csql\\1csql.y"
    { (yyval.strval) = "desc"; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 408 "us\\1csql\\1csql.y"
    { (yyval.boolval) = false; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 409 "us\\1csql\\1csql.y"
    { (yyval.boolval) = true; ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 412 "us\\1csql\\1csql.y"
    { emit("HAVING"); (yyval.a) = newCHaving((yyvsp[(2) - (2)].a)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 414 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 415 "us\\1csql\\1csql.y"
    { emit("FORUPDATE"); (yyval.a) = newCForUpdate((yyvsp[(3) - (3)].a)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 418 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 419 "us\\1csql\\1csql.y"
    { emit("ORDERBY"); (yyval.a) = newCOrder((yyvsp[(3) - (3)].a)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 420 "us\\1csql\\1csql.y"
    { emit("ORDERBY"); (yyval.a) = newCOrder((yyvsp[(3) - (3)].a)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 423 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 424 "us\\1csql\\1csql.y"
    { emit("INDEXBY"); (yyval.a) = newCIndexBy((yyvsp[(3) - (3)].a)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 425 "us\\1csql\\1csql.y"
    { emit("INDEXBY"); (yyval.a) = newCIndexBy((yyvsp[(3) - (3)].a)); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 428 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 429 "us\\1csql\\1csql.y"
    { emit("TOTAL"); (yyval.a) = newCTotal((yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 433 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDER LIST"); (yyval.a) = newCAnOrderList((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].strval)); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 435 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDER LIST"); (yyval.a) = addtoCAnOrderList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 438 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 438 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDERBY"); (yyval.a) = newCAnOrder((yyvsp[(3) - (3)].a)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 441 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 441 "us\\1csql\\1csql.y"
    { emit("LIMIT 1"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 442 "us\\1csql\\1csql.y"
    { emit("LIMIT 2"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 445 "us\\1csql\\1csql.y"
    { (yyval.cname) = newCName((yyvsp[(1) - (1)].qpsz)->psz, (yyvsp[(1) - (1)].qpsz)->b_quot); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 446 "us\\1csql\\1csql.y"
    { (yyval.cname) = addtoCName((yyvsp[(1) - (3)].cname), (yyvsp[(3) - (3)].qpsz)->psz, (yyvsp[(3) - (3)].qpsz)->b_quot); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 449 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 450 "us\\1csql\\1csql.y"
    { emit("INTO"); (yyval.a) = newCInto(newCName((yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot)); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 453 "us\\1csql\\1csql.y"
    { emit("COLUMN"); (yyval.a) = newCExprList(newCField(newCName((yyvsp[(1) - (1)].qpsz)->psz, (yyvsp[(1) - (1)].qpsz)->b_quot)), false); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 454 "us\\1csql\\1csql.y"
    { emit("COLUMN"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), newCField(newCName((yyvsp[(3) - (3)].qpsz)->psz, (yyvsp[(3) - (3)].qpsz)->b_quot))); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 457 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelOpt("all", NULL); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 458 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelOpt("allowed", NULL); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 459 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelOpt("distinct", NULL); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 460 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 461 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelOpt("first", newCNumber((yyvsp[(2) - (2)].intval))); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 462 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 463 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 464 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 465 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 466 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 469 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelOpts((yyvsp[(1) - (1)].a)); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 470 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCSelOpts((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 473 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 474 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 477 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 478 "us\\1csql\\1csql.y"
    {(yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 481 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelExpr((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 482 "us\\1csql\\1csql.y"
    { emit("COLUMN_SUBQUERY"); (yyval.a) = newCSelTabSub((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 483 "us\\1csql\\1csql.y"
    { emit("SELECTALL"); (yyval.a) = newCSelExpr(newCField(newCName("*", false)), NULL, false); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 484 "us\\1csql\\1csql.y"
    { emit("NULLX"); (yyval.a) = newCSelExpr(newCNull(), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 488 "us\\1csql\\1csql.y"
    { emit("TABREF"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 489 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 490 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 494 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 495 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 508 "us\\1csql\\1csql.y"
    { emit("TABLE"); (yyval.a) = newCTable((yyvsp[(1) - (3)].cname), (yyvsp[(2) - (3)].qpsz)->psz, (yyvsp[(2) - (3)].qpsz)->b_quot); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 509 "us\\1csql\\1csql.y"
    { emit("TABLEREFERENCES"); (yyval.a) = newCTabBrac((yyvsp[(2) - (3)].a)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 510 "us\\1csql\\1csql.y"
    { emit("TABPROC"); (yyval.a) = newCTabProc((yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].qpsz)->psz, (yyvsp[(5) - (5)].qpsz)->b_quot, true); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 511 "us\\1csql\\1csql.y"
    { emit("TABFUNC"); (yyval.a) = newCTabProc((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot, false); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 514 "us\\1csql\\1csql.y"
    { emit ("ALIAS"); (yyval.qpsz) = (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 515 "us\\1csql\\1csql.y"
    { emit ("ALIAS"); (yyval.qpsz) = (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 516 "us\\1csql\\1csql.y"
    { (yyval.qpsz) = newQuot_psz(false); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 521 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a), NULL, NULL); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 523 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), NULL, NULL, NULL); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 525 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), (yyvsp[(6) - (6)].a), (yyvsp[(3) - (6)].strval), (yyvsp[(2) - (6)].strval)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 527 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), NULL, (yyvsp[(3) - (5)].strval), (yyvsp[(2) - (5)].strval)); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 529 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), (yyvsp[(5) - (5)].a), (yyvsp[(2) - (5)].strval), NULL); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 531 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), NULL, (yyvsp[(2) - (4)].strval), NULL); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 533 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), (yyvsp[(6) - (6)].a), "natural", (yyvsp[(3) - (6)].strval)); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 535 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), NULL, "natural", (yyvsp[(3) - (5)].strval)); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 537 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a), "straight", NULL); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 539 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), NULL, "straight", NULL); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 542 "us\\1csql\\1csql.y"
    { (yyval.strval) = "inner"; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 543 "us\\1csql\\1csql.y"
    { (yyval.strval) = "cross"; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 546 "us\\1csql\\1csql.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 547 "us\\1csql\\1csql.y"
    {(yyval.strval) = "outer"; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 550 "us\\1csql\\1csql.y"
    { (yyval.strval) = "left"; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 551 "us\\1csql\\1csql.y"
    { (yyval.strval) = "right"; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 554 "us\\1csql\\1csql.y"
    { (yyval.strval) = "left"; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 555 "us\\1csql\\1csql.y"
    { (yyval.strval) = "right"; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 556 "us\\1csql\\1csql.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 560 "us\\1csql\\1csql.y"
    { emit("ONEXPR"); (yyval.a) = newCJoinCond((yyvsp[(2) - (2)].a), "on"); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 561 "us\\1csql\\1csql.y"
    { emit("USING"); (yyval.a) = newCJoinCond((yyvsp[(3) - (4)].a), "using"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 566 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 568 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 570 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 571 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 574 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 575 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 578 "us\\1csql\\1csql.y"
    { emit("INDEX"); (yyval.a) = newCAstNULL(); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 579 "us\\1csql\\1csql.y"
    { emit("INDEX"); (yyval.a) = (yyvsp[(1) - (3)].a); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 582 "us\\1csql\\1csql.y"
    { emit("SUBQUERY"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 583 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 586 "us\\1csql\\1csql.y"
    { emit("SUBQUERYAS %s", (yyvsp[(2) - (2)].qpsz)->psz); (yyval.a) = newCTabSub((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 589 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 590 "us\\1csql\\1csql.y"
    { emit("WITH"); (yyval.a) = newCWith((yyvsp[(2) - (2)].a)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 593 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWithList((yyvsp[(3) - (3)].a), newCName((yyvsp[(1) - (3)].qpsz)->psz, (yyvsp[(1) - (3)].qpsz)->b_quot)); delete (yyvsp[(1) - (3)].qpsz); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 594 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCWithList((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), newCName((yyvsp[(3) - (5)].qpsz)->psz, (yyvsp[(3) - (5)].qpsz)->b_quot)); delete (yyvsp[(3) - (5)].qpsz); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 599 "us\\1csql\\1csql.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.a) = newCUserVar(newCName((yyvsp[(1) - (1)].strval), false)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 600 "us\\1csql\\1csql.y"
    { emit("FIELDNAME"); (yyval.a) = newCField((yyvsp[(1) - (1)].cname)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 601 "us\\1csql\\1csql.y"
    { emit("STRING %s", (yyvsp[(1) - (1)].strval)); (yyval.a) = newCString((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 602 "us\\1csql\\1csql.y"
    { emit("NUMBER %d", (yyvsp[(1) - (1)].intval)); (yyval.a) = newCNumber((yyvsp[(1) - (1)].intval)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 603 "us\\1csql\\1csql.y"
    { emit("FLOAT %g", (yyvsp[(1) - (1)].floatval)); (yyval.a) = newCFloat((yyvsp[(1) - (1)].floatval)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 604 "us\\1csql\\1csql.y"
    { emit("BOOL %d", (yyvsp[(1) - (1)].boolval)); (yyval.a) = newCBool((yyvsp[(1) - (1)].boolval)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 607 "us\\1csql\\1csql.y"
    { emit("ADD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "+"); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 608 "us\\1csql\\1csql.y"
    { emit("SUB"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "-"); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 609 "us\\1csql\\1csql.y"
    { emit("MUL"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "*"); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 610 "us\\1csql\\1csql.y"
    { emit("DIV"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "/"); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 611 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "%"); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 612 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "mod"); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 613 "us\\1csql\\1csql.y"
    { emit("CONCAT"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "||"); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 614 "us\\1csql\\1csql.y"
    { emit("PARASSIGN"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "=>"); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 615 "us\\1csql\\1csql.y"
    { emit("NEG"); (yyval.a) = newCMinus((yyvsp[(2) - (2)].a), "-"); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 616 "us\\1csql\\1csql.y"
    { emit("AND"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 617 "us\\1csql\\1csql.y"
    { emit("OR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 618 "us\\1csql\\1csql.y"
    { emit("XOR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 619 "us\\1csql\\1csql.y"
    { emit("CMP %s", (yyvsp[(2) - (3)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval), NULL); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 620 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "any"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 621 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "some"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 622 "us\\1csql\\1csql.y"
    { emit("CMPALLSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "all"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 623 "us\\1csql\\1csql.y"
    { emit("BITOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "|"); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 624 "us\\1csql\\1csql.y"
    { emit("BITAND"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "&"); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 625 "us\\1csql\\1csql.y"
    { emit("BITXOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "^"); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 626 "us\\1csql\\1csql.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 627 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "not"); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 628 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "!"); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 629 "us\\1csql\\1csql.y"
    { emit("OUTPLUS"); (yyval.a) = newCOutPlus((yyvsp[(1) - (2)].a), "(+)"); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 630 "us\\1csql\\1csql.y"
    { emit("PRIOR"); (yyval.a) = newCPrior((yyvsp[(2) - (2)].a)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 631 "us\\1csql\\1csql.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); (yyval.a) = newCAstNULL(); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 632 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpBrac((yyvsp[(2) - (3)].a)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 636 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 637 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpTabSub((yyvsp[(1) - (1)].a)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 638 "us\\1csql\\1csql.y"
    { (yyval.a) = newCNull(); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 641 "us\\1csql\\1csql.y"
    { emit("ISNULL"); (yyval.a) = newCIsExp((yyvsp[(1) - (3)].a), true, "null", false); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 642 "us\\1csql\\1csql.y"
    { emit("ISNULL"); emit("NOT"); (yyval.a) = newCIsExp((yyvsp[(1) - (4)].a), false, "null", false); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 643 "us\\1csql\\1csql.y"
    { emit("ISBOOL %b", (yyvsp[(3) - (3)].boolval)); (yyval.a) = newCIsExp((yyvsp[(1) - (3)].a), true, NULL, (yyvsp[(3) - (3)].boolval)); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 644 "us\\1csql\\1csql.y"
    { emit("ISBOOL %b", (yyvsp[(4) - (4)].boolval)); emit("NOT"); (yyval.a) = newCIsExp((yyvsp[(1) - (4)].a), false, NULL, (yyvsp[(4) - (4)].boolval)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 647 "us\\1csql\\1csql.y"
    { emit("BETWEEN"); (yyval.a) = newCBtwnExp((yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 650 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList(); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 651 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList((yyvsp[(1) - (2)].a)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 652 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList(newCNull()); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 653 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCValList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 654 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCValList(newCValList(newCExpTabSub((yyvsp[(1) - (5)].a))), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 655 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 659 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 662 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 663 "us\\1csql\\1csql.y"
    { emit("ISIN"); emit("NOT"); (yyval.a) = newCInValExp((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), false); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 664 "us\\1csql\\1csql.y"
    { emit("INSELECT"); (yyval.a) = newCInSelExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 665 "us\\1csql\\1csql.y"
    { emit("INSELECT"); emit("NOT"); (yyval.a) = newCInSelExp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), false); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 666 "us\\1csql\\1csql.y"
    { emit("EXISTS"); if((yyvsp[(1) - (2)].subtok))emit("NOT"); (yyval.a) = newCExistsExp((yyvsp[(2) - (2)].a), !(yyvsp[(1) - (2)].subtok)); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 669 "us\\1csql\\1csql.y"
    {  emit("SUBORDTABLE"); (yyval.a) = newCSubordTable((yyvsp[(1) - (5)].cname), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 672 "us\\1csql\\1csql.y"
    {  emit("CALL"); (yyval.a) = newCCall((yyvsp[(1) - (4)].cname), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 680 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 681 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 684 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAnalytic((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 687 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 688 "us\\1csql\\1csql.y"
    { emit("PARTITION"); (yyval.a) = newCPartition((yyvsp[(3) - (3)].a)); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 691 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = NULL; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 692 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(2) - (2)].a), NULL, (yyvsp[(1) - (2)].strval)); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 693 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), (yyvsp[(1) - (5)].strval)); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 696 "us\\1csql\\1csql.y"
    { (yyval.strval) = "rows"; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 697 "us\\1csql\\1csql.y"
    { (yyval.strval) = "range"; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 700 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "preceding"); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 701 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "following"); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 702 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "current", "row"); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 703 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "preceding"); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 704 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "following"); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 708 "us\\1csql\\1csql.y"
    { emit("COUNTALL"); (yyval.a) = newCFcount(NULL, NULL, true); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 709 "us\\1csql\\1csql.y"
    { emit(" CALL 1 COUNT"); (yyval.a) = newCFcount((yyvsp[(3) - (5)].a), (yyvsp[(4) - (5)].a), false); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 712 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 714 "us\\1csql\\1csql.y"
    {  emit("CALL SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (4)].a), NULL, NULL, 1);;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 715 "us\\1csql\\1csql.y"
    {  emit("CALL 2 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL, 2); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 716 "us\\1csql\\1csql.y"
    {  emit("CALL 3 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (8)].a), (yyvsp[(5) - (8)].a), (yyvsp[(7) - (8)].a), 3); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 717 "us\\1csql\\1csql.y"
    { emit("CALL TRIM"); (yyval.a) = newCFtrim((yyvsp[(3) - (4)].a), NULL, NULL); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 718 "us\\1csql\\1csql.y"
    { emit("CALL 3 TRIM"); (yyval.a) = newCFtrim((yyvsp[(6) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(3) - (7)].strval)); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 719 "us\\1csql\\1csql.y"
    { emit("CALL FEXPRESS"); (yyval.a) = newCFexpress((yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 722 "us\\1csql\\1csql.y"
    { emit("INT 1"); (yyval.strval) = "leading"; ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 723 "us\\1csql\\1csql.y"
    { emit("INT 2"); (yyval.strval) = "trailing"; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 724 "us\\1csql\\1csql.y"
    { emit("INT 3"); (yyval.strval) = "both"; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 727 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_ADD"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 728 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_SUB"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 731 "us\\1csql\\1csql.y"
    { emit("CALL REPLACE"); (yyval.a) = newCCall(newCName("replace", false), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 734 "us\\1csql\\1csql.y"
    { emit("NUMBER 1"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 735 "us\\1csql\\1csql.y"
    { emit("NUMBER 2"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 736 "us\\1csql\\1csql.y"
    { emit("NUMBER 3"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 737 "us\\1csql\\1csql.y"
    { emit("NUMBER 4"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 738 "us\\1csql\\1csql.y"
    { emit("NUMBER 5"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 739 "us\\1csql\\1csql.y"
    { emit("NUMBER 6"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 740 "us\\1csql\\1csql.y"
    { emit("NUMBER 7"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 741 "us\\1csql\\1csql.y"
    { emit("NUMBER 8"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 742 "us\\1csql\\1csql.y"
    { emit("NUMBER 9"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 745 "us\\1csql\\1csql.y"
    { emit("INTERVAL 1"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "second"); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 746 "us\\1csql\\1csql.y"
    { emit("INTERVAL 2"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "minute"); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 747 "us\\1csql\\1csql.y"
    { emit("INTERVAL 3"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "hour"); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 748 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "day"); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 749 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "month"); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 750 "us\\1csql\\1csql.y"
    { emit("INTERVAL 5"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "year"); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 753 "us\\1csql\\1csql.y"
    { emit("CASEVAL 0"); (yyval.a) = newCCase((yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), NULL); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 754 "us\\1csql\\1csql.y"
    { emit("CASEVAL 1"); (yyval.a) = newCCase((yyvsp[(2) - (6)].a), (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 755 "us\\1csql\\1csql.y"
    { emit("CASE 0"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 756 "us\\1csql\\1csql.y"
    { emit("CASE 1"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 759 "us\\1csql\\1csql.y"
    { (yyval.a) = newCCaseList((yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 760 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCCaseList((yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 763 "us\\1csql\\1csql.y"
    { emit("LIKE"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "like", NULL); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 764 "us\\1csql\\1csql.y"
    { emit("LIKE"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not like", NULL); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 767 "us\\1csql\\1csql.y"
    { emit("REGEXP"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "regexp", NULL); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 768 "us\\1csql\\1csql.y"
    { emit("REGEXP"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not regexp", NULL); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 771 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 772 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 773 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 776 "us\\1csql\\1csql.y"
    { emit("STRTOBIN"); (yyval.a) = newCAstNULL(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4100 "us\\1csql\\1csql.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 779 "us\\1csql\\1csql.y"


/*void
emit(char *s, ...)
{
  extern int yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  extern int yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

int main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
}*/  

//main

