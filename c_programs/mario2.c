#include <stdio.h>

int main(void)
{
    int space, row, column, i, n;
    printf("Enter the height: ");
    scanf("%d", &row);

    for (i = 0; i < row; i++)
    {
        for (space = 1; space <= (row - i - 1); space++)
        {
            printf(" ");
        }
        for (column = 0; column <= i; column++)
        {
            printf("#");
        }
        printf("  ");
        for (n = 0; n < column; n++)
        {
            printf("#");
        }
        printf("\n");
    }
}
