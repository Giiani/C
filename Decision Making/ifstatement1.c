#include <stdint.h>
#include <stdio.h>

int main (void)
{
    int age= 0;

    printf("Enter your age to see if you can vote: ");
    scanf("%d", &age);

    if(age>18)
    {
        printf("You can vote \n");
    }
    else
    {
        printf("You can't vote \n");
    }

    return 0;
}