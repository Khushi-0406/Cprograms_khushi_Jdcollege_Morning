#include <stdio.h>

void sub(int x, int y)
{
    int sub;
    x=100;
    y=90;
    sub=x-y;
    printf("the result is %d", sub);

}

void main()
{
    int a=10, b=5;
    sub(a,b);
}