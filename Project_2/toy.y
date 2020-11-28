%{
 
#include <stdio.h>
//#include "lex.yy.c"
void yyerror(char *s); 
extern int yylex(); 

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
%token _unaryminus


%%
// Production rules and actions (Print production number when reducing)
/* 
'+' = P 
'+,' = PC 
'<optional>' = O 
'*' = M 
*/

// Production Rule 1
PROGRAM:		DECLP {printf("[reduce 1]\n[accept]");};

DECLP:			DECL DECLP {printf("[reduce 2]");}		// Right recursion
			|	DECL {printf("[reduce 3]");};		// Terminal

// Production Rule 2
DECL:			VARIABLEDECL {printf("[reduce 4]");}
			|	FUNCTIONDECL {printf("[reduce 5]");}
			| 	CLASSDECL {printf("[reduce 6]");}
			| 	INTERFACEDECL {printf("[reduce 7]");};

// Production Rule 3
VARIABLEDECL: 		VARIABLE _semicolon {printf("[reduce 8]");};

// Production Rule 4
VARIABLE:		TYPE _id {printf("[reduce 9]");}
			| TYPE _id _assignop CONSTANT;

// Production Rule 5
TYPE:			_int {printf("[reduce 10]");}
			|	_double {printf("[reduce 11]");}
			|	_boolean {printf("[reduce 12]");}
			|	_string {printf("[reduce 13]");}
			|	TYPE _leftbracket _rightbracket {printf("[reduce 14]");}
			|	_id {printf("[reduce 15]");};

// Production Rule 6
FUNCTIONDECL: 	TYPE _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 16]");}
			|	_void _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 17]");};

// Production Rule 7
FORMALS: 		VARIABLEPC {printf("[reduce 18]");}
			|	{printf("[reduce 19]");}; 			// Epsilon
			
VARIABLEPC: 	
				_comma VARIABLE VARIABLEPC	{printf("[reduce 20]");}// One or more comma seperated
			|	VARIABLE VARIABLEPC 
			|	{printf("[reduce 21]");};		// Terminal
// Production Rule 8
CLASSDECL: 		
				_class _id CLASSDECLO _leftbrace FIELDM _rightbrace {printf("[reduce 22]");};
CLASSDECLO:
				_extends _id {printf("[reduce 23]");}
			|	_implements IDPC {printf("[reduce 24]");}
			|	_extends _id _implements IDPC {printf("[reduce 25]");}
			|	{printf("[reduce 26]");};			// Epsilon
IDPC:
				_id _comma IDPC {printf("[reduce 27]");} // One or more comma seperated
			|	_id {printf("[reduce 28]");};
FIELDM:
				FIELD FIELDM {printf("[reduce 29]");}
			|	{printf("[reduce 30]");};			// Epsilon

// Production Rule 9
FIELD:
				VARIABLEDECL {printf("[reduce 31]");}
			|	FUNCTIONDECL {printf("[reduce 32]");};

// Production Rule 10
INTERFACEDECL:
				_interface _id _leftbrace PROTOTYPEM _rightbrace {printf("[reduce 33]");};
PROTOTYPEM:
				PROTOTYPE PROTOTYPEM {printf("[reduce 34]");}// Right recursion
			|	{printf("[reduce 35]");};			// Epsilon

// Production Rule 11 
PROTOTYPE:
				TYPE _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 36]");}
			|	_void _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 37]");};

// Production Rule 12
STMTBLOCK:
				_leftbrace VARIABLEDECLM STMTM _rightbrace {printf("[reduce 38]");} ;
VARIABLEDECLM:
				VARIABLEDECL VARIABLEDECLM {printf("[reduce 39]");}// Right recursion
			|	{printf("[reduce 40]");};			// Epsilon
STMTM:
				STMT STMTM {printf("[reduce 41]");} // Right recursion
			|	{printf("[reduce 42]");};			// Epsilon

// Production Rule 13
STMT:
				EXPRO _semicolon {printf("[reduce 43]");}
			|	IFSTMT {printf("[reduce 44]");}
			|	WHILESTMT {printf("[reduce 45]");}
			|	FORSTMT {printf("[reduce 46]");}
			|	BREAKSTMT {printf("[reduce 47]");}
			|	RETURNSTMT {printf("[reduce 48]");}
			|	PRINTSTMT {printf("[reduce 49]");}
			|	STMTBLOCK {printf("[reduce 50]");};
EXPRO:
				EXPR {printf("[reduce 51]");}
			|	{printf("[reduce 52]");};			// Epsilon

// Production Rule 14
IFSTMT:
				_if _leftparen EXPR _rightparen STMT ELSESTMTO {printf("[reduce 53]");};
ELSESTMTO:
				_else STMT {printf("[reduce 54]");}
			|	{printf("[reduce 55]");};			// Epsilon

// Production Rule 15
WHILESTMT:
				_while _leftparen EXPR _rightparen STMT {printf("[reduce 56]");};

// Production Rule 16
FORSTMT:
				_for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMT {printf("[reduce 57]");};

// Production Rule 17
BREAKSTMT:
				_break _semicolon {printf("[reduce 58]");} ;

// Production Rule 18
RETURNSTMT:
				_return EXPRO _semicolon {printf("[reduce 59]");} ;

// Production Rule 19
PRINTSTMT:
				_println _leftparen EXPRPC _rightparen _semicolon {printf("[reduce 60]");};
EXPRPC:
				EXPR _comma EXPRPC {printf("[reduce 61]");}// One or more comma seperated
			|	EXPR {printf("[reduce 62]");};			// Terminal

// Production Rule 20
EXPR:
				LVALUE _assignop EXPR {printf("[reduce 63]");}
			|	CONSTANT {printf("[reduce 64]");}
			|	LVALUE {printf("[reduce 65]");}
			| 	_this {printf("[reduce 66]");}
			|	CALL {printf("[reduce 67]");}
			|	_leftparen EXPR _rightparen {printf("[reduce 68]");}
			|	EXPR _plus EXPR {printf("[reduce 69]");}
			|	EXPR _minus EXPR {printf("[reduce 70]");}
			|	EXPR _multiplication EXPR {printf("[reduce 71]");}
			|	EXPR _division EXPR {printf("[reduce 72]");}
			|	EXPR _mod EXPR {printf("[reduce 73]");}
			|	_minus EXPR {printf("[reduce 74]");} // Unary
			|	EXPR _less EXPR	{printf("[reduce 75]");}	
			|	EXPR _lessequal EXPR {printf("[reduce 76]");}
			|	EXPR _greater EXPR {printf("[reduce 77]");}
			|	EXPR _greaterequal EXPR {printf("[reduce 78]");}	
			|	EXPR _equal EXPR {printf("[reduce 79]");}
			|	EXPR _notequal EXPR {printf("[reduce 80]");}
			|	EXPR _and EXPR {printf("[reduce 81]");}
			|	EXPR _or EXPR {printf("[reduce 82]");}
			|	_not EXPR {printf("[reduce 83]");}
			|	_readln _leftparen _rightparen {printf("[reduce 84]");}
			|	_newarray _leftparen _intconstant _comma TYPE _rightparen {printf("[reduce 85]");};

// Production Rule 21
LVALUE:
				_id {printf("[reduce 86]");}
			|	LVALUE _leftbracket EXPR _rightbracket {printf("[reduce 87]");}
			|	LVALUE _period _id {printf("[reduce 88]");};

// Production Rule 22
CALL:
				_id _leftparen ACTUALS _rightparen {printf("[reduce 89]");}
			|	_id _period _id _leftparen ACTUALS _rightparen {printf("[reduce 90]");};

// Production Rule 23
ACTUALS: 
				EXPRPC {printf("[reduce 91]");}
			|	{printf("[reduce 92]");}; // Epsilon

// Production Rule 24
CONSTANT:
				_intconstant {printf("[reduce 93]");}
			|	_doubleconstant {printf("[reduce 94]");}
			|	_stringconstant {printf("[reduce 95]");}
			|	_booleanconstant {printf("[reduce 96]");}
			|	_null {printf("[reduce 97]");};

%%

void yyerror(char *s) {
 fprintf(stderr, "%s\n", s);
}

int main(){

    yyparse();
    return 0;
}
