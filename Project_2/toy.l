%{
/* C Headers, Declarations, Vars */
#include <stdio.h>
#include <stdbool.h>
#include "toy.tab.h"

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


/* Helper Methods */

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
/*
int main(void) {

  //Trie data structure
  int switchArr[52];
  char symbol[4096];
  int next[4096];

  char alphabet[52] = {
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
  };

  //Initializes arrays with placeholder values
  for (int x = 0; x < 52; x++){
    switchArr[x] = -1;
  }
  for (int x = 0; x < 4096; x++){
    symbol[x] = '*';
  }
  for (int x = 0; x < 4096; x++){
    next[x] = -1;
  }

  // yylex is the main flex function -scanner
  int curr = yylex();
  while(curr) {
    char s[strlen(yytext)];
		strcpy(s,yytext);
		if (curr == _booleanconstant || curr == _id || curr <= _while){
			createOrSearch(s, switchArr, symbol, next);
		}
		curr = yylex();

  }


  //Print switch
  printSwitch(switchArr,alphabet);
  printSNTable(symbol,next);
  return 0;
}
*/

