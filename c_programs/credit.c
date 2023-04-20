#include <stdio.h>

int main(void)
{
	unsigned long long n, i;
       	int sum = 0, j, rem, k, newSum = 0, checkSum, first, third, first2, count = 0;//k=individual alternate numbers from last.
	//prompt for input
	printf("Number: ");
	scanf("%llu", &n);
	i = n;
	
	//calculate checksum. Start with the ones to be multiplied by 2.
	while (n != 0)
	{
		if(n < 100)//to get j where no remainder is needed since n<100
		{
			j = n / 10;
			k = n % 10;
			first = j;

			if (n < 10)
			{
				first2 = third;
			}
			else
			{
				first2 = n;
			}
			n = 0;
		}
		
		else//to get j using the remainder
		{
			rem = n % 100;
			j = rem / 10;
			k = rem % 10;
			if (n < 1000)
			{
				third = n /10;
			}
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
		checkSum = sum + newSum;
	}
	while (i != 0)
	{
		i = i / 10;
		count++;
	}
	printf("Count: %d\n", count);
	if (checkSum % 10 == 0)
	{
		if (first == 4 || first2 / 10 == 4)//Visa
		{
			if(count > 12)
			{
				printf("Number: %d\nVALID\nVISA\n", first);// print the sum of the digits multiplied by 2.
			}
			else
			{
				printf("INVALID\n");//invalid3
			}
		}
		else if (first2 == 34 || first2 == 37)//AMEX
		{
			printf("Number: %d\nVALID\nAMEX\n", first2);
		}
		else if (first2 == 51 || first2 == 52 || first2 == 53 || first2 == 54 || first2 == 55)//MASTERCARD
		{
			printf("Number: %d\nVALID\nMASTERCARD\n", first2);
		}
		else
		{
			printf("%d\nINVALID\n", first2);//INVALID1
		}
	}
	else
	{
		printf ("INVALID\n");//invalid2
	}
}
