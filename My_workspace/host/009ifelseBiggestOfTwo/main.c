/*
 * main.c
 *
 *  Created on: Aug 22, 2024
 *      Author: zchua
 */

#include<stdio.h>

void wait_for_user_input(void);

int main()
{
	float num1, num2;
	printf("Enter the first number(integer): ");
	fflush(stdout);

	if( scanf("%f", &num1) == 0){
		printf("invalid input, exiting\n");
		wait_for_user_input();
		return 0;
	}

	printf("Enter the second number(integer): ");
	fflush(stdout);

	if( scanf("%f", &num2) == 0){
		printf("invalid input, exiting\n");
		wait_for_user_input();
		return 0;
	}

	int n1, n2;
	n1 = num1;
	n2 = num2;

	if( (n1 != num1) || (n2 != num2)){
		printf("warning, comparing only integer part\n");
	}

	if (n1 == n2){
		printf("numbers are equal\n");
	}else{
		if (n1 < n2){
			printf("%d is bigger\n", n2);
		}else{
			printf("%d is bigger\n", n1);
		}
	}

	wait_for_user_input();
	return 0;
}

void wait_for_user_input(void)
{
	printf("press enter key to exit this application");
	fflush(stdout);

	while(getchar() != '\n')
	{
		//just read the input buffer and do nothing
	}
	getchar();
}
