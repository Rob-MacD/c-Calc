#include "calc.h"

int main(int argc, char** argv){
    printf("%0.3lf", calc("calc_add", "2", "4"));
//    printf("%0.3lf", calc(argv[1], argv[2], argv[3]));
    return 0;
}

// Take the input, fill a struct to hold the input,
// Call the appropriate op function,
// Return the result of the op function. 
double calc(char* operand, char* input_a, char* input_b){
    Operation calc_function = operand;
    Calculator *calculator = malloc(sizeof(Operation));
    calculator->a = input_a;
    calculator->b = input_b;
    //printf("%s", operation->op);
    op_functions[calc_function](calculator->a, calculator->b);
    free(calculator);
    return 0.0f;
}

int addition(void* a, void* b){
    return *(int*)a + *(int*)b;
}

int subtraction(void* a, void* b){
    return *(int*)a - *(int*)b;
}

int multiplication(void* a, void* b){
    return *(int*)a * *(int*)b;
}

int division(void* a, void* b){
    return *(int*)a / *(int*)b;
}

int modulo(void* a, void* b){
    return *(int*)a % *(int*)b;
}

int exponentiation(void* a, void* b){
    for (int i = 0; i < *(int*)b; i++)
        *(int*)a *= *(int*)a;
    return *(int*)a;
}

int permutation(void* a, void* b){
    return fact(a) / fact(*(int*)a - *(int*)b);
}

int combination(void* a, void* b){
    return fact(a) / (fact(*(int*)a - *(int*)b) * fact(*(int*)b));
}

int greatestDivisor(void* a, void* b){
    return 0;
}

int lowestMultiple(void* a, void* b){
    return 0;
}

int fact(void *a){
    if ((int)a == 1)
        return 1;
    return *(int*)a * fact(*(int*)a - 1);
}