#include <stdio.h>
void main(){
    float w1, w2,value;
    float p1,p2;
    printf("enter the weight of item and number of purchase:-");
    scanf("%f %f",&w1,&p1);
    printf("enter the weight of item and number of purchase:-");
    scanf("%f %f",&w2,&p2);
    value=(w1*p1+w2*p2)/2;
    printf("the avrage value of items is %f",value);
}