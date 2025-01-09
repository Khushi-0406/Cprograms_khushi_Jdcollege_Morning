#include <stdio.h>
void main()
{
    int month ;
    printf("enter the no. of month:-");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    printf("jan contain 31 days");
        break;
    case 2:
    printf("feb contain 28 days");
        break;
    case 3:
    printf("mar contain 31 days");
        break;
    case 4:
    printf("april contain 30 days");
        break;
    case 5:
    printf("may contain 31 days");
        break;
    case 6:
    printf("june contain 30 days");
        break;
    case 7:
    printf("july contain 31 days");
        break;
    case 8:
    printf("Augest contain 31 days");
        break;
    case 9:
    printf("sept contain 30 days");
        break;
    case 10:
    printf("oct contain 31 days");
        break;
    case 11:
    printf("nov contain 30 days");
        break;
    case 12:
    printf("dec contain 31 days");
        break;
    
    default:
    printf("invalid");
        break;
    }
}