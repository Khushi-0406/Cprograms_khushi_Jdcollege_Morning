#include <stdio.h>
void main(){
    char ch;
    printf("enter the character:-");
    scanf("%c", &ch);
    if(ch>='A' && ch<= 'Z'){
        printf("the character is upper case ");
    }
    else{
        printf("the charcter is lower case");
    }
}