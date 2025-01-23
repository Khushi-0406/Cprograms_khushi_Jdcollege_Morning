#include <stdio.h>
void main()
{
    int a,b;
    int *p1, *p2;
    p1=&a;
    p2=&b;

    printf("enter first number:-");
    scanf("%d", p1);
    
    printf("enter second number:-");
    scanf("%d", p2);

    if(*p1 >= *p2)
    {
        printf("the first number %d is greater",*p1);
    }
    else
    {
        printf("the second number %d is greater ", *p2);
    }
}