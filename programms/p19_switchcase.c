#include <stdio.h>
void main()
{
    int no;
    printf("enter the 1,2,3,4,5,6,7,8 or 9:- ");
    scanf("%d",&no);
    switch (no)
    {
    case 1:
    printf("ONE");
        break;
    case 2:
    printf("TWO");
        break;
    
    case 3:
    printf("THREE");
    break;

    case 4:
    printf("FOUR");
    break;

    case 5:
    printf("FIVE");
    break;

    case 6:
    printf("SIX");
    break;

    case 7:
    printf("SEVEN");

    case 8:
    printf("EIGHT");
    break;

    case 9:
    printf("NINE");
    break;
    
    default:
    printf("ZERO");
        break;
    }
}