#include <stdio.h>

int main()
{
	int *p1, *p2, sum;
	printf("Enter two numbers: ");
	scanf("%d%d", &*p1, &*p2);
	sum = *p1+*p2;
	printf("sum = %d", sum);
	return 0;
}
