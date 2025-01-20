#include <stdio.h>
void main()
{
    char str1[20], str2[20];
    int i,j, isequal = 1;

    printf("enter first word:-");
    scanf("%s", &str1);

    printf("enter second word:-");
    scanf("%s", &str2);


for(i=0;str1[i] != '\0';i++)
{
    for(j=0; str2[j] != '\0';j++)
    {
     if(str1[i] !=str2[i])
       {
        isequal=0;
       }
    }
}
if(isequal== 1)
    {
    printf("The both string is equal.");
    }
else{
    printf("the both string is not equal.");
}
}

