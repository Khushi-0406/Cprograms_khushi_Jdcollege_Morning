#include <stdio.h>
void main()
{  int num, amst,i ,org ,cube2, rem,cube,rem2;
    printf("enter the number:-");
    scanf("%d",&num);
    org=num;

    while(num!=0)
    {
 rem=num%10;
 rem2= num/10;
 cube= rem*rem*rem;
 rem2=num%10;
 cube2=rem2*rem2*rem2;

 amst=cube+cube2;
    }
    printf("%d", org);
    printf("%d", amst);
        printf("%d", cube);

}