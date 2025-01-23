#include <stdio.h>
void main()
{
    char name[20], *p;
    int l=0;

    printf("enter your name:-");
    scanf("%s", name);

    for(p=&name[0]; *p != '\0';p++)
    {
        l++;
    }

    printf("the length is :- %d", l );
}