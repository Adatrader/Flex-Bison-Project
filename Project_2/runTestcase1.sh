#!/bin/bash
rm -f a.out
rm -f lex.yy.c
rm -f toy.tab.c
rm -f toy.tab.h
rm -f output.toy
flex toy.1
bison -vd toy.y
cc lex.yy.c toy.tab.c -lfl
./a.out < testcases/testcase1.toy