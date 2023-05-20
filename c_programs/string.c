#include <stdio.h>

int main(void)
{
    char string1[] = "Hackerank ";
    char string[55];
    scanf("%[^\n]", string);
    printf("%s%s\n", string1, string);
}
