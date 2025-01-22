#include <stdio.h>

void prime(int num)
{
int i ,count=0;
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
    printf("the number is prime");
}
else{
    printf("the number is not prime");
}

}

void main()
{
int input;
printf("enter a number:-");
scanf("%d", &input);
prime(input);
}