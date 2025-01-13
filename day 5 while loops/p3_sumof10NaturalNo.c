#include <stdio.h>
void main()
{
int sum=0 , i=1;
while(i<=10)
{
    printf("%d",i);
    sum=sum+i;
    i++;
}
printf("te sum of first 10 natural number:-%d",sum);
}