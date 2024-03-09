#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char msg1[]= "Hello how are you?";
    char *msg2 = "I am fine how are you?";
    printf("Message is: %s\n",msg1);  //print the message
    printf("Address of 'msg1' variable = %p\n",&msg1);
    printf("Value of 'msg1' variable = %p\n",msg1);

    printf("Message is: %s\n",msg2);  //print the message
    printf("Address of 'msg2' variable = %p\n",&msg2);
    printf("Value of 'msg2' variable = %p\n",msg2);

    return 0;
}