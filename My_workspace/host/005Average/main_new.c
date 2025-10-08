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

	printf("Enter 3 numbers: ");
	fflush(stdout);
	scanf("%f %f %f", &number1, &number2, &number3);

	average = (number1 + number2 + number3) / 3;
	printf("\nAverage number is %f", average);
	fflush(stdout);

	// this waits until user enters a character
	printf("\nPress enter key to exit the application \n");
	fflush(stdout);
	while(getchar() != '\n')
	{

	}
	getchar();
	return 0;
}
