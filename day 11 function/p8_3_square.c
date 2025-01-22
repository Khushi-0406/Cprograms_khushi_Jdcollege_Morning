// No argument with returntype

#include <stdio.h>
// with arg no return type
void square(int x)
{
    int squ;


    squ=x*x;
    printf("the square of given is %d",squ);


}

void main()
{
int a;
    printf("enter a number:-");
    scanf("%d", &a);
    square(a);

}