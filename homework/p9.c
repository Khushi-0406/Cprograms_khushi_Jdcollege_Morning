#include <stdio.h>
void main()
{
    int inputdays, y, w, rday,days ;
    inputdays=937;
    y=inputdays/365;
    rday=inputdays%365;  //301
    w=rday/7;
    days=rday%7;
    printf("year %d weeks %d days %d",y,w,days);
}