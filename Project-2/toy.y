%{
#include <stdio.h>

#ifdef YYDEBUG
extern int yydebug;
#endif

%}

// left, right, nonassoc yacc keywords for operator precedence (highest to lowest) 
%right _leftbracket _period
%right _not _unaryminus // Test if unary minus should be seperate token
%left _plus _minus
%left _multiplication _division _mod
%nonassoc _less _lessequal _greater _greaterequal
%nonassoc _equal _notequal
%left _and
%left _or
%nonassoc _assignop

// extra 
%nonassoc "noelse"
%nonassoc _else
%nonassoc _id
%nonassoc "lvalue"


// Tokens we established from Project 1 
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

// // Bridge between lex and y code 
// %union{


// }

%%
// Production rules and actions (Print production number when reducing)
/* 
'+' = P 
'+,' = PC 
'<optional>' = O 
'*' = M 
*/

// rule 3 - c1
VARIABLEDECL: VARIABLE _semicolon {printf("[reduce 8] \n");};


// rule 4 - c1
VARIABLE: TYPE _id {printf("[reduce 9] \n");};


// rule 5 - uc
TYPE: _int {printf("[reduce 9]");}
 	| _double {printf("[reduce 10]");}
 	| _boolean {printf("[reduce 11]");}
 	| _string {printf("[reduce 12]");}
 	| TYPE _leftbracket _rightbracket {printf("[reduce 13]");}
 	| _id {printf("[reduce 14]");}
 ;


// rule 7 - c3
FORMALS: VARIABLE MORE_VARIABLE {printf("[reduce 17]");}
	| EPSILON {printf("[reduce 18]");}
;


// rule 11 - c2
PROTOTYPE: TYPE _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 35]");}
 	| _void _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 36]");}
;


// rule 17 - uc
BREAKSTMT: _break _semicolon {printf("[reduce 58]");}
;


// rule 21 - c1
LVALUE: _id {printf("[reduce 86]");}
 	| LVALUE _leftbracket EXPR _rightbracket {printf("[reduce 96]");}
 	| LVALUE _leftparen EXPR _rightparen {printf("[reduce 88]");}
;


// rule 24 - uc
CONSTANT: _intconstant {printf("[reduce 93]");}
	| _doubleconstant {printf("[reduce 93]");}
	| _stringconstant {printf("[reduce 94]");}
	| _booleanconstant {printf("[reduce 95]");}
	| _null {printf("[reduce 96]");}
;

/* minor rules */
EPSILON: {printf("[reduce 97]");}
;

MORE_VARIABLE: _comma VARIABLE MORE_VARIABLE {printf("[reduce 19]");}
	| EPSILON {printf("[reduce 20]");}
;

%%


void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
}

int main(){
	// initSwitch();
	// initSymbol();
	// initNext();
    
	return(yyparse());
}
