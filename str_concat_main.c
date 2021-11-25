#include<stdio.h>
#include<string.h>
#include "header.h"
int main() 
{
    char s1[100];
    char s2[100];
    int l;
    printf("Enter string 1 :");
    fgets(s1,30,stdin);
    printf("Enter string 2 :");
    fgets(s2,30,stdin);
    printf("String 1 : %s",s1);
    printf("String 2 : %s",s2);
    str_concatenate(s1,s2);
    printf("After concatenate:\n%s",s1);
    l=strlength(s1);
    printf("\nAfter concatenate length of string:%d",l);
    return 0;
}

