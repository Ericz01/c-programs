#include <stdio.h>

void funcprime()
{
	int n, i, count=0;
	printf("Enter an allegedly prime number: ");
	scanf("%d", &n);
	for(i = 1; i <=n; i++)
	{
		if(n % i == 0)
			count++;
	}
	if(count ==  2)
	{
		printf("%d is a prime number\n", n);
	}
	else
		printf("%d is not prime\n", n);
}
int main()
{
	funcprime();
}
