#include <stdio.h>
void main()
{
    char str[20];
    int i,len=0;

    printf("Enter name:-");
    // scanf("%s", str);
    gets(str);


for(i=1;str[i] != '\0';i++){
    len=len +1;
}

printf("%d", len);
}