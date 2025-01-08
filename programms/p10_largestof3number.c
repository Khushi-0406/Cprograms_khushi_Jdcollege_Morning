#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a:-");
    scanf("%d",&a);
    printf("enter the value of b:-");
    scanf("%d",&b);
    printf("enter the value of c:-");
    scanf("%d",&c);
    if(a>=b && a>=c){
        printf("a %d is the grater number", a);
    }
    else if(b>=a && b>=c){
        printf("b %d is the greater number", b);
    }
    else{
        printf("c %d is the greater number",c);
    }
}