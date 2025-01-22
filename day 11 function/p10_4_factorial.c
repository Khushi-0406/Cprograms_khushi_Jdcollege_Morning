#include <stdio.h>

int factorial(int num)
{
    int i,fact=1,sum=0,div;
for(i=1;i<=num;i++)
{
        fact=fact*i;
        div=fact/i;
        printf("%d\n", div);
        sum=sum+div;
}
return sum;
}

void main()
{
    int input=5, r;
r=factorial(input);
printf("the result is %d", r);
}