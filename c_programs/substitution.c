#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

char key[26];
char CIPHER[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int main(int argc, char *argv[])
{

	//DO: get key
	char *key = argv[1];	string plaintext = get_string("Plaintext: ");
	int string = strlen(plaintext);
	for (int i = 0; i < 26;  i++)
	{
		key[i] = CIPHER[i];
		printf("%c ", key[i]);
	}
	printf("\n");
	for(int j = 0; j < string; j++)
	{
		printf("%c ", plaintext[j]);
	}
	plaintext[j] = key[i];
	printf("\n");
	printf("%c ", plaintext[j]);

//	string plaintext = get_string("Plaintext: ");
//	int string = strlen(plaintext);
//	for  (int j = 0; j < string; j++)
//	{
//		string[j] = key[i];
//		printf("%c", string[i]);
//	}
	

	//DO: validate key
	//if (key != 26)
	//{
	//	printf("key length must be 26\n")
//	}
//	else
//	{
//		//DO: get plaintext
//		string plaintext = get_string("Plaintext: ");
		//DO: Encipher

		//DO: print ciphertext
//		printf("");
//	}
}
//void substitution(char cipher[], char plaintext, char ciphertext)
//{

	
//}
