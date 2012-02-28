# make file for p2, CS 354 Spring 2004

CFLAGS= -O -Wall -g -gstabs

calc: calc.o stack.o
	gcc $(CFLAGS) -o calc calc.o stack.o

calc.o: calc.c stack.h
	gcc -c $(CFLAGS) calc.c

stack.o: stack.c stack.h
	gcc -c $(CFLAGS) stack.c

clean:
	/bin/rm -f  *.o calc core
