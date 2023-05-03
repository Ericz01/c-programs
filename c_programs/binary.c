#include "cs50.h"
#include <stdio.h>

int main(int argc, char argv)
{
	int input[] = {1, 2, 3, 4, 5};
	int n, binary = 0, counter = 1, rem = 0;
//	n = get_int("Number: ");
	for (int i = 0; i < 5; i++)
	{
		n = input[i];
		while (n)
		{
			rem = n % 2;
			n = n / 2;
			binary = binary + (rem * counter);//to get the binary number
			counter = counter * 10;//*10 to increment the number and add a 0 in each iteration
//			printf("%d", rem);

		}
		printf("%d\t", n);
		printf("\n");
		printf("%08d\n", binary);
		n++;
	}
	printf("\n");
}

int input(int input[])
{

}
