#include <stdio.h>
#include <string.h>

int main()
{
    int distanceA2B=0;
    int distanceB2C=0;
    int distanceA2C=0;


    printf("Enter distance A to B:");
    scanf("%d",&distanceA2B);
    printf("\n");

    printf("Enter distance B to C:");
    scanf("%d",&distanceB2C);
    printf("\n");

    distanceA2C = distanceA2B + distanceB2C;

    printf("Total distance from A to C: %d\n", distanceA2C);

    return 0;

}