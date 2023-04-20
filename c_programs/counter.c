#include <stdio.h>

int main()
{
	int n, i=0;
	printf("Number: ");
	scanf("%d", &n);
	while(n != 0)
	{
		n = n / 10;
		i++;
	}
	printf("Count: %d\n", i);
}
