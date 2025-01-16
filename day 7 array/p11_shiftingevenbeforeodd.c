#include <stdio.h>
void main()
{
    int i, k=0, newarray[5],array[5]={1,2,3,4,5};

  for(i=0;i<5;i++)
  {
    if(array[i] % 2==0)
    {
        newarray[k]=array[i];
        k++;
    }
  }
  

  for(i=0;i<5;i++)
  {
    if(array[i] %2 !=0)
    {
        newarray[k]=array[i];
        k++;
    }
  }


  for(i=0;i<5;i++)
  {
    printf("%d ", newarray[i]);
  }


}