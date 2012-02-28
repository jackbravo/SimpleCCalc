/*===================  myStruct.c  =======================*/

#include "stack.h"

/* Constructor-like behavior */
void makePila(pila * s)
{
  s->index = 0;
}

void push(pila * s, double num)
{
  s->nums[s->index] = num;
  s->index++;
}

double pop(pila * s)
{
  s->index--;
  return s->nums[s->index];  
}

/* destructor-like behavior */
void deletePila(pila * s)
{
  // de-alocate memory
}

/* output function */
void printObj(pila s, FILE *out) 
{
  //fprintf( out, "%i\t%s\n", s.index, s.nums);
}

