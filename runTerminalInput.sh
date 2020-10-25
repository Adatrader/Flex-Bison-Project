#!/bin/bash
flex toy.l
cc lex.yy.c
./a.out