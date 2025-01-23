#include <stdio.h>

struct student{char name[30]; int age; int marks;};

void main()
{
    printf("enter your detains:-\n");
    
    struct  student s[5];
    
    for(int i=0;i<5;i++)
{
    printf("enter your name:-");
    scanf("%s", s[i].name);
    printf("enter your age:-");
    scanf("%d", &s[i].age);
    printf("enter your marks:-");
    scanf("%d", &s[i].marks);
}

printf("display infromation:-\n");
for(int i=0;i<5;i++)
{
    printf("name:- %s\n", s[i].name);
    printf("age:- %d\n", s[i].age);
    printf("marks:- %d\n", s[i].marks);

}

}
