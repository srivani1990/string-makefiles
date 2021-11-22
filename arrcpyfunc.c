#include"header.h"
int copyarray(int arr1[],int n)
{
    int i,arr2[n];
printf("arr2[%d] is \t",n);
for (i=0;i<n;i++)
{
arr2[i]=arr1[i];
printf("%d, ",arr2[i]);
}

}
