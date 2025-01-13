#include <stdio.h>
void main()
{
 int num, prod=1,i=1;
printf("Enter the number up to which you want the product: ");
scanf("%d", &num);

while(i<=num)
{
    prod=prod*i;
    i++;
}
printf("The product of numbers from 1 to %d is: %d\n", num, prod);

}