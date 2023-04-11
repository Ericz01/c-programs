#include <stdio.h>

int main()
{
	double c, f, startvalue, step, endvalue;
	printf("Enter your celcius degree start value: ");
	scanf("%lf", &startvalue);
	 printf("Enter the step value: ");
	 scanf("%lf", &step);
	 printf("Enter your end value: ");
	 scanf("%lf", &endvalue);
	printf("C           F\n");
	 for(c=startvalue; c<=endvalue; c+=step)
	 {
		f = (c*1.8)+32;
		printf("%-8.2lf %8.2lf\n", c, f);
	}
		
	return (0);	
}
