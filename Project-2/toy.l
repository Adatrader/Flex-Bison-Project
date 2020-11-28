%{
/* C Headers, Declarations, Vars */
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// #include "toy_scanner.h"
#include "toy.tab.h"


char alphabet[52] = {
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};

//Trie data structure
int switchArr[52];
char symbol[4096];
int next[4096];

void initSwitch();
void initSymbol();
void initNext();
int getNextSymbol(char*, int);
int findFirstEmpty(char*);
int createOrSearch(char*, int*, char*, int*);
int printSwitch(int*, char*);
int printSNTable(char*, int*);
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

boolean         {printf("\nboolean [shift]", yytext); return (_boolean);}
break           {printf("\nbreak [shift]", yytext); return (_break);}
class           {printf("\nclass [shift]", yytext); return (_class);}
double          {printf("\ndouble [shift]", yytext); return (_double);}
else            {printf("\nelse [shift]", yytext); return (_else);}
extends         {printf("\nextends [shift]", yytext); return (_extends);}
false           {printf("\nboolconstant [shift]", yytext); return (_booleanconstant);}
for             {printf("\nfor [shift]", yytext); return (_for);}
if              {printf("\nif [shift]", yytext); return (_if);}
implements      {printf("\nimplements [shift]", yytext); return (_implements);}
int             {printf("\nint [shift]", yytext); return (_int);}
interface       {printf("\ninterface [shift]", yytext); return (_interface);}
new             {printf("\nnew [shift]", yytext); return (_new);}
newarray        {printf("\nnewarray [shift]", yytext); return (_newarray);}
null            {printf("\nnull [shift]", yytext); return (_null);}
println         {printf("\nprintln [shift]", yytext); return (_println);}
readln          {printf("\nreadln [shift]", yytext); return (_readln);}
return          {printf("\nreturn [shift]", yytext); return (_return);}
string          {printf("\nstring [shift]", yytext); return (_string);}
this            {printf("\nthis [shift]", yytext); return (_this); }
true            {printf("\nboolconstant [shift]", yytext); return (_booleanconstant);}
void            {printf("\nvoid [shift]", yytext); return (_void);}
while           {printf("\nwhile [shift]", yytext); return (_while);}

{intconstant}       {printf("\nintconstant [shift]", yytext); return (_intconstant);}
{doubleconstant}    {printf("\ndoubleconstant [shift]", yytext); return (_doubleconstant);}
{string}            {printf("\nstringconstant [shift]", yytext); return (_stringconstant);}
{identifier}        {printf("\nid [shift]", yytext); return(_id);}


  /* Operators */
"+"             {printf("\nplus [shift]", yytext); return (_plus);}
"-"             {printf("\nminus [shift]", yytext); return (_minus);}
"*"             {printf("\nmultiplication [shift]", yytext); return (_multiplication);}
"/"             {printf("\ndivision [shift]", yytext); return (_division);}
"%"             {printf("\nmod [shift]", yytext); return (_mod);}
"<"             {printf("\nless [shift]", yytext); return (_less);}
"<="            {printf("\nlessequal [shift]", yytext); return (_lessequal);}
">"             {printf("\ngreater [shift]", yytext); return (_greater);}
">="            {printf("\ngreaterequal [shift]", yytext); return (_greaterequal);}
"=="            {printf("\nequal [shift]", yytext); return (_equal);}
"!="            {printf("\nnotequal [shift]", yytext); return (_notequal);}
"&&"            {printf("\nand [shift]", yytext); return (_and);}
"||"            {printf("\nor [shift]", yytext); return (_or);}
"!"             {printf("\nnot [shift]", yytext); return (_not);}
"="             {printf("\nassignop [shift]", yytext); return (_assignop);}
";"             {printf("\nsemicolon [shift]", yytext); return (_semicolon);}
","             {printf("\ncomma [shift]", yytext); return (_comma);}
"."             {printf("\nperiod [shift]", yytext); return (_period);}
"("             {printf("\nleftparen [shift]", yytext); return (_leftparen);}
")"             {printf("\nrightparen [shift]", yytext); return (_rightparen);}
"["             {printf("\nleftbracket [shift]", yytext); return (_leftbracket);}
"]"             {printf("\nrightbracket [shift]", yytext); return (_rightbracket);}
"{"             {printf("\nleftbrace [shift]", yytext); return (_leftbrace);}
"}"             {printf("\nrightbrace [shift]", yytext); return (_rightbrace);}

  /* Comments (#9) */
{whitespace}    {;}
{comment}       {;}
{multicomment}  {;}

  /* Other */
.                   {printf("\nerror!\n"); return yytext[0];}

%%

/* C Functions */


/* Helper Methods */
void initSwitch() {
  for (int x = 0; x < 52; x++) {
    switchArr[x] = -1;
  }
}

void initSymbol() {
  for (int x = 0; x < 4096; x++) {
    symbol[x] = '*';
  }
}

void initNext() {
  for (int x = 0; x < 4096; x++) {
    next[x] = -1;
  }
}


int getNextSymbol(char* string, int pos){
  int char_val = string[pos];
  if (char_val >= 97){
    return char_val - 97 + 26;
  }else{
    return char_val - 65;
  }
}

int findFirstEmpty(char* arr){
  for(int i = 0; i < 4096; i++){
    if (arr[i] == '*'){
      return i;
      break;
    }
  }
}

//createOrSearch returns 1 if input string is accepted by the search,
//returns 0 if rejected, but then creates an entry in the trie structure

int createOrSearch(char *s, int* switchArr, char* symbol, int* next){
  int valueOfSymbol = getNextSymbol(s, 0);
  int pointer = switchArr[valueOfSymbol];

  //if pointer is undefined then Create()
  //pointer is undefined if the switchArr is -1 (because of how its initialized)

  if(pointer == -1){
    //defines the current location in the array to go to by finding the first empty place
    int positionOfArray = findFirstEmpty(symbol);
    //printf("\npositionOfArray at %c: %d\n", s[0], findFirstEmpty(symbol));
    switchArr[valueOfSymbol] = positionOfArray;
    for(int i = 1; i < strlen(s); i++){
      symbol[positionOfArray] = s[i];
      positionOfArray++;
    }
    symbol[positionOfArray] = '@';
    return false;
  }
  else {
    //the position of the marker for getNextSymbol
    int i = 1;
    valueOfSymbol = getNextSymbol(s, i);
    int exit = false;
    while(!exit && i < strlen(s)){
      if(symbol[pointer] == s[i]){
        pointer++;
        i++;
      } else {
        exit = true;
      }
    }

    if(exit){
      int nextTablePosition;
      //similar to the outer if statement, checks if next is undefined
      if(next[pointer] == -1){
        nextTablePosition = findFirstEmpty(symbol);
        next[pointer] = nextTablePosition;
      } else {
        nextTablePosition = next[pointer];
      }

      //printf("\nnextTablePosition at %c: %d\n", s[1], nextTablePosition);

      while(i < strlen(s)){
        symbol[nextTablePosition] = s[i];
        nextTablePosition++;
        i++;
      }
      symbol[nextTablePosition] = '@';
    }

    //printSNTable(symbol, next);

    int accepted = !exit;
    return accepted;
  }
}

// Print symbol and next table
int printSNTable(char* symbol, int* next){
  int count = 0;
  int printLoop = true;
  for(int x = 0; x < 50; x++){
    if(!printLoop){
      break;
    }

    printf("\n\t");

    //Header
    for ( int i = 0+count; i < 20+count; i++ ){
      if(symbol[i] == '*'){
        printLoop = false;
      }
      printf("%*d",5,i);
  	}

    //Symbol
  	printf( "\nsymbol:\t" );
  	for ( int i = 0+count; i < 20+count; i++ ){
      if(symbol[i] == '*'){
        printLoop = false;
      }
      printf("%*c",5,symbol[i]);
  	}

    //Next
  	printf( "\nnext:\t" );
  	for ( int i = 0+count; i < 20+count; i++ ){
      if(symbol[i] == '*'){
        printLoop = false;
      }
  		if ( next[i] > 0 )
  			printf("%*d",5,next[i]);
  		else
  			printf("%*c",5,' ');
  	}
  	  printf("\n");
      count+=20;
  }
  return 0;
}

//Print switch table
int printSwitch(int* switchArr, char* alphabet){
  printf("\n\n\n\t");

  //Header
  for( int x = 0; x <= 19; x++ ){
    printf("%*c", 5, alphabet[x]);
  }
  //Values
  printf("\nswitch:\t");
  for( int x = 0; x < 20; x++ ){
    printf("%*d", 5, switchArr[x]);
  }
  //Header
  printf("\n\n\t");
  for( int x = 20; x <= 39; x++ ){
    printf("%*c", 5, alphabet[x]);
  }
  //Values
  printf("\nswitch:\t");
  for( int x = 20; x < 40; x++ ){
    printf("%*d", 5, switchArr[x]);
  }

  //Header
  printf("\n\n\t");
  for( int x = 40; x <= 51; x++ ){
    printf("%*c", 5, alphabet[x]);
  }
  //Values
  printf("\nswitch:\t");
  for( int x = 40; x < 52; x++ ){
    printf("%*d", 5, switchArr[x]);
  }
  printf("\n\n\n");

  return 0;
}

//yywrap wraps the rules defined
int yywrap(void) {
    return 1;
}