#include <stdio.h>
void main()
{
    int age;
    printf("enter the age:-");
    scanf("%d", &age);
    if (age>=18 && age<=60){
        printf("you are young ");
    }
    else if(age<18){
        printf("you are child");
    }
    else{
        printf("your are old now");
    }
}