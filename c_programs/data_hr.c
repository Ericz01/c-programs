#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    //int i = 4;
   // double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int n;
    float dd;
    char string[55];
    
    // Read and save an integer, double, and String to your variables.
 //   scanf("%i", &n);
  //  scanf("%f", &dd);
    scanf("%[^\n]s", string);
    // Print the sum of both integer variables on a new line.
  //  printf("%i\n", n+i);
    // Print the sum of the double variables on a new line.
  //  printf("%.1f\n", dd+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s%s\n", s, string);

    return 0;
}
