#include <stdio.h>

int evenodd()
{
    int num;
    printf("enter a number:-");
    scanf("%d", &num);

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
int r=evenodd();

if(r==1){
    printf("the number is even");
}
else{
    printf("the number is odd");
}
}