#include <stdio.h>
void main()
{
    int a[5]={1,2,3,4,5},i, sum=0;

    for(i=0;i<5;i++)
    {  
       
       sum=sum+a[i];

    }
    printf("the sum of the element of array is :- %d", sum);
}