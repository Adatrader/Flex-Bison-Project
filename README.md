# Flex & Bison Project 1

## Group Members:

Adam VanRiper<br/>
Nandan Vinjamury<br/>
Ta Wei Chien

## Prerequisite
> make sure you are using Linux OS
```
sudo apt-get install build-essential
sudo apt-get install flex bison
```

## Run Project One

### Using shell script:

```
cd Project-1
chmod +x runSampleGiven_proj1.sh
./runSampleGiven_proj1.sh
```

### Using Makefile
> build
```
cd Project-1
make
```
> test toy-lexer
```
./toy_lexer < sampleGiven.toy
```
> if you want to remove generated file after testing
```
make clean
```

### or

```
flex toy.l
cc lex.yy.c
./a.out < sampleGiven.toy
```

## Run Project Two

```
flex toy.1
bison toy.y
cc lex.yy.c y.tab.h -ll
./a.out < testcases_proj2/testCase1.toy
```
