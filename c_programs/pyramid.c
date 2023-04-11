#include <stdio.h>

int main()
{
	int n, j, i;
	printf("Number of rows in the pyramid: \n");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= n*2-1; j++)
		{
			if(j >= n-(i-1) && j <= n+(i-1))
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
	
}
