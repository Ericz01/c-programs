#include <stdio.h>

int main()
{
	double a, b, c;
	printf("Enter the adjacent value: ");
	scanf("%lf", &a);
	printf("Enter the opposite value: ");
	scanf("%lf", &b);
	
	c = ((a*a) + (b*b))/(a+(b/2));
	{
		printf("Hypotenuse = %lf\n", c);
	}
	return 0;

}
