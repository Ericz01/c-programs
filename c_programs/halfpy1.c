#include <stdio.h>

int main()
/*prints half star pyramid with the flat surface on the right
 *
 */
 {
	int rows, columns, i, space;
       do
       {	       
	printf("Enter number of rows in the pyrmid: ");
	scanf("%d", &rows);
       }while(rows<0 || rows>=50);//limits the number of rows to print to >0 and <50
	for(i = 0; i< rows; i++)
	{
		for(space=0; space <(rows-i-1); space++)//prints spaces before asterik
		{
			printf(" ");
		}
		for(columns=0; columns <= i; columns++)
		{
			printf("*");
		}
		printf("\n");
	}
}
