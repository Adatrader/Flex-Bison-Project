/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
