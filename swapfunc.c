#include"header.h"
int swap(int *pa,int *pb)
{
    int temp=*pa;
   *pa=*pb;
   *pb=temp;
    return 0;
}
