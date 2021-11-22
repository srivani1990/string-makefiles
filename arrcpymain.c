#include<stdio.h>
#include"header.h"
int main()
{
int arr1[]={1,2,3,4,5,6,7,8,5};
int n=sizeof(arr1)/sizeof (arr1[0]);
copyarray(arr1,n);
}

