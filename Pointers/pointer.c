#include <stdio.h>
#include <stdint.h>

int main(void)
{
    char data = 100;
    printf("The value of data is %d \n",data);
    printf("The addres of the variable is %p \n",&data);

    char* pAddres = &data;
    printf("The address stored in pointer *pAddres is %p\n" , *pAddres );

    char value = *pAddres;
    printf("Read value is: %d \n",value);

    *pAddres = 65;
    printf("The value of data is %d \n",data);
    
    return 0;
}