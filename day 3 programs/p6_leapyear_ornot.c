#include <stdio.h>
void main(){
    int a;
    printf("enter the year;-");
    scanf("%d",&a);
    if(a%4==0 && (a%100!=0 || a%400==0)){
        printf("the %d year is leap",a);
    }
    else{
        printf("the %d year is not leap",a);
    }
}