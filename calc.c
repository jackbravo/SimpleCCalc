#define LINESIZE 256
#include "stack.h"

/*-----*/
int isOper(char c);
int isNum(char c);
char * jumpNum(char *c);
void doOper( pila * s, char op );
/*-----*/

int main()
{
  char * index;
  char * line;
  pila * s;

  line = (char*)malloc(sizeof(char)*LINESIZE);
  s = (pila*)malloc(sizeof(pila));
  makePila(s);

/*   printf("1. %d\n", s->index); */
/*   push(s, 0.12); */
/*   printf("2. %d\n", s->index);   */
/*   printf("3. %f\n", pop(s)); */
/*   printf("4. %d\n", s->index);   */

  /* reading from stdin */
  while( fgets(line, LINESIZE, stdin) ) {
    index = line;
    while( *index != '\0' ) {
      if( isOper(*index) ) {
	doOper( s, *index );
	index++;
      } /* end IF oper */
      else if( isNum(*index) ){
	push( s, atof(index) );
	index = jumpNum(index);
      } /* end IF num */
      else {
	index++;
      } /* end ELSE */
    } /* end WHILE !=0 */
  } /* end WHILE gets() */
  free(line);
  return 0;
}

/* --------------- EXTRA FUNCTIONS --------------- */


int isOper(char c)
{
  if( c == '+' || c == '-' || c == '*' || c == '/' ) {
    return 1;
  }
  else {
    return 0;
  }
}

int isNum(char c)
{
  if( ('0' <= c && c <= '9') || c == '.' ) {
    return 1;
  }
  else {
    return 0;
  }
}

char * jumpNum(char *c)
{
  while( isNum(*c) ) {
    c++;
  }
  return c;
}

void doOper( pila * s, char op )
{
  double num1;
  double num2;
  double result = 0.0;

  num2 = pop(s);
  num1 = pop(s);

  switch (op)
    {
    case '+': result = num1 + num2; break;
    case '-': result = num1 - num2; break;
    case '*': result = num1 * num2; break;
    case '/': result = num1 / num2; break;
    default: printf("That's not an operator: %c\n", op); break;
    }

  push( s, result);

  printf("%f %c %f -> %f\n", num1, op, num2, result);
}
