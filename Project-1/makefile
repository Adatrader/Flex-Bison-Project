# -*- MakeFile -*-

toy_lexer: toy_scanner.h toy.l
	flex toy.l
	gcc -o toy_lexer lex.yy.c

clean:
	rm -f lex.yy.c toy_lexer