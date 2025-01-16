#include <stdio.h>
void main()
{
    int a[5]={1,0,3,0,4};

    int newarray[5], k=0,i;

   for(i=0;i<5;i++)
   {
    if(a[i]==0)
    {
        newarray[k]=a[i];
        k++;
    }
   }



    for(i=0;i<5;i++)
    {
        if(a[i] != 0)
        {
            newarray[k]=a[i];
            k++;
        }
    }

    

    for(i=0;i<5;i++)
    {
        printf("%d", newarray[i]);
    }
   
}