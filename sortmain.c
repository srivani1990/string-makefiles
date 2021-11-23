#include<stdio.h>
#include "header.h"
int main()
{
    int a[100],i,n;
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
     
     sort(a,n);
     sortprint(a,n);
}
