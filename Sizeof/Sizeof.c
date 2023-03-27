#include <stdio.h>
#include <string.h>

int main()
{
    int a;
    double b;
    char s;
    char z[10];

    printf("For this example will find out the size of diferent variables: \n");
    printf("Size of a int data variable a: %d\n",sizeof(a));
    printf("Size of a double data variable b: %d\n",sizeof(b));
    printf("Size of a char data variable s: %d\n",sizeof(s));
    printf("Size of a string data variable z: %d\n",sizeof(z));
    
    return 0;
}