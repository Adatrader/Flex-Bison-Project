%{
 
#include <stdio.h>
//#include "lex.yy.c"
//void yyerror(char *s)  

%}

// left, right, nonassoc yacc keywords for operator precedence (highest to lowest) 
%start PROGRAM
%right _leftbracket _period
%right _not _unaryminus // Test if unary minus should be seperate token
%left _plus _minus
%left _multiplication _division _mod
%nonassoc _less _lessequal _greater _greaterequal
%nonassoc _equal _notequal
%left _and
%left _or
%nonassoc _assignop

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


%%
// Production rules and actions (Print production number when reducing)
/* 
'+' = P 
'+,' = PC 
'<optional>' = O 
'*' = M 
*/

// Production Rule 1
PROGRAM:		DECLP {printf("[reduce 1] \n");};

DECLP:			DECL DECLP {printf("[reduce 2] \n");}		// Right recursion
			|	DECL {printf("[reduce 3] \n");};		// Terminal

// Production Rule 2
DECL:			VARIABLEDECL {printf("[reduce 4] \n");}
			|	FUNCTIONDECL {printf("[reduce 5] \n");}
			| 	CLASSDECL {printf("[reduce 6] \n");}
			| 	INTERFACEDECL {printf("[reduce 7] \n");};

// Production Rule 3
VARIABLEDECL: 	VARIABLE _semicolon {printf("[reduce 8] \n");};

// Production Rule 4
VARIABLE:		TYPE _id {printf("[reduce 9] \n");};

// Production Rule 5
TYPE:			_int {printf("[reduce 10] \n");}
			|	_double {printf("[reduce 11] \n");}
			|	_boolean {printf("[reduce 12] \n");}
			|	_string {printf("[reduce 13] \n");}
			|	TYPE _leftbracket _rightbracket {printf("[reduce 14] \n");}
			|	_id {printf("[reduce 15] \n");};

// Production Rule 6
FUNCTIONDECL: 	TYPE _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 16] \n");}
			|	_void _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 17] \n");};

// Production Rule 7
FORMALS: 		VARIABLEPC {printf("[reduce 18] \n");}
			|	{printf("[reduce 19] \n");}; 			// Epsilon
			
VARIABLEPC: 	
				VARIABLE VARIABLEPC	{printf("[reduce 20] \n");}// One or more comma seperated
			|	VARIABLE {printf("[reduce 21] \n");};		// Terminal
// Production Rule 8
CLASSDECL: 		
				_class _id CLASSDECLO _leftbrace FIELDM _rightbrace {printf("[reduce 22] \n");};
CLASSDECLO:
				_extends _id {printf("[reduce 23] \n");}
			|	_implements IDPC {printf("[reduce 24] \n");}
			|	_extends _id _implements IDPC {printf("[reduce 25] \n");}
			|	{printf("[reduce 26] \n");};			// Epsilon
IDPC:
				_id _comma IDPC {printf("[reduce 27] \n");} // One or more comma seperated
			|	_id {printf("[reduce 28] \n");};
FIELDM:
				FIELD FIELDM {printf("[reduce 29] \n");}
			|	{printf("[reduce 30] \n");};			// Epsilon

// Production Rule 9
FIELD:
				VARIABLEDECL {printf("[reduce 31] \n");}
			|	FUNCTIONDECL {printf("[reduce 32] \n");};

// Production Rule 10
INTERFACEDECL:
				_interface _id _leftbrace PROTOTYPEM _rightbrace {printf("[reduce 33] \n");};
PROTOTYPEM:
				PROTOTYPE PROTOTYPEM {printf("[reduce 34] \n");}// Right recursion
			|	{printf("[reduce 35] \n");};			// Epsilon

// Production Rule 11 
PROTOTYPE:
				TYPE _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 36] \n");}
			|	_void _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 37] \n");};

// Production Rule 12
STMTBLOCK:
				_leftbrace VARIABLEDECLM STMTM _rightbrace {printf("[reduce 38] \n");} ;
VARIABLEDECLM:
				VARIABLEDECL VARIABLEDECLM {printf("[reduce 39] \n");}// Right recursion
			|	{printf("[reduce 40] \n");};			// Epsilon
STMTM:
				STMT STMTM {printf("[reduce 41] \n");} // Right recursion
			|	{printf("[reduce 42] \n");};			// Epsilon

