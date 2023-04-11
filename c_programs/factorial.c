#include <stdio.h>

int factorial(int x);
int main()
{
	int n = factorial(5);
	printf("%d\n", n);
	return 0;
}

int factorial(int x)
{

	if(x<=1)
		return (1);//base case
	else
		return x*factorial(x-1);
}
