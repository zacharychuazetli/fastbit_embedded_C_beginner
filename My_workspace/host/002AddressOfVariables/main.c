#include<stdio.h>

int main()
{
	char a1 = 'A';

	unsigned long int addressOfa1 = (unsigned long int)&a1;

	printf("size of long int %d\n", sizeof(long));
	printf("size of address of a1 %d\n", sizeof(&a1));
	printf("address of a1 %p\n", &a1);
	printf("Address of variable a1 = %ld\n", addressOfa1);
	printf("Address of variable a1 = %lX\n", addressOfa1);

	return 0;
}

