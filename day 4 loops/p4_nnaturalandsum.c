#include <stdio.h>
void main()
{
int n,i, sum=0;
printf("enter the n term of natural numbers:-\n");
scanf("%d", &n);
for(i=1; i<=n; i++){
    printf("%d",i);
    sum=sum+i;
}
printf("the sum of n natural no. is :-%d",sum);
}