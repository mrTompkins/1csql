
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
     ANALYZE = 296,
     AND = 297,
     ANY = 298,
     AS = 299,
     ASC = 300,
     AUTO_INCREMENT = 301,
     BEFORE = 302,
     BIGINT = 303,
     BINARY = 304,
     BIT = 305,
     BLOB = 306,
     BOTH = 307,
     BY = 308,
     CALL = 309,
     CASCADE = 310,
     CASE = 311,
     CHANGE = 312,
     CHAR = 313,
     CHECK = 314,
     COLLATE = 315,
     COLUMN = 316,
     COMMENT = 317,
     CONDITION = 318,
     CONNECT = 319,
     CONSTRAINT = 320,
     CONTINUE = 321,
     CONVERT = 322,
     CREATE = 323,
     CURRENT_DATE = 324,
     CURRENT_TIME = 325,
     CURRENT_TIMESTAMP = 326,
     CURRENT_USER = 327,
     CURRENT = 328,
     CURSOR = 329,
     DAY = 330,
     DATABASE = 331,
     DATABASES = 332,
     DATE = 333,
     DATETIME = 334,
     DAY_HOUR = 335,
     DAY_MICROSECOND = 336,
     DAY_MINUTE = 337,
     DAY_SECOND = 338,
     DECIMAL = 339,
     DECLARE = 340,
     DEFAULT = 341,
     DELAYED = 342,
     DELETE = 343,
     DESC = 344,
     DESCRIBE = 345,
     DETERMINISTIC = 346,
     DISTINCT = 347,
     DISTINCTROW = 348,
     DIV = 349,
     DOUBLE = 350,
     DROP = 351,
     EACH = 352,
     ELSE = 353,
     ELSEIF = 354,
     ENCLOSED = 355,
     END = 356,
     ENUM = 357,
     ESCAPED = 358,
     EXISTS = 359,
     EXIT = 360,
     EXPLAIN = 361,
     FETCH = 362,
     FLOAT = 363,
     FOLLOWING = 364,
     FOR = 365,
     FORCE = 366,
     FOREIGN = 367,
     FROM = 368,
     FULLTEXT = 369,
     GRANT = 370,
     GROUP = 371,
     HAVING = 372,
     HIGH_PRIORITY = 373,
     HOUR = 374,
     HOUR_MICROSECOND = 375,
     HOUR_MINUTE = 376,
     HOUR_SECOND = 377,
     IF = 378,
     IGNORE = 379,
     INDEX = 380,
     INFILE = 381,
     INOUT = 382,
     INSENSITIVE = 383,
     INSERT = 384,
     INT = 385,
     INTEGER = 386,
     INTERVAL = 387,
     INTO = 388,
     ITERATE = 389,
     KEY = 390,
     KEYS = 391,
     KILL = 392,
     LEADING = 393,
     LEAVE = 394,
     LIMIT = 395,
     LINES = 396,
     LOAD = 397,
     LOCALTIME = 398,
     LOCALTIMESTAMP = 399,
     LOCK = 400,
     LONG = 401,
     LONGBLOB = 402,
     LONGTEXT = 403,
     LOOP = 404,
     LOW_PRIORITY = 405,
     MATCH = 406,
     MEDIUMBLOB = 407,
     MEDIUMINT = 408,
     MEDIUMTEXT = 409,
     MINUTE = 410,
     MINUTE_MICROSECOND = 411,
     MINUTE_SECOND = 412,
     MODIFIES = 413,
     MONTH = 414,
     NONCYCLE = 415,
     NO_WRITE_TO_BINLOG = 416,
     NULLX = 417,
     NUMBER = 418,
     ONDUPLICATE = 419,
     OPTIMIZE = 420,
     OPTION = 421,
     OPTIONALLY = 422,
     ORDER = 423,
     OVER = 424,
     OUT = 425,
     OUTFILE = 426,
     PARTITION = 427,
     PRECEDING = 428,
     PRECISION = 429,
     PRIMARY = 430,
     PROCEDURE = 431,
     PURGE = 432,
     QUICK = 433,
     RANGE = 434,
     READ = 435,
     READS = 436,
     REAL = 437,
     REFERENCES = 438,
     RELEASE = 439,
     RENAME = 440,
     REPEAT = 441,
     REPLACE = 442,
     REQUIRE = 443,
     RESTRICT = 444,
     RETURN = 445,
     REVOKE = 446,
     ROLLUP = 447,
     ROWS = 448,
     ROW = 449,
     SCHEMA = 450,
     SCHEMAS = 451,
     SECOND = 452,
     SECOND_MICROSECOND = 453,
     SELECT = 454,
     SENSITIVE = 455,
     SEPARATOR = 456,
     SET = 457,
     SHOW = 458,
     SMALLINT = 459,
     SOME = 460,
     SONAME = 461,
     SPATIAL = 462,
     SPECIFIC = 463,
     SQL = 464,
     SQLEXCEPTION = 465,
     SQLSTATE = 466,
     SQLWARNING = 467,
     SQL_BIG_RESULT = 468,
     SQL_CALC_FOUND_ROWS = 469,
     SQL_SMALL_RESULT = 470,
     SSL = 471,
     START = 472,
     STARTING = 473,
     TABLE = 474,
     TEMPORARY = 475,
     TEXT = 476,
     TERMINATED = 477,
     THEN = 478,
     TIME = 479,
     TIMESTAMP = 480,
     TINYBLOB = 481,
     TINYINT = 482,
     TINYTEXT = 483,
     TO = 484,
     TRAILING = 485,
     TRIGGER = 486,
     UNBOUNDED = 487,
     UNDO = 488,
     UNIQUE = 489,
     UNLOCK = 490,
     UNSIGNED = 491,
     UPDATE = 492,
     USAGE = 493,
     USE = 494,
     UTC_DATE = 495,
     UTC_TIME = 496,
     UTC_TIMESTAMP = 497,
     VALUES = 498,
     VARBINARY = 499,
     VARCHAR = 500,
     VARYING = 501,
     WHEN = 502,
     WHERE = 503,
     WHILE = 504,
     WITH = 505,
     WRITE = 506,
     YEAR = 507,
     YEAR_MONTH = 508,
     ZEROFILL = 509,
     FSUBSTRING = 510,
     FTRIM = 511,
     FDATE_ADD = 512,
     FDATE_SUB = 513,
     FCOUNT = 514
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
#line 397 "us\\1csql\\1csql.tab.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 409 "us\\1csql\\1csql.tab.cpp"

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
#define YYLAST   1929

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  274
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  437

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   514

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,     2,     2,    40,    33,     2,
     272,   273,    38,    36,   270,    37,   271,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   269,
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
     264,   265,   266,   267,   268
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    14,    18,    20,    22,
      27,    40,    41,    43,    45,    48,    51,    52,    57,    62,
      64,    69,    73,    74,    77,    82,    85,    90,    91,    93,
      95,    96,    99,   102,   103,   107,   110,   115,   116,   120,
     121,   124,   129,   131,   135,   136,   139,   141,   145,   146,
     149,   152,   155,   158,   161,   164,   167,   170,   172,   176,
     179,   182,   184,   187,   189,   193,   197,   199,   203,   205,
     207,   209,   211,   215,   219,   225,   228,   231,   233,   234,
     239,   243,   250,   256,   262,   267,   274,   280,   285,   289,
     291,   293,   294,   296,   298,   300,   303,   306,   307,   310,
     315,   322,   329,   336,   337,   340,   341,   343,   347,   351,
     355,   358,   359,   362,   366,   372,   374,   376,   378,   380,
     382,   384,   388,   392,   396,   400,   404,   408,   412,   416,
     419,   423,   427,   431,   435,   440,   445,   450,   454,   458,
     462,   466,   469,   472,   475,   478,   482,   486,   488,   490,
     492,   496,   501,   505,   510,   516,   518,   520,   524,   528,
     529,   531,   537,   544,   550,   555,   558,   563,   565,   567,
     573,   579,   583,   584,   588,   589,   592,   598,   600,   602,
     605,   608,   611,   614,   617,   622,   627,   629,   634,   641,
     650,   655,   663,   665,   667,   669,   676,   683,   688,   692,
     696,   700,   704,   708,   712,   716,   720,   724,   728,   732,
     736,   740,   744,   748,   753,   760,   764,   770,   775,   781,
     785,   790,   794,   799,   801,   803,   805
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     275,     0,    -1,   276,   269,    -1,   275,   276,   269,    -1,
     277,    -1,   279,    -1,   278,     8,   278,    -1,   277,    -1,
     314,    -1,   316,   208,   296,   297,    -1,   316,   208,   296,
     297,   294,   122,   300,   283,   281,   280,   289,   292,    -1,
      -1,   284,    -1,   288,    -1,   284,   288,    -1,   288,   284,
      -1,    -1,   226,   259,   318,   282,    -1,   282,   226,   259,
     318,    -1,   282,    -1,    73,    62,   169,   318,    -1,    73,
      62,   318,    -1,    -1,   257,   318,    -1,   125,    62,   285,
     287,    -1,   318,   286,    -1,   285,   270,   318,   286,    -1,
      -1,    54,    -1,    98,    -1,    -1,   259,   201,    -1,   126,
     318,    -1,    -1,   177,    62,   285,    -1,   318,   286,    -1,
     290,   270,   318,   286,    -1,    -1,   177,    62,   290,    -1,
      -1,   149,   318,    -1,   149,   318,   270,   318,    -1,     3,
      -1,   293,   271,     3,    -1,    -1,   142,   295,    -1,     3,
      -1,   295,   270,     3,    -1,    -1,   296,    48,    -1,   296,
     101,    -1,   296,   102,    -1,   296,   127,    -1,   296,    12,
      -1,   296,   224,    -1,   296,   222,    -1,   296,   223,    -1,
     298,    -1,   297,   270,   298,    -1,   318,   304,    -1,   314,
     304,    -1,    38,    -1,   171,   304,    -1,   301,    -1,   299,
     270,   302,    -1,   315,   270,   302,    -1,   302,    -1,   300,
     270,   302,    -1,   303,    -1,   305,    -1,   301,    -1,   315,
      -1,   293,   304,   311,    -1,   272,   299,   273,    -1,   228,
     272,   322,   273,   304,    -1,   322,   304,    -1,    53,     3,
      -1,     3,    -1,    -1,   302,    11,   302,   310,    -1,   302,
      11,   302,    -1,   302,   308,   307,    11,   302,   310,    -1,
     302,   308,   307,    11,   302,    -1,   302,   306,    11,   302,
     310,    -1,   302,   306,    11,   302,    -1,   302,    13,   309,
      11,   302,   310,    -1,   302,    13,   309,    11,   302,    -1,
     302,    12,   302,   310,    -1,   302,    12,   302,    -1,    16,
      -1,    14,    -1,    -1,    15,    -1,    18,    -1,    17,    -1,
      18,   307,    -1,    17,   307,    -1,    -1,    20,   318,    -1,
      19,   272,   295,   273,    -1,   248,   144,   312,   272,   313,
     273,    -1,   133,   144,   312,   272,   313,   273,    -1,   120,
     144,   312,   272,   313,   273,    -1,    -1,   119,    11,    -1,
      -1,     3,    -1,   313,   270,     3,    -1,   272,   277,   273,
      -1,   272,   314,   273,    -1,   314,   304,    -1,    -1,   259,
     317,    -1,     3,    53,   314,    -1,   317,   270,     3,    53,
     314,    -1,     9,    -1,   293,    -1,     4,    -1,     5,    -1,
       7,    -1,     6,    -1,   319,    36,   319,    -1,   319,    37,
     319,    -1,   319,    38,   319,    -1,   319,    39,   319,    -1,
     319,    40,   319,    -1,   319,    41,   319,    -1,   319,    35,
     319,    -1,   319,    43,   319,    -1,    37,   319,    -1,   319,
      23,   319,    -1,   319,    21,   319,    -1,   319,    22,   319,
      -1,   319,    31,   319,    -1,   319,    31,    52,   319,    -1,
     319,    31,   214,   319,    -1,   319,    31,    48,   319,    -1,
     319,    32,   319,    -1,   319,    33,   319,    -1,   319,    42,
     319,    -1,   319,    34,   319,    -1,    29,   319,    -1,    28,
     319,    -1,   319,    44,    -1,    45,   319,    -1,     9,    10,
     319,    -1,   272,   318,   273,    -1,   318,    -1,   314,    -1,
     171,    -1,   319,    26,   171,    -1,   319,    26,    29,   171,
      -1,   319,    26,     6,    -1,   319,    26,    29,     6,    -1,
     319,    30,   319,    51,   319,    -1,   318,    -1,   171,    -1,
     320,   270,   319,    -1,   314,   270,   319,    -1,    -1,   320,
      -1,   319,    27,   272,   320,   273,    -1,   319,    29,    27,
     272,   320,   273,    -1,   319,    27,   272,   277,   273,    -1,
     319,    29,    27,   314,    -1,   113,   314,    -1,   293,   272,
     321,   273,    -1,   322,    -1,   323,    -1,   322,   178,   272,
     324,   273,    -1,   329,   178,   272,   324,   273,    -1,   325,
     291,   326,    -1,    -1,   181,    62,   320,    -1,    -1,   327,
     328,    -1,   327,    30,   328,    51,   328,    -1,   202,    -1,
     188,    -1,   241,   182,    -1,   241,   118,    -1,    82,   203,
      -1,   319,   182,    -1,   319,   118,    -1,   268,   272,    38,
     273,    -1,   268,   272,   319,   273,    -1,   329,    -1,   264,
     272,   320,   273,    -1,   264,   272,   319,   122,   319,   273,
      -1,   264,   272,   319,   122,   319,   119,   319,   273,    -1,
     265,   272,   320,   273,    -1,   265,   272,   330,   319,   122,
     320,   273,    -1,   147,    -1,   239,    -1,    61,    -1,   266,
     272,   319,   270,   331,   273,    -1,   267,   272,   319,   270,
     331,   273,    -1,   196,   272,   320,   273,    -1,   141,   319,
      89,    -1,   141,   319,    90,    -1,   141,   319,    91,    -1,
     141,   319,    92,    -1,   141,   319,   262,    -1,   141,   319,
     261,    -1,   141,   319,   129,    -1,   141,   319,   130,    -1,
     141,   319,   131,    -1,   141,     4,   206,    -1,   141,     4,
     164,    -1,   141,     4,   128,    -1,   141,     4,    84,    -1,
     141,     4,   168,    -1,   141,     4,   261,    -1,    65,   319,
     332,   110,    -1,    65,   319,   332,   107,   319,   110,    -1,
      65,   332,   110,    -1,    65,   332,   107,   319,   110,    -1,
     256,   319,   232,   319,    -1,   332,   256,   319,   232,   319,
      -1,   319,    25,   319,    -1,   319,    29,    25,   319,    -1,
     319,    24,   319,    -1,   319,    29,    24,   319,    -1,    80,
      -1,    78,    -1,    79,    -1,    58,   319,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   340,   340,   341,   346,   349,   350,   353,   354,   357,
     359,   365,   366,   367,   368,   369,   372,   373,   374,   375,
     378,   379,   382,   383,   386,   390,   392,   396,   397,   398,
     401,   402,   405,   407,   407,   411,   413,   417,   417,   420,
     420,   421,   424,   425,   428,   429,   432,   433,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   447,   448,   451,
     452,   453,   454,   458,   459,   460,   464,   465,   468,   469,
     473,   474,   478,   479,   480,   481,   484,   485,   486,   490,
     492,   494,   496,   498,   500,   502,   504,   506,   508,   512,
     513,   516,   517,   520,   521,   524,   525,   526,   530,   531,
     535,   537,   539,   541,   544,   545,   548,   549,   552,   553,
     556,   559,   560,   563,   564,   569,   570,   571,   572,   573,
     574,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   606,   607,   608,
     611,   612,   613,   614,   617,   620,   621,   622,   623,   626,
     627,   630,   631,   632,   633,   634,   637,   640,   641,   645,
     646,   649,   652,   653,   656,   657,   658,   661,   662,   665,
     666,   667,   668,   669,   673,   674,   677,   679,   680,   681,
     682,   683,   686,   687,   688,   691,   692,   695,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   709,   710,   711,
     712,   713,   714,   717,   718,   719,   720,   723,   724,   727,
     728,   731,   732,   735,   736,   737,   740
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
  "UMINUS", "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONNECT", "CONSTRAINT", "CONTINUE",
  "CONVERT", "CREATE", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURRENT", "CURSOR", "DAY", "DATABASE", "DATABASES",
  "DATE", "DATETIME", "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE",
  "DAY_SECOND", "DECIMAL", "DECLARE", "DEFAULT", "DELAYED", "DELETE",
  "DESC", "DESCRIBE", "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV",
  "DOUBLE", "DROP", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END", "ENUM",
  "ESCAPED", "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOLLOWING",
  "FOR", "FORCE", "FOREIGN", "FROM", "FULLTEXT", "GRANT", "GROUP",
  "HAVING", "HIGH_PRIORITY", "HOUR", "HOUR_MICROSECOND", "HOUR_MINUTE",
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
  "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING", "TRIGGER",
  "UNBOUNDED", "UNDO", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE", "USAGE",
  "USE", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP", "VALUES", "VARBINARY",
  "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE", "WITH", "WRITE", "YEAR",
  "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM", "FDATE_ADD",
  "FDATE_SUB", "FCOUNT", "';'", "','", "'.'", "'('", "')'", "$accept",
  "stmt_list", "stmt", "union_select_stmt", "union_or_subquery",
  "select_stmt", "opt_hav_group", "opt_hierarchy", "connect_by",
  "opt_where", "groupby", "groupby_list", "opt_asc_desc",
  "opt_with_rollup", "having", "opt_orderby", "an_orderby_list",
  "an_opt_orderby", "opt_limit", "compose_name", "opt_into_list",
  "column_list", "select_opts", "select_expr_list", "select_expr",
  "table_references", "table_references_or_subquery", "table_reference",
  "table_reference_or_subquery", "table_factor", "opt_as_alias",
  "join_table", "inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "join_condition", "index_hint",
  "opt_for_join", "index_list", "table_subquery", "table_subquery_alias",
  "opt_with", "with_list", "expr", "expr_or_subquery", "val_list",
  "opt_val_list", "func", "analytic_func", "analytic", "opt_partition",
  "opt_windowing", "rows_range", "windowing_bound", "f_count", "trim_ltb",
  "interval_exp", "case_list", 0
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
     506,   507,   508,   509,   510,   511,   512,   513,   514,    59,
      44,    46,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   274,   275,   275,   276,   277,   277,   278,   278,   279,
     279,   280,   280,   280,   280,   280,   281,   281,   281,   281,
     282,   282,   283,   283,   284,   285,   285,   286,   286,   286,
     287,   287,   288,   289,   289,   290,   290,   291,   291,   292,
     292,   292,   293,   293,   294,   294,   295,   295,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   298,
     298,   298,   298,   299,   299,   299,   300,   300,   301,   301,
     302,   302,   303,   303,   303,   303,   304,   304,   304,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   309,   310,   310,
     311,   311,   311,   311,   312,   312,   313,   313,   314,   314,
     315,   316,   316,   317,   317,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   319,   319,   319,
     318,   318,   318,   318,   318,   320,   320,   320,   320,   321,
     321,   318,   318,   318,   318,   318,   322,   318,   318,   323,
     323,   324,   325,   325,   326,   326,   326,   327,   327,   328,
     328,   328,   328,   328,   329,   329,   318,   318,   318,   318,
     318,   318,   330,   330,   330,   318,   318,   318,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   332,   332,   318,
     318,   318,   318,   318,   318,   318,   318
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     1,     3,     1,     1,     4,
      12,     0,     1,     1,     2,     2,     0,     4,     4,     1,
       4,     3,     0,     2,     4,     2,     4,     0,     1,     1,
       0,     2,     2,     0,     3,     2,     4,     0,     3,     0,
       2,     4,     1,     3,     0,     2,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     3,     2,
       2,     1,     2,     1,     3,     3,     1,     3,     1,     1,
       1,     1,     3,     3,     5,     2,     2,     1,     0,     4,
       3,     6,     5,     5,     4,     6,     5,     4,     3,     1,
       1,     0,     1,     1,     1,     2,     2,     0,     2,     4,
       6,     6,     6,     0,     2,     0,     1,     3,     3,     3,
       2,     0,     2,     3,     5,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     4,     4,     4,     3,     3,     3,
       3,     2,     2,     2,     2,     3,     3,     1,     1,     1,
       3,     4,     3,     4,     5,     1,     1,     3,     3,     0,
       1,     5,     6,     5,     4,     2,     4,     1,     1,     5,
       5,     3,     0,     3,     0,     2,     5,     1,     1,     2,
       2,     2,     2,     2,     4,     4,     1,     4,     6,     8,
       4,     7,     1,     1,     1,     6,     6,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     4,     6,     3,     5,     4,     5,     3,
       4,     3,     4,     1,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     111,     0,   111,   111,     0,     4,     0,     5,     8,     0,
       0,   112,     7,     8,     1,     0,     2,   111,    48,     0,
       0,   108,   109,     3,     7,     6,     0,   113,     0,    42,
     117,   118,   120,   119,   115,    53,     0,     0,     0,    61,
       0,    49,     0,     0,   224,   225,   223,    50,    51,     0,
      52,     0,   149,     0,    55,    56,    54,     0,     0,     0,
       0,     0,   111,   116,     9,    57,   148,   147,     0,   167,
     168,   186,     0,     0,   149,   148,   147,   142,   141,   129,
     144,   226,     0,     0,     0,   165,     0,    77,     0,    62,
       0,     0,     0,     0,     0,     0,   148,   147,     0,   159,
       0,     0,     0,    60,    59,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   143,     0,     0,
     114,   145,     0,     0,     0,   215,     0,   210,   209,   208,
     211,   207,   212,    76,   149,   148,   147,     0,     0,     0,
     194,   192,   193,     0,     0,     0,     0,     0,     0,   146,
      43,   160,     0,    46,    45,    58,     0,   131,   132,   130,
     221,   219,   152,     0,   150,   111,     0,     0,     0,     0,
       0,     0,     0,   133,   137,   138,   140,   127,   121,   122,
     123,   124,   125,   126,   139,   128,   172,   172,     0,     0,
     213,     0,     0,     0,     0,   197,     0,   187,   190,     0,
       0,     0,   184,   185,   166,     0,     0,   111,    78,    22,
      70,    66,    68,    69,    78,    71,    78,   153,   151,     7,
     148,     0,   222,   220,   111,   164,     0,   136,   134,   135,
       0,     0,    37,     0,   217,     0,   216,     0,   158,   157,
       0,     0,     0,     0,     0,    47,     0,     0,    70,     0,
      78,    71,   103,     0,     0,    16,     0,     0,    97,    90,
      89,    94,    93,     0,    91,   110,    75,   163,   161,   148,
       0,   154,     0,   169,     0,   174,   170,   214,   218,     0,
     188,     0,     0,   195,   196,     0,     0,     0,    73,     0,
       0,     0,     0,    72,   147,    67,     0,     0,    11,    19,
      80,    88,    91,    91,     0,     0,    92,     0,   162,   173,
       0,   178,   177,   171,     0,     0,   191,   198,   199,   200,
     201,   204,   205,   206,   203,   202,    78,    64,    65,   105,
     105,   105,     0,     0,     0,     0,    33,    12,    13,     0,
       0,     0,    79,    87,    96,    95,     0,    84,     0,    38,
     147,     0,     0,     0,     0,   175,   189,    74,     0,     0,
       0,     0,     0,   147,   147,     0,   147,     0,    39,    14,
      15,     0,     0,   147,    86,    83,    82,     0,    28,    29,
      35,     0,   181,   180,   179,   183,   182,   104,     0,     0,
       0,   147,    17,    30,   147,     0,     0,    10,   147,     0,
      85,    81,   147,     0,   106,     0,     0,     0,     0,     0,
      24,    25,    34,   147,    99,    36,   176,     0,   102,   101,
     100,    31,   147,     0,   107,    26,   147
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    12,     6,     7,   346,   308,   309,   265,
     347,   403,   390,   420,   348,   378,   359,   285,   407,    63,
     102,   164,    26,    64,    65,   257,   219,   220,   221,   222,
     275,   223,   273,   317,   274,   314,   352,   303,   369,   415,
      75,   225,     9,    11,    76,    68,   147,   162,    69,    70,
     241,   242,   323,   324,   365,    71,   154,   253,    84
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -300
static const yytype_int16 yypact[] =
{
    -144,    49,  -144,     1,  -206,    60,    64,  -300,  -300,  -130,
      27,  -184,  -152,  -150,  -300,  -142,  -300,  -144,  -300,  -147,
     129,  -300,  -300,  -300,  -300,  -300,   338,  -300,    81,  -300,
    -300,  -300,  -300,  -300,   128,  -300,  1015,  1015,  1015,  -300,
    1015,  -300,  1015,   667,  -300,  -300,  -300,  -300,  -300,  -147,
    -300,   147,    23,   -96,  -300,  -300,  -300,   -88,   -81,   -69,
     -67,   -63,   724,  -109,   -92,  -300,    23,    23,  1864,    39,
    -300,    92,  -147,  1015,  -300,  -300,  -300,   509,   509,  -300,
    -300,  -300,  1015,  1469,   -70,  -300,   -51,  -300,   219,  -300,
    1095,  1095,   425,  1015,  1015,   769,    -5,   -14,   271,  1095,
     278,   781,   165,  -300,  -300,  1015,  1015,  1015,  1015,  1015,
      28,    37,   112,  1015,   443,  1015,  1015,  1015,  1015,  1015,
    1015,  1015,  1015,  1015,  1015,  1015,  1015,  -300,    42,    43,
    -300,  1864,  1515,   -56,  1015,  -300,  1015,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,   122,    19,   124,  -232,  1616,  -225,
    -300,  -300,  -300,  -217,  1015,  1395,  1419,    22,  1347,  -300,
    -300,    36,    38,  -300,    48,  -300,     6,  1270,  1313,  1637,
    1885,  1885,  -300,    18,  -300,   871,  1015,  1015,    55,  1813,
    1015,  1015,  1015,  1155,  1128,   932,  1046,   206,   678,   678,
     211,   211,   211,   211,   171,   277,   150,   150,  1015,  1015,
    -300,  1758,  1554,  1015,  1015,  -300,  1015,  -300,  -300,  1719,
     191,   191,  -300,  -300,  -300,   330,    62,     5,    26,  -141,
    -300,   620,  -300,  -300,    56,  -300,    56,  -300,  -300,    63,
      12,  -123,  1885,  1885,   871,  -300,  1015,  1155,  1155,  1155,
     273,    65,   163,    75,  1864,  1782,  -300,  1015,  1864,  1864,
    1216,  1095,  1015,    78,    79,  -300,   350,  -101,   -85,   620,
       2,    84,   -46,  1015,     6,   -58,     6,     6,   214,  -300,
    -300,  -300,  -300,   346,   343,  -300,  -300,  -300,  -300,    -4,
     -80,  1074,  1095,  -300,   297,  -156,  -300,  -300,  1864,  1015,
    -300,   -72,  1443,  -300,  -300,  -109,    87,     6,  -300,     6,
     220,   221,   224,  -300,    15,   620,   301,   111,   110,   148,
     569,   569,   343,   343,   362,     6,  -300,   366,  -300,    36,
    1015,  -300,  -300,  -300,   564,  1371,  -300,  -300,  -300,  -300,
    -300,  -300,  -300,  -300,  -300,  -300,    56,   620,   620,   259,
     259,   259,   950,  1015,   319,  1015,   205,   262,   265,   126,
     119,  1015,  -300,  -300,  -300,  -300,     6,   569,     6,   130,
      50,   621,   195,   -79,  1592,  -300,  -300,  -300,   388,   134,
     138,   139,  1015,    -6,   328,  1015,    17,   351,   266,  -300,
    -300,  1015,   278,  1058,   569,  -300,   569,  1015,  -300,  -300,
    -300,   357,  -300,  -300,  -300,  -300,  -300,  -300,   411,   411,
     411,   136,  -300,  -253,   153,  1015,  1015,  -300,    34,   -57,
    -300,  -300,    50,   621,  -300,   -49,   -44,   -43,   223,  1015,
    -300,  -300,   149,    35,  -300,  -300,  -300,   418,  -300,  -300,
    -300,  -300,   153,  1015,  -300,  -300,     3
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,   422,    44,   410,  -300,  -300,  -300,    59,  -300,
      88,    32,  -286,  -300,    91,  -300,  -300,  -300,  -300,   218,
    -300,    61,  -300,  -300,   340,  -300,  -300,   225,   260,  -300,
     -45,  -300,  -300,   -73,  -300,  -300,  -251,  -300,   -83,   -71,
     105,   227,  -300,  -300,   -26,   -24,   -64,  -300,   647,  -300,
     248,  -300,  -300,  -300,  -299,  -300,  -300,   244,   373
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -157
static const yytype_int16 yytable[] =
{
      67,    14,   -21,    -8,    -8,    87,   418,    89,    29,    29,
      -8,   -41,    77,    78,    79,   306,    80,   419,    81,    83,
      -8,   103,   104,   -23,   227,   -32,    87,   149,   153,    87,
     -44,   -78,   321,   137,   172,   161,    97,   134,   204,   393,
     135,   205,   -18,   -40,     5,   204,   322,     5,   207,   131,
     100,   199,    10,   204,   200,    88,   208,   173,   132,    87,
     353,    24,   391,    16,   146,   146,   146,   148,    -7,   155,
     156,   158,    17,   146,   300,    67,    88,   138,    18,    88,
      19,   167,   168,   169,   170,   171,    20,   301,   -23,   179,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   394,   388,     8,   385,    13,     8,    88,
     201,   231,   202,   139,   426,     1,   263,   140,   421,   -21,
     -21,    21,     8,    22,    27,     2,   425,    23,     2,   264,
     209,    66,    28,   410,    72,   411,   176,   177,    73,   178,
     -23,   -23,   -32,   -21,   -20,   -78,   435,   204,   389,   146,
     278,    86,   232,   233,    85,   141,   237,   238,   239,   -18,
     -18,   -27,    98,    99,   -23,   -78,   -32,    96,   307,   297,
     280,   -21,   298,   262,   244,   245,    90,   130,   101,   248,
     249,   276,   250,   -18,    91,   -63,   136,   291,   -63,   228,
     204,    92,   -23,   318,   -32,   145,   145,   145,   204,   174,
     136,   326,   302,    93,   145,    94,    66,   388,   146,    95,
     142,   -18,   281,   215,   126,   127,   424,   128,   319,   229,
     -21,   427,   143,   288,   428,   146,   427,   427,   292,   429,
     430,   312,   313,   216,   216,   344,   345,   304,   -27,   354,
     355,   -23,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   389,   -27,   125,   126,   127,   146,   370,   371,   159,
       1,   -20,   -20,   -21,     1,   325,   203,   -21,    22,    22,
     129,   224,   -41,     2,   160,    22,   -41,   217,   217,   -27,
     230,   163,   203,   235,   -23,   -20,   -32,   166,   -23,   203,
     -32,   367,   -78,   -78,   360,   212,   -78,    98,    99,  -156,
     364,  -155,   -27,   -18,   -40,   433,   204,   -18,   -40,   175,
    -156,   214,  -155,   -20,   196,   197,   373,   374,   215,   376,
     -27,   127,   260,   -27,  -156,   383,  -155,   234,   416,   417,
     -27,   240,   252,   255,   256,   282,   277,   364,   283,   279,
     284,    29,    30,    31,    32,    33,   401,    34,   286,   404,
      35,   293,   294,    29,   299,   408,   145,   315,   316,   320,
     336,   412,   -20,   342,   339,   340,    36,    37,   341,   224,
     343,   224,   224,   356,   349,    38,    39,   358,   368,   404,
     423,   375,   377,    40,   218,   381,    41,   145,   345,   364,
     344,   382,  -156,   432,  -155,  -156,    42,  -155,   392,   397,
     387,   306,   224,    43,   224,   -20,   398,   436,   413,   -20,
     399,   400,   -27,   405,   414,   406,    44,    45,    46,   419,
     224,   434,   -27,   -27,   431,    15,   -27,    25,    29,    30,
      31,    32,    33,   402,    34,   218,   380,   422,   379,    47,
      48,   165,   258,   409,   261,   243,    29,    30,    31,    32,
      33,    49,    34,    36,    37,   254,   133,     0,     0,     0,
       0,   224,    38,   224,     0,    50,     0,     0,     0,     0,
      40,    36,    37,     0,   295,     0,     0,   259,     0,    51,
      38,     0,   218,    42,   218,   218,   150,     0,    40,     0,
      43,   180,     0,     0,     0,   181,     0,     0,     0,     0,
       0,    42,     0,    44,    45,    46,     0,     0,    43,    52,
       0,     0,     0,     0,     0,   218,     0,   218,     0,     0,
       0,    44,    45,    46,   305,     0,   310,   311,     0,     0,
       0,     0,     0,   218,    53,     0,     0,     0,    49,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,    49,   337,     0,   338,
      54,    55,    56,     0,     0,     0,    51,    29,    30,    31,
      32,    33,   151,    34,   218,   357,   218,     0,     0,     0,
     266,   267,   268,   269,    51,   270,   271,   272,   350,   351,
       0,     0,    36,    37,   361,     0,   144,     0,     0,     0,
       0,    38,    57,    58,    59,    60,    61,     0,     0,    40,
      62,     0,     0,     0,    74,     0,   384,     0,   386,     0,
       0,    53,    42,     0,    29,    30,    31,    32,    33,    43,
      34,   266,   267,   268,   269,     0,   270,   271,   272,    53,
       0,     0,    44,    45,    46,     0,   362,     0,     0,    36,
      37,     0,     0,     0,     0,     0,     0,   182,    38,     0,
       0,     0,     0,     0,   152,     0,    40,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,    49,     0,    42,
       0,     0,     0,     0,     0,     0,    43,     0,     0,    57,
      58,    59,    60,    61,     0,    36,    37,    62,     0,    44,
      45,    46,     0,   362,    38,    51,     0,    57,    58,    59,
      60,    61,    40,     0,     0,    62,   121,   122,   123,   124,
     125,   126,   127,     0,     0,    42,     0,    29,    30,    31,
      32,    33,    43,    34,    49,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,    46,     0,     0,
       0,     0,    36,    37,     0,     0,     0,     0,     0,     0,
      53,    38,    51,     0,     0,     0,     0,     0,     0,    40,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
      49,     0,    42,     0,    29,    30,    31,    32,    33,    43,
      34,     0,    74,     0,     0,     0,     0,    36,    37,     0,
       0,     0,    44,    45,    46,   363,    38,   157,    51,    36,
      37,     0,     0,   226,    40,     0,     0,    53,    38,    39,
       0,     0,     0,     0,     0,     0,    40,    42,    57,    58,
      59,    60,    61,     0,    43,     0,    62,    49,    74,    42,
       0,     0,     0,     0,     0,     0,    43,    44,    45,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,    46,   363,    53,   226,    51,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,    49,     0,     0,    57,    58,    59,    60,    61,
       0,     0,     0,    62,    49,    74,     0,     0,     0,    36,
      37,     0,     0,   296,     0,     0,     0,     0,    38,     0,
      51,   226,     0,   226,   226,     0,    40,     0,     0,     0,
      53,     0,    51,    82,     0,     0,     0,     0,     0,    42,
       0,    57,    58,    59,    60,    61,    43,     0,     0,    62,
      74,     0,     0,     0,   226,     0,   226,     0,     0,    44,
      45,    46,    52,    29,    30,    31,    32,    33,     0,    34,
       0,     0,   226,     0,     0,    53,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,    53,    36,    37,
       0,     0,     0,     1,    49,     0,     0,    38,    57,    58,
      59,    60,    61,     0,     0,    40,    62,     0,     0,     0,
       0,     0,     0,   226,     0,   226,     0,     0,    42,     0,
       0,     0,    51,     0,     0,    43,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    44,    45,
      46,     0,     0,    57,    58,    59,    60,    61,     0,     0,
       0,    62,   144,    36,    37,    57,    58,    59,    60,    61,
       0,     0,    38,    62,     0,     0,     0,     0,     0,     0,
      40,     0,     0,    49,     0,     0,   -98,    53,     0,   -98,
     -98,   -98,   -98,    42,   -98,   -98,   -98,   -98,   -98,     0,
      43,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,    51,     0,    44,    45,    46,     0,     0,    29,    30,
      31,    32,    33,     0,    34,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   372,
       0,    74,     0,    36,    37,     0,     0,     0,    49,     0,
       1,   -98,    38,     0,     0,    57,    58,    59,    60,    61,
      40,     0,     0,    62,     0,     0,    53,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    51,     0,     0,     0,
      43,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    44,    45,    46,     0,     0,     0,     0,
       0,     0,     0,   -98,   -98,     0,    74,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,   -98,    49,     0,
       0,    53,     0,     0,    57,    58,    59,    60,    61,     0,
       0,     0,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -98,    51,   105,   106,   107,
     108,   109,   110,   111,     0,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,     0,     0,     0,     0,     0,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    57,
      58,    59,    60,    61,   -98,     0,     0,    62,     0,     0,
       0,    53,   106,   107,   108,   109,   110,   111,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   -98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -98,   -98,     0,
       0,   -98,     0,     0,     0,   289,   107,   108,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,    57,
      58,    59,    60,    61,     0,     0,     0,    62,   105,   106,
     107,   108,   109,   110,   111,     0,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   105,   106,   107,   108,   109,   110,   111,     0,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   105,   106,   107,   108,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     105,   106,   107,   108,   109,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   105,   106,   107,   108,   109,   110,
     111,     0,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,   290,
     105,   106,   107,   108,   109,   110,   111,     0,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   327,   328,   329,   330,   105,   106,   107,   108,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   331,   332,   333,   105,   106,   107,   108,   109,
     110,   111,     0,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   111,
     213,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   105,   106,   107,
     108,   109,   110,   111,   366,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   108,   109,   110,   111,   210,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,     0,     0,     0,     0,     0,   211,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   334,   335,     0,     0,     0,     0,
     395,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   206,     0,
     105,   106,   107,   108,   109,   110,   111,   198,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   396,     0,     0,     0,     0,   105,
     106,   107,   108,   109,   110,   111,   247,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   105,   106,   107,   108,   109,   110,   111,
       0,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,     0,     0,     0,
       0,     0,     0,     0,   105,   106,   107,   108,   109,   110,
     111,   251,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
       0,     0,     0,     0,   236,     0,     0,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   111,   287,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,  -157,
    -157,  -157,  -157,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127
};

static const yytype_int16 yycheck[] =
{
      26,     0,     8,     8,     8,     3,   259,    52,     3,     3,
       8,     8,    36,    37,    38,    73,    40,   270,    42,    43,
       8,    66,    67,     8,     6,     8,     3,    91,    92,     3,
     122,     8,   188,    84,     6,    99,    62,   107,   270,   118,
     110,   273,     8,     8,     0,   270,   202,     3,   273,    73,
     142,   107,     3,   270,   110,    53,   273,    29,    82,     3,
     311,    17,   361,   269,    90,    91,    92,    91,     8,    93,
      94,    95,     8,    99,   120,   101,    53,   128,   208,    53,
      53,   105,   106,   107,   108,   109,   270,   133,    73,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   182,    54,     0,   357,     2,     3,    53,
     134,   175,   136,   164,   413,   259,   257,   168,   404,   125,
     126,   273,    17,   273,    19,   272,   412,   269,   272,   270,
     154,    26,     3,   384,    53,   386,    24,    25,    10,    27,
     125,   126,   125,   149,     8,   122,   432,   270,    98,   175,
     273,     4,   176,   177,    49,   206,   180,   181,   182,   125,
     126,     8,   271,   272,   149,   142,   149,    62,   226,   270,
     234,   177,   273,   218,   198,   199,   272,    72,   270,   203,
     204,   226,   206,   149,   272,   270,   256,   251,   273,   171,
     270,   272,   177,   273,   177,    90,    91,    92,   270,   171,
     256,   273,   248,   272,    99,   272,   101,    54,   234,   272,
     261,   177,   236,   270,    43,    44,   273,   178,   282,   175,
     226,   270,     3,   247,   273,   251,   270,   270,   252,   273,
     273,    17,    18,   228,   228,   125,   126,   263,   188,   312,
     313,   226,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    98,   202,    42,    43,    44,   282,   340,   341,   273,
     259,   125,   126,   269,   259,   289,   270,   273,   273,   273,
     178,   166,   269,   272,     3,   273,   273,   272,   272,   126,
     175,     3,   270,   178,   269,   149,   269,   122,   273,   270,
     273,   336,   269,   270,   320,   273,   273,   271,   272,   177,
     324,   177,   149,   269,   269,   270,   270,   273,   273,   272,
     188,   273,   188,   177,   272,   272,   342,   343,   270,   345,
     270,    44,   217,   273,   202,   351,   202,   272,   399,   400,
     177,   181,   141,     3,   272,    62,   273,   361,   273,   234,
     177,     3,     4,     5,     6,     7,   372,     9,   273,   375,
      12,   273,   273,     3,   270,   381,   251,    11,    15,    62,
     273,   387,   226,    62,   144,   144,    28,    29,   144,   264,
     259,   266,   267,    11,   226,    37,    38,    11,   119,   405,
     406,    62,   177,    45,   166,   259,    48,   282,   126,   413,
     125,   272,   270,   419,   270,   273,    58,   273,   203,    11,
     270,    73,   297,    65,   299,   269,   272,   433,    51,   273,
     272,   272,   259,    62,     3,   149,    78,    79,    80,   270,
     315,     3,   269,   270,   201,     3,   273,    17,     3,     4,
       5,     6,     7,   374,     9,   217,   348,   405,   347,   101,
     102,   101,   217,   382,   217,   197,     3,     4,     5,     6,
       7,   113,     9,    28,    29,   211,    83,    -1,    -1,    -1,
      -1,   356,    37,   358,    -1,   127,    -1,    -1,    -1,    -1,
      45,    28,    29,    -1,   256,    -1,    -1,   217,    -1,   141,
      37,    -1,   264,    58,   266,   267,    61,    -1,    45,    -1,
      65,    48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    78,    79,    80,    -1,    -1,    65,   171,
      -1,    -1,    -1,    -1,    -1,   297,    -1,   299,    -1,    -1,
      -1,    78,    79,    80,   264,    -1,   266,   267,    -1,    -1,
      -1,    -1,    -1,   315,   196,    -1,    -1,    -1,   113,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,   113,   297,    -1,   299,
     222,   223,   224,    -1,    -1,    -1,   141,     3,     4,     5,
       6,     7,   147,     9,   356,   315,   358,    -1,    -1,    -1,
      11,    12,    13,    14,   141,    16,    17,    18,    19,    20,
      -1,    -1,    28,    29,    30,    -1,   171,    -1,    -1,    -1,
      -1,    37,   264,   265,   266,   267,   268,    -1,    -1,    45,
     272,    -1,    -1,    -1,   171,    -1,   356,    -1,   358,    -1,
      -1,   196,    58,    -1,     3,     4,     5,     6,     7,    65,
       9,    11,    12,    13,    14,    -1,    16,    17,    18,   196,
      -1,    -1,    78,    79,    80,    -1,    82,    -1,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,   214,    37,    -1,
      -1,    -1,    -1,    -1,   239,    -1,    45,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    -1,     9,   113,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,   264,
     265,   266,   267,   268,    -1,    28,    29,   272,    -1,    78,
      79,    80,    -1,    82,    37,   141,    -1,   264,   265,   266,
     267,   268,    45,    -1,    -1,   272,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    58,    -1,     3,     4,     5,
       6,     7,    65,     9,   113,   171,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
     196,    37,   141,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,     3,     4,     5,     6,     7,    -1,     9,    -1,
     113,    -1,    58,    -1,     3,     4,     5,     6,     7,    65,
       9,    -1,   171,    -1,    -1,    -1,    -1,    28,    29,    -1,
      -1,    -1,    78,    79,    80,   241,    37,    38,   141,    28,
      29,    -1,    -1,   166,    45,    -1,    -1,   196,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    58,   264,   265,
     266,   267,   268,    -1,    65,    -1,   272,   113,   171,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    78,    79,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,   241,   196,   217,   141,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,
       9,    -1,   113,    -1,    -1,   264,   265,   266,   267,   268,
      -1,    -1,    -1,   272,   113,   171,    -1,    -1,    -1,    28,
      29,    -1,    -1,   256,    -1,    -1,    -1,    -1,    37,    -1,
     141,   264,    -1,   266,   267,    -1,    45,    -1,    -1,    -1,
     196,    -1,   141,   256,    -1,    -1,    -1,    -1,    -1,    58,
      -1,   264,   265,   266,   267,   268,    65,    -1,    -1,   272,
     171,    -1,    -1,    -1,   297,    -1,   299,    -1,    -1,    78,
      79,    80,   171,     3,     4,     5,     6,     7,    -1,     9,
      -1,    -1,   315,    -1,    -1,   196,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,   196,    28,    29,
      -1,    -1,    -1,   259,   113,    -1,    -1,    37,   264,   265,
     266,   267,   268,    -1,    -1,    45,   272,    -1,    -1,    -1,
      -1,    -1,    -1,   356,    -1,   358,    -1,    -1,    58,    -1,
      -1,    -1,   141,    -1,    -1,    65,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    -1,    78,    79,
      80,    -1,    -1,   264,   265,   266,   267,   268,    -1,    -1,
      -1,   272,   171,    28,    29,   264,   265,   266,   267,   268,
      -1,    -1,    37,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    -1,    -1,   113,    -1,    -1,     8,   196,    -1,    11,
      12,    13,    14,    58,    16,    17,    18,    19,    20,    -1,
      65,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,   141,    -1,    78,    79,    80,    -1,    -1,     3,     4,
       5,     6,     7,    -1,     9,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,   169,
      -1,   171,    -1,    28,    29,    -1,    -1,    -1,   113,    -1,
     259,    73,    37,    -1,    -1,   264,   265,   266,   267,   268,
      45,    -1,    -1,   272,    -1,    -1,   196,    -1,    -1,    -1,
      -1,    -1,    -1,    58,    -1,    -1,   141,    -1,    -1,    -1,
      65,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   125,   126,    -1,   171,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,   113,    -1,
      -1,   196,    -1,    -1,   264,   265,   266,   267,   268,    -1,
      -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   177,   141,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,   171,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   264,
     265,   266,   267,   268,   226,    -1,    -1,   272,    -1,    -1,
      -1,   196,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   257,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   269,   270,    -1,
      -1,   273,    -1,    -1,    -1,   119,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,   264,
     265,   266,   267,   268,    -1,    -1,    -1,   272,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,   273,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
     273,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    21,    22,    23,
      24,    25,    26,    27,   273,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    24,    25,    26,    27,   270,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   261,   262,    -1,    -1,    -1,    -1,
     118,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   256,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      21,    22,    23,    24,    25,    26,    27,   232,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   182,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,   232,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,   122,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,   110,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,   110,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   259,   272,   275,   276,   277,   278,   279,   314,   316,
       3,   317,   277,   314,     0,   276,   269,     8,   208,    53,
     270,   273,   273,   269,   277,   278,   296,   314,     3,     3,
       4,     5,     6,     7,     9,    12,    28,    29,    37,    38,
      45,    48,    58,    65,    78,    79,    80,   101,   102,   113,
     127,   141,   171,   196,   222,   223,   224,   264,   265,   266,
     267,   268,   272,   293,   297,   298,   314,   318,   319,   322,
     323,   329,    53,    10,   171,   314,   318,   319,   319,   319,
     319,   319,   256,   319,   332,   314,     4,     3,    53,   304,
     272,   272,   272,   272,   272,   272,   314,   318,   271,   272,
     142,   270,   294,   304,   304,    21,    22,    23,    24,    25,
      26,    27,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   178,   178,
     314,   319,   319,   332,   107,   110,   256,    84,   128,   164,
     168,   206,   261,     3,   171,   314,   318,   320,   319,   320,
      61,   147,   239,   320,   330,   319,   319,    38,   319,   273,
       3,   320,   321,     3,   295,   298,   122,   319,   319,   319,
     319,   319,     6,    29,   171,   272,    24,    25,    27,   319,
      48,    52,   214,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   272,   272,   232,   107,
     110,   319,   319,   270,   270,   273,   122,   273,   273,   319,
     270,   270,   273,   273,   273,   270,   228,   272,   293,   300,
     301,   302,   303,   305,   314,   315,   322,     6,   171,   277,
     314,   320,   319,   319,   272,   314,    51,   319,   319,   319,
     181,   324,   325,   324,   319,   319,   110,   232,   319,   319,
     319,   122,   141,   331,   331,     3,   272,   299,   301,   302,
     314,   315,   304,   257,   270,   283,    11,    12,    13,    14,
      16,    17,    18,   306,   308,   304,   304,   273,   273,   314,
     320,   319,    62,   273,   177,   291,   273,   110,   319,   119,
     273,   320,   319,   273,   273,   293,   322,   270,   273,   270,
     120,   133,   248,   311,   318,   302,    73,   226,   281,   282,
     302,   302,    17,    18,   309,    11,    15,   307,   273,   320,
      62,   188,   202,   326,   327,   319,   273,    89,    90,    91,
      92,   129,   130,   131,   261,   262,   273,   302,   302,   144,
     144,   144,    62,   259,   125,   126,   280,   284,   288,   226,
      19,    20,   310,   310,   307,   307,    11,   302,    11,   290,
     318,    30,    82,   241,   319,   328,   273,   304,   119,   312,
     312,   312,   169,   318,   318,    62,   318,   177,   289,   288,
     284,   259,   272,   318,   302,   310,   302,   270,    54,    98,
     286,   328,   203,   118,   182,   118,   182,    11,   272,   272,
     272,   318,   282,   285,   318,    62,   149,   292,   318,   295,
     310,   310,   318,    51,     3,   313,   313,   313,   259,   270,
     287,   286,   285,   318,   273,   286,   328,   270,   273,   273,
     273,   201,   318,   270,     3,   286,   318
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
#line 340 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); GAst = (yyvsp[(1) - (2)].a); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 341 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 346 "us\\1csql\\1csql.y"
    { emit("STMT"); (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 349 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 350 "us\\1csql\\1csql.y"
    { emit("UNION"); (yyval.a) = newCUnion((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 353 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 354 "us\\1csql\\1csql.y"
    { emit("UNION SUBQUERY"); (yyval.a) = newCUnionSub((yyvsp[(1) - (1)].a)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 358 "us\\1csql\\1csql.y"
    { emit("SELECTNODATA"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 362 "us\\1csql\\1csql.y"
    { emit("SELECT"); (yyval.a) = newCSelect((yyvsp[(1) - (12)].a), (yyvsp[(4) - (12)].a), (yyvsp[(7) - (12)].a), (yyvsp[(8) - (12)].a), (yyvsp[(9) - (12)].a), (yyvsp[(10) - (12)].a), (yyvsp[(11) - (12)].a)); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 365 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup(NULL, NULL); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 366 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup(NULL, (yyvsp[(1) - (1)].a)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 367 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(1) - (1)].a), NULL); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 368 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(2) - (2)].a), (yyvsp[(1) - (2)].a)); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 369 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHavGroup((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].a)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 372 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 373 "us\\1csql\\1csql.y"
    { emit("START WITH"); (yyval.a) = newCHierarchy((yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 374 "us\\1csql\\1csql.y"
    { emit("START WITH"); (yyval.a) = newCHierarchy((yyvsp[(4) - (4)].a), (yyvsp[(1) - (4)].a)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 375 "us\\1csql\\1csql.y"
    { (yyval.a) = newCHierarchy(NULL, (yyvsp[(1) - (1)].a)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 378 "us\\1csql\\1csql.y"
    { emit("CONNECT BY"); (yyval.a) = newCConnect((yyvsp[(4) - (4)].a), true); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 379 "us\\1csql\\1csql.y"
    { emit("CONNECT BY"); (yyval.a) = newCConnect((yyvsp[(3) - (3)].a), false); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 382 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 383 "us\\1csql\\1csql.y"
    { emit("WHERE"); (yyval.a) = newCWhere((yyvsp[(2) - (2)].a)); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 387 "us\\1csql\\1csql.y"
    { emit("GROUPBYLIST"); (yyval.a) =  newCGroup((yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].boolval)); ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 391 "us\\1csql\\1csql.y"
    { emit("GROUPBY"); (yyval.a) = newCGroupList((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].strval)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 393 "us\\1csql\\1csql.y"
    { emit("GROUPBY"); (yyval.a) = addtoCGroupList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 396 "us\\1csql\\1csql.y"
    { (yyval.strval) = ""; ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 397 "us\\1csql\\1csql.y"
    { (yyval.strval) = "asc"; ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 398 "us\\1csql\\1csql.y"
    { (yyval.strval) = "desc"; ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 401 "us\\1csql\\1csql.y"
    { (yyval.boolval) = false; ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 402 "us\\1csql\\1csql.y"
    { (yyval.boolval) = true; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 405 "us\\1csql\\1csql.y"
    { emit("HAVING"); (yyval.a) = newCHaving((yyvsp[(2) - (2)].a)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 407 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 407 "us\\1csql\\1csql.y"
    { emit("ORDERBY"); (yyval.a) = newCOrder((yyvsp[(3) - (3)].a)); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 412 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDER LIST"); (yyval.a) = newCAnOrderList((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].strval)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 414 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDER LIST"); (yyval.a) = addtoCAnOrderList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].strval)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 417 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 417 "us\\1csql\\1csql.y"
    { emit("ANALYTIC ORDERBY"); (yyval.a) = newCAnOrder((yyvsp[(3) - (3)].a)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 420 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 420 "us\\1csql\\1csql.y"
    { emit("LIMIT 1"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 421 "us\\1csql\\1csql.y"
    { emit("LIMIT 2"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 424 "us\\1csql\\1csql.y"
    { (yyval.cname) = newCName((yyvsp[(1) - (1)].qpsz)->psz, (yyvsp[(1) - (1)].qpsz)->b_quot); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 425 "us\\1csql\\1csql.y"
    { (yyval.cname) = addtoCName((yyvsp[(1) - (3)].cname), (yyvsp[(3) - (3)].qpsz)->psz, (yyvsp[(3) - (3)].qpsz)->b_quot); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 428 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 429 "us\\1csql\\1csql.y"
    { emit("INTO"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 432 "us\\1csql\\1csql.y"
    { emit("COLUMN"); (yyval.a) = newCExprList(newCField(newCName((yyvsp[(1) - (1)].qpsz)->psz, (yyvsp[(1) - (1)].qpsz)->b_quot)), false); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 433 "us\\1csql\\1csql.y"
    { emit("COLUMN"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), newCField(newCName((yyvsp[(3) - (3)].qpsz)->psz, (yyvsp[(3) - (3)].qpsz)->b_quot))); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 436 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 437 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 438 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 439 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 440 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 441 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 442 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 443 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 444 "us\\1csql\\1csql.y"
    { ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 447 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 448 "us\\1csql\\1csql.y"
    {(yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 451 "us\\1csql\\1csql.y"
    { (yyval.a) = newCSelExpr((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 452 "us\\1csql\\1csql.y"
    { emit("COLUMN_SUBQUERY"); (yyval.a) = newCSelTabSub((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 453 "us\\1csql\\1csql.y"
    { emit("SELECTALL"); (yyval.a) = newCSelExpr(newCField(newCName("*", false)), NULL, false); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 454 "us\\1csql\\1csql.y"
    { emit("NULLX"); (yyval.a) = newCSelExpr(newCNull(), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 458 "us\\1csql\\1csql.y"
    { emit("TABREF"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 459 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 460 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 464 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 465 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 478 "us\\1csql\\1csql.y"
    { emit("TABLE"); (yyval.a) = newCTable((yyvsp[(1) - (3)].cname), (yyvsp[(2) - (3)].qpsz)->psz, (yyvsp[(2) - (3)].qpsz)->b_quot); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 479 "us\\1csql\\1csql.y"
    { emit("TABLEREFERENCES"); (yyval.a) = newCTabBrac((yyvsp[(2) - (3)].a)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 480 "us\\1csql\\1csql.y"
    { emit("TABPROC"); (yyval.a) = newCTabProc((yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].qpsz)->psz, (yyvsp[(5) - (5)].qpsz)->b_quot, true); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 481 "us\\1csql\\1csql.y"
    { emit("TABFUNC"); (yyval.a) = newCTabProc((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot, false); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 484 "us\\1csql\\1csql.y"
    { emit ("ALIAS"); (yyval.qpsz) = (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 485 "us\\1csql\\1csql.y"
    { emit ("ALIAS"); (yyval.qpsz) = (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 486 "us\\1csql\\1csql.y"
    { (yyval.qpsz) = newQuot_psz(false); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 491 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a), NULL, NULL); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 493 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), NULL, NULL, NULL); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 495 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), (yyvsp[(6) - (6)].a), (yyvsp[(3) - (6)].strval), (yyvsp[(2) - (6)].strval)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 497 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), NULL, (yyvsp[(3) - (5)].strval), (yyvsp[(2) - (5)].strval)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 499 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), (yyvsp[(5) - (5)].a), (yyvsp[(2) - (5)].strval), NULL); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 501 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), NULL, (yyvsp[(2) - (4)].strval), NULL); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 503 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), (yyvsp[(6) - (6)].a), "natural", (yyvsp[(3) - (6)].strval)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 505 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), NULL, "natural", (yyvsp[(3) - (5)].strval)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 507 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a), (yyvsp[(4) - (4)].a), "straight", NULL); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 509 "us\\1csql\\1csql.y"
    { emit("JOIN"); (yyval.a) = newCJoin((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), NULL, "straight", NULL); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 512 "us\\1csql\\1csql.y"
    { (yyval.strval) = "inner"; ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 513 "us\\1csql\\1csql.y"
    { (yyval.strval) = "cross"; ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 516 "us\\1csql\\1csql.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 517 "us\\1csql\\1csql.y"
    {(yyval.strval) = "outer"; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 520 "us\\1csql\\1csql.y"
    { (yyval.strval) = "left"; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 521 "us\\1csql\\1csql.y"
    { (yyval.strval) = "right"; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 524 "us\\1csql\\1csql.y"
    { (yyval.strval) = "left"; ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 525 "us\\1csql\\1csql.y"
    { (yyval.strval) = "right"; ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 526 "us\\1csql\\1csql.y"
    { (yyval.strval) = NULL; ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 530 "us\\1csql\\1csql.y"
    { emit("ONEXPR"); (yyval.a) = newCJoinCond((yyvsp[(2) - (2)].a), "on"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 531 "us\\1csql\\1csql.y"
    { emit("USING"); (yyval.a) = newCJoinCond((yyvsp[(3) - (4)].a), "using"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 536 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 538 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 540 "us\\1csql\\1csql.y"
    { emit("INDEXHINT"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 541 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 544 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAstNULL(); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 545 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 548 "us\\1csql\\1csql.y"
    { emit("INDEX"); (yyval.a) = newCAstNULL(); delete (yyvsp[(1) - (1)].qpsz); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 549 "us\\1csql\\1csql.y"
    { emit("INDEX"); (yyval.a) = (yyvsp[(1) - (3)].a); delete (yyvsp[(3) - (3)].qpsz); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 552 "us\\1csql\\1csql.y"
    { emit("SUBQUERY"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 553 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 556 "us\\1csql\\1csql.y"
    { emit("SUBQUERYAS %s", (yyvsp[(2) - (2)].qpsz)->psz); (yyval.a) = newCTabSub((yyvsp[(1) - (2)].a), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); delete (yyvsp[(2) - (2)].qpsz); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 559 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 560 "us\\1csql\\1csql.y"
    { emit("WITH"); (yyval.a) = newCWith((yyvsp[(2) - (2)].a)); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 563 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWithList((yyvsp[(3) - (3)].a), newCName((yyvsp[(1) - (3)].qpsz)->psz, (yyvsp[(1) - (3)].qpsz)->b_quot)); delete (yyvsp[(1) - (3)].qpsz); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 564 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCWithList((yyvsp[(1) - (5)].a), (yyvsp[(5) - (5)].a), newCName((yyvsp[(3) - (5)].qpsz)->psz, (yyvsp[(3) - (5)].qpsz)->b_quot)); delete (yyvsp[(3) - (5)].qpsz); ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 569 "us\\1csql\\1csql.y"
    { emit("USERVAR %s", (yyvsp[(1) - (1)].strval)); (yyval.a) = newCField(newCName((yyvsp[(1) - (1)].strval), false)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 570 "us\\1csql\\1csql.y"
    { emit("FIELDNAME"); (yyval.a) = newCField((yyvsp[(1) - (1)].cname)); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 571 "us\\1csql\\1csql.y"
    { emit("STRING %s", (yyvsp[(1) - (1)].strval)); (yyval.a) = newCString((yyvsp[(1) - (1)].strval)); free((yyvsp[(1) - (1)].strval)); ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 572 "us\\1csql\\1csql.y"
    { emit("NUMBER %d", (yyvsp[(1) - (1)].intval)); (yyval.a) = newCNumber((yyvsp[(1) - (1)].intval)); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 573 "us\\1csql\\1csql.y"
    { emit("FLOAT %g", (yyvsp[(1) - (1)].floatval)); (yyval.a) = newCFloat((yyvsp[(1) - (1)].floatval)); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 574 "us\\1csql\\1csql.y"
    { emit("BOOL %d", (yyvsp[(1) - (1)].boolval)); (yyval.a) = newCBool((yyvsp[(1) - (1)].boolval)); ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 577 "us\\1csql\\1csql.y"
    { emit("ADD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "+"); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 578 "us\\1csql\\1csql.y"
    { emit("SUB"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "-"); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 579 "us\\1csql\\1csql.y"
    { emit("MUL"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "*"); ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 580 "us\\1csql\\1csql.y"
    { emit("DIV"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "/"); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 581 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "%"); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 582 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "mod"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 583 "us\\1csql\\1csql.y"
    { emit("CONCAT"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "||"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 584 "us\\1csql\\1csql.y"
    { emit("PARASSIGN"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "=>"); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 585 "us\\1csql\\1csql.y"
    { emit("NEG"); (yyval.a) = newCMinus((yyvsp[(2) - (2)].a), "-"); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 586 "us\\1csql\\1csql.y"
    { emit("AND"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 587 "us\\1csql\\1csql.y"
    { emit("OR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 588 "us\\1csql\\1csql.y"
    { emit("XOR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 589 "us\\1csql\\1csql.y"
    { emit("CMP %s", (yyvsp[(2) - (3)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval), NULL); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 590 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "any"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 591 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "some"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 592 "us\\1csql\\1csql.y"
    { emit("CMPALLSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "all"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 593 "us\\1csql\\1csql.y"
    { emit("BITOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "|"); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 594 "us\\1csql\\1csql.y"
    { emit("BITAND"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "&"); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 595 "us\\1csql\\1csql.y"
    { emit("BITXOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "^"); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 596 "us\\1csql\\1csql.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 597 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "not"); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 598 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "!"); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 599 "us\\1csql\\1csql.y"
    { emit("OUTPLUS"); (yyval.a) = newCOutPlus((yyvsp[(1) - (2)].a), "(+)"); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 600 "us\\1csql\\1csql.y"
    { emit("PRIOR"); (yyval.a) = newCPrior((yyvsp[(2) - (2)].a)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 601 "us\\1csql\\1csql.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); (yyval.a) = newCAstNULL(); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 602 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpBrac((yyvsp[(2) - (3)].a)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 606 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 607 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpTabSub((yyvsp[(1) - (1)].a)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 608 "us\\1csql\\1csql.y"
    { (yyval.a) = newCNull(); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 611 "us\\1csql\\1csql.y"
    { emit("ISNULL"); (yyval.a) = newCIsExp((yyvsp[(1) - (3)].a), true, "null", false); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 612 "us\\1csql\\1csql.y"
    { emit("ISNULL"); emit("NOT"); (yyval.a) = newCIsExp((yyvsp[(1) - (4)].a), false, "null", false); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 613 "us\\1csql\\1csql.y"
    { emit("ISBOOL %b", (yyvsp[(3) - (3)].boolval)); (yyval.a) = newCIsExp((yyvsp[(1) - (3)].a), true, NULL, (yyvsp[(3) - (3)].boolval)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 614 "us\\1csql\\1csql.y"
    { emit("ISBOOL %b", (yyvsp[(4) - (4)].boolval)); emit("NOT"); (yyval.a) = newCIsExp((yyvsp[(1) - (4)].a), false, NULL, (yyvsp[(4) - (4)].boolval)); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 617 "us\\1csql\\1csql.y"
    { emit("BETWEEN"); (yyval.a) = newCBtwnExp((yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 620 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList((yyvsp[(1) - (1)].a)); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 621 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList(newCNull()); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 622 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCValList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 623 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCValList(newCValList(newCExpTabSub((yyvsp[(1) - (3)].a))), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 626 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList(); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 627 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 630 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 631 "us\\1csql\\1csql.y"
    { emit("ISIN"); emit("NOT"); (yyval.a) = newCInValExp((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), false); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 632 "us\\1csql\\1csql.y"
    { emit("INSELECT"); (yyval.a) = newCInSelExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 633 "us\\1csql\\1csql.y"
    { emit("INSELECT"); emit("NOT"); (yyval.a) = newCInSelExp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), false); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 634 "us\\1csql\\1csql.y"
    { emit("EXISTS"); if((yyvsp[(1) - (2)].subtok))emit("NOT"); (yyval.a) = newCExistsExp((yyvsp[(2) - (2)].a), !(yyvsp[(1) - (2)].subtok)); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 637 "us\\1csql\\1csql.y"
    {  emit("CALL"); (yyval.a) = newCCall((yyvsp[(1) - (4)].cname), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 645 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 646 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 649 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAnalytic((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 652 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 653 "us\\1csql\\1csql.y"
    { emit("PARTITION"); (yyval.a) = newCPartition((yyvsp[(3) - (3)].a)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 656 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = NULL; ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 657 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(2) - (2)].a), NULL, (yyvsp[(1) - (2)].strval)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 658 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), (yyvsp[(1) - (5)].strval)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 661 "us\\1csql\\1csql.y"
    { (yyval.strval) = "rows"; ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 662 "us\\1csql\\1csql.y"
    { (yyval.strval) = "range"; ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 665 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "preceding"); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 666 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "following"); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 667 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "current", "row"); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 668 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "preceding"); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 669 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "following"); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 673 "us\\1csql\\1csql.y"
    { emit("COUNTALL"); (yyval.a) = newCFcount(NULL, true); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 674 "us\\1csql\\1csql.y"
    { emit(" CALL 1 COUNT"); (yyval.a) = newCFcount((yyvsp[(3) - (4)].a), false); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 677 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 679 "us\\1csql\\1csql.y"
    {  emit("CALL SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (4)].a), NULL, NULL, 1);;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 680 "us\\1csql\\1csql.y"
    {  emit("CALL 2 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL, 2); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 681 "us\\1csql\\1csql.y"
    {  emit("CALL 3 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (8)].a), (yyvsp[(5) - (8)].a), (yyvsp[(7) - (8)].a), 3); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 682 "us\\1csql\\1csql.y"
    { emit("CALL TRIM"); (yyval.a) = newCFtrim((yyvsp[(3) - (4)].a), NULL, NULL); ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 683 "us\\1csql\\1csql.y"
    { emit("CALL 3 TRIM"); (yyval.a) = newCFtrim((yyvsp[(6) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(3) - (7)].strval)); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 686 "us\\1csql\\1csql.y"
    { emit("INT 1"); (yyval.strval) = "leading"; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 687 "us\\1csql\\1csql.y"
    { emit("INT 2"); (yyval.strval) = "trailing"; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 688 "us\\1csql\\1csql.y"
    { emit("INT 3"); (yyval.strval) = "both"; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 691 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_ADD"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 692 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_SUB"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 695 "us\\1csql\\1csql.y"
    { emit("CALL REPLACE"); (yyval.a) = newCCall(newCName("replace", false), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 698 "us\\1csql\\1csql.y"
    { emit("NUMBER 1"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 699 "us\\1csql\\1csql.y"
    { emit("NUMBER 2"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 700 "us\\1csql\\1csql.y"
    { emit("NUMBER 3"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 701 "us\\1csql\\1csql.y"
    { emit("NUMBER 4"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 702 "us\\1csql\\1csql.y"
    { emit("NUMBER 5"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 703 "us\\1csql\\1csql.y"
    { emit("NUMBER 6"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 704 "us\\1csql\\1csql.y"
    { emit("NUMBER 7"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 705 "us\\1csql\\1csql.y"
    { emit("NUMBER 8"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 706 "us\\1csql\\1csql.y"
    { emit("NUMBER 9"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 709 "us\\1csql\\1csql.y"
    { emit("INTERVAL 1"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "second"); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 710 "us\\1csql\\1csql.y"
    { emit("INTERVAL 2"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "minute"); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 711 "us\\1csql\\1csql.y"
    { emit("INTERVAL 3"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "hour"); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 712 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "day"); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 713 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "month"); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 714 "us\\1csql\\1csql.y"
    { emit("INTERVAL 5"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "year"); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 717 "us\\1csql\\1csql.y"
    { emit("CASEVAL 0"); (yyval.a) = newCCase((yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), NULL); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 718 "us\\1csql\\1csql.y"
    { emit("CASEVAL 1"); (yyval.a) = newCCase((yyvsp[(2) - (6)].a), (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 719 "us\\1csql\\1csql.y"
    { emit("CASE 0"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 720 "us\\1csql\\1csql.y"
    { emit("CASE 1"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 723 "us\\1csql\\1csql.y"
    { (yyval.a) = newCCaseList((yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 724 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCCaseList((yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 727 "us\\1csql\\1csql.y"
    { emit("LIKE"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "like", NULL); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 728 "us\\1csql\\1csql.y"
    { emit("LIKE"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not like", NULL); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 731 "us\\1csql\\1csql.y"
    { emit("REGEXP"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "regexp", NULL); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 732 "us\\1csql\\1csql.y"
    { emit("REGEXP"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not regexp", NULL); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 735 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 736 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 737 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 740 "us\\1csql\\1csql.y"
    { emit("STRTOBIN"); (yyval.a) = newCAstNULL(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3918 "us\\1csql\\1csql.tab.cpp"
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
#line 743 "us\\1csql\\1csql.y"


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

