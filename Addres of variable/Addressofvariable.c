#include <string.h>
#include <stdio.h>

int main()
{
    int i;
    int array[10]={1,2,3,4,5,6,7,8,9};

    for (i=0;i<10;i++)
    {
        printf("The variable with the value %d is located in the memory location %d \n",array[i],&array[i]);

    }

    return 0;
}