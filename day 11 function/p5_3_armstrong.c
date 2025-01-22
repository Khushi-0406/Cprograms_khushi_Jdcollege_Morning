#include <stdio.h>

void armstrong(int num)
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

if(res==org){
printf("the number is armstrong.");
}
else{
    printf("the number is not an armstrong.");
}

}

void main()
{
int input;
printf("enter a number:-");
scanf("%d", &input);
armstrong(input);


}