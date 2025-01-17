#include <stdio.h>
void main()
{
    int i,j,sum=0, a[3][3]={{1,2,3},{2,3,4},{1,4,3}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j == 2)
            {
              sum=sum+a[i][j];
            }
        }
    }
    printf("the sum of the left diagonal of the matric is %d", sum);
}