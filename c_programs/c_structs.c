#include <stdio.h>
#include <string.h>

typedef struct
{
   char name[12];
   char id[10];
   int age;
   int grades[5];
} student;

int main()
{
	student eric;
	strcpy(eric.name, "Eric");
	strcpy(eric.id, "38419195");
	eric.age = 23;
	eric.grades[0] = 1;
	eric.grades[1] = 2;
	eric.grades[2] = 3;
	eric.grades[3] = 4;
	eric.grades[4] = 5;

	printf("Age: %d\n", eric.age);
	printf("ID: %s\n", eric.id);
	printf("Name: %s\n", eric.name);
	printf("Grades: ");

	for(int i=0; i<=4; i++)
		printf("%d ", eric.grades[i]);
	printf("\n");


}
