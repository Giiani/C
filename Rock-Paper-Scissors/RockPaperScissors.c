#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void rockpapersicors (int  a, int b) 
{
    if(a==1 && b==1)
    {
        printf("Rock and rock is a draw\n");
    }
    else if(a==1 && b==2)
    {
        printf("Paper  covers Rock, computer win.\n");
    }
    else if(a==1 && b==3)
    {
        printf("Rock crushes Scissors. You win \n");
    }
    else if(a==2 && b==1)
    {
        printf("Paper  covers Rock. You win\n");
    }
    else if(a==2 && b==2)
    {
        printf("Paper and paper is a draw\n");
    }
    else if(a==2 && b==3)
    {
        printf("Scissors crushes paper, computer Win \n");
    }
    else if(a==3 && b==1)
    {
        printf("Rock crushes Scissors, computer win \n");
    }
    else if(a==3 && b==2)
    {
        printf("Scissors cut paper. You win\n");
    }
    else if(a==3 && b==3)
    {
         printf("Scissors and scissors is a draw\n");
    }
}

int main (void)
{
    int option=0;
    int computer;

    srand(time(NULL)); // Seed the random number generator with the current time
    printf("Welcome to Rock-Paper-Sicors Game \n");
    while(option!=4)
    {
        printf("Rock    = 1\n");
        printf("Paper   = 2\n");
        printf("Scissors  = 3\n");
        printf("Quit    = 4\n");
        printf("\nEnter your choice: ");
        scanf( "%d", &option);
        
        if(option == 4)
        {
            break;
        }
        computer = rand( ) % 3 + 1; // Generate a random number between 1 and 3 inclusive
        rockpapersicors(option,computer);

    }
    
    return 0;
}