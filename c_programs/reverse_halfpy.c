#include <stdio.h>

int main()
//a reverse half pyramid with the straight edge on the left
{
	int n, i, j;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	for(i=n; i>0; i--)
	{
		for(j=i; j>0; j--)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
