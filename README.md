# Flex & Bison Project 1

## Group Members:

Adam VanRiper<br/>
Nandan Vinjamury<br/>
Ta Wei Chien

## Run Project One

sudo apt-get install flex bison<br/>
Open terminal in project directory<br/>

Shell script:<br/>

```
cd Project_1
chmod +x runSampleGiven.sh
./runSampleGiven.sh
```

<br/> or <br/>

```
cd Project_1
flex toy.l
cc lex.yy.c
./a.out < sampleGiven.toy
```

## Run Project Two

sudo apt-get install flex bison<br/>
Open terminal in project directory<br/>

Shell script:<br/>

```
cd Project_2/runTestcases
chmod +x runTestcase1.sh
./runTestcase1.sh
```

<br/> or <br/>

```
flex toy.1
bison -vd toy.y
cc lex.yy.c toy.tab.c -lfl
./a.out < testcases/testcase1.toy
```
