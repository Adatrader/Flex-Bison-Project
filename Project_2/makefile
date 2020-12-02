# -*- MakeFile -*-
toy_parser: toy_scanner.h toy.l toy.y
	flex toy.l
	bison -d -t --debug toy.y
	gcc -o toy_parser toy.tab.c lex.yy.c -lfl -ly

clean:
	rm -f toy_parser toy.tab.c toy.tab.h lex.yy.c