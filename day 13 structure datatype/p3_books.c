#include <stdio.h>

struct book{char title[20]; char author[30]; int price;};

void main()
{

    struct book b[5];
    printf("enter the book details:-\n");
int i;
    for(i=0;i<5;i++)
    {
       printf("enter title of the book:-");
       scanf("%s",b[i].title);
       printf("enter name of the author:-");
       scanf("%s",b[i].author);
       printf("enter the price:-");
       scanf("%d",&b[i].price);
    }

    printf("the details is :-\n");

    for(i=0;i<5;i++)
    {
        printf("the titile of the book:-%s\n",b[i].title);
        printf("the author of the book:-%s\n",b[i].author);
        printf("the price of the book:-%d\n",b[i].price);
    }
}