#!/bin/bash
rm a.out
rm lex.yy.c
flex toy.l
cc lex.yy.c
./a.out < sampleGiven.toy
