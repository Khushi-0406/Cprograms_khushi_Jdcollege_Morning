#include <stdio.h>
void main()
{
    int cube, num, i=1;
    printf("enter the number:-");
    scanf("%d",&num);

    while(i<=num)
{
    cube=i*i*i;
    i++;
    printf("the cube of the number up to the integer:-%d\n",cube);

}
}