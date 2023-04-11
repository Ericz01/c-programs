#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int dice = 6;
	int roll = 0;

	for (int i = 1; i <= dice; i++)
	{
		roll = rand() % 6 + 1;
		printf("dice %d: %d\n", i, roll);
	}
	return 0;
}
