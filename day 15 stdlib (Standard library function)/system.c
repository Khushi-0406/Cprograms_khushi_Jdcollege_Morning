#include <stdio.h>
#include <stdlib.h>

// system(); --->u can use system command

int main()
{
    system("dir");   //current directory.

    system("vol");   //current disk info

    system("tree");  //show tree diagram of current things

    printf("Statement 1\n");
    printf("Statement 2\n");
    printf("Statement 3\n");
    printf("Statement 4\n");
    printf("Statement 5\n");

    system("cls");
    printf("Statement 6\n");



return 0;
}