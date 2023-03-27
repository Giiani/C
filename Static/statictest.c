#include <stdio.h>
#include <string.h>

/*Function declaration*/

void statictest(void);
void withoutstatictest(void);

int main()
{
    int i=0;

    for(i=0;i<10;i++)
    {
        statictest();
    }

    for(i=0;i<10;i++)
    {
        withoutstatictest();
    }

    return 0;
}

void statictest(void)
{
    static int m=0;

    printf("El valor de m con static = %d \n", m);
    m+=1;
}

void withoutstatictest(void)
{
    int n=0;

    printf("El valor de n sin static = %d \n", n);
    n+=1; 
}