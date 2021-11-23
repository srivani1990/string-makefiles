#include "header.h"
void arr2dsum(int mat1[2][2], int mat2[2][2], int res[2][2])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            *(*(res + i) + j) =(*(*(mat1 + i) + j))+(*(*(mat2 + i) + j));
        }
    }
}
