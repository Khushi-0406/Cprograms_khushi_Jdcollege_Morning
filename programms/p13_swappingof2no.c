#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:- ");
    scanf("%d",&a);
    printf("enter the value of b:- ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping tha value of a is %d and value of b is %d",a,b);
}
