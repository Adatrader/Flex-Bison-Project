%{
/* C Headers, Declarations, Vars */
#include <stdio.h>
#include <string.h>
#include "toy_scanner.h"

#define maxtransition 200
#define endmark '$'
#define default_symbol '*'
#define bool	_Bool
#define true 1 
#define false 0
#define get_len(x) (sizeof(x)/sizeof(*(x)))

//Trie data structure
struct {
  int switchArr[52];
  char symbol[maxtransition];
  int next[maxtransition];
} trie;

void buildTrie(void);
void insert(char *);
int next_symbol(char *);
int get_free_index(char *, int);
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

boolean     { printf("%s ", yytext); insert(yytext); return (_boolean); }
break       { printf("%s ", yytext); insert(yytext); return (_break); }
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
{identifier}      { printf("id \n"); insert(yytext); return(_id); }


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

char alphabet[52] = { 
  'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
  'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
  'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
  'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' 
  };



//Helper Methods

//Initializes arrays with placeholders
void buildTrie() {
  for (int x = 0; x < 52; x++){
    trie.switchArr[x] = -1;
  }

  for (int x = 0; x < maxtransition; x++){
    trie.symbol[x] = default_symbol;
  }

  for (int x = 0; x < maxtransition; x++){
    trie.next[x] = -1;
  }
}


// get the alphabet index of the first char
int getNextSymbol(char* s) {
  int p = s[0];

  if (p >= 97){
    return p - 97 + 26;
  }

  return p - 65;
}

int get_free_index(char *array, int size) {
  for (int i = 0; i < size; i++) {
    if (array[i] == default_symbol){
      return i;
    }
  }
}

void insert (char* s) {
  int valueOfSymbol = getNextSymbol(s); 
  int ptr = trie.switchArr[valueOfSymbol];

  printf("initial ptr = %d \n", ptr);

  if (ptr == -1){
    printf("pointer is empty. \n");

    // find the empty index in symbol table
    int free_index = get_free_index(trie.symbol, get_len(trie.symbol));

    // save the first char in switchArr
    trie.switchArr[valueOfSymbol] = free_index;

    // save the rest chars
    int i = 1;
    for(i; i < strlen(s); i++){
      trie.symbol[free_index] = s[i];
      free_index++;  
    }
    trie.symbol[free_index] = endmark;

  }else{
    bool exit = false;
    int i = 1;  // start at the second char
    int p = ptr;
    printf("start-p : %d \n", p);
    for (i; i < strlen(s); i++){
      printf(" str[%d]: %c ts[%d]: %c \n", i, s[i], p, trie.symbol[p]);
      if (s[i] == trie.symbol[p]){
        // if the prefix are same
        printf("get same char \n");
        p++;
      }else{
        printf("exit ! \n");
        exit = true;
        break;
      }
    }
    printf("exit-p : %d \n", p);
    
    if (exit == true){
      int next;

      printf("trie.next[p]: %d \n", trie.next[p]);

      if (trie.next[p] == -1){
        next = get_free_index(trie.symbol, get_len(trie.symbol));
      }else{
        printf("!!! %d \n", trie.next[p]);
        next = trie.next[p];
      }

      trie.next[p] = next;
      printf("next = %d", next);

      printf("\n");
      for(int q =0; q<5; q++){
        printf("next[%d] = %d \n", q, trie.next[q]);
      }

      printf("curr i = %d \n", i);
      for (i; i< strlen(s); i++){
        trie.symbol[next] = s[i];
        next++;
      }
      trie.symbol[next] = endmark;

      printf("\n");
      for(int q =0; q<13; q++){
        printf("symbol[%d] = %c \n", q, trie.symbol[q]);
      }

    }else{
      printf("accept. it's an old strings. \n");
    }


  }

}

//yywrap wraps the rules defined
int yywrap(void) {
    return 1;
}

// yylex is the main flex function -scanner
int main(void) {
  buildTrie();
  while(yylex()) {}

  return 0;
}
