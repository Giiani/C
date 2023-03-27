#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    scanf("%c",&ch);
    scanf("%s",s);
    /*We then use the scanf function again to read the string input using the format specifier %s. The scanf function automatically stops reading the input when it encounters a whitespace character (space, tab, or newline). So, it reads the string until the first space and stores it in the str variable.
    To read the sentence input, we first use the scanf function with the format specifier "\n" to read and discard the newline character left in the input buffer from the previous input operation. Then, we use the scanf function with the format specifier "%[^\n]%*c" to read the input until a newline character is encountered. The [^\n] part is a scanset that tells scanf to read all characters except the newline character. The %*c part tells scanf to read and discard the newline character.*/
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen); 
}