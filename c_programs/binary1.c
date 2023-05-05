#include <stdio.h>
#include <string.h>

int main(void)
{
	int i;
	char text[50];
	printf("Enter a word: ");
	scanf("%s", text);
	int length = strlen(text);
	for (i = 0; i < 8*length; i++)
	{
		printf("%d", 0 != (text[i/8] & 1 << (~i & 7)));

	}
	printf("\n");
}

