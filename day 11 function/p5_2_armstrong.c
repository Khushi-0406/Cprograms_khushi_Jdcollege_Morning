#include <stdio.h>

int armstrong()
{
int num, rev, d,res=0;
printf("Enter a number:-");
scanf("%d", &num);
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

    int r=armstrong();
if(r==1)
{
    printf("the number is an armstrong number");
}
else{
    printf("the number is not an armstrong number");
}

}