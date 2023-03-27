#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;
    int j;

    for(i=1;i<11;i++)
    {
        for(j=1;j<11;j++)
        {
            printf("%d\t",j*i);
        }
        puts("\n");
    }

    return 0;
}