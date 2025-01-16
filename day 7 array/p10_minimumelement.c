#include <stdio.h>
void main()
{
    int min, a[5]={3,2,1},i;

       for(i=0;i<3;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
   
   printf("maximum value in the array is %d", min);
}
