#include <stdio.h>
void evenodd()
{
    int num;

    printf("enter a number:-");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("%d the number is even", num);
    }
    else{
        printf("%d the number is odd", num);
    }
}

void main()
{
  evenodd();
}