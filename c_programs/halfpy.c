#include <stdio.h>

int main()
/*prints half pyramid with the flat surface on the left
 */
{
	int i, j, n;
	printf("Enter the number of rows in your pyramid: ");
	scanf("%d", &n);
	for(i=1; i<= n; i++)
	{
	for(j=1; j<=i; j++)
		printf("*");
		printf("\n");
	}
	return 0;
}
