#include <stdio.h>
void main()
{
    int num;
    printf("enter the number: ");  
    scanf("%d",&num);
    while(num<0)
    {
        printf("enter a positive number,try again: ");
        scanf("%d",&num);
    }
}