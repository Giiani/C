#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int start=0;
    int end = 0;
    int count=0;
    int linebreak=0;
    int mask=1;

    printf("Enter the starting number: ");
    if(scanf("%d",&start) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    printf("Enter the ending number: ");
    if(scanf("%d",&end) == 0)
    {
        printf("Invalid Input! Exiting...");
        return 0;
    }

    if(start<end)
    {
        while(start<=end)
        {
            if ((start&mask) == 0)
            {
                printf("%d\t",start);
                count++;
                linebreak++;
                if(linebreak==10)
                {
                    printf("\n");
                    linebreak=0;
                }
            }
            start++;
        }
    }
    else
    {
        printf("End ing number should be greater than Starting number! ");
    }

    printf("\n");
    printf("The number of Even is: %d \n",count);
    
    return 0;
}