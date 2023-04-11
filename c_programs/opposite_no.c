#include <stdio.h>

int main()
{
	int n, i;
	printf("Enter an integer: ");
	scanf("%d", &n);
	i=n-(n*2);
	//if(i>0)
	printf("%d : %d\n", n, i);
	return 0;
}
