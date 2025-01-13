#include <stdio.h>
void main()
{
    int sum=0,num,even,i=1;
    printf("enter a number:-");
    scanf("%d",&num);
    while(i<=num)
    {
    even=i*2;
    printf("%d\n",even);
    sum=sum+even;
    i++;
    }
    printf("the sum=%d",sum);
}