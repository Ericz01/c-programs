#include <stdio.h>

int main()
/*prints half star pyramid with the flat surface on the right
 */
{
	int i, k, j, n;
	printf("Enter number of stars in the pyrmid: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
	for(j=n; j>=n; j--)
		printf("*");
	for(k=1; k<=i; k++)
		printf(" ");
		printf("\n");
	}
	return 0;
}
