#!/bin/bash
cd ../
rm -f a.out
rm -f lex.yy.c
rm -f toy.tab.c
rm -f toy.tab.h
rm -f toy.output
flex toy.l
bison -vd toy.y &>/dev/null
cc lex.yy.c toy.tab.c -lfl
./a.out < testcases/testcase10.toy > testcases/outputs/testcase10output.txt
./a.out < testcases/testcase10.toy
