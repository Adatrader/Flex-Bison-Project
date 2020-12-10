# Flex & Bison Project 1

## Group Members:

Adam VanRiper<br/>
Nandan Vinjamury<br/>
Ta Wei Chien

## Run Project One
<br/>
Through an Ubuntu Linux distro, you can run the Toy Compiler in the following steps:
<br/><br/>
Step 1 - Installing Flex and Bison:<br/>
Open a terminal window and enter this command:<br/>
$sudo apt-get install flex bison<br/>
Step 2 - Running the Toy compiler program:</br>
Open a terminal window in the project directory. <br/>
Either enter the following commands manually, or save the following shell script into an sh file with the proper header and run them accordingly.<br/>

Shell script for running the given sample:<br/>

```
cd Project_1
chmod +x runSampleGiven.sh
./runSampleGiven.sh
```

<br/> or shell script for running a user input file:<br/>

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
cd Project_2
chmod +x runAllTestcases.sh
./runAllTestcases.sh
```

<br/> or <br/>

```
cd Project_2
flex toy.1
bison -vd toy.y
cc lex.yy.c toy.tab.c -lfl
./a.out < testcases/testcase1.toy
```
