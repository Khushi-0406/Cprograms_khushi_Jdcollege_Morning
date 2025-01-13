#include <stdio.h>
void main()
{
    int sum=0, avg, i=1, num;
    while(i<=10)
    {
        printf("the enter the number");
        scanf("%d", &num);
        sum=sum+num;
        avg=sum/10;
        i++;
        
    }
    printf("the sum of N natural number:-%d\n",sum);
    printf("the avrage of N natural number:-%d",avg);

}