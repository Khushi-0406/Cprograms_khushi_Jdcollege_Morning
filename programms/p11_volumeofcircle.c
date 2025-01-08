#include <stdio.h>
void main()
{
    int r,h;
    float volume;
    printf("enter the radius of circle:-");
    scanf("%d",&r);
    printf("enter the hieght of circle");
    scanf("%d",&h);
    volume = 3.14*r*r*h;
    printf("the volume of circle is %f",volume);
}

