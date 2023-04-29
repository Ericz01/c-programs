#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void no_vowels(char c[], char replace, char new);
int main(int argc, char *argv[])
{
	if (argc = 2)
	{
		char *c = argv[1];
		no_vowels(c, 'a', '6');
		no_vowels(c, 'e', '3');
		no_vowels(c, 'i', '1');
		no_vowels(c, 'o', '0');

		printf("%s\n", c);
	
	}
	else
	{
		printf("ERROR: one command line arg needed/n");
		exit(1);
	}
}
void no_vowels(char c[], char replace, char new)
{
	int string =  strlen(c);
	for (int i = 0; i < string; i++)
	{
		if (c[i] == replace)
		{
			c[i] = new;
		}
	}

}
