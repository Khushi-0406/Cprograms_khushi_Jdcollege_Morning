#include <stdio.h>
void main()
{
    int base,height;
    float area;
    printf("enter the base of triangle:-");
    scanf("%d",&base);
    printf("ether the height of triangle:-");
    scanf("%d",&height);
    area= 0.5*base*height;
    printf("the area of triangle is %f",area);
}