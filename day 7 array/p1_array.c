#include <stdio.h>
void main()
{
    int a[12], i;

    printf("enter the elements of array:-");

    for(i=0;i<12;i++)
    {
       scanf("%d", &a[i]);
    }

    for(i=0;i<12;i++)
    {
        printf("%d,",a[i]);
    }
}