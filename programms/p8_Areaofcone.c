#include <stdio.h>
int main()
{
    float area,r ,h;
    printf("enter the radius of cone:-");
    scanf("%f",&r);
    printf("enter the slant hight of cone:-");
    scanf("%f",&h);
    area= (3.14*r *(r+h));
    printf("the area of cone is %f",area);
}
