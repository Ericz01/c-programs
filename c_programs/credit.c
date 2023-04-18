#include <stdio.h>

int main(void)
{
	unsigned long long n, sum = 0, j, rem, k, newSum = 0, checkSum, first, first2;//k=individual alternate numbers from last.
	//prompt for input
	printf("Number: ");
	scanf("%llu", &n);
	
	//calculate checksum. Start with the ones to be multiplied by 2.
	while (n != 0)
	{
		if(n < 100)//to get j where no remainder is needed since n<100
		{
			j = n / 10;
			k = n % 10;
			first = j;
			first2 = n;
			n = 0;
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
	checkSum = sum + newSum;
	if ((checkSum % 10) == 0)
	{
		if (first == 4);
		{
			printf("Number: %llu\nVALID\nVISA\n", checkSum);// print the sum of the digits multiplied by 2.
		}
	}
	else
	{
		printf("Number: %llu\nINVALID\n", checkSum);
	}
}
