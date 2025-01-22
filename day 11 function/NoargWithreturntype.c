// No argument with returntype

#include <stdio.h>
int add()
{
    int a=2,b=3;
    int result= a+b;
    return result;
}

void main()
{
    int r;
    r=add();
    printf("%d", r);
}