
// Q11.write a program in c to print 
// A
// AB
// ABC
// ABCD

#include <stdio.h>
void main()
{
    int i,j;
    for(i=65;i<=68;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
}
