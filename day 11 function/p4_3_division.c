// with argument no return type

#include <stdio.h>
void add(int x, int y)
{
    int result;
    result=x/y;
    printf("%d", result);
}

void main()
{
    int a=200, b=5;
    add(a,b);
}