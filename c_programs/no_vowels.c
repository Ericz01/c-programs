#include "cs50.h"
#include <stdio.h>

int main (int argc, char *argv[])
{
	int i, j;
	if (argc != 2)
	{
		printf("Enter one command line argument\n");
	}
	else
	{
		printf("Hello, %s\n", argv[1]);
	}
	printf("%s\n", argv[1]);
	for (int i = 0, j = 0; i < argc; i++)
		while (argv[i] [j])
			{
				printf("[%c]/t", argv[i][i++]);
			}
	printf("/n");
}
