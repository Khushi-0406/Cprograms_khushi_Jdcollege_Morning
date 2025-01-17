#include <stdio.h>
void main()
{
 int a[3][3]= {{1,2,3},{1,2,3},{1,2,3}},sum=0,i,j;

  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++) {
        if(i==j){
            sum=sum + a[i][j];
        }
    }
  }
   printf("the sum of right diagonal is :-   %d", sum);
}