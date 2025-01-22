#include <stdio.h>

void evenodd(int num)
{

    if(num % 2 == 0)
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
    evenodd(input);
}