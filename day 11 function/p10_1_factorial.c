#include <stdio.h>

void factorial()
{
int i,fact=1,sum=0,div;
for(i=1;i<=5;i++)
{
    
        fact=fact*i;
        div=fact/i;
        printf("%d\n", div);
        sum=sum+div;
}
printf("sum of the factorial of the series is:-%d", sum);
}

void main()
{
    factorial();
}