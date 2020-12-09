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

// Production Set 1
PROGRAM:		DECLP {printf("[reduce 1]");};

DECLP:			DECL DECLP {printf("[reduce 2]");}	// Right recursion
			|	DECL {printf("[reduce 3]");};		// Terminal

// Production Set 2
DECL:			VARIABLEDECL {printf("[reduce 4]");}
			|	FUNCTIONDECL {printf("[reduce 5]");}
			| 	CLASSDECL {printf("[reduce 6]");}
			| 	INTERFACEDECL {printf("[reduce 7]");};

// Production Set 3
VARIABLEDECL: 	VARIABLE _semicolon {printf("[reduce 8]");}
			|	VARIABLE _assignop CONSTANT {printf("[reduce 9]");}
      		|    VARIABLE _assignop CONSTANT _semicolon {printf("[reduce 10]");};

// Production Set 4
VARIABLE:			TYPE _id {printf("[reduce 11]");}
      			|       _id _assignop EXPR {printf("[reduce 12]");};



// Production Set 5
TYPE:			_int {printf("[reduce 13]");}
			|	_double {printf("[reduce 14]");}
			|	_boolean {printf("[reduce 15]");}
			|	_string {printf("[reduce 16]");}
			|	TYPE _leftbracket _rightbracket {printf("[reduce 17]");}
			|	_id {printf("[reduce 18]");}
			| 	_this _period {printf("[reduce 19]");};

// Production Set 6
FUNCTIONDECL: 	TYPE _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 20]");}
			|	_void _id _leftparen FORMALS _rightparen STMTBLOCK {printf("[reduce 21]");};

// Production Set 7
FORMALS: 		VARIABLEPC {printf("[reduce 22]");}
			|	{printf("[reduce 23]");}; 		// Epsilon

VARIABLEPC:
				_comma VARIABLE VARIABLEPC	{printf("[reduce 24]");} // One or more comma seperated
			|	VARIABLE VARIABLEPC {printf("[reduce 25]");}
			|	{printf("[reduce 26]");};		// Terminal
// Production Set 8
CLASSDECL:
				_class _id CLASSDECLO _leftbrace FIELDM _rightbrace {printf("[reduce 27]");};
CLASSDECLO:
				_extends _id {printf("[reduce 28]");}
			|	_implements IDPC {printf("[reduce 29]");}
			|	_extends _id _implements IDPC {printf("[reduce 30]");}
			|	{printf("[reduce 31]");};		// Epsilon
IDPC:
				_id _comma IDPC {printf("[reduce 32]");} // One or more comma seperated
			|	_id {printf("[reduce 33]");};
FIELDM:
				FIELD FIELDM {printf("[reduce 34]");}
			|	{printf("[reduce 35]");};		// Epsilon

// Production Set 9
FIELD:
				VARIABLEDECL {printf("[reduce 36]");}
			|	FUNCTIONDECL {printf("[reduce 37]");}
			| 	STMTM {printf("[reduce 38]");};

// Production Set 10
INTERFACEDECL:
				_interface _id _leftbrace PROTOTYPEM _rightbrace {printf("[reduce 39]");};
PROTOTYPEM:
				PROTOTYPE PROTOTYPEM {printf("[reduce 40]");} // Right recursion
			|	{printf("[reduce 41]");};		// Epsilon

// Production Set 11
PROTOTYPE:
				TYPE _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 42]");}
			|	_void _id _leftparen FORMALS _rightparen _semicolon {printf("[reduce 43]");};

// Production Set 12
STMTBLOCK:
				_leftbrace VARIABLEDECLM STMTM VARIABLEDECLM _rightbrace {printf("[reduce 44]");}
			| 	_leftbrace CLASSDECL _rightbrace {printf("[reduce 45]");};
VARIABLEDECLM:
				VARIABLEDECL VARIABLEDECLM {printf("[reduce 46]");} // Right recursion
			|	{printf("[reduce 47]");};		// Epsilon
STMTM:
				STMT STMTM {printf("[reduce 48]");} // Right recursion
			|	{printf("[reduce 49]");};		// Epsilon

// Production Set 13
STMT:
				EXPRO _semicolon {printf("[reduce 50]");}
			|	IFSTMT {printf("[reduce 51]");}
			|	WHILESTMT {printf("[reduce 52]");}
			|	FORSTMT {printf("[reduce 53]");}
			|	BREAKSTMT {printf("[reduce 54]");}
			|	RETURNSTMT {printf("[reduce 55]");}
			|	PRINTSTMT {printf("[reduce 56]");}
			|	STMTBLOCK {printf("[reduce 57]");};
