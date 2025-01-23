#include <stdio.h>
#include <string.h>

struct student
{int rollno; char name[20]; char phone[20];};

void main()
{
 struct student s[3];

 for(int i=0;i<3;i++)
 {
   printf("rollno:-");
   scanf("%d", &s[i].rollno);
   printf("name:-");
   scanf("%s", s[i].name);
   printf("number:-");
   scanf("%s", s[i].phone);
 }
    
int i;
printf("details of the student those having 88 in there phone number:-\n");

for(i=0;i<3; i++)
{ 
int len=strlen(s[i].phone);
    if(s[i].phone[len-1] == '8' && s[i].phone[len-2] == '8')
    {
        printf("%d\t", s[i].rollno);
        printf("%s\t", s[i].name);
        printf("%s\t", s[i].phone);
    }
    printf("\n");
}
}
