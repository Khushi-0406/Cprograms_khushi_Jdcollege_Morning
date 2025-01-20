#include <stdio.h>
#include <string.h>

void main()
{
    char str1[]="heyyyy";
    char str2[]= "good moring";
    char str3[]="heyyyy";

    printf("%s", strcmp(str1,str2));
    printf("%s", strcmp(str1,str2));
}