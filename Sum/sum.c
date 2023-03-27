#include <stdio.h>
#include <string.h>

/*Function declaration*/
void sum (int a, int b, int c);

int main()
{
    sum(245,256,623);
    sum(24512354,123123,23145);

    int a= 34;
    int b= 52;

    sum(a,b,312);

    return 0;
}

/*Function definition*/
void sum (int a, int b, int c)
{
    unsigned long int sum=0;

    sum = a + b + c;

    printf("The sum of the 3 variables are: %ld\n", sum);

}