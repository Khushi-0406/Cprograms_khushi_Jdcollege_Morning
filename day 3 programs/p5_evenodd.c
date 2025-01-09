#include <stdio.h>
void main(){
    int a;
    printf("enter a number:-");
    scanf("%d",&a);
    if(a%2==0){
        printf("the %d is the even number",a);
    }
    else{
        printf("the %d is the odd number",a);
    }
}