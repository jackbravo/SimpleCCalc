Author: Joaquin Bravo Contreras
IDNum:  112002621
Class:  Programming Languages

POSTFIX NOTATION CALCULATOR (HP Style ;)
=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

This project consists of 3 files:
- stack.h
- stack.c
- calc.c

stack.h & stack.c
-----------------
stack.h is a very simple stack (note: pila means stack in spanish)
it doesn't do any checking for errors but does its work.

calc.c
------
calc.c contains the main() function and some other helper functions:
1. int isOper(char c);
   Checks to see if 'c' is +, -, * or /
2. int isNum(char c);
   Checks to see if 'c' is a digit ( from 0 to 9 )
3. char * jumpNum(char *c);
   moves the char pointer until the char is not a digit
4. void doOper( pila * s, char op );
   Pops two items out of the stack ( pila * s ) and applies
   the specified operation ( op ). Then prints the operation
   and the result.

fgets is used to read from the stdin.
the main cicle is:
	while( fgets(line, LINESIZE, stdin) )

