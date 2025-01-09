#include <stdio.h>
void main(){
    int a;
    printf("enter the number:-");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
        printf("the %d is divisible by 5 and 11",a);
}