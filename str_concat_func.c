#include "header.h"
int str_concatenate( char s1[100],char s2[100])
  {	
    
   int l, j;
 l = 0;
  while (s1[l] != '\0')
  {
    l++;
  }
  for (j = 0; s2[j] != '\0'; j++, l++) 
  {
    s1[l] = s2[j];
  }
 s1[l] = '\0';
 return 0;
}
