#include<stdio.h>
#include<string.h>
#include "header.h"
int main()
{
    char s[100],w[100]; 
	int n; 
     printf("Enter  the string : ");
    fgets(s,100,stdin);
    printf("Enter word to be searched: ");
    fgets(w,100,stdin);
    n=check(s,w);
    if(n>=0)
     printf("word %s is first occurred at location:%d ",w,n);
    else
     printf("word %s is not occurred in the string ",w);
}
