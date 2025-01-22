#include <stdio.h>

void sum(int num)
{
int result=0,i;

for(i=1;i<=num;i++)
{
    result=result+i;
}
printf("the result is :- %d" , result);
}

void main()
{
    int num;
    printf("enter the number:-");
scanf("%d", &num);
sum(num);
}