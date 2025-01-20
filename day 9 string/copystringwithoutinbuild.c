#include <stdio.h>
void main()
{
   char str1[20], str2[20];
   int i;

printf("enter the string:-");
scanf("%s", str1);

for(i=0; str1[i] != '\0';i++)
{
      str2[i]= str1[i];

}

str2[i] = '\0';
      printf("the copied string is %s",str2);
}