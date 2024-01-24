#include <stdio.h>
#include <stdint.h>

int main (void)
{
    int32_t input,output;
    printf("Enter an integer: ");
    scanf("%d",&input);

    output = input | 0x90;
    printf("[Input] [Output] : 0x%x 0x%x \n",input,output);

    return 0;
}