int math_add(int n1, int n2);
int math_sub(int n1, int n2);
long long int math_mul(int n1, int n2);
float math_div(int n1, int n2);

int math_add(int n1, int n2)
{
	return n1+n2;
}
int math_sub(int n1, int n2)
{
	return n1-n2;
}
long long int math_mul(int n1, int n2)
{
	// cannot do this because it is integer multiplication
	// multiple 2 integers you just get back an integer which is only 4 bytes
	// so need to type cast
	// return n1 * n2;

	// so now long long int multiply with int is long long int
	// got two types of casting, implicit and explicit, this is explicit
	return (long long int)n1 * n2;
}
float math_div(int n1, int n2)
{
	// integer divide by integer is integer
	// so need float
	return (float) n1 / n2;
}
