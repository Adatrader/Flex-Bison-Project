%{
/* C Headers, Declarations, Vars */
#include <stdio.h>
#include "toy_scanner.h"

%}

/* String (#6) */
string          \“[^\n“”]*\”|\"[^\n"]*\"

/* Identifiers (#2) */
letter          [a-zA-Z]
digit           [0-9]
identifier      {letter}({letter}|"_"|{digit})*

/* Whitespaces (#3)*/
newline         [\n]
whitespace      [ \t]+

/* Integer and Double (#4 & #5), Exponent and Hex*/

hex             0(X|x)[0-9a-fA-F]+
exponent        ((e|E)("-"|"+")?({digit}+))
intconstant     {hex}|{digit}+
doubleconstant  {digit}+"."{digit}+{exponent}?|{digit}+{exponent}

 /* Comments (#9)*/
comment         "//"((.)*)\n
multicomment    "/*"(([^*]|(("*"+)[^*/]))*)("*"+)"/"\n

%%

  /* Keywords (#1)*/

boolean     { printf("%s ", yytext); } /* return (_bool); */
break       { printf("%s ", yytext); } /* return (_break); */
class       { printf("%s ", yytext); } /* return (_class); */
double      { printf("%s ", yytext); } /* return (_double); */
else        { printf("%s ", yytext); } /* return (_else); */
extends     { printf("%s ", yytext); } /* return (_extends); */
false       { printf("%s ", yytext); } /* return (_booleanconstant); */
for         { printf("%s ", yytext); } /* return (_for); */
if          { printf("%s ", yytext); } /* return (_if); */
implements  { printf("%s ", yytext); } /* return (_implements); */
int         { printf("%s ", yytext); } /* return (_int); */
interface   { printf("%s ", yytext); } /* return (_interface); */
new         { printf("%s ", yytext); } /* return (_new); */
newarray    { printf("%s ", yytext); } /* return (_newarray); */
null        { printf("%s ", yytext); } /* return (_null); */
println     { printf("%s ", yytext); } /* return (_println); */
readln      { printf("%s ", yytext); } /* return (_readln); */
return      { printf("%s ", yytext); } /* return (_return); */
string      { printf("%s ", yytext); } /* return (_string); */
this        { printf("%s ", yytext); } /* return (_this); */
true        { printf("%s ", yytext); } /* return (_booleanconstant); */
void        { printf("%s ", yytext); } /* return (_void); */
while       { printf("%s ", yytext); } /* return (_while); */

{intconstant}     { printf("intconstant "); return(_intconstant); }
{doubleconstant}  { printf("doubleconstant "); return(_doubleconstant); }
{string}          { printf("stringconstant "); return(_stringconstant); }
{identifier}      { printf("id "); return(_id); }


  /* Operators */
"+"             { printf("plus "); return(_plus); }
"-"             { printf("minus "); return(_minus); }
"*"             { printf("multiplication "); return(_multiplication); }
"/"             { printf("division "); return(_division); }
"%"             { printf("mod "); return(_mod); }
"<"             { printf("less "); return(_less); }
"<="            { printf("lessequal "); return(_lessequal); }
">"             { printf("greater "); return(_greater); }
">="            { printf("greaterequal "); return(_greaterequal); }
"=="            { printf("equal "); return(_equal); }
"!="            { printf("notequal "); return(_notequal); }
"&&"            { printf("and "); return(_and); }
"||"            { printf("or "); return(_or); }
"!"             { printf("not "); return(_not); }
"="             { printf("assignop "); return(_assignop); }
";"             { printf("semicolon "); return(_semicolon); }
","             { printf("comma "); return(_comma); }
"."             { printf("period "); return(_period); }
"("             { printf("leftparen "); return(_leftparen); }
")"             { printf("rightparen "); return(_rightparen); }
"["             { printf("leftbracket "); return(_leftbracket); }
"]"             { printf("rightbracket "); return(_rightbracket); }
"{"             { printf("leftbrace "); return(_leftbrace); }
"}"             { printf("rightbrace "); return(_rightbrace); }

  /* Comments (#9) */
{whitespace}    {;}
{comment}       {;}
{multicomment}  {;}

  /* Other */
.               {;}

%%

/* C Functions */

int main(void) {
  while(yylex()) {}
  return 0;
}

int yywrap(void) {
    return 1;
}
