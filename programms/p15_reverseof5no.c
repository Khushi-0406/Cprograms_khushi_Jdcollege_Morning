#include <stdio.h>
void main()
{
    int d1,d2,d3,d4,d5,rev,num;
    printf("enter the five digit number:- ");  //12345
    scanf("%d",&num);
    d1=num%10;   //5
    num=num/10;  //1234
    d2=num%10;   //4
    num=num/10;  //123
    d3=num%10;   //3
    num=num/10;  //12
    d4=num%10;   //2
    num=num/10;  //1
    d5=num%10;   //1
    rev=d1*10000+d2*1000+d3*100+d4*10+d5;
    printf("the reverse of given number is %d",rev);
}