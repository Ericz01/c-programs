#include <stdio.h>

void update(int *a,int *b) 
{
   *a = (int *pa + int *pb);
   *b = (int *pa - int *pb);   
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);

    return 0;
}
