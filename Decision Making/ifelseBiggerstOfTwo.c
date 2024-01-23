#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int number1 = 0;
    int number2 = 0;

    printf("Enter first number (integer): ");
    scanf("%d", &number1);
    printf("Enter second number (integer):");
    scanf("%d", &number2);

    if (number1>number2)
    {
        printf("%d is bigger \n",number1);
    }
    else if(number2>number1)
    {
        printf("%d is bigger\n",number2);
    }
    else if(number1==number2)
    {
        printf("Both numbers are equal \n");
    }

    return 0;
}