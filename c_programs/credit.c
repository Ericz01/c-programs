#include <stdio.h>

int main(void)
{
	unsigned long long n, sum = 0, j, rem, k, newSum = 0, checksum;//k=individual alternate numbers from last.
	//prompt for input
	printf("Number: ");
	scanf("%llu", &n);
	
	//calculate checksum. Start with the ones to be multiplied by 2.
	while (n != 0)
	{
		if(n < 100)//to get j where no remainder is needed since n<100
		{
			j = n / 10;
			n = n / 10;
			k = n+1;
		}
		
		else//to get j using the the remainder
		{
			rem = n % 100;
			j = rem / 10;
			k = rem % 10;
			n = n/100;
		}
		//multiply j by 2 and add the products. Where j
		if (j < 5)
		{
		j = j * 2;
		}
		else
		{
			j = ((j*2) % 10) + ((j * 2) / 10);
		}
			
		sum = sum + j;// to calculate sum of the sum of alternate digits(j) multiplied by 2 from the second to last.
		newSum = newSum + k;
	}
	printf("Number: %llu\n", newSum);// print the sum of the digits multiplied by 2.
}
