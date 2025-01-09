#include <stdio.h>
void main()
{
    char ch;
    printf("enter:----");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("the enterd word %c is alphabet",ch);
    }
    else{
        printf("the entered word %c is not alphabet",ch);
    }
}