#include <stdio.h>

    struct student{char name[20]; int rollno; int marks;};


void main()
{
struct student s[3];

printf("enter infromation:-\n");

for(int i=0;i<3;i++)
{
    printf("enter your name:-");
    scanf("%s", s[i].name);
    printf("enter your roll no:-");
    scanf("%d", &s[i].rollno);
    printf("enter your marks:-");
    scanf("%d", &s[i].marks);
}

printf("display infromation:-\n");
for(int i=0;i<3;i++)
{
    printf("name:- %s\n", s[i].name);
    printf("rollNo:- %d\n", s[i].rollno);
    printf("marks:- %d\n", s[i].marks);

}


}