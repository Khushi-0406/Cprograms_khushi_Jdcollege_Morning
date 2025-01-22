#include <stdio.h>

void square()
{
    int num, squ;

    printf("enter a number:-");
    scanf("%d", &num);

    squ=num*num;

    printf("the square of %d is %d", num,squ);
}

void main()
{
    square();
}