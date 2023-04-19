#include <stdio.h>

int main()
{
	int checksum, first, first2;
	//printf("First: ");
	//scanf("%d", &first);
	printf("First2: ");
	scanf("%d", &first2);
	printf("Checksum: ");
	scanf("%d", &checksum);
	if(checksum % 10 == 0)
	{
		if(first2 == 51 || first2 == 52 || first2 == 53 || first2 == 54 || first2 == 55)
		{
			printf("MASTERCARD\n");
		}
		else
		{
			printf("Not valid\n");
		}
	}
	else 
	{
		printf("INVALID\n");
	}

}
