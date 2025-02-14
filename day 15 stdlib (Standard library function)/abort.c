#include <stdio.h>
#include <stdlib.h>

// abort();  terminate program abnormaly
// exit();
// atexit();
// system();
// getenv();

int main()
{
//     printf("hello world\n");
//     abort();
//     printf("have a good day.");

FILE *fp;

printf("try to open a file setup.txt\n");
fp=fopen("setup.txt","r");

if(fp==NULL)
{
    printf("setup file not found, program is going to abort.\n");
    abort();
}

printf("Read data from the file.\n");
//code to read data.

fclose(fp);


    return 0;

}
 