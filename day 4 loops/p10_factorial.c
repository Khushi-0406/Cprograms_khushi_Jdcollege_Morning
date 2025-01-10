#include <stdio.h>
void main(){
    int fact=1, i,num;
    printf("enter the number:-");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("the factorial of %d number is:-%d", num, fact);
}