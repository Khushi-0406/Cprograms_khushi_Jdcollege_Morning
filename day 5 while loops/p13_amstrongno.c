#include <stdio.h>
void main()
{
  int num, rev,d,res=0;
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
if(res==org)
{
    printf("the %d is armstrong number", org);
}
else{
    printf("the %d is not a armstrong number", org);
}

}
