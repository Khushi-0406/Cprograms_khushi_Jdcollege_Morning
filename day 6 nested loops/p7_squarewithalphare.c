#include <stdio.h>
void main()
{
    int r,c;

    for(r=65;r<=69;r++)
    {
          for(c=69;c>=65;c--)
          {
              printf("%c", c);
          }
        printf("\n");
    }
}