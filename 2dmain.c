#include<stdio.h>
#include "header.h"
int main()
{
    int a[2][2],b[2][2],c[2][2];
    int i,j;
        printf("\nEnter four values for First matrix for 2X2 matrix: ");
        input(a);
       
        printf("\nEnter four values for Second matrix for 2X2 matrix: ");
        input(b);

        arr2dsum(a,b,c);

        printf("Sum of given matrices :-\n");

        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
                printf("%d\t",*(*(c + i) + j));
            printf("\n");
        }
    return 0;
}
