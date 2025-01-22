#include <stdio.h>

int prime()
{

 int num,i, count=0;
printf("enter a number:-");
scanf("%d", &num);
for(i=1;i<=num;i++)
{
    if(num % i==0 )
    {
       count++;
    }
}

printf("%d\n ", count);

if(count==2)
{
return 1;
}
else{
return 0;}
}

void main()
{
    int r= prime();
if(r==1)
{
    printf("the number is prime number");
}
else{
    printf("the number is not a prime number");
}

}

