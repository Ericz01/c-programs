#include "cs50.h"
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string input);
int main(void)
{
	string input = get_string("Positive int: ");
	for (int i = 0; i < strlen(input); i++)
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
	//base case. If only one digit
	if (length == 1)
	{
		return input[0] - '0';
	}
	char lastDigit = input[length - 1];
	int convertedDigit = lastDigit - '0';
	input[length - 1] = '\0';
	//return the value plus 10* the int value of the snhortened string
	return convertedDigit + 10 * convert(input);
}
