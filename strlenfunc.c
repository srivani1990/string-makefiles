#include"header.h"
int strlength(char *p)
{
 int count = 0;
   while (*p != '\0') 
   {
      count++;
      p++;
   }
   return count;
}
