#include <stdio.h>
void main()
{
 int a[5]={1,2,3,4,5}, i, copy[5];

 for(i=0;i<5;i++)
 {
    copy[i]=a[i];

 }
  printf("the copy array is:-" );
 
  for(i=0;i<5;i++)
  {
    printf("%d", copy[i]);
  }
}