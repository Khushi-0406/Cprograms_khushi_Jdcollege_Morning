#include <stdio.h>
void main()
{
int a;
printf("enter the number:-");
scanf("%d",&a);
if(a>0){
    printf("the %d number is positive number", a);
}
else if(a<0){
    printf("the %d number is negative number", a);
}
else{
    printf("the %d number is zero",a);
}
}