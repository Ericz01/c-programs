#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include "cs50.h"

bool checkPassword(char *p);
int main()
{
	string p = get_string("Enter pasword: ");
	bool result = checkPassword(p); 
	if (result) printf ("Verified pasword!\n");
	else printf("Invallid password. The password should be 6 chars + and contain atleast one upper, one lowercase and one special char\n");

}
bool checkPassword(char *p)
{
	int string = strlen(p);
	if (string < 6) return false;

	bool upperCase = false;                                                                                                                                                   bool lowerCase = false;                                                                                                                                                   bool symbol = false;                                                                                                                                                      bool digit = false; 

	for (int i = 0; i < string; i++)
	{
		if (isupper(p[i])) upperCase = true;
		if (islower(p[i])) lowerCase = true;
		if (isdigit(p[i])) digit = true;
		if (ispunct(p[i])) symbol = true;

	}
	if (!upperCase) return false;
	if (!lowerCase) return false;
	if (!symbol) return false;
	if (!digit) return false;

	return true;

}

