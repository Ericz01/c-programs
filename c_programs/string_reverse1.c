#include <stdio.h>

void print_reverse(char *s)

{
	if (*s != '\0')
	{
		print_reverse(s + 1);
		printf("%c", *s);//print_reverse calls T
	}		//Before it prints T, the loop repeats and thus it calls h, i, s, backspace without printing till reaching the specified '/0'.
			//this then enables reverse print from 'c'
}

int main()
{
	printf("This is Eric\n");
	char s[] = "This is Eric";
	print_reverse(s);
	printf("\n");

	return 0;
}

