// 1000
// 0100
// 0010
// 0001


#include <stdio.h>
int main() {
  int r ,c ;


  for (r=1;r<=4;r++){
      
      for(c=1;c<=4;c++){

      if(r==c)
      {
        printf("1");
      }
      else{
        printf("0");
      }

      }
      printf("\n");
  }
}