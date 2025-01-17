#include <stdio.h>
void main()
{
    int a[3][3], b[3][3], i, j ,isequal=1;

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


for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            if(a[i][j] == b[i][j])
            {
                isequal=0;
            }
        }
    
    }

    
if(isequal== 0)
    {
        printf("The both matrix is equal");
    }
else{
    printf("the matrixes are not equal");
}
}