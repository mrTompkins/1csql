
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
#line 26 "us\\1csql\\1csql.y"

	class CAst* a;
	int intval;
	double floatval;
	bool boolval;
	char *strval;
	int subtok;
	struct quot_psz* qpsz;
	class CName* cname;



/* Line 1676 of yacc.c  */
#line 328 "us\\1csql\\1csql.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


