#include <stdio.h>
void main(){
    int a,b,c;
    printf("enter the three sides of the triangle;-");
    scanf("%d %d %d", &a,&b,&c);
    if((a+b>c)&&(b+c>a)&&(a+c>b)){
        printf("valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
}