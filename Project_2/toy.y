%{

#include <stdio.h>
void yyerror(char *s);
extern int yylex();
int ACCEPT_FLAG = 0;

%}

// left, right, nonassoc yacc keywords for operator precedence (highest to lowest)
%start START
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
%token _exponent


%%
// Production rules and actions (Print production number when reducing)
/*
'+' = P
'+,' = PC
'<optional>' = O
'*' = M
*/

START:
				PROGRAM {printf("\n[accept]\n"); ACCEPT_FLAG = 1;};

// Production Rule 1
PROGRAM:			DECLP {printf("[reduce 1]");};

DECLP:				DECL DECLP {printf("[reduce 2]");}	// Right recursion
			|	DECL {printf("[reduce 3]");};		// Terminal

// Production Rule 2
DECL:				VARIABLEDECL {printf("[reduce 4]");}
			|	FUNCTIONDECL {printf("[reduce 5]");}
			| 	CLASSDECL {printf("[reduce 6]");}
			| 	INTERFACEDECL {printf("[reduce 7]");};

// Production Rule 3
VARIABLEDECL: 			VARIABLE _semicolon {printf("[reduce 8]");}
			|	   VARIABLE _assignop CONSTANT {printf("[reduce 9]");}
      |    VARIABLE _assignop CONSTANT _semicolon {printf("[reduce 10]");};

// Production Rule 4
VARIABLE:			TYPE _id {printf("[reduce 11]");}
      |       _id _assignop CALL {printf("[reduce 12]");};



// Production Rule 5
TYPE:		_int {printf("[reduce 13]");}
			|	_double {printf("[reduce 14]");}
			|	_boolean {printf("[reduce 15]");}
			|	_string {printf("[reduce 16]");}
			|	TYPE _leftbracket _rightbracket {printf("[reduce 17]");}
			|	_id {printf("[reduce 18]");};

// Production Rule 6
FUNCTIONDECL: 			TYPE _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 19]");}
			|	         _void _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 20]");};

// Production Rule 7
FORMALS: 			VARIABLEPC {printf("[reduce 21]");}
			|	{printf("[reduce 22]");}; 		// Epsilon

VARIABLEPC:
				_comma VARIABLE VARIABLEPC	{printf("[reduce 23]");} // One or more comma seperated
			|	VARIABLE VARIABLEPC {printf("[reduce 24]");}
			|	{printf("[reduce 25]");};		// Terminal
// Production Rule 8
CLASSDECL:
				_class _id CLASSDECLO _leftbrace FIELDM _rightbrace {printf("[reduce 26]");};
CLASSDECLO:
				_extends _id {printf("[reduce 27]");}
			|	_implements IDPC {printf("[reduce 28]");}
			|	_extends _id _implements IDPC {printf("[reduce 29]");}
			|	{printf("[reduce 30]");};		// Epsilon
IDPC:
				_id _comma IDPC {printf("[reduce 31]");} // One or more comma seperated
			|	_id {printf("[reduce 32]");};
FIELDM:
				FIELD FIELDM {printf("[reduce 33]");}
			|	{printf("[reduce 34]");};		// Epsilon

// Production Rule 9
FIELD:
				VARIABLEDECL {printf("[reduce 35]");}
			|	FUNCTIONDECL {printf("[reduce 36]");};

// Production Rule 10
INTERFACEDECL:
				_interface _id _leftbrace PROTOTYPEM _rightbrace {printf("[reduce 37]");};
PROTOTYPEM:
				PROTOTYPE PROTOTYPEM {printf("[reduce 38]");} // Right recursion
			|	{printf("[reduce 39]");};		// Epsilon

// Production Rule 11
PROTOTYPE:
				TYPE _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 40]");}
			|	_void _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 41]");};

// Production Rule 12
STMTBLOCK:
				_leftbrace VARIABLEDECLM STMTM _rightbrace {printf("[reduce 42]");} ;
VARIABLEDECLM:
				VARIABLEDECL VARIABLEDECLM {printf("[reduce 43]");} // Right recursion
			|	{printf("[reduce 44]");};		// Epsilon
STMTM:
				STMT STMTM {printf("[reduce 45]");} // Right recursion
			|	{printf("[reduce 46]");};		// Epsilon

