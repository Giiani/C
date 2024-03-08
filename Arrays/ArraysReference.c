#include <stdio.h>
#include <stdint.h>

void array_display(uint8_t const *pArray,uint32_t nItems);

int main (void)
{
    uint8_t someData[10];

    for(int i=0;i<sizeof(someData);i++) {
        printf("Enter byte %d: ",i+1);
        scanf(" %c",&someData[i]); // Read a character, not an integer!
        
    }
    
    uint32_t nItems = sizeof(someData)/sizeof(uint8_t);
    array_display(someData,nItems);

    return 0;
}

void array_display(uint8_t const *pArray,uint32_t nItems)
{
    printf("\nThe entered data is:\n");
    for(int j=0;j<nItems;j++) {
        printf("Byte %d = %c \n",j+1,pArray[j]);   // Print the character, not its ASCII value!
    }
}