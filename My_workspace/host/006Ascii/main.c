/*
 * main.c
 *
 *  Created on: Aug 22, 2024
 *      Author: zchua
 */
#include<stdio.h>

int main()
{
	char c1, c2, c3, c4, c5, c6;
	printf("Enter any 6 characters of your choice: ");
	fflush(stdout);

	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

	printf("\nASCII codes : %u %u %u %u %u %u", c1, c2, c3, c4, c5, c6);
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
