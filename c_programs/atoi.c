#include "cs50.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);
int main(void)
{
	string input = get_string("Positive int: ");
	for (int i = 0; n = strlen(input); i++)
	{
		if (!isdigit(input[i]))
		{
			printf("Invalid input\n");
			return 1;
		}
	}
	//convert string to int
	printf("%i\n", convert(input));
	
}

int convert(string input)
{
	int length = strlen(input);
	for (int i = 0; i < length; i++)
	{
		
	}
}