// Production Rule 13
STMT:
				EXPRO _semicolon {printf("[reduce 43] \n");}
			|	IFSTMT {printf("[reduce 44] \n");}
			|	WHILESTMT {printf("[reduce 45] \n");}
			|	FORSTMT {printf("[reduce 46] \n");}
			|	BREAKSTMT {printf("[reduce 47] \n");}
			|	RETURNSTMT {printf("[reduce 48] \n");}
			|	PRINTSTMT {printf("[reduce 49] \n");}
			|	STMTBLOCK {printf("[reduce 50] \n");};
EXPRO:
				EXPR {printf("[reduce 51] \n");}
			|	{printf("[reduce 52] \n");};			// Epsilon

// Production Rule 14
IFSTMT:
				_if _leftparen EXPR _rightparen STMT ELSESTMTO {printf("[reduce 53] \n");};
ELSESTMTO:
				_else STMT {printf("[reduce 54] \n");}
			|	{printf("[reduce 55] \n");};			// Epsilon

// Production Rule 15
WHILESTMT:
				_while _leftparen EXPR _rightparen STMT {printf("[reduce 56] \n");};

// Production Rule 16
FORSTMT:
				_for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMT {printf("[reduce 57] \n");};

// Production Rule 17
BREAKSTMT:
				_break _semicolon {printf("[reduce 58] \n");} ;

// Production Rule 18
RETURNSTMT:
				_return EXPRO _semicolon {printf("[reduce 59] \n");} ;

// Production Rule 19
PRINTSTMT:
				_println _leftparen EXPRPC _rightparen _semicolon {printf("[reduce 60] \n");};
EXPRPC:
				EXPR _comma EXPRPC {printf("[reduce 61] \n");}// One or more comma seperated
			|	EXPR {printf("[reduce 62] \n");};			// Terminal

// Production Rule 20
EXPR:
				LVALUE _assignop EXPR {printf("[reduce 63] \n");}
			|	CONSTANT {printf("[reduce 64] \n");}
			|	LVALUE {printf("[reduce 65] \n");}
			| 	_this {printf("[reduce 66] \n");}
			|	CALL {printf("[reduce 67] \n");}
			|	_leftparen EXPR _rightparen {printf("[reduce 68] \n");}
			|	EXPR _plus EXPR {printf("[reduce 69] \n");}
			|	EXPR _minus EXPR {printf("[reduce 70] \n");}
			|	EXPR _multiplication EXPR {printf("[reduce 71] \n");}
			|	EXPR _division EXPR {printf("[reduce 72] \n");}
			|	EXPR _mod EXPR {printf("[reduce 73] \n");}
			|	_minus EXPR {printf("[reduce 74] \n");} // Unary
			|	EXPR _less EXPR	{printf("[reduce 75] \n");}	
			|	EXPR _lessequal EXPR {printf("[reduce 76] \n");}
			|	EXPR _greater EXPR {printf("[reduce 77] \n");}
			|	EXPR _greaterequal EXPR {printf("[reduce 78] \n");}	
			|	EXPR _equal EXPR {printf("[reduce 79] \n");}
			|	EXPR _notequal EXPR {printf("[reduce 80] \n");}
			|	EXPR _and EXPR {printf("[reduce 81] \n");}
			|	EXPR _or EXPR {printf("[reduce 82] \n");}
			|	_not EXPR {printf("[reduce 83] \n");}
			|	_readln _leftparen _rightparen {printf("[reduce 84] \n");}
			|	_newarray _leftparen _intconstant _comma TYPE _rightparen {printf("[reduce 85] \n");};

// Production Rule 21
LVALUE:
				_id {printf("[reduce 86] \n");}
			|	LVALUE _leftbracket EXPR _rightbracket {printf("[reduce 87] \n");}
			|	LVALUE _period _id {printf("[reduce 88] \n");};

// Production Rule 22
CALL:
				_id _leftparen ACTUALS _rightparen {printf("[reduce 89] \n");}
			|	_id _period _id _leftparen ACTUALS _rightparen {printf("[reduce 90] \n");};

// Production Rule 23
ACTUALS: 
				EXPRPC {printf("[reduce 91] \n");}
			|	{printf("[reduce 92] \n");}; // Epsilon

// Production Rule 24
CONSTANT:
				_intconstant {printf("[reduce 93] \n");}
			|	_doubleconstant {printf("[reduce 94] \n");}
			|	_stringconstant {printf("[reduce 95] \n");}
			|	_booleanconstant {printf("[reduce 96] \n");}
			|	_null {printf("[reduce 97] \n");};

%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
}

int main(){

    yyparse();
    return 0;
}
