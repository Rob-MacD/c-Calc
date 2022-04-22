calc : calc.o
	gcc --std=c18 calc.o -o calc.exe

calc.o : calc.c calc.h
	gcc --std=c18 -g -c calc.c

clean :
	del calc.o calc.exe