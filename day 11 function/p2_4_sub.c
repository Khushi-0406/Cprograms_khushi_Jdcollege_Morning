#include <stdio.h>

int add(int x,int y)
{ int result;
result=x-y;
    return result;
}


void main()
{
int a=297, b=101;
int r;
r= add(a,b);
printf("subraction is %d", r);
}