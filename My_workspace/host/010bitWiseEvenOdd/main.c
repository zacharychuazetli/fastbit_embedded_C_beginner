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
	int num1;
	printf("Enter a number:");
	fflush(stdout);
	scanf("%d", &num1);

	if(num1 & 1){
		printf("%d is odd number\n", num1);
	}else{
		printf("%d is even number\n", num1);
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