// Production Rule 13
STMT:
				EXPRO _semicolon {printf("[reduce 47]");}
			|	IFSTMT {printf("[reduce 48]");}
			|	WHILESTMT {printf("[reduce 49]");}
			|	FORSTMT {printf("[reduce 50]");}
			|	BREAKSTMT {printf("[reduce 51]");}
			|	RETURNSTMT {printf("[reduce 52]");}
			|	PRINTSTMT {printf("[reduce 53]");}
			|	STMTBLOCK {printf("[reduce 54]");};
EXPRO:
				EXPR {printf("[reduce 55]");}
			|	{printf("[reduce 56]");};		// Epsilon

// Production Rule 14
IFSTMT:
				_if _leftparen EXPR _rightparen STMT ELSESTMTO {printf("[reduce 57]");};
ELSESTMTO:
				_else STMT {printf("[reduce 58]");}
			|	{printf("[reduce 59]");};		// Epsilon

// Production Rule 15
WHILESTMT:
				_while _leftparen EXPR _rightparen STMT {printf("[reduce 60]");};

// Production Rule 16
FORSTMT:
        _for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen _leftbrace STMTM _rightbrace {printf("[reduce 61]");}
      | _for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMT {printf("[reduce 62]");}
      | _for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMTBLOCK {printf("[reduce 63]");};

// Production Rule 17
BREAKSTMT:
				_break _semicolon {printf("[reduce 64]");} ;

// Production Rule 18
RETURNSTMT:
				_return EXPRO _semicolon {printf("[reduce 65]");} ;

// Production Rule 19
PRINTSTMT:
				_println _leftparen EXPRPC _rightparen _semicolon {printf("[reduce 66]");};
EXPRPC:
				EXPR _comma EXPRPC {printf("[reduce 67]");} // One or more comma seperated
			|	EXPR {printf("[reduce 68]");};		// Terminal

// Production Rule 20
EXPR:
				LVALUE _assignop EXPR {printf("[reduce 69]");}
			|	CONSTANT {printf("[reduce 70]");}
			|	LVALUE {printf("[reduce 71]");}
			| _this {printf("[reduce 72]");}
			|	CALL {printf("[reduce 73]");}
			|	_leftparen EXPR _rightparen {printf("[reduce 74]");}
			|	EXPR _plus EXPR {printf("[reduce 75]");}
			|	EXPR _minus EXPR {printf("[reduce 76]");}
			|	EXPR _multiplication EXPR {printf("[reduce 77]");}
			|	EXPR _division EXPR {printf("[reduce 78]");}
			|	EXPR _mod EXPR {printf("[reduce 79]");}
			|	_minus EXPR {printf("[reduce 80]");} // Unary
			|	EXPR _less EXPR	{printf("[reduce 81]");}
			|	EXPR _lessequal EXPR {printf("[reduce 82]");}
			|	EXPR _greater EXPR {printf("[reduce 83]");}
			|	EXPR _greaterequal EXPR {printf("[reduce 84]");}
			|	EXPR _equal EXPR {printf("[reduce 85]");}
			|	EXPR _notequal EXPR {printf("[reduce 86]");}
			|	EXPR _and EXPR {printf("[reduce 87]");}
			|	EXPR _or EXPR {printf("[reduce 88]");}
			|	_not EXPR {printf("[reduce 89]");}
			|	_readln _leftparen _rightparen {printf("[reduce 90]");}
			|	_newarray _leftparen _intconstant _comma TYPE _rightparen {printf("[reduce 91]");};

// Production Rule 21
LVALUE:
				_id {printf("[reduce 92]");}
			|	LVALUE _leftbracket EXPR _rightbracket {printf("[reduce 93]");}
			|	LVALUE _period _id {printf("[reduce 94]");};

// Production Rule 22
CALL:
				_id _leftparen ACTUALS _rightparen {printf("[reduce 95]");}
			|	_id _period _id _leftparen ACTUALS _rightparen {printf("[reduce 96]");};

// Production Rule 23
ACTUALS:
				EXPRPC {printf("[reduce 97]");}
			|	{printf("[reduce 98]");}; // Epsilon

// Production Rule 24
CONSTANT:
				_intconstant {printf("[reduce 99]");}
			|	_doubleconstant {printf("[reduce 100]");}
			|	_stringconstant {printf("[reduce 101]");}
			|	_booleanconstant {printf("[reduce 102]");}
      | _exponent {printf("[reduce 103]");}
			|	_null {printf("[reduce 104]");};

%%

void yyerror(char *s) {
	// fprintf(stderr, "%s\n", s);
	if (ACCEPT_FLAG == 0)
 		printf("\n[reject]\n");
}

int main(){
    yyparse();
    return 0;
}
