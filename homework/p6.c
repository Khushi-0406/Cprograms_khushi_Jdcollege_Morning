#include <stdio.h>
void main()
{
    char a,b,c,d;
    a='x';
    b='m';
    c='l';

d=a;
a=c;
c=d;
printf("%c %c %c",a,b,c);
}