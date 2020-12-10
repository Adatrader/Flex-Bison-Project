# Toy Compiler Project

## Group Members:

* Adam VanRiper  
* Nandan Vinjamury  
* Ta Wei Chien  
<br/>

## Run Project I

Running project on Linux (implemented with Ubuntu 16.04), you can test the Toy Compiler lexer with the following steps:<br/>
<br/>
### Step 1 - Installing Flex and Bison:<br/>
* Open a terminal window and enter this command:<br/>
```sudo apt-get install flex bison``` <br/>
### Step 2 - Running the Toy compiler program:
*  Open a terminal in the project directory or cd into Project_1 folder. <br/>
* Two options to run lexer:

    * Commands to run created shell script for sampleGiven.toy:<br/>
        * ```
          cd Project_1
          chmod +x runSampleGiven.sh
          ./runSampleGiven.sh
          ```

    * Or manually compile and choose user input file (change *testcase1.toy* to any testcase):

        * ```
          cd Project_1
          flex toy.l
          cc lex.yy.c
          ./a.out < testcases/testcase1.toy
          ```
<br/>  

## Run Project II
Running project on Linux (implemented with Ubuntu 16.04), you can test the Toy Compiler parser with the following steps:<br/>
<br/>
### Step 1 - Installing Flex and Bison (if not installed):<br/>
* Open a terminal window and enter this command:<br/>
```sudo apt-get install flex bison``` <br/>
### Step 2 - Running the Toy compiler program:
*  Open a terminal in the project directory or cd into Project_2 folder. <br/>
* Two options to run parser:

    * Commands to run created shell script for all testcases (generates output files and in terminal):<br/>
        * ```
          cd Project_2
          chmod +x runAllTestcases.sh
          ./runAllTestcases.sh
          ```

    * Or manually compile and choose user input file (change *testcase1.toy* to any testcase):

        * ```
          cd Project_2
          flex toy.1
          bison -vd toy.y
          cc lex.yy.c toy.tab.c -lfl
          ./a.out < testcases/testcase1.toy
          ```
