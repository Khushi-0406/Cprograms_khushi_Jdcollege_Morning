#include <stdio.h>
void main()
{
    char ch;
    printf("enter:-");
    scanf("%c",&ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("the enterd word %c is alphabet",ch);
    }
    else if (ch>='0' && ch<='9'){
        printf("the entered character is number");
    }
    else{
        printf("the entered character is special character");
    }
    }