#include <stdio.h>
void main()
{ int id;
 float hour, ttlwork,amt,salary;
 printf("enter your employee id:- ");
 scanf("%d",&id);
 printf("enter your number of hours you work per day:- ");
 scanf("%f",&hour);
 printf("enter your amount you recived per hour:- ");
 scanf("%f",&amt);
 salary=hour*amt;
 printf("employee id %d and salary is %.2f $",id, salary);
 }