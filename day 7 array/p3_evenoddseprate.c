#include <stdio.h>
void main()
{
    int i,j, a[5]={1,2,3,4,5}, evenarray[5],oddarray[5], e=0,o=0;

  for(i=0;i<5;i++)
  {
    if(a[i] %2==0)
    {
        evenarray[e]= a[i];
        e++;
    }
  }

for(i=0;i<5;i++)
  {
    if(a[i] %2 !=0)
    {
        oddarray[o]= a[i];
        o++;
    }
  }
  
printf("the even array is :- ");
for(i=0;i<e;i++)
{
    printf("%d ", evenarray[i] );
}

printf("\nthe odd array is:- ");
for(i=0;i<o;i++)
{
    printf("%d ", oddarray[i] );
}

}