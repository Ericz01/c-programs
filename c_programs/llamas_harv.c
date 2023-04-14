#include <stdio.h>
int main()
{
	int start_size, end_size, years=0;
	//Ask user for the start_size. Must be > 9
	do
	{
	printf("Start size: ");
	scanf("%d", &start_size);
	}while(start_size<9);
	
	//Ask user for the end_size. Must be >start size
	do
	{
	printf("End size: ");
	scanf("%d", &end_size);
	}while(start_size > end_size);

	//calculate the years till end_size is reached
	
	do
	{
		start_size = (start_size +(start_size/3)-(start_size/4));
		years++;
	}while(start_size < end_size);


	//print the number of years taken for the population to reach end_size
	printf("Years: %d\n", years);

}
