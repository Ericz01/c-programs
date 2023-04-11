#include <stdio.h>
//in an array, find the minimum number

int main(void)
{
	int arr[6] ={5, 6, 8, 4, 8, 9};
     	int i;
	int min;
	min = arr[0];
	for(i = 0; i <= 6; i++)
	{
		if (arr[i] < min)
		       	min =arr[i];
	}
	printf("Minimum: %d\n", min);
	return 0;	
}
