%{
/* C Headers, Declarations, Vars */
#include <stdio.h>
#include <stdbool.h>
#include "toy.tab.h"

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
comment         \/\/.*\n
multicomment    \/\*[^*]*\*\/\n

%%

  /* Keywords (#1)*/

boolean     { printf("\n%s [shift]", yytext); return(_boolean); }
break       { printf("\n%s [shift]", yytext); return(_break); }
class       { printf("\n%s [shift]", yytext); return (_class); }
double      { printf("\n%s [shift]", yytext); return (_double); }
else        { printf("\n%s [shift]", yytext); return (_else); }
extends     { printf("\n%s [shift]", yytext); return (_extends); }
false       { printf("\n%s [shift]", yytext); return (_booleanconstant); }
for         { printf("\n%s [shift]", yytext); return (_for); }
if          { printf("\n%s [shift]", yytext); return (_if); }
implements  { printf("\n%s [shift]", yytext); return (_implements); }
int         { printf("\n%s [shift]", yytext); return (_int); }
interface   { printf("\n%s [shift]", yytext); return (_interface); }
new         { printf("\n%s [shift]", yytext); return (_new); }
newarray    { printf("\n%s [shift]", yytext); return (_newarray); }
null        { printf("\n%s [shift]", yytext); return (_null); }
println     { printf("\n%s [shift]", yytext); return (_println); }
readln      { printf("\n%s [shift]", yytext); return (_readln); }
return      { printf("\n%s [shift]", yytext); return (_return); }
string      { printf("\n%s [shift]", yytext); return (_string); }
this        { printf("\n%s [shift]", yytext); return (_this); }
true        { printf("\n%s [shift]", yytext); return (_booleanconstant); }
void        { printf("\n%s [shift]", yytext); return (_void); }
while       { printf("\n%s [shift]", yytext); return (_while); }

{intconstant}     { printf("\nintconstant [shift]"); return(_intconstant); }
{doubleconstant}  { printf("\ndoubleconstant [shift]"); return(_doubleconstant); }
{string}          { printf("\nstringconstant [shift]"); return(_stringconstant); }
{identifier}      { printf("\nid [shift]"); return(_id); }


  /* Operators */
"+"             { printf("\nplus [shift]"); return(_plus); }
"-"             { printf("\nminus [shift]"); return(_minus); }
"*"             { printf("\nmultiplication [shift]"); return(_multiplication); }
"/"             { printf("\ndivision [shift]"); return(_division); }
"%"             { printf("\nmod [shift]"); return(_mod); }
"<"             { printf("\nless [shift]"); return(_less); }
"<="            { printf("\nlessequal [shift]"); return(_lessequal); }
">"             { printf("\ngreater [shift]"); return(_greater); }
">="            { printf("\ngreaterequal [shift]"); return(_greaterequal); }
"=="            { printf("\nequal [shift]"); return(_equal); }
"!="            { printf("\nnotequal [shift]"); return(_notequal); }
"&&"            { printf("\nand [shift]"); return(_and); }
"||"            { printf("\nor [shift]"); return(_or); }
"!"             { printf("\nnot [shift]"); return(_not); }
"="             { printf("\nassignop [shift]"); return(_assignop); }
";"             { printf("\nsemicolon [shift]"); return(_semicolon); }
","             { printf("\ncomma [shift]"); return(_comma); }
"."             { printf("\nperiod [shift]"); return(_period); }
"("             { printf("\nleftparen [shift]"); return(_leftparen); }
")"             { printf("\nrightparen [shift]"); return(_rightparen); }
"["             { printf("\nleftbracket [shift]"); return(_leftbracket); }
"]"             { printf("\nrightbracket [shift]"); return(_rightbracket); }
"{"             { printf("\nleftbrace [shift]"); return(_leftbrace); }
"}"             { printf("\nrightbrace [shift]"); return(_rightbrace); }

  /* Comments (#9) */
{whitespace}    {;}
{comment}       {;}
{multicomment}  {;}

  /* Other */
.               {;}

%%

/* C Functions */

// //yywrap wraps the rules defined
// int yywrap(void) {
//     printf("!!!! \n");
//     return 1;
// }


