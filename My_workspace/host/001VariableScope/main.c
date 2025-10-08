#include<stdio.h>

void myFunc(void);
void myFunc1(int a);
int a=5;

int main(void)
{
	a = 25;
	{
		int my_var;
		my_var = 45;
		printf("value of local variable my_var is %d\n", my_var);
		printf("value of global variable a is %d\n", a);
		a = 1;
	}

	printf("value of global variable a is %d\n", a);
	myFunc1(a);
	myFunc();
	printf("value of global variable a is %d\n", a);

	int my_var;
	// my_var was defined but was'nt initialized
	// so my_var will have some garbage value that is not predictable
	my_var = my_var + 10;

	printf("value of the local variable my_var is %d\n", my_var);


	return 0;

}

void myFunc(void)
{
	a = 10;
	printf("value of global variable my_var is %d\n", a);
}

void myFunc1(int a)
{
	printf("a: %d\n",a);
}
