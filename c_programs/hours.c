#include <ctype.h>
#include "cs50.h"
#include <stdio.h>

int main()
{
    int i, n, T = 0.0;
    float A;
    char c;
    n = get_int("Enter number of weeks: ");
    int weeks[n];
    for (i = 0; i < n; i++)
    {
        printf("Week[%d] Hours = ", i);
        scanf("%d", &weeks[i]);
       
    }
   for (i = 0; i< n; i++)
   {
	   T = (float) T + weeks[i];
   }
   A = T / (float) n;
   printf("Enter T to get total hours and A to get average hours: ");
   scanf(" %c", &c);
   do
   {
	   c = toupper(c);
   }
   while(c == 116 || c == 97);

   if (c == 84)
   {
  	 printf("Total: %d hours\n", T);
   }
   else if (c == 65)
   {
         printf("Average: %.1f hours\n", A);
   }

}
