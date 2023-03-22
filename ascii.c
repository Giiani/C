#include <stdio.h>
#include <string.h>

int main()
{
   int asciiCode = 0;

   printf("Enter a number between 0 - 127 to convert in a character of the ASCII CODE: ");
   scanf("%d", &asciiCode);
   printf("\n");

   if (asciiCode >= 0 && asciiCode <=127)
   {
    char character = asciiCode;
    printf("The character of the ASCII code for %d is %c \n",asciiCode,character);
   }
   else{
    printf("The ASCII code is only between 0 - 127 \n");
   }

   return 0;
}