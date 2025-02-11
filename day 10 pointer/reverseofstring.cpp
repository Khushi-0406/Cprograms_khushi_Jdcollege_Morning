#include <stdio.h>

int main()
{
    int i;
    char name[10]={"khushi"};
    char *ptr;
    ptr=&name[0];
    for(i=6;i>=0;i--)
    {
        printf("%c",*(ptr+i));
    }

}