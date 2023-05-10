#include <stdio.h>
#include "cs50.h"
int fact(int n);
int main(void)
{
	int n = get_int("Enter n: ");
	fact(n);
	printf("Factorial: %d\n", fact(n));

}
int fact(int n)
{
	if(n == 1)//base case
	{
		return 1;
	}
	else//loop with return value till n==1;
	{
		return n * fact(n-1);
	}
}
