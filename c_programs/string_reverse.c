#include <stdio.h>

void reverse(char *a)
{
	if(*a)//to traverse till the last char of the string
	{
		reverse(a+1);//to move to the next character
		printf("%c", *a);// to print from last
	}
}
int main()
{
	char a[6];// array that can store 6 characters
	printf("Enter a name: ");
	scanf("%[^\n]s",a);//scans a string with spaces too
	reverse(a);//recursive function call
	printf("\n");
	return 0;
}
