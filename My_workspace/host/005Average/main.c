/*
 * main.c
 *
 *  Created on: Aug 22, 2024
 *      Author: zchua
 */
#include<stdio.h>

int main()
{
	float number1, number2, number3;
	float average;

	printf("enter the first number: ");
	fflush(stdout);
	scanf("%f", &number1);
	printf("\nEnter the first number: ");
	fflush(stdout);
	scanf("%f", &number2);
	printf("\nEnter the first number: ");
	fflush(stdout);
	scanf("%f", &number3);

	average = (number1 + number2 + number3) / 3;
	printf("\nAverage number is %f", average);

	// this waits until user enters a character
	printf("\nPress enter key to exit the application \n");
	while(getchar() != '\n')
	{

	}
	getchar();
	return 0;
}
