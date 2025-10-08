/*
 * main.c
 *
 *  Created on: Aug 22, 2024
 *      Author: zchua
 */

#include<stdio.h>

int main()
{
	double charge, chargeE;
	double electrons;
	printf("Enter the charge: ");
	fflush(stdout);
	scanf("%lf", &charge);

	printf("enter the charge of an electron: ");
	fflush(stdout);
	scanf("%le", &chargeE);

	electrons = (charge / chargeE) * -1;

	printf("total number of electrons = %lf\n", electrons);
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
