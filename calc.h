#ifndef CALC_HEADER
#define CALC_HEADER

#include <stdio.h>
#include <stdlib.h>

typedef enum {calc_add, calc_sub, calc_mul, calc_div, calc_mod, calc_pow, calc_npr, calc_ncr, calc_gcd, calc_lcm} Operation;

typedef struct _Calc{
    void *a;
    void *b;
}Calculator;

// This function takes the users input and processes the expression.
// Takes three inputs: A string representing the operation, and two doubles, representing the operands.
// Returns the result of the operation.
double calc(char*, char*, char*);

int addition(void*, void*);
int subtraction(void*, void*);
int multiplication(void*, void*);
int division(void*, void*);
int modulo(void*, void*);
int exponentiation(void*, void*);
int permutation(void*, void*);
int combination(void*, void*);
int greatestDivisor(void*, void*);
int lowestMultiple(void*, void*);
int fact(void*);

typedef int (*operation)(void*, void*);

operation op_functions[] = { 
    addition,
    subtraction,
    multiplication,
    division,
    modulo,
    exponentiation,
    permutation,
    combination,
    greatestDivisor,
    lowestMultiple
};
#endif