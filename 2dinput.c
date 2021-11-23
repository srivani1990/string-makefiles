#include "header.h"
#include <stdio.h>
void input(int mat[2][2])
{
    int r, c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<2;c++)
        {
            scanf("%d", (*(mat + r) + c));
        }
    }
}
