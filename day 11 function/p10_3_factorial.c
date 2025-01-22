#include <stdio.h>

void factorial(int num)
{
    int i,fact=1,sum=0,div;
for(i=1;i<=num;i++)
{
        fact=fact*i;
        div=fact/i;
        printf("%d\n", div);
        sum=sum+div;
}
printf("the sum of the series is %d", sum);
}

void main()
{ int input=5;
    factorial(input);
}