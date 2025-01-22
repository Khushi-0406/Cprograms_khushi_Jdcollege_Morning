#include <stdio.h>

void sum()
{
  int num, sum=0,i;

printf("enter the number:-");
scanf("%d", &num);

for(i=1;i<=num;i++)
{
    sum=sum+i;
}
printf("the sum of the N natural number is :- %d", sum);

}

void main()
{
    sum();
}