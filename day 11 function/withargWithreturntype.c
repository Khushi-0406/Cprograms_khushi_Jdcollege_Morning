#include <stdio.h>

// with argument with returntype

int add(int x,int y)
{ int result;
result=x+y;
    return result;
}


void main()
{
int a=7, b=10;
int r;
r= add(a,b);
printf("addition is %d", r);
}