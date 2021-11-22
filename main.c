#include"header.h"
#include<stdio.h>
int main()
{
 int a,b,res1,res2;
 printf("Enter values:");
 scanf("%d %d",&a,&b);
 res1=sum(a,b);
 res2=sub(a,b);
 printf("Sum=%d/n",res1);
 printf("Difference=%d",res2);
 return 0;
 }
 
