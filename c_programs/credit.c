#include <stdio.h>

int main(void)
{
	unsigned long long n, sum = 0, j, rem, newSum;
	//prompt for input
	printf("Number: ");
	scanf("%llu", &n);
	
	//calculate checksum. Start with the ones to be multiplied by 2.
	while (n != 0)
	{
		if(n < 100)//to get the j 
		{
			j = n / 10;
			n = n / 10;
		}
		else//to get j using the the remainder
		{
			rem = n % 100;
			j = rem / 10;
			n = n/100;
		}
			
		if (j >= 5)//multiply each digit by 2
		{
			newSum = (sum + ((j * 2) % 10) + ((j * 2) / 10));
		}
		else
		{
			newSum = (sum + j) * 2;
		}
		sum = sum + j;// to calculate sum of the digits starting with second from last
	}
	printf("Number: %llu\n", newSum);// print the sum of the digits multiplied by 2.
}
