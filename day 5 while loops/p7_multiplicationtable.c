#include <stdio.h>
void main()
{
 int mult=0, num,i=1;   
 printf("enter the number:-");
 scanf("%d",&num);

 while(i<=10)
 {
    mult=num*i;
    printf("%d * %d = %d\n", num,i,mult);
        i++;

 } 
}