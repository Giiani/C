#include <stdio.h>
#include <stdint.h>

int main (void)
{
    uint8_t someData[10];

    for(int i=0;i<sizeof(someData);i++) {
        printf("Enter byte %d: ",i+1);
        scanf(" %c",&someData[i]); // Read a character, not an integer!
        
    }
    
    printf("\nThe entered data is:\n");
    for(int j=0;j<sizeof(someData);j++) {
        printf("Byte %d = %c \n",j+1,someData[j]);   // Print the character, not its ASCII value!
    }
    
    return 0;
}