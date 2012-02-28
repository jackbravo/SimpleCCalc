/*===================  stack.h  =======================*/

#ifndef STACK
#define STACK
#define STACKSIZE 20

#include <stdlib.h>
#include <stdio.h>

typedef struct aStruct
{
  double nums[STACKSIZE];
  int index;
} pila;

void makePila(pila *s);
void push(pila *s, double num);
double pop(pila *s);
void deletePila( pila * s);
void printObj( pila s, FILE * out);

/* printf will format floating point numbers: ``%w.df'' in
the format string will print the corresponding variable in a
field w digits wide, with d decimal places. */

#endif
