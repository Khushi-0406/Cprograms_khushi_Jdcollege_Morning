// Q4.write a program in c to print 
// 55555
// 44444
// 33333
// 22222
// 11111

#include <stdio.h>
void main()
{
int r,c;
for(r=5;r>=1;r--)
{
    for(c=1;c<=5;c++)
    {
        printf("%d",r);
    }
    printf("\n");
}
}

/*

#include <stdio.h>
void main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
          for(c=1;c<=5;c++)
          {
             printf("%d",r+6-2*r);
          }

    printf("\n");
    }
}

*/