#include <stdio.h>
void main()
{
    int a[3]={1,2,3}, i, j, max;
    

    for(i=0;i<3;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
   
   printf("maximum value in the array is %d", max);
}