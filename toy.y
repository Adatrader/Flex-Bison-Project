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
/* '+' = P, '+,' = PC, '<optional>' = O, '*' = M */

/* Production Rule 1 */
PROGRAM:		DECLP;

DECLP:			DECL DECLP 		// Right recursion
			|	DECL ;		// Terminal

/* Production Rule 2 */
DECL:			VARIABLEDECL 
			|	FUNCTIONDECL 
			| 	CLASSDECL 
			| 	INTERFACEDECL;

/* Production Rule 3 */
VARIABLEDECL: 	VARIABLE ';' ;

/* Production Rule 4 */
VARIABLE:		TYPE _id ;

/* Production Rule 5 */
TYPE:			_int
			|	_double
			|	_boolean
			|	_string
			|	TYPE '[' ']'
			|	_id ;

/* Production Rule 6 */
FUNCTIONDECL: 	TYPE _id '(' FORMALS ')' STMTBLOCK
			|	VOID _id '(' FORMALS ')' STMTBLOCK;

/* Production Rule 7 */
FORMALS: 		VARIABLEPC
			|	; 			// Epsilon
			
VARIABLEPC: 	
				VARIABLE VARIABLEPC	// One or more comma seperated
			|	VARIABLE;		// Terminal
/* Production Rule 8 */
CLASSDECL: 		
				_class _id CLASSDECLO '{' FIELDM '}' ;
CLASSDECLO:
				_extends _id
			|	_implements IDPC
			|	_extends _id _implements IDPC
			|	;			// Epsilon
IDPC:
				_id ',' IDPC // One or more comma seperated
			|	_id ;
FIELDM:
				FIELD FIELDM
			|	;			// Epsilon

/* Production Rule 9 */
FIELD:
				VARIABLEDECL
			|	FUNCTIONDECL ;

/* Production Rule 10 */
INTERFACEDECL:
				_interface _id '{' PROTOTYPEM '}'
PROTOTYPEM:
				PROTOTYPE PROTOTYPEM // Right recursion
			|	;			// Epsilon

/* Production Rule 11 */
PROTOTYPE:
				TYPE _id '(' FORMALS ')' ';'
			|	_void _id '(' FORMALS ')' ';' ;

/* Production Rule 12 */
STMTBLOCK:
				'{' VARIABLEDECLM STMTM '}' ;
VARIABLEDECLM:
				VARIABLEDECL VARIABLEDECLM // Right recursion
			|	;			// Epsilon
STMTM:
				STMT STMTM // Right recursion
			|	;			// Epsilon

/* Production Rule 13 */
STMT:
				EXPRO ';'
			|	IFSTMT
			|	WHILESTMT
			|	FORSTMT
			|	BREAKSTMT
			|	RETURNSTMT
			|	PRINTSTMT
			|	STMTBLOCK ;
EXPRO:
				EXPR
			|	;			// Epsilon

/* Production Rule 14 */
IFSTMT:
				_if '(' EXPR ')' STMT ELSESTMTO ;
ELSESTMTO:
				_else STMT
			|	;			// Epsilon

/* Production Rule 15 */
WHILESTMT:
				_while '(' EXPR ')' STMT ;

/* Production Rule 16 */
FORSTMT:
				_for '(' EXPRO ';' EXPR ';' EXPRO ')' STMT ;

/* Production Rule 17 */
BREAKSTMT:
				_break ';' ;

/* Production Rule 18 */
RETURNSTMT:
				_return EXPRO ';' ;

/* Production Rule 19 */
PRINTSTMT:
				_println '(' EXPRPC ')' ';' ;
EXPRPC:
				EXPR ',' EXPRPC // One or more comma seperated
			|	EXPR ;			// Terminal

/* Production Rule 20 */
						


%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
}

int main(){
    yyparse();
    return 0;
}
