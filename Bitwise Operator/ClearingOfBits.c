#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int input,output;

    printf("Enter a number: ");
    scanf("%d",&input);


    /*Method 1*/
    output = input & 0x8F;

    printf("Method 1:[Input] [Output] 0x%x 0x%x \n",input,output);
    /*Method 2*/

    output = input & ~0x70;
    printf("Method 2:[Input] [Output] 0x%x 0x%x \n",input,output);

    return 0;
}