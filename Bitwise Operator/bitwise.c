#include <stdint.h>
#include <stdio.h>

int main (void)
{
    int n1,n2;

    printf("Enter number 1:");
    if(scanf("%d", &n1) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    printf("Enter number 2:");
    if(scanf("%d", &n2) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    int and = n1 & n2;
    int or= n1|n2;
    int xor=n1^n2;
    int not=~n1;
    int not2=~n2;

    printf("And Operator: %d \n",and);
    printf("Or Operator: %d \n",or);
    printf("XOR Operator: %d \n",xor);
    printf("Not Operator: %d \n",not);
    printf("Not 2 Operator: %d \n",not2);

    return 0;
}