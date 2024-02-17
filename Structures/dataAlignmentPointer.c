#include <stdio.h>
#include <stdint.h>

struct dataAlignment
{
    /* data */
    char data1;
    int data2;
    char data3;
    short data4;
};

void displayMemberElements(struct dataAlignment *pData);

int main (void)
{
    struct dataAlignment data;

    data.data1 = 0x11;
    data.data2 = 0xFFFFEEEE;
    data.data3 = 0x22;
    data.data4 = 0xABCD;
 
    displayMemberElements(&data);

    return 0;
}

void displayMemberElements(struct dataAlignment *pData)
{
    printf( "Character: %X\n", pData->data1 );
    printf( "Integer : %d\n", pData->data2 );
    printf( "Char    : %c\n", pData->data3 );
    printf( "Short   : %hd\n", pData->data4 );
}