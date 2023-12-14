#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char chars[6];
    int i;
    for(i=0;i<6;i++)
    {
        printf("Enter character %d: ",i+1);
        chars[i]=getchar();
    }
    for(i=0;i<6;i++)
    {
        printf("ASCII code for %c is %d",chars[i],chars[i]);
        printf("\n");
    }
    
    return 0;
}