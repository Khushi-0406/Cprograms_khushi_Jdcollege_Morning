#include <stdio.h>

// with argument with returntype

int add(int x)
{ int result;
result=x*x;
    return result;
}


void main()
{
int a=7;
int r;
r= add(a);
printf("square of given number is %d", r);
}