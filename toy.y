%{
 
#include <stdio.h>
#include "lex.yy.c"  
 
%}

/* left, right, nonassoc yacc keywords for operator precedence (highest to lowest) */
%left '[' '.'
%left '+' '-'
%left '*' '/' '%'
%left '<' '<=' '>' '>='
%left '==' '!='
%left '&&'
%left '||'
%left '=='

/* Tokens we established from Project 1 */
%token _boolean
%token _break
%token _class
%token _double
%token _else
%token _extends
%token _for
%token _if
%token _implements
%token _int
%token _interface
%token _new
%token _newarray
%token _null
%token _println
%token _readln
%token _return
%token _string
%token _this
%token _void
%token _while
%token _plus
%token _minus
%token _multiplication
%token _division
%token _mod
%token _less
%token _lessequal
%token _greater
%token _greaterequal
%token _equal
%token _notequal
%token _and
%token _or
%token _not
%token _assignop
%token _semicolon
%token _comma
%token _period
%token _leftparen
%token _rightparen
%token _leftbracket
%token _rightbracket
%token _leftbrace
%token _rightbrace
%token _intconstant
%token _doubleconstant
%token _stringconstant
%token _booleanconstant
%token _id

/* Bridge between lex and y code */
%union{


}

%%
/* Production rules and actions */
/* '+' = P, '+,' = PC */

/* 1 */
PROGRAM:		DECLP;

DECLP:			DECL DECLP; 		// Right recursion
			|	DECL;				// Terminal

/* 2 */
DECL:			VARIABLEDECL 
			|	FUNCTIONDECL 
			| 	CLASSDECL 
			| 	INTERFACEDECL;

/* 3 */
VARIABLEDECL: 	VARIABLE ';' ;

/* 4 */
VARIABLE:		TYPE _id;

/* 5 */
TYPE:			_int
			|	_double
			|	_boolean
			|	_string
			|	TYPE '[' ']'
			|	_id;

/* 6 */
FUNCTIONDECL: 	TYPE _id '(' FORMALS ')' STMTBLOCK
			|	VOID _id '(' FORMALS ')' STMTBLOCK;

/* 7 */
FORMALS: 		VARIABLEPC
			|	; 					//Epsilon
			
VARIABLEPC: 	
				VARIABLE VARIABLEPC	// Right recursion
			|	VARIABLE;			// Terminal
/* 8 */
CLASSDECL: 		
			CLASS _id _extends _id	
			



%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
}

int main(){
    yyparse();
    return 0;
}