EXPRO:
				EXPR {printf("[reduce 58]");}
			|	{printf("[reduce 59]");};		// Epsilon

// Production Set 14
IFSTMT:
				_if _leftparen EXPR _rightparen STMT {printf("[reduce 60]");}
			| 	_if _leftparen EXPR _rightparen STMT ELSESTMTO {printf("[reduce 61]");};
ELSESTMTO:
				_else STMT {printf("[reduce 62]");}
			|	{printf("[reduce 63]");};		// Epsilon

// Production Set 15
WHILESTMT:
				_while _leftparen EXPR _rightparen STMT {printf("[reduce 64]");};

// Production Set 16
FORSTMT:
        		_for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen _leftbrace STMTM _rightbrace {printf("[reduce 65]");}
      		|	_for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMT {printf("[reduce 66]");}
      		| 	_for _leftparen EXPRO _semicolon EXPR _semicolon EXPRO _rightparen STMTBLOCK {printf("[reduce 67]");};

// Production Set 17
BREAKSTMT:
				_break _semicolon {printf("[reduce 68]");} ;

// Production Set 18
RETURNSTMT:
				_return EXPRO _semicolon {printf("[reduce 69]");} ;

// Production Set 19
PRINTSTMT:
				_println _leftparen EXPRPC _rightparen _semicolon {printf("[reduce 70]");};
EXPRPC:
				EXPR _comma EXPRPC {printf("[reduce 71]");} // One or more comma seperated
			|	EXPR {printf("[reduce 72]");};		// Terminal

// Production Set 20
EXPR:
				LVALUE _assignop EXPR {printf("[reduce 73]");}
			|	CONSTANT {printf("[reduce 74]");}
			|	LVALUE {printf("[reduce 75]");}
			| 	_this {printf("[reduce 76]");}
			|	CALL {printf("[reduce 77]");}
			|	_leftparen EXPR _rightparen {printf("[reduce 78]");}
			|	EXPR _plus EXPR {printf("[reduce 79]");}
			|	EXPR _minus EXPR {printf("[reduce 80]");}
			|	EXPR _multiplication EXPR {printf("[reduce 81]");}
			|	EXPR _division EXPR {printf("[reduce 82]");}
			|	EXPR _mod EXPR {printf("[reduce 83]");}
			|	_minus EXPR {printf("[reduce 84]");} // Unary
			|	EXPR _less EXPR	{printf("[reduce 85]");}
			|	EXPR _lessequal EXPR {printf("[reduce 86]");}
			|	EXPR _greater EXPR {printf("[reduce 87]");}
			|	EXPR _greaterequal EXPR {printf("[reduce 88]");}
			|	EXPR _equal EXPR {printf("[reduce 89]");}
			|	EXPR _notequal EXPR {printf("[reduce 90]");}
			|	EXPR _and EXPR {printf("[reduce 91]");}
			|	EXPR _or EXPR {printf("[reduce 92]");}
			|	_not EXPR {printf("[reduce 93]");}
			|	_readln _leftparen _rightparen {printf("[reduce 94]");}
			|	_newarray _leftparen _intconstant _comma TYPE _rightparen {printf("[reduce 95]");};

// Production Set 21
LVALUE:
				_id {printf("[reduce 96]");}
			|	LVALUE _leftbracket EXPR _rightbracket {printf("[reduce 97]");}
			|	LVALUE _period _id {printf("[reduce 98]");};

// Production Set 22
CALL:
				_id _leftparen ACTUALS _rightparen {printf("[reduce 99]");}
			|	_id _period _id _leftparen ACTUALS _rightparen {printf("[reduce 100]");};

// Production Set 23
ACTUALS:
				EXPRPC {printf("[reduce 101]");}
			|	{printf("[reduce 102]");}; // Epsilon

// Production Set 24
CONSTANT:
				_intconstant {printf("[reduce 103]");}
			|	_doubleconstant {printf("[reduce 104]");}
			|	_stringconstant {printf("[reduce 105]");}
			|	_booleanconstant {printf("[reduce 106]");}
      			| 	_exponent {printf("[reduce 107]");}
			|	_null {printf("[reduce 108]");};

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
