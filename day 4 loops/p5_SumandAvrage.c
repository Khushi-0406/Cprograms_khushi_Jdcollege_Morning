#include <stdio.h>
void main()
{
int n,i, sum=0,avg;
for(i=1;i<=10;i++){
    printf("enter the number:-");
    scanf("%d",&n);
    sum=sum+n;
}
avg=sum/10;
printf("the sum is :- %d",sum);
printf("\nthe avrage is :- %d",avg);
}

    