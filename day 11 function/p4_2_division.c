#include <stdio.h>

int divide()
{ int a=60, b=5;
    int result=a/b;
    return result;
}

void main()
{
   int r= divide();
   printf("the result is %d", r);
}