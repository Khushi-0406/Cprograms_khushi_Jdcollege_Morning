#include <stdio.h>
#include <stdlib.h>

// atexit-----> use to call a function at the exit of the program.

void waiting()
{
    printf("the waiting function get called at the end without calling.");
    printf("the function execute at exit.");
}


int main()
{

atexit(waiting);


printf("Start of the main function.\n");
printf("Hello world.\n");
exit(0);
//exit(0);   --> the waiting function will be get called at end after hello world;
printf("End of the main function. \n");


    return 0;  
}