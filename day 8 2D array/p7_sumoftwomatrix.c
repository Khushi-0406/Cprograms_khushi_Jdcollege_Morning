#include <stdio.h>
void main()
{
    int a[3][3] , b[3][3], sum[3][3], i,j;


printf("enter the first element of the matric:-");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

printf("enter the element of the second matric:-");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

for(i=0;i<3;i++){
    for(j=0;j<3;j++)
    {
        sum[i][j]= a[i][j] + b[i][j];
    }
}

printf("sum of the two matrix is :-");
    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}