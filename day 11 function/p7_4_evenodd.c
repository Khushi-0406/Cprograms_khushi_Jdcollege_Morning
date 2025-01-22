#include <stdio.h>

int evenodd(int num)
{

if(num % 2 == 0)
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
    printf("enter the number:-");
    scanf("%d", &input);

    r=evenodd(input);

    if(r==1)
    {
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
}