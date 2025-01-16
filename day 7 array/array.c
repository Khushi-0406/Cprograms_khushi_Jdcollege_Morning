#include <stdio.h>
void main()
{   
//    declartion of array
    int b[100];
    char ch[50];


//   initilization of array
    int d[5]={1,2,3,4,5};



// dyanamic initilization

    int a[3];
    int i;
    printf("enter array element:-");

    for(i=0;i<3;i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("%d ", a[i]);
    }
}