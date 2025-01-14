#include <stdio.h>
int main() {
  int r ,c ;
  char ch;
ch='A';
  for (r=1;r<=4;r++){
      

      for(c=1;c<=4;c++)


      if(r%2==0){
        printf("%d", c);
      }
      else{
        printf("%c", ch);
        ch++;
      }
      printf("\n");
      ch='A';
  }
}



