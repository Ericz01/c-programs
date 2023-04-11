#include<stdio.h>
#include <conio.h>

void funceven()
{
	int n;
	printf("Enter alleged even number: ");
	scanf("%d", &n);
	if(n % 2 == 0)
		printf("%d is even\n", n);
	else
		printf("%d is odd\n", n);
}
int main()
{
	funceven();
}
