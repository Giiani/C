#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int mask = 1;
    int input=0;

    printf("Enter a number: ");
    if(scanf("%d", &input) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    if ((input&mask) == 0)
    {
        printf("The number %d is EVEN \n",input);
    }
    else if ((input&mask) == 1)
    {
        printf("The number %d is ODD \n",input);
    }

    return 0;
}