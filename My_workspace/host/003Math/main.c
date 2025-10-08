#include <stdio.h>
#include "math.h"

int main()
{
	// int is 4 bytes, so its 8 numbers in hex
	printf("Add: %d\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Add in hex: %X\n", math_add(0x0FFF1111, 0x0FFF1111));
	printf("Mul: %I64x\n", math_mul(0x0FFF1111, 0x0FFF1111));
	printf("Div: %0.2f\n", math_div(100, 8));
	printf("%d\n", sizeof(int));
	return 0;
}
