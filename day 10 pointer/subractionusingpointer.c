#include <stdio.h>
void main()
{
    int a=16, b=9, sub;
    int *p1, *p2;
    p1=&a;
    p2=&b;

    sub= *p1 -*p2;

    printf("the subraction of two number using pointer is :- %d", sub);
}