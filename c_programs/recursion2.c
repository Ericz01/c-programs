#include <stdio.h>
#include "cs50.h"

//iterating through numbers 1 to 10 using functions "odd" and "even"
//for even numbers, -1 and odd numbers +1
void odd();
void even();
int n = 1;
int main(void)
{
	odd();
	printf("\n");
}
void odd()
{
	if (n <= 10)
	{
		printf("%d ", n+1);
		n++;
		even();
	}
	return;
}
void even()
{
	if (n <= 10)
	{
		printf("%d ", n-1);
		n++;
		odd();
	}
	return;
}
