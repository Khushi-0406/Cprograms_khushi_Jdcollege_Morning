#include <stdio.h>
void main()
{
    int sum=0,num,odd,i=1;
    printf("enter a number:-");
    scanf("%d",&num);
    while(i<=num)
    {
    odd=i*2-1;
    printf("%d\n",odd);
    sum=sum+odd;
    i++;
    }
    printf("the sum=%d",sum);
}