#include <stdio.h>

int sum()
{
  int num, result=0,i;

printf("enter the number:-");
scanf("%d", &num);

for(i=1;i<=num;i++)
{
    result=result+i;
}
 return result;
}

void main()
{
   int r = sum();
    printf("the sum of the N natural number is :- %d", r);

}