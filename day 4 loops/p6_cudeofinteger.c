#include <stdio.h>
void main(){
    int cube, n, i;
    printf("enter the number:-");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
    cube=i*i*i;
    }
    printf("the cube :-%d", cube);
}