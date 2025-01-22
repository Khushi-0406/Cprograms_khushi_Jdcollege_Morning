#include <stdio.h>

int prime(int num)
{

 int i, count=0;

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
return 0;
}
}

void main()
{
    int input,r;
printf("enter a number:-");
scanf("%d", &input);
   r= prime(input);

   if(r==1)
   {
    printf("the number is prime");
   }
   else{
    printf("the number is not prime");
   }
}

