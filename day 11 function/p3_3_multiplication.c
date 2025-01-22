// with argument no return type

#include <stdio.h>
void add(int x, int y)
{
    int result;
    result=x*y;
    printf("the result is %d", result);
}

void main()
{
    int a=2, b=5;
    add(a,b);
}