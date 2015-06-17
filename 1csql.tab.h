
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
#line 324 "us\\1csql\\1csql.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


