#include <stdio.h>
void main(){
    int a,b,c;
    printf("enter the three angle of triangles:-");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b+c==180){
        printf("the triangle is valid");
    }
    else{
        printf("the triangle is invalid");
    }
}