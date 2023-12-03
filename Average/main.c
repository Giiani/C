/*
 * main.c
 *
 *  Created on: Dec 3, 2023
 *      Author: Giani
 */

#include <stdint.h>
#include <stdio.h>

int main(void)
{
	float number1=0;
	float number2=0;
	float number3=0;

	float average=0;

	printf("Enter the first number: ");
	scanf("%f",&number1);
    printf("\n");
	printf("Enter the second number: ");
	scanf("%f",&number2);
    printf("\n");
	printf("Enter the third number: ");
	scanf("%f",&number3);
    printf("\n");

	average= (number1+number2+number3)/3;

	printf("Average: %f \n",average);

	return 0;
}
