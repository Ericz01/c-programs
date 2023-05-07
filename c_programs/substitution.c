#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
//GOAL: substitute elements of a string provided with the elements of the key
	//check the user gives one CL arg if not, print "usage: ./substitution"
	if (argc != 2)
	{
		printf("Usage: ./substitution\n");
		return 1;
	}
	//Key consists of alphabets only
	char *key = argv[1];
	for (int i = 0; i < strlen(key); i++)
	{
		if (!isalpha(key[i]))
		{
			printf("Usage: ./substitution\n");
			return 1;
		}
	}
	//key is 26 characters
	if (strlen(key) != 26)
	{
		printf("Key must be 26 characters long\n");
		return 1;
	}
	//no repeated alphabets
	for (int i = 0; i < strlen(key); i++)
	{
		for (int j = (i + 1); j < strlen(key); j++)
		{
			if (toupper(key[i]) == toupper(key[j]))
			{
				printf("Usage: ./substitution\n");
				return 1;
			}
		}
	}
	//prompt for plaintext
	char text[30];
	printf("Text: ");
	scanf("%[^\n]%*c", text);

	//convert elements of the key to uppercase 
	for (int i = 0; i < strlen(key); i++)
	{
		if (islower(key[i]))
		{
			key[i] = key[i] - 32;
		}
	}
	
	//print the ciphertext
	printf("Ciphertext: ");
	for (int i = 0; i < strlen(text); i++)
	{
		if (isupper(text[i]))
		{
			int letter = text[i] - 65;
			printf("%c", key[letter]);
		}
		else if (islower(text[i]))
		{
			int letter = text[i] - 97;
			printf("%c", key[letter] + 32);
		}
		else
		{
			printf("%c", text[i]);
		}
	}
	printf("\n");

}
