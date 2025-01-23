#include <stdio.h>

struct employee{int id; char name[20]; float salary;};

void main()
{
    struct employee e[5];

printf("enter your details.");
    for(int i=1;i<=5;i++)
    {
        printf("enter your employee ID:-");
        scanf("%d", &e[i].id);
        printf("enter your first name:-");
        scanf("%s", e[i].name);
        printf("enter your salary:-");
        scanf("%f", &e[i].salary);
    }

    printf("display information:-");

    for(int i=1;i<=5;i++)
    {
      printf("employee id:-%d", e[i].id);
      printf("employee na,e:-%d", e[i].name);
      printf("employee salary:-%f", e[i].salary);
    }
}