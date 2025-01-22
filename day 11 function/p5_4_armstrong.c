#include <stdio.h>

int armstrong(int num)
{
    int rev, d,res=0;
int org=num;

while(num>0)
{   
rev=d/10;
d=num%10;
res=res+ (d*d*d);
num=num/10;
}
printf("%d\n", res);

if(res ==org){
    return 1;
}
else{
    return 0;
}
}


void main()
{
    int input,r;
    printf("enter a number:-");
    scanf("%d", &input);
 r= armstrong(input);

 if(r==1)
 {
    printf("the number is armstrong.");
 }
 else{
    printf("the number is not an armstrong.");
 }
}