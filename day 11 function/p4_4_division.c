#include <stdio.h>

// with argument with returntype

int add(int x,int y)
{ int result;
result=x/y;
    return result;
}


void main()
{
int a=700, b=10;
int r;
r= add(a,b);
printf("the result is is %d", r);
}