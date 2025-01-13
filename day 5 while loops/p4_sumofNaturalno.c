#include <stdio.h>
void main()
{
    int num, i=1,sum=0;
printf("enter the number:-");
scanf("%d",&num);

while(num>=i)
{
    printf("%d",i);
sum=sum+i;
i++;
}
printf("the sum of %d N natural number is %d",num,sum);
}