#include <stdio.h>
void main()
{
    int a[3]={2,1,3}, i, temp,j;

    for(i=0;i<3;i++)
    {
      for(j=1+i;j<3;j++)
      {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
      }
    }

    for(i=0;i<3;i++)
    {
        printf("%d, ", a[i]);
    }

}