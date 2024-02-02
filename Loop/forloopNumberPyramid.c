#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int i;
    int j;
    int height = 0;

    printf("Enter height of pyramid:");
    if(scanf("%d",&height) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    for (i=1;i<=height;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }

    return 0;
}