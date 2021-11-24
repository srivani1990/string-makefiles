#include<stdio.h>
#include "header.h"
int main()
{
     char s[1000]; 
     int x; 
     printf("Enter  the string: ");
    fgets(s,100,stdin);
    x = palindrome(s);
      if(x==1)
      {
 	    printf("string is palindrome");
      }
    else
    {
        printf("string is not palindrome");
    }
 return 0;
}
