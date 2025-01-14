// write a program in c to print 
// 54321
// 54321
// 54321
// 54321

#include <stdio.h>
void main()
{

    int r,c;

    for(r=1;r<=5;r++)
    {

        for(c=5;c>=1;c--)
        {
            printf("%d", c);
        }

        printf("\n");
    }
}



