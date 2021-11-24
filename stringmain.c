#include<stdio.h>
#include<string.h>
#include"header.h"
int main()
{
	char s1[20];
	char s2[20];
	int l;
        printf("Enter a string:");
        fgets(s1,30,stdin);
	stringcopy(s2, s1);
	printf("After copying: %s", s2);
	l=stringlen(s1);
	printf("Length of String is %d", l);
	return 0;
}
