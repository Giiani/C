#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int limit=0;
    int i=0;

    printf("Enter a number that want to be count and print:");
    if(scanf("%d",&limit) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    while(i<=limit)
    {
        printf("%d\n",i++);
    }

    return 0;
}