#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "mathe.h"

int main(void)
{
    int a=10;
    int b=10;


 /*   printf("This program will give you the result of addition, subtraction, multiplication and division of the values of a and b. \n");
    scanf("Enter a value for a: ",&a);
    printf("\n");
    scanf("Enter a value for b: ",&b);
    printf("\n");
   */ 
    printf("Addition: %d\n",test_sum(a,b));
    printf("Subtraction: %d\n",test_sub(a,b));
    printf("Multiplication: %d\n",test_multiplication(a,b));
    printf("Division: %lf\n",test_division(a,b));

    return 0;
}

