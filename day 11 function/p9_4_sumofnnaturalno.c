#include <stdio.h>

int sum(int num)
{
int result=0,i;

for(i=1;i<=num;i++)
{
    result=result+i;
}
return result;
}

void main()
{
    int num, r;
    printf("enter the number:-");
scanf("%d", &num);
r=sum(num);
printf("the result is %d", r);
}