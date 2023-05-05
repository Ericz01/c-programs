#include "cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
	char *word;
	int counter;
	word = get_string("Text: ");
	for (int i = 0; word[i] != '\0'; i++)//iterate through the string word up to the null terminator '\0'
	{
		counter = word[i];// assign the present value to counter
		for (int j = 7; (j + 1) > 0;j--)//get the binary of word[i]
		{
			if (counter >= (1 <<  j))//j is >= to i shifted by j places
			{
				counter = counter - (1 << j);
				printf("1");

			}
			else 
			{
				printf ("0");
			}
		}
		printf("\n");

	}
	 

}

