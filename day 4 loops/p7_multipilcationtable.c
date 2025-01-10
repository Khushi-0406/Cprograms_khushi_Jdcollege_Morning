#include <stdio.h>
void main(){
    int num, i,tab;
    printf("enter the number:-");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
       tab= num*i;
        printf("%d * %d = %d\n", num,i,tab);
    }
}