// No argument with returntype

#include <stdio.h>

int square()
{
    int num, squ;

    printf("enter a number:-");
    scanf("%d", &num);

    squ=num*num;
    return squ;

}

void main()
{
int r;
r=square();
printf("the square of given is %d",r);

}