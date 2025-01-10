#include <stdio.h>
void main(){
    int num;
printf("enter the positive number:-");
scanf("%d",&num);
for(  ;num<0;  ){
    printf("enter the positive number,try again");
    scanf("%d", &num);
}
}