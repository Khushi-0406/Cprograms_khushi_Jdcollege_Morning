#include <stdio.h>
void main(){
    int sp, cp, profit,loss;
    printf("Enter the cost price:-");
    scanf("%d",&cp);
    printf("enter the selling price:-");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    printf("the profit is :- %d\n",profit);
    printf("the loss is :- %d",loss);
}
