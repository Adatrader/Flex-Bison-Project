# Flex & Bison Project 1

## Group Members:

Adam VanRiper<br/>
Nandan Vinjamury<br/>
Ta Wei Chien

## Run Project One

apt-get install flex bison<br/>

Shell script:<br/>

```
chmod +x runSampleGiven_proj1.sh
./runSampleGiven_proj1.sh
```

<br/> or <br/>

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
