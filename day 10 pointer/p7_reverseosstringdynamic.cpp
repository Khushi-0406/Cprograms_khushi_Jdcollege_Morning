#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char name[50];

    printf("Enter your name:-");
    scanf("%s", name);

    int len= strlen(name);

    char *ptr;
    ptr= &name[0];


    printf("The reverse of %s is:-", name);
    for(i=(len-1);i>=0;i--)
    {
        printf("%c", *(ptr+i));
    }

}
