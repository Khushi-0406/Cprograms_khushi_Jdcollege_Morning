#include <stdio.h>
void main(){
    int num, i,sum,odd;
        printf("enter the number:-");
        scanf("%d", &num);
    
    for(i=1;i<=num;i++)
    {   if (i % 3 ==0 ||(i==1))
    {
        printf("\n%d", i);
        sum=sum+i;
    }
    }
    printf("\n sum of odd numbers are:- %d",sum);
}