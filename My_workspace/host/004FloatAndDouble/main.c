/*
 * main.c
 *
 *  Created on: Aug 22, 2024
 *      Author: zchua
 */
#include<stdio.h>

int main()
{
	double number = 45.78976834578;
	printf("Number = %0.2lf\n", number);
	printf("Number = %0.2e\n", number);

	double chargeE = -1.60217662e-19;
	printf("charge of electron = %0.15lf\n", chargeE);
	printf("charge of electron = %0.15le\n", chargeE);
	return 0;
}
