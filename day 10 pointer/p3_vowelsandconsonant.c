#include <stdio.h>
void main()
{
    char word[20];
    int v=0,c=0,l=0;
    char *p1;


    printf("enter a word:-");
    scanf("%s",word);
p1= &word[0];

for(      ; *p1 != '\0' ; p1++)
{      
    
     l++;


    if(*p1=='a' || *p1=='i' || *p1=='e'|| *p1=='o' || *p1=='u' || *p1=='A' || *p1=='E' || *p1=='I' || *p1=='O' || *p1=='U'){
        v=v+1;
    }
    else{
     c=c+1;
    }
}

 printf("the length of the word is %d\n", l);
        printf("the number of vowels is %d\n", v);
         printf("the number of consonant is %d\n", c);
}