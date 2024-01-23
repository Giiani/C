#include <stdio.h>
#include <stdint.h>

int main (void)
{
    float number1 = 0;
    float number2 = 0;

    printf("Enter first number (integer): ");
    
    if(scanf("%f", &number1) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    printf("Enter second number (integer):");
    
    if(scanf("%f", &number2) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    int32_t n1,n2;

    n1 = number1;
    n2 = number2;

    if ((n1!=number1) || (n2!=number2))
    {
        printf("Warning only comparing the integer part \n");
    }

    if (n1>n2)
    {
        printf("%d is bigger \n",n1);
    }
    else if(n2>n1)
    {
        printf("%d is bigger\n",n2);
    }
    else if(n1==n2)
    {
        printf("Both numbers are equal \n");
    }

    return 0;
}