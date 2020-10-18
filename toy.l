%{
/* C Headers, Declarations, Vars */
void testMethod();
%}

/* Letters, Digits, Hex, Exponent */
letter      [a-zA-Z]
digit       [0-9]
hex         (0x|0X)[0-9a-fA-F]+
exponent    ((E|e)("+"|"-")?({digit}+))

/* Identifiers */
identifier  {letter}({letter}|{digit}|"_")+

/* Whitespaces */
whitespace  [ \t\n]+

/* Integer and Double */
intconstant {hex}|{digit}+
dubconstant {digit}+"."{digit}+{exponent}?|{digit}+{exponent}

/* String and Boolean */
string      \"[^"\n]*\"
boolean     true|false

%%

  /* Keywords */

"boolean"     { return BOOL; }
"break"       { return BREAK; }
"class"       { return CLASS; }
"double"      { return DOUBLE; }
"else"        { return ELSE; }
"extends"     { return EXTENDS; }
"false"       { return FALSE; }
"for"         { return CLASS; }
"if"          { return IF; }
"implements"  { return IMPLEMENTS; }
"int"         { return INT; }
"interface"   { return INTERFACE; }
"new"         { return NEW; }
"newarray"    { return NEWARRAY; }
"null"        { return NULL; }
"println"     { return PRINTLN; }
"readln"      { return READLN; }
"return"      { return RETURN; }
"string"      { return STRING; }
"this"        { return THIS; }
"true"        { return TRUE; }
"void"        { return VOID; }
"while"       { return WHILE; }


  /* Operators */
"+"           { return PLUS; }
"-"           { return MINUS; }
"*"           { return MULTIPLICATION; }
"/"           { return DIVISION; }
"%"           { return MODULUS; }
"<"           { return LESSTHAN; }
"<="          { return LESSEQUAL; }
">"           { return GREATERTHAN; }
">="          { return GREATEREQUAL; }
"=="          { return EQUIVALENT; }
"!="          { return NOTEQUAL; }
"&&"          { return AND; }
"||"          { return OR; }
"!"           { return NOT; }
"="           { return EQUAL; }
";"           { return SEMICOLON; }
","           { return COMMA; }
"."           { return PERIOD; }
"("           { return LEFTPARAN; }
")"           { return RIGHTPARAN; }
"["           { return LEFTBRACKET; }
"]"           { return RIGHTBRACKET; }
"{"           { return LEFTBRACE; }
"}"           { return RIGHTBRACE; }

  /* Comments (#8 in project) */

  /* Tokens (list)*/


%%

/* C Functions */

int main(int argc, char *argv[]) {
  yylex()
}

void testMethod(){
  printf("string");
}
