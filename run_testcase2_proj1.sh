#!/bin/bash
rm -f a.out
rm -f lex.yy.c
flex toy.l
cc lex.yy.c
./a.out < testcases_proj1/testcase2.toy
