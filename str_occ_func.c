#include "header.h"
int check(char *s,char *w)
{
    int n,a[1000],i,j,k=0,l,found=0,t=0;
    
	for(i=0;s[i];i++)
    {
    	if(s[i]==' ')
    	{
    		a[k++]=i;
		}
	}
	a[k++]=i;
	j=0;
	for(i=0;i<k;i++)
	{
		n=a[i]-j;
		if(n==strlength(w))
		{
			t=0;
			for(l=0;w[l];l++)
			{
				if(s[l+j]==w[l])
				{
					t++;
				}
			}
			
		}
		if(t==strlen(w))
		{
				found=1;
				break;
		}
		j=a[i]+1;
	}
 	if(found)
	return j;
    return -1;
 }
