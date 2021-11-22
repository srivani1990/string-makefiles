#include<stdio.h>
#include"header.h"
int main()
{
    int a,b;
    int *pa;
    int *pb;
    pa=&a;
    pb=&b;
    printf("Enter a,b values:");
    scanf("%d %d",&a,&b);
    printf("Before swapping : %d %d",*pa,*pb);
    swap(&a,&b);
    printf("\nAfter swapping : %d %d",*pa,*pb);
    return 0;
}
