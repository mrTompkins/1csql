
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
#define YYLAST   1938

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  278
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  250
/* YYNRULES -- Number of states.  */
#define YYNSTATES  497

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
     207,   209,   211,   215,   218,   221,   223,   225,   229,   233,
     235,   239,   241,   243,   245,   247,   251,   254,   258,   264,
     267,   270,   272,   273,   278,   282,   289,   295,   301,   306,
     313,   319,   324,   328,   330,   332,   333,   335,   337,   339,
     342,   345,   346,   349,   354,   361,   368,   375,   376,   379,
     380,   382,   386,   390,   394,   397,   398,   401,   405,   411,
     413,   415,   417,   419,   421,   423,   425,   429,   433,   437,
     441,   445,   449,   453,   457,   460,   464,   468,   472,   476,
     481,   486,   491,   495,   499,   503,   507,   510,   513,   516,
     519,   523,   527,   529,   531,   535,   540,   544,   549,   555,
     556,   562,   567,   570,   572,   575,   583,   591,   597,   606,
     615,   622,   628,   634,   638,   645,   652,   657,   660,   666,
     671,   673,   675,   681,   687,   691,   692,   696,   697,   700,
     706,   708,   710,   713,   716,   719,   722,   725,   730,   736,
     738,   743,   750,   759,   764,   772,   779,   781,   783,   785,
     792,   799,   804,   808,   812,   816,   820,   824,   828,   832,
     836,   840,   844,   848,   852,   856,   860,   864,   869,   876,
     880,   886,   891,   897,   901,   906,   910,   915,   917,   919,
     921
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
      -1,    38,    -1,   310,    -1,   308,   274,   311,    -1,   324,
     274,   311,    -1,   311,    -1,   309,   274,   311,    -1,   312,
      -1,   314,    -1,   310,    -1,   324,    -1,   300,   313,   320,
      -1,     9,   313,    -1,   276,   308,   277,    -1,   231,   276,
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
      -1,     6,    -1,   174,    -1,   328,    36,   328,    -1,   328,
      37,   328,    -1,   328,    38,   328,    -1,   328,    39,   328,
      -1,   328,    40,   328,    -1,   328,    41,   328,    -1,   328,
      35,   328,    -1,   328,    43,   328,    -1,    37,   328,    -1,
     328,    23,   328,    -1,   328,    21,   328,    -1,   328,    22,
     328,    -1,   328,    31,   328,    -1,   328,    31,    53,   328,
      -1,   328,    31,   217,   328,    -1,   328,    31,    48,   328,
      -1,   328,    32,   328,    -1,   328,    33,   328,    -1,   328,
      42,   328,    -1,   328,    34,   328,    -1,    29,   328,    -1,
      28,   328,    -1,   328,    44,    -1,    45,   328,    -1,     9,
      10,   328,    -1,   276,   327,   277,    -1,   327,    -1,   323,
      -1,   328,    26,   174,    -1,   328,    26,    29,   174,    -1,
     328,    26,     6,    -1,   328,    26,    29,     6,    -1,   328,
      30,   328,    52,   328,    -1,    -1,   328,   313,   274,   328,
     313,    -1,   329,   274,   328,   313,    -1,   329,   274,    -1,
     329,    -1,   328,   313,    -1,   276,   329,   277,    27,   276,
     329,   277,    -1,   276,   329,   277,    27,   276,   327,   277,
      -1,   276,   329,   277,    27,   323,    -1,   276,   329,   277,
      29,    27,   276,   329,   277,    -1,   276,   329,   277,    29,
      27,   276,   327,   277,    -1,   276,   329,   277,    29,    27,
     323,    -1,   328,    27,   276,   329,   277,    -1,   328,    27,
     276,   327,   277,    -1,   328,    27,   323,    -1,   328,    29,
      27,   276,   329,   277,    -1,   328,    29,    27,   276,   327,
     277,    -1,   328,    29,    27,   323,    -1,   114,   323,    -1,
     300,   275,   276,   330,   277,    -1,   300,   276,   330,   277,
      -1,   331,    -1,   332,    -1,   331,   181,   276,   333,   277,
      -1,   338,   181,   276,   333,   277,    -1,   334,   298,   335,
      -1,    -1,   184,    63,   329,    -1,    -1,   336,   337,    -1,
     336,    30,   337,    52,   337,    -1,   205,    -1,   191,    -1,
     245,   185,    -1,   245,   121,    -1,    83,   206,    -1,   328,
     185,    -1,   328,   121,    -1,   272,   276,    38,   277,    -1,
     272,   276,   305,   328,   277,    -1,   338,    -1,   268,   276,
     329,   277,    -1,   268,   276,   328,   125,   328,   277,    -1,
     268,   276,   328,   125,   328,   122,   328,   277,    -1,   269,
     276,   329,   277,    -1,   269,   276,   339,   328,   125,   329,
     277,    -1,   117,   276,   328,    54,   328,   277,    -1,   150,
      -1,   243,    -1,    62,    -1,   270,   276,   328,   274,   340,
     277,    -1,   271,   276,   328,   274,   340,   277,    -1,   199,
     276,   329,   277,    -1,   144,   328,    90,    -1,   144,   328,
      91,    -1,   144,   328,    92,    -1,   144,   328,    93,    -1,
     144,   328,   266,    -1,   144,   328,   265,    -1,   144,   328,
     132,    -1,   144,   328,   133,    -1,   144,   328,   134,    -1,
     144,     4,   209,    -1,   144,     4,   167,    -1,   144,     4,
     131,    -1,   144,     4,    85,    -1,   144,     4,   171,    -1,
     144,     4,   265,    -1,    66,   328,   341,   111,    -1,    66,
     328,   341,   108,   328,   111,    -1,    66,   341,   111,    -1,
      66,   341,   108,   328,   111,    -1,   260,   328,   235,   328,
      -1,   341,   260,   328,   235,   328,    -1,   328,    25,   328,
      -1,   328,    29,    25,   328,    -1,   328,    24,   328,    -1,
     328,    29,    24,   328,    -1,    81,    -1,    79,    -1,    80,
      -1,    59,   328,    -1
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
     474,   477,   478,   481,   482,   483,   487,   488,   489,   493,
     494,   497,   498,   502,   503,   507,   508,   509,   510,   511,
     514,   515,   516,   520,   522,   524,   526,   528,   530,   532,
     534,   536,   538,   542,   543,   546,   547,   550,   551,   554,
     555,   556,   560,   561,   565,   567,   569,   571,   574,   575,
     578,   579,   582,   583,   586,   589,   590,   593,   594,   599,
     600,   601,   602,   603,   604,   605,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   624,   625,   626,   627,   628,   629,   630,   631,
     632,   633,   637,   638,   641,   642,   643,   644,   647,   650,
     651,   652,   653,   656,   657,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   673,   676,   679,
     682,   683,   687,   688,   691,   694,   695,   698,   699,   700,
     703,   704,   707,   708,   709,   710,   711,   715,   716,   719,
     721,   722,   723,   724,   725,   726,   729,   730,   731,   734,
     735,   738,   741,   742,   743,   744,   745,   746,   747,   748,
     749,   752,   753,   754,   755,   756,   757,   760,   761,   762,
     763,   766,   767,   770,   771,   774,   775,   778,   779,   780,
     783
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
     305,   306,   306,   307,   307,   307,   308,   308,   308,   309,
     309,   310,   310,   311,   311,   312,   312,   312,   312,   312,
     313,   313,   313,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   315,   315,   316,   316,   317,   317,   318,
     318,   318,   319,   319,   320,   320,   320,   320,   321,   321,
     322,   322,   323,   323,   324,   325,   325,   326,   326,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   328,   328,   327,   327,   327,   327,   327,   329,
     329,   329,   329,   330,   330,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   331,
     327,   327,   332,   332,   333,   334,   334,   335,   335,   335,
     336,   336,   337,   337,   337,   337,   337,   338,   338,   327,
     327,   327,   327,   327,   327,   327,   339,   339,   339,   327,
     327,   327,   340,   340,   340,   340,   340,   340,   340,   340,
     340,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   341,   341,   327,   327,   327,   327,   327,   327,   327,
     327
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
       1,     1,     3,     2,     2,     1,     1,     3,     3,     1,
       3,     1,     1,     1,     1,     3,     2,     3,     5,     2,
       2,     1,     0,     4,     3,     6,     5,     5,     4,     6,
       5,     4,     3,     1,     1,     0,     1,     1,     1,     2,
       2,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     3,     2,     0,     2,     3,     5,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       4,     4,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     1,     1,     3,     4,     3,     4,     5,     0,
       5,     4,     2,     1,     2,     7,     7,     5,     8,     8,
       6,     5,     5,     3,     6,     6,     4,     2,     5,     4,
       1,     1,     5,     5,     3,     0,     3,     0,     2,     5,
       1,     1,     2,     2,     2,     2,     2,     4,     5,     1,
       4,     6,     8,     4,     7,     6,     1,     1,     1,     6,
       6,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     6,     3,
       5,     4,     5,     3,     4,     3,     4,     1,     1,     1,
       2
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
       0,     0,    75,     0,     0,     0,   248,   249,   247,     0,
       0,     0,   135,     0,     0,     0,     0,     0,     0,   169,
     130,    53,    71,   163,   162,     0,   190,   191,   209,     0,
       0,   163,   162,   157,   156,   144,   159,   250,     0,     0,
       0,   187,     0,     0,   169,   169,   169,     0,     0,    69,
     163,   162,    92,     0,     0,   169,     0,     0,    34,    91,
       0,    74,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,   128,   160,
       0,     0,     0,   239,     0,     0,   234,   233,   232,   235,
     231,   236,     0,    92,     0,   218,   216,   217,     0,     0,
       0,     0,     0,     0,   161,     0,   172,     0,    52,   169,
      92,   173,     0,    54,    72,     0,     0,    39,    90,   146,
     147,   145,   245,   243,   166,     0,   164,   169,   183,     0,
       0,     0,     0,     0,     0,     0,   148,   152,   153,   155,
     142,   136,   137,   138,   139,   140,   141,   154,   143,   195,
     195,     0,     0,   237,     0,     0,     0,   221,     0,   210,
     213,     0,     0,     0,   207,     0,     0,    92,     0,     0,
       0,   174,   189,     0,    92,     0,   125,    92,    22,    83,
      79,    81,    82,    92,    84,    92,     0,     9,   167,   165,
     162,     0,   246,   244,   169,   186,     0,   151,   149,   150,
       0,     0,    46,     0,   241,     0,   240,     0,     0,     0,
     169,     0,     0,     0,   208,    92,   171,   169,   177,     0,
     188,    35,   162,    86,     0,     0,    83,     0,    92,    84,
       0,   117,     0,     0,    16,     0,     0,   111,   104,   103,
     108,   107,     0,   105,   124,    89,     0,     0,   182,   181,
     162,     0,   168,   169,   192,     0,   197,   193,   238,   242,
     215,     0,   211,     0,     0,   219,   220,   170,   162,     0,
     169,   180,     0,    29,    30,    26,     0,     0,     0,    87,
       0,     0,     0,     0,    85,   162,    80,     0,     0,    11,
      19,    94,   102,   105,   105,     0,     0,   106,     0,    41,
      40,   185,   184,   196,     0,   201,   200,   194,     0,     0,
     214,   222,   223,   224,   225,   228,   229,   230,   227,   226,
     176,   175,   162,     0,   162,    92,    77,    78,   119,   119,
     119,     0,     0,     0,     0,    34,    12,    13,     0,     0,
       0,    93,   101,   110,   109,     0,    98,     0,    47,   162,
       0,     0,     0,     0,   198,   212,   179,   178,    27,    88,
       0,     0,     0,     0,     0,   162,   162,     0,     0,   162,
      36,    14,    15,     0,     0,   112,   100,    97,    96,     0,
      44,     0,   204,   203,   202,   206,   205,   118,     0,     0,
       0,   162,    17,    31,    31,     0,    48,   162,    55,     0,
      99,    95,   162,     0,   120,     0,     0,     0,     0,    25,
      24,     0,     0,     0,    39,     0,   113,    45,   199,     0,
     116,   115,   114,    32,    38,    37,   162,    42,    56,   121,
       0,     0,    10,   162,     0,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    12,     6,     7,   395,   349,   350,   294,
     396,   281,   335,   469,   397,   177,   456,   247,   492,   408,
     316,   474,    70,   108,   459,    36,    37,    38,    71,    72,
     285,   238,   239,   240,   241,   165,   242,   302,   358,   303,
     355,   401,   344,   421,   465,    81,   244,     9,    11,    82,
      75,   171,   172,    76,    77,   261,   262,   367,   368,   414,
      78,   159,   272,    90
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -369
static const yytype_int16 yypact[] =
{
    -228,    33,  -228,     1,  -223,    59,    90,  -369,  -369,  -111,
      52,  -164,  -160,  -158,  -369,  -161,  -369,  -228,  1353,  -146,
     129,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,   148,  -369,  -369,  -369,  -369,  -369,  1353,   684,  -369,
     118,  -369,  -369,  -369,  -369,  -369,  -369,  -369,   164,   914,
     914,   914,  -369,   914,   914,   767,  -369,  -369,  -369,  -146,
     -82,   174,  -369,   -71,   -59,   -24,   -13,    -9,     5,   592,
    -135,  -136,  -369,    11,    11,  1827,    57,  -369,    79,  -146,
     914,  -369,  -369,  1032,  1032,  -369,  -369,  -369,   914,  1317,
     -93,  -369,   914,   -28,   914,   914,   312,   914,   914,   737,
      -5,   -85,  1777,  -153,    -1,   914,   216,   684,     3,  -369,
     280,  -369,  -369,   914,   914,   914,   914,   914,    15,    10,
     110,   914,   302,   914,   914,   914,   914,   914,   914,   914,
     914,   914,   914,   914,   914,  -369,    28,    34,  -369,  1827,
    1470,   -52,   914,  -369,   914,  1715,  -369,  -369,  -369,  -369,
    -369,  -369,  -132,  1610,  -120,  -369,  -369,  -369,  -119,   914,
    1245,  1269,    16,   914,  -369,   -49,   914,    31,  -369,   914,
    1777,     2,    35,  -369,  -369,    70,    24,   187,  -369,  1498,
    1873,  1380,  1894,  1894,  -369,    17,  -369,   592,  -369,   914,
     914,    51,  1803,   914,   914,   914,  1334,  1354,  1063,  1393,
     401,   508,   508,   122,   122,   122,   122,   222,   288,   162,
     162,   914,   914,  -369,  1660,  1560,   914,  -369,   914,  -369,
    -369,  1636,   204,   204,  -369,  1170,   914,  1777,    75,   333,
      93,   -49,  -369,   914,    22,    96,    19,    38,  -165,  -369,
     231,  -369,  -369,    22,  -369,    22,     0,  -369,  -369,  -369,
      98,   -98,  1894,  1894,   592,  -369,   914,  1334,  1334,  1334,
     314,   102,   205,   107,  1827,  1686,  -369,   914,  1197,  1103,
     914,   914,   117,   119,  -369,  1777,  -369,   592,  -369,   131,
    -369,   134,   845,  -369,   406,   -87,   -81,   231,    21,   137,
     409,   -89,   914,    24,   -69,    24,    24,   273,  -369,  -369,
    -369,  -369,   402,   399,  -369,  -369,   914,   914,  -369,  -369,
     138,   -74,  1133,   914,  -369,   354,  -159,  -369,  -369,  1827,
    -369,   914,  -369,   -67,  1293,  -369,  -369,  -369,   145,   -65,
     592,  -369,   914,  -369,  -369,  -369,    47,   146,    24,  -369,
      24,   278,   281,   283,  -369,   380,   231,   364,   169,   168,
     202,   386,   386,   399,   399,   436,    24,  -369,   437,   134,
     134,  -369,  -369,     2,   914,  -369,  -369,  -369,   462,  1221,
    -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,  -369,
    -369,  -369,   173,   -51,   845,    22,   231,   231,   329,   329,
     329,   814,   914,    41,   914,   336,   326,   332,   200,   188,
     914,  -369,  -369,  -369,  -369,    24,   386,    24,   196,   147,
     637,   266,   -91,  1585,  -369,  -369,  -369,  -369,  -369,  -369,
     463,   197,   203,   206,   914,   749,   407,   914,   914,   517,
     303,  -369,  -369,   914,   482,  1851,   386,  -369,   386,   914,
    -369,   435,  -369,  -369,  -369,  -369,  -369,  -369,   485,   485,
     485,   881,  -369,  -197,  -197,    44,   337,   207,  -369,   -45,
    -369,  -369,   147,   637,  -369,   -44,   -21,   -15,   289,  -369,
    -369,   914,   914,   914,   187,   491,  -369,  -369,  -369,   492,
    -369,  -369,  -369,  -369,   134,   134,    60,   254,  -369,  -369,
     914,   914,  -369,   103,   -16,   914,   134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -369,  -369,   494,   105,   481,  -369,  -369,  -369,    74,  -369,
     106,  -192,  -291,    50,   109,   115,  -369,    39,  -369,  -369,
    -369,  -369,   330,  -369,  -369,   477,  -369,   416,  -369,   411,
    -369,  -369,   287,  -134,  -369,   -57,  -369,  -369,   -11,  -369,
    -369,  -309,  -369,   -26,   -84,   182,   290,  -369,  -369,   -38,
     -43,   -56,   347,   756,  -369,   317,  -369,  -369,  -369,  -368,
    -369,  -369,   301,   440
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -163
static const yytype_int16 yytable[] =
{
      74,    14,   168,    -8,   495,   347,    83,    84,    85,   106,
      86,    87,    89,   103,   109,   142,   111,   112,   143,   -92,
     306,   184,    43,   248,   109,   109,   102,    43,   234,    -8,
     443,   101,   365,   234,   341,     1,    10,   139,   152,   154,
     158,   109,   441,   402,   185,   140,   366,   342,     2,   145,
      16,   102,   153,   102,   160,   161,   212,   146,   228,   213,
     229,   427,   170,   307,   471,   110,   468,    -7,   -49,    74,
     179,   180,   181,   182,   183,   110,   110,   332,   192,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   110,   418,   444,   478,   292,   437,    17,   214,
      18,   215,   287,   147,   428,     5,    19,   472,     5,   293,
      20,   -50,    23,   231,   359,   360,   221,    21,   440,    22,
     225,   166,    24,   227,   167,   175,   170,   460,   176,   461,
       2,   251,    40,   -92,   189,   190,   -92,   191,   107,   148,
     104,   105,   166,   149,   102,   217,   252,   253,   -92,   250,
     257,   258,   259,    41,   166,   166,   -92,   219,   220,   346,
     348,   351,   352,   343,   133,   134,   135,   144,   264,   265,
     276,   477,    79,   268,    80,   269,   166,   283,    93,   309,
     291,   150,     8,   275,    13,     8,   304,   338,   305,   186,
     339,   249,   164,   -76,    92,   282,   -76,   -49,   311,     8,
     166,    39,   333,   362,   386,    94,   387,   166,   144,   166,
     370,   102,   381,   312,   323,   -18,   310,    95,   327,   173,
      73,   329,   406,   166,   319,   226,   417,   102,   324,   475,
     479,   304,   476,   480,   102,   453,   454,   151,   136,   328,
     -50,    91,   295,   296,   297,   298,   334,   299,   300,   301,
     235,   100,    96,   479,   345,   235,   481,   363,   332,   479,
     137,   138,   482,    97,     1,   134,   135,    98,   282,   282,
     102,   436,    22,   438,   383,   169,   166,     2,   369,   484,
     485,    99,     1,   178,   -92,   -92,   187,   102,   -92,    73,
     353,   354,   382,   224,   384,   236,   393,   394,    22,   494,
     236,   188,   -49,   496,   209,    43,    44,    45,    46,    47,
     210,    48,   232,   290,   105,    43,    44,    45,    46,    47,
     233,    48,   290,   105,   246,   413,   409,   254,   419,   -18,
      49,    50,   135,   -49,   490,   -18,   -18,   -49,   -28,    51,
      49,    50,   403,   404,   -18,   -50,   260,    53,   271,    51,
     193,   277,   -28,   425,   426,   194,   429,    53,   243,   -18,
     279,    54,   435,   422,   423,   466,   467,   413,    55,   100,
     280,    54,   284,   255,   155,   308,   -50,   313,    55,   314,
     -50,    56,    57,    58,   317,   315,   451,   -18,   -23,   282,
     282,    56,    57,    58,   325,   457,   326,   295,   296,   297,
     298,   462,   299,   300,   301,   399,   400,   330,   332,    43,
     278,   340,   168,   356,   357,   361,    59,   364,   288,    60,
     413,   -28,   380,   385,   -28,   388,    59,   391,   389,    60,
     390,   398,   392,   282,   282,   486,   100,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    61,   405,   407,   -18,
     416,   420,   493,   282,   -23,   394,    61,   282,   175,   100,
     393,   331,   156,   433,   434,    43,    44,    45,    46,    47,
     439,    48,   442,   448,   447,   243,    62,   243,   243,   449,
     -18,   347,   450,   455,   -18,   458,    62,   463,   464,   473,
      49,    50,   410,   483,   488,   489,   491,    15,    25,    51,
     452,    63,   -23,   432,   470,   431,   237,    53,   -23,   -23,
     430,    63,   100,   487,    42,   163,   230,   -23,   174,   195,
     243,    54,   243,   286,   273,   -33,   289,   263,    55,   141,
       0,     0,   -23,     0,     0,     0,     0,     0,   243,     0,
       0,    56,    57,    58,     0,   411,   129,   130,   131,   132,
     133,   134,   135,     0,     0,   157,     0,     0,     0,     0,
     -23,     0,     0,     0,     0,     0,   237,     0,     0,     0,
      64,    65,    66,    67,    68,     0,    59,     0,    69,    60,
      64,    65,    66,    67,    68,     0,     0,   243,    69,   243,
       0,     0,     0,     0,     0,    43,    44,    45,    46,    47,
       0,    48,     0,     0,     0,     0,    61,     0,     0,   -23,
       0,     0,     0,     0,   336,     0,     0,     0,     0,     0,
      49,    50,   -23,   237,     0,   237,   237,     0,     0,    51,
       0,     0,     0,     0,     0,     0,    62,    53,     0,   -33,
      43,    44,    45,    46,    47,   -33,    48,     0,     0,     0,
       0,    54,     0,   -23,   -33,     0,     0,   -23,    55,     0,
       0,    63,     0,     0,     0,    49,    50,     0,   237,   -33,
     237,    56,    57,    58,    51,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,     0,   237,    43,    44,    45,
      46,    47,     0,    48,     0,     0,    54,   -33,     0,     0,
       0,     0,     0,    55,     0,     0,    59,   412,     0,    60,
       0,     0,    49,    50,     0,     0,    56,    57,    58,     0,
     411,    51,    52,     0,     0,     0,     0,     0,     0,    53,
      64,    65,    66,    67,    68,   237,    61,   237,    69,     0,
       0,     0,     0,    54,     0,     0,     0,     0,     0,    26,
      55,    59,     0,     0,    60,     0,     0,   -21,     0,   -33,
       0,     0,     0,    56,    57,    58,    62,     0,     0,     0,
      43,    44,    45,    46,    47,   162,    48,     0,     0,     0,
       0,    61,     0,     0,     0,    27,     0,    28,     0,     0,
     -33,    63,     0,     0,   -33,    49,    50,     0,    59,     0,
       0,    60,     0,  -125,    51,     0,     0,     0,     0,     0,
       0,    62,    53,     0,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    48,     0,     0,    54,     0,    61,     0,
       0,     0,     0,    55,     0,     0,    63,     0,     0,    29,
      30,     0,    49,    50,     0,     0,    56,    57,    58,     0,
       0,    51,     0,   -28,     0,     1,    31,     0,    62,    53,
      64,    65,    66,    67,    68,   -28,     0,    32,    69,     0,
       0,   -21,     0,    54,     0,     0,     0,   -21,   -21,     0,
      55,    59,   412,    63,    60,     0,   -21,     0,     0,   -20,
       0,     0,     0,    56,    57,    58,     0,     0,     0,     0,
     333,   -21,     0,     0,     0,    64,    65,    66,    67,    68,
       0,    61,     0,    69,     0,     0,     0,    43,    44,    45,
      46,    47,     0,    48,     0,     0,     0,     0,    59,   -21,
       0,    60,   245,     0,     0,     0,     0,     0,     0,     0,
       0,    62,    49,    50,   334,     0,     0,     0,     0,     0,
       0,    51,    64,    65,    66,    67,    68,     0,    61,    53,
      69,     0,    33,    34,    35,     0,    63,   -28,     0,     0,
       0,     0,     0,    54,   -28,     0,     0,     0,   -21,     0,
      55,     0,   -28,     0,     0,     0,   424,     0,    62,     0,
       0,   -21,   245,    56,    57,    58,     0,   -28,     0,     0,
       0,     0,     0,   -20,     0,     0,     0,     0,     0,   -20,
     -20,     0,     0,    63,     0,     0,     0,     0,   -20,     0,
       0,     0,   -21,     0,     0,   -28,   -21,    88,    59,     0,
       0,    60,     0,   -20,     0,    64,    65,    66,    67,    68,
     337,     0,     0,    69,     0,     0,     0,     0,     0,   245,
       0,   245,   245,     0,     0,     0,     0,     0,    61,     0,
       0,   -20,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     0,     0,     0,
       0,     0,    64,    65,    66,    67,    68,   -28,    62,     0,
      69,     0,     0,     0,   245,     0,   245,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   -28,     0,
     -20,     0,   245,    63,     0,     0,     0,     0,   -28,   -28,
       0,     0,   -28,   -20,   113,   114,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,     0,     0,   -20,     0,     0,     0,   -20,     0,
       0,   245,     0,   245,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,    64,    65,    66,    67,    68,     0,     0,     0,
      69,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,     0,   113,   114,
     115,   116,   117,   118,   119,   321,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   113,   114,   115,   116,   117,   118,   119,     0,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     113,   114,   115,   116,   117,   118,   119,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   113,   114,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   113,   114,
     115,   116,   117,   118,   119,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     0,     0,     0,    26,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     0,
     322,     0,     0,   371,   372,   373,   374,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     0,
       0,    27,     0,    28,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   375,   376,   377,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,    29,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,   320,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,     0,     0,     0,
       0,   113,   114,   115,   116,   117,   118,   119,   415,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,     0,     0,   222,
     114,   115,   116,   117,   118,   119,     0,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   378,   379,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,    33,    34,
      35,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,   113,   114,   115,   116,
     117,   118,   119,   109,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,     0,   113,   114,   115,
     116,   117,   118,   119,   110,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   113,   114,   115,   116,   117,   118,   119,     0,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   211,   445,   113,   114,   115,
     116,   117,   118,   119,     0,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     0,     0,     0,     0,   218,   113,   114,   115,   116,
     117,   118,   119,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       0,   270,     0,     0,     0,     0,     0,     0,     0,   216,
     446,   266,     0,     0,     0,     0,     0,     0,     0,     0,
     109,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   267,     0,   318,   113,   114,
     115,   116,   117,   118,   119,     0,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     0,     0,   113,   114,   115,   116,   117,   118,
     119,   110,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   113,   114,
     115,   116,   117,   118,   119,   256,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,  -162,  -162,  -162,  -162,  -162,  -162,  -162,     0,
    -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,  -162,
    -162,  -162,  -162,  -162,  -162,  -162,   115,   116,   117,   118,
     119,     0,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,  -163,  -163,
    -163,  -163,     0,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135
};

static const yytype_int16 yycheck[] =
{
      38,     0,     3,     8,    20,    74,    49,    50,    51,   145,
      53,    54,    55,    69,     3,   108,    73,    74,   111,     8,
      20,     6,     3,     6,     3,     3,    69,     3,     9,     8,
     121,    69,   191,     9,   123,   263,     3,    80,    94,    95,
      96,     3,   410,   352,    29,    88,   205,   136,   276,    92,
     273,    94,    95,    96,    97,    98,   108,    85,    27,   111,
      29,    20,   105,    63,    20,    54,   263,     8,     8,   107,
     113,   114,   115,   116,   117,    54,    54,   274,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    54,   384,   185,   463,   261,   406,     8,   142,
     211,   144,   236,   131,    63,     0,    54,    63,     3,   274,
     274,     8,   273,   170,   306,   307,   159,   277,   409,   277,
     163,   274,    17,   166,   277,   122,   169,   436,   125,   438,
     276,   187,     3,   122,    24,    25,   125,    27,   274,   167,
     275,   276,   274,   171,   187,   277,   189,   190,   137,   187,
     193,   194,   195,     5,   274,   274,   145,   277,   277,   293,
     229,   295,   296,   252,    42,    43,    44,   260,   211,   212,
     227,   462,    54,   216,    10,   218,   274,   234,     4,   277,
     237,   209,     0,   226,     2,     3,   243,   274,   245,   174,
     277,   174,   277,   274,   276,   233,   277,   137,   254,    17,
     274,    19,    55,   277,   338,   276,   340,   274,   260,   274,
     277,   254,   277,   256,   270,     8,   254,   276,   275,     3,
      38,   277,   356,   274,   267,   274,   277,   270,   271,   274,
     274,   288,   277,   277,   277,   427,   428,   265,   181,   277,
     137,    59,    11,    12,    13,    14,    99,    16,    17,    18,
     231,    69,   276,   274,   292,   231,   277,   313,   274,   274,
     181,    79,   277,   276,   263,    43,    44,   276,   306,   307,
     313,   405,   277,   407,   330,   276,   274,   276,   321,   471,
     472,   276,   263,     3,   273,   274,   276,   330,   277,   107,
      17,    18,   330,   277,   332,   276,   128,   129,   277,   491,
     276,   119,   242,   495,   276,     3,     4,     5,     6,     7,
     276,     9,   277,   275,   276,     3,     4,     5,     6,     7,
     250,     9,   275,   276,   137,   368,   364,   276,   385,   122,
      28,    29,    44,   273,   274,   128,   129,   277,   191,    37,
      28,    29,   353,   354,   137,   242,   184,    45,   144,    37,
      48,   276,   205,   391,   392,    53,   394,    45,   176,   152,
      27,    59,   400,   389,   390,   449,   450,   410,    66,   187,
     277,    59,   276,   191,    62,   277,   273,    63,    66,   277,
     277,    79,    80,    81,   277,   180,   424,   180,     8,   427,
     428,    79,    80,    81,   277,   433,   277,    11,    12,    13,
      14,   439,    16,    17,    18,    19,    20,   276,   274,     3,
     228,   274,     3,    11,    15,   277,   114,    63,   236,   117,
     463,   274,   277,   277,   277,   147,   114,    63,   147,   117,
     147,   229,   263,   471,   472,   473,   254,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   144,    11,    11,   242,
     277,   122,   490,   491,    74,   129,   144,   495,   122,   277,
     128,   279,   150,   263,   276,     3,     4,     5,     6,     7,
     274,     9,   206,   276,    11,   293,   174,   295,   296,   276,
     273,    74,   276,   180,   277,     3,   174,    52,     3,   152,
      28,    29,    30,   204,     3,     3,   242,     3,    17,    37,
     426,   199,   122,   397,   454,   396,   176,    45,   128,   129,
     395,   199,   330,   474,    37,    99,   169,   137,   107,   217,
     338,    59,   340,   236,   223,     8,   236,   210,    66,    89,
      -1,    -1,   152,    -1,    -1,    -1,    -1,    -1,   356,    -1,
      -1,    79,    80,    81,    -1,    83,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,   243,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,   236,    -1,    -1,    -1,
     268,   269,   270,   271,   272,    -1,   114,    -1,   276,   117,
     268,   269,   270,   271,   272,    -1,    -1,   405,   276,   407,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    -1,    -1,    -1,    -1,   144,    -1,    -1,   229,
      -1,    -1,    -1,    -1,   284,    -1,    -1,    -1,    -1,    -1,
      28,    29,   242,   293,    -1,   295,   296,    -1,    -1,    37,
      -1,    -1,    -1,    -1,    -1,    -1,   174,    45,    -1,   122,
       3,     4,     5,     6,     7,   128,     9,    -1,    -1,    -1,
      -1,    59,    -1,   273,   137,    -1,    -1,   277,    66,    -1,
      -1,   199,    -1,    -1,    -1,    28,    29,    -1,   338,   152,
     340,    79,    80,    81,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,   356,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    59,   180,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,   114,   245,    -1,   117,
      -1,    -1,    28,    29,    -1,    -1,    79,    80,    81,    -1,
      83,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    45,
     268,   269,   270,   271,   272,   405,   144,   407,   276,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,    -1,    12,
      66,   114,    -1,    -1,   117,    -1,    -1,     8,    -1,   242,
      -1,    -1,    -1,    79,    80,    81,   174,    -1,    -1,    -1,
       3,     4,     5,     6,     7,    38,     9,    -1,    -1,    -1,
      -1,   144,    -1,    -1,    -1,    48,    -1,    50,    -1,    -1,
     273,   199,    -1,    -1,   277,    28,    29,    -1,   114,    -1,
      -1,   117,    -1,   211,    37,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    45,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    59,    -1,   144,    -1,
      -1,    -1,    -1,    66,    -1,    -1,   199,    -1,    -1,   102,
     103,    -1,    28,    29,    -1,    -1,    79,    80,    81,    -1,
      -1,    37,    -1,     8,    -1,   263,   119,    -1,   174,    45,
     268,   269,   270,   271,   272,    20,    -1,   130,   276,    -1,
      -1,   122,    -1,    59,    -1,    -1,    -1,   128,   129,    -1,
      66,   114,   245,   199,   117,    -1,   137,    -1,    -1,     8,
      -1,    -1,    -1,    79,    80,    81,    -1,    -1,    -1,    -1,
      55,   152,    -1,    -1,    -1,   268,   269,   270,   271,   272,
      -1,   144,    -1,   276,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,   114,   180,
      -1,   117,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   174,    28,    29,    99,    -1,    -1,    -1,    -1,    -1,
      -1,    37,   268,   269,   270,   271,   272,    -1,   144,    45,
     276,    -1,   225,   226,   227,    -1,   199,   122,    -1,    -1,
      -1,    -1,    -1,    59,   129,    -1,    -1,    -1,   229,    -1,
      66,    -1,   137,    -1,    -1,    -1,   172,    -1,   174,    -1,
      -1,   242,   236,    79,    80,    81,    -1,   152,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,    -1,    -1,    -1,   128,
     129,    -1,    -1,   199,    -1,    -1,    -1,    -1,   137,    -1,
      -1,    -1,   273,    -1,    -1,   180,   277,   260,   114,    -1,
      -1,   117,    -1,   152,    -1,   268,   269,   270,   271,   272,
     284,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,   293,
      -1,   295,   296,    -1,    -1,    -1,    -1,    -1,   144,    -1,
      -1,   180,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,   268,   269,   270,   271,   272,   242,   174,    -1,
     276,    -1,    -1,    -1,   338,    -1,   340,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,   263,    -1,
     229,    -1,   356,   199,    -1,    -1,    -1,    -1,   273,   274,
      -1,    -1,   277,   242,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,   273,    -1,    -1,    -1,   277,    -1,
      -1,   405,    -1,   407,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,   268,   269,   270,   271,   272,    -1,    -1,    -1,
     276,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,   122,    29,    30,    31,    32,
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
      37,    38,    39,    40,    41,    42,    43,    44,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    12,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
     277,    -1,    -1,    90,    91,    92,    93,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    48,    -1,    50,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   132,   133,   134,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,   277,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,   277,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,   274,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   265,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   260,   225,   226,
     227,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    21,    22,    23,    24,
      25,    26,    27,     3,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    54,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,   235,   121,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,   125,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,
     185,   111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   235,    -1,   111,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    54,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    21,    22,
      23,    24,    25,    26,    27,    52,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    23,    24,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    24,    25,
      26,    27,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44
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
      10,   323,   327,   328,   328,   328,   328,   328,   260,   328,
     341,   323,   276,     4,   276,   276,   276,   276,   276,   276,
     323,   327,   328,   329,   275,   276,   145,   274,   301,     3,
      54,   313,   313,    21,    22,    23,    24,    25,    26,    27,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,   181,   181,   323,   328,
     328,   341,   108,   111,   260,   328,    85,   131,   167,   171,
     209,   265,   329,   328,   329,    62,   150,   243,   329,   339,
     328,   328,    38,   305,   277,   313,   274,   277,     3,   276,
     328,   329,   330,     3,   307,   122,   125,   293,     3,   328,
     328,   328,   328,   328,     6,    29,   174,   276,   323,    24,
      25,    27,   328,    48,    53,   217,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   276,
     276,   235,   108,   111,   328,   328,    54,   277,   125,   277,
     277,   328,   274,   274,   277,   328,   274,   328,    27,    29,
     330,   313,   277,   250,     9,   231,   276,   300,   309,   310,
     311,   312,   314,   323,   324,   331,   137,   295,     6,   174,
     327,   329,   328,   328,   276,   323,    52,   328,   328,   328,
     184,   333,   334,   333,   328,   328,   111,   235,   328,   328,
     125,   144,   340,   340,   277,   328,   313,   276,   323,    27,
     277,   289,   327,   313,   276,   308,   310,   311,   323,   324,
     275,   313,   261,   274,   287,    11,    12,    13,    14,    16,
      17,    18,   315,   317,   313,   313,    20,    63,   277,   277,
     327,   329,   328,    63,   277,   180,   298,   277,   111,   328,
     277,   122,   277,   329,   328,   277,   277,   313,   327,   329,
     276,   323,   274,    55,    99,   290,   300,   331,   274,   277,
     274,   123,   136,   252,   320,   327,   311,    74,   229,   285,
     286,   311,   311,    17,    18,   318,    11,    15,   316,   289,
     289,   277,   277,   329,    63,   191,   205,   335,   336,   328,
     277,    90,    91,    92,    93,   132,   133,   134,   265,   266,
     277,   277,   327,   329,   327,   277,   311,   311,   147,   147,
     147,    63,   263,   128,   129,   284,   288,   292,   229,    19,
      20,   319,   319,   316,   316,    11,   311,    11,   297,   327,
      30,    83,   245,   328,   337,   277,   277,   277,   290,   313,
     122,   321,   321,   321,   172,   327,   327,    20,    63,   327,
     293,   292,   288,   263,   276,   327,   311,   319,   311,   274,
     290,   337,   206,   121,   185,   121,   185,    11,   276,   276,
     276,   327,   286,   289,   289,   180,   294,   327,     3,   302,
     319,   319,   327,    52,     3,   322,   322,   322,   263,   291,
     291,    20,    63,   152,   299,   274,   277,   290,   337,   274,
     277,   277,   277,   204,   289,   289,   327,   295,     3,     3,
     274,   242,   296,   327,   289,    20,   289
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
#line 487 "us\\1csql\\1csql.y"
    { emit("TABREF"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 488 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 489 "us\\1csql\\1csql.y"
    { emit("ADD TABREF"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 493 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = newCExprList((yyvsp[(1) - (1)].a), true); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 494 "us\\1csql\\1csql.y"
    { emit("TABREFS OR SUBQUERY"); (yyval.a) = addtoCExprList((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 507 "us\\1csql\\1csql.y"
    { emit("TABLE"); (yyval.a) = newCTable((yyvsp[(1) - (3)].cname), (yyvsp[(2) - (3)].qpsz)->psz, (yyvsp[(2) - (3)].qpsz)->b_quot); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 508 "us\\1csql\\1csql.y"
    { emit("TABLEUSERVAR"); (yyval.a) = newCTable(newCName((yyvsp[(1) - (2)].strval), false), (yyvsp[(2) - (2)].qpsz)->psz, (yyvsp[(2) - (2)].qpsz)->b_quot); free((yyvsp[(1) - (2)].strval)); ;}
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
#line 605 "us\\1csql\\1csql.y"
    { (yyval.a) = newCNull(); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 608 "us\\1csql\\1csql.y"
    { emit("ADD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "+"); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 609 "us\\1csql\\1csql.y"
    { emit("SUB"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "-"); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 610 "us\\1csql\\1csql.y"
    { emit("MUL"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "*"); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 611 "us\\1csql\\1csql.y"
    { emit("DIV"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "/"); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 612 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "%"); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 613 "us\\1csql\\1csql.y"
    { emit("MOD"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "mod"); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 614 "us\\1csql\\1csql.y"
    { emit("CONCAT"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "||"); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 615 "us\\1csql\\1csql.y"
    { emit("PARASSIGN"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "=>"); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 616 "us\\1csql\\1csql.y"
    { emit("NEG"); (yyval.a) = newCMinus((yyvsp[(2) - (2)].a), "-"); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 617 "us\\1csql\\1csql.y"
    { emit("AND"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 618 "us\\1csql\\1csql.y"
    { emit("OR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 619 "us\\1csql\\1csql.y"
    { emit("XOR"); (yyval.a) = newCLogExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval)); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 620 "us\\1csql\\1csql.y"
    { emit("CMP %s", (yyvsp[(2) - (3)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), (yyvsp[(2) - (3)].strval), NULL); free((yyvsp[(2) - (3)].strval)); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 621 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "any"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 622 "us\\1csql\\1csql.y"
    { emit("CMPANYSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "some"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 623 "us\\1csql\\1csql.y"
    { emit("CMPALLSELECT %s", (yyvsp[(2) - (4)].strval)); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), (yyvsp[(2) - (4)].strval), "all"); free((yyvsp[(2) - (4)].strval)); ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 624 "us\\1csql\\1csql.y"
    { emit("BITOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "|"); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 625 "us\\1csql\\1csql.y"
    { emit("BITAND"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "&"); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 626 "us\\1csql\\1csql.y"
    { emit("BITXOR"); (yyval.a) = newCExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "^"); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 627 "us\\1csql\\1csql.y"
    { emit("SHIFT %s", (yyvsp[(2) - (3)].subtok)==1?"left":"right"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 628 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "not"); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 629 "us\\1csql\\1csql.y"
    { emit("NOT"); (yyval.a) = newCNot((yyvsp[(2) - (2)].a), "!"); ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 630 "us\\1csql\\1csql.y"
    { emit("OUTPLUS"); (yyval.a) = newCOutPlus((yyvsp[(1) - (2)].a), "(+)"); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 631 "us\\1csql\\1csql.y"
    { emit("PRIOR"); (yyval.a) = newCPrior((yyvsp[(2) - (2)].a)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 632 "us\\1csql\\1csql.y"
    { emit("ASSIGN @%s", (yyvsp[(1) - (3)].strval)); (yyval.a) = newCAstNULL(); free((yyvsp[(1) - (3)].strval)); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 633 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpBrac((yyvsp[(2) - (3)].a)); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 637 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 638 "us\\1csql\\1csql.y"
    { (yyval.a) = newCExpTabSub((yyvsp[(1) - (1)].a)); ;}
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
    { (yyval.a) = addtoCValList(newCValList((yyvsp[(1) - (5)].a)), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 652 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCValList((yyvsp[(1) - (4)].a), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 653 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (2)].a); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 656 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 657 "us\\1csql\\1csql.y"
    { (yyval.a) = newCValList((yyvsp[(1) - (2)].a)); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 660 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (7)].a), (yyvsp[(6) - (7)].a), true); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 661 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (7)].a), (yyvsp[(6) - (7)].a), true); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 662 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (5)].a), (yyvsp[(5) - (5)].a), true); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 663 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (8)].a), (yyvsp[(7) - (8)].a), false); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 664 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (8)].a), (yyvsp[(7) - (8)].a), false); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 665 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(2) - (6)].a), (yyvsp[(6) - (6)].a), false); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 666 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 667 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a), true); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 668 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), true); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 669 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), false); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 670 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (6)].a), (yyvsp[(5) - (6)].a), false); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 671 "us\\1csql\\1csql.y"
    { emit("ISIN"); (yyval.a) = newCInValExp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), false); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 673 "us\\1csql\\1csql.y"
    { emit("EXISTS"); if((yyvsp[(1) - (2)].subtok))emit("NOT"); (yyval.a) = newCExistsExp((yyvsp[(2) - (2)].a), !(yyvsp[(1) - (2)].subtok)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 676 "us\\1csql\\1csql.y"
    {  emit("SUBORDTABLE"); (yyval.a) = newCSubordTable((yyvsp[(1) - (5)].cname), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 679 "us\\1csql\\1csql.y"
    {  emit("CALL"); (yyval.a) = newCCall((yyvsp[(1) - (4)].cname), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 687 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 688 "us\\1csql\\1csql.y"
    {  emit("CALL %s", (yyvsp[(1) - (5)].a)); (yyval.a) = newCAnFunc((yyvsp[(1) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 691 "us\\1csql\\1csql.y"
    { (yyval.a) = newCAnalytic((yyvsp[(1) - (3)].a), (yyvsp[(2) - (3)].a), (yyvsp[(3) - (3)].a)); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 694 "us\\1csql\\1csql.y"
    { (yyval.a) = NULL; ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 695 "us\\1csql\\1csql.y"
    { emit("PARTITION"); (yyval.a) = newCPartition((yyvsp[(3) - (3)].a)); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 698 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = NULL; ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 699 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(2) - (2)].a), NULL, (yyvsp[(1) - (2)].strval)); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 700 "us\\1csql\\1csql.y"
    { emit("WINDOW"); (yyval.a) = newCWindow((yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a), (yyvsp[(1) - (5)].strval)); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 703 "us\\1csql\\1csql.y"
    { (yyval.strval) = "rows"; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 704 "us\\1csql\\1csql.y"
    { (yyval.strval) = "range"; ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 707 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "preceding"); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 708 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "unbounded", "following"); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 709 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound(NULL, "current", "row"); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 710 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "preceding"); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 711 "us\\1csql\\1csql.y"
    { (yyval.a) = newCWndBound((yyvsp[(1) - (2)].a), NULL, "following"); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 715 "us\\1csql\\1csql.y"
    { emit("COUNTALL"); (yyval.a) = newCFcount(NULL, NULL, true); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 716 "us\\1csql\\1csql.y"
    { emit(" CALL 1 COUNT"); (yyval.a) = newCFcount((yyvsp[(3) - (5)].a), (yyvsp[(4) - (5)].a), false); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 719 "us\\1csql\\1csql.y"
    { (yyval.a) = (yyvsp[(1) - (1)].a); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 721 "us\\1csql\\1csql.y"
    {  emit("CALL SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (4)].a), NULL, NULL, 1);;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 722 "us\\1csql\\1csql.y"
    {  emit("CALL 2 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a), NULL, 2); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 723 "us\\1csql\\1csql.y"
    {  emit("CALL 3 SUBSTR"); (yyval.a) = newCFsubstr((yyvsp[(3) - (8)].a), (yyvsp[(5) - (8)].a), (yyvsp[(7) - (8)].a), 3); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 724 "us\\1csql\\1csql.y"
    { emit("CALL TRIM"); (yyval.a) = newCFtrim((yyvsp[(3) - (4)].a), NULL, NULL); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 725 "us\\1csql\\1csql.y"
    { emit("CALL 3 TRIM"); (yyval.a) = newCFtrim((yyvsp[(6) - (7)].a), (yyvsp[(4) - (7)].a), (yyvsp[(3) - (7)].strval)); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 726 "us\\1csql\\1csql.y"
    { emit("CALL FEXPRESS"); (yyval.a) = newCFexpress((yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 729 "us\\1csql\\1csql.y"
    { emit("INT 1"); (yyval.strval) = "leading"; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 730 "us\\1csql\\1csql.y"
    { emit("INT 2"); (yyval.strval) = "trailing"; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 731 "us\\1csql\\1csql.y"
    { emit("INT 3"); (yyval.strval) = "both"; ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 734 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_ADD"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 735 "us\\1csql\\1csql.y"
    { emit("CALL 3 DATE_SUB"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 738 "us\\1csql\\1csql.y"
    { emit("CALL REPLACE"); (yyval.a) = newCCall(newCName("replace", false), (yyvsp[(3) - (4)].a)); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 741 "us\\1csql\\1csql.y"
    { emit("NUMBER 1"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 742 "us\\1csql\\1csql.y"
    { emit("NUMBER 2"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 743 "us\\1csql\\1csql.y"
    { emit("NUMBER 3"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 744 "us\\1csql\\1csql.y"
    { emit("NUMBER 4"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 745 "us\\1csql\\1csql.y"
    { emit("NUMBER 5"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 746 "us\\1csql\\1csql.y"
    { emit("NUMBER 6"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 747 "us\\1csql\\1csql.y"
    { emit("NUMBER 7"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 748 "us\\1csql\\1csql.y"
    { emit("NUMBER 8"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 749 "us\\1csql\\1csql.y"
    { emit("NUMBER 9"); (yyval.a) = (yyvsp[(2) - (3)].a); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 752 "us\\1csql\\1csql.y"
    { emit("INTERVAL 1"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "second"); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 753 "us\\1csql\\1csql.y"
    { emit("INTERVAL 2"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "minute"); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 754 "us\\1csql\\1csql.y"
    { emit("INTERVAL 3"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "hour"); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 755 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "day"); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 756 "us\\1csql\\1csql.y"
    { emit("INTERVAL 4"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "month"); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 757 "us\\1csql\\1csql.y"
    { emit("INTERVAL 5"); (yyval.a) = newCInterval((yyvsp[(2) - (3)].strval), "year"); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 760 "us\\1csql\\1csql.y"
    { emit("CASEVAL 0"); (yyval.a) = newCCase((yyvsp[(2) - (4)].a), (yyvsp[(3) - (4)].a), NULL); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 761 "us\\1csql\\1csql.y"
    { emit("CASEVAL 1"); (yyval.a) = newCCase((yyvsp[(2) - (6)].a), (yyvsp[(3) - (6)].a), (yyvsp[(5) - (6)].a)); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 762 "us\\1csql\\1csql.y"
    { emit("CASE 0"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (3)].a), NULL); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 763 "us\\1csql\\1csql.y"
    { emit("CASE 1"); (yyval.a) = newCCase(NULL, (yyvsp[(2) - (5)].a), (yyvsp[(4) - (5)].a)); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 766 "us\\1csql\\1csql.y"
    { (yyval.a) = newCCaseList((yyvsp[(2) - (4)].a), (yyvsp[(4) - (4)].a)); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 767 "us\\1csql\\1csql.y"
    { (yyval.a) = addtoCCaseList((yyvsp[(1) - (5)].a), (yyvsp[(3) - (5)].a), (yyvsp[(5) - (5)].a)); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 770 "us\\1csql\\1csql.y"
    { emit("LIKE"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "like", NULL); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 771 "us\\1csql\\1csql.y"
    { emit("LIKE"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not like", NULL); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 774 "us\\1csql\\1csql.y"
    { emit("REGEXP"); (yyval.a) = newCCmp((yyvsp[(1) - (3)].a), (yyvsp[(3) - (3)].a), "regexp", NULL); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 775 "us\\1csql\\1csql.y"
    { emit("REGEXP"); emit("NOT"); (yyval.a) = newCCmp((yyvsp[(1) - (4)].a), (yyvsp[(4) - (4)].a), "not regexp", NULL); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 778 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 779 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 780 "us\\1csql\\1csql.y"
    { emit("NOW"); (yyval.a) = newCAstNULL(); ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 783 "us\\1csql\\1csql.y"
    { emit("STRTOBIN"); (yyval.a) = newCAstNULL(); ;}
    break;



/* Line 1455 of yacc.c  */
#line 4138 "us\\1csql\\1csql.tab.cpp"
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
#line 786 "us\\1csql\\1csql.y"


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

