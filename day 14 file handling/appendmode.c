#include<stdio.h>
void main(){
    char name[20]="Jai shree ram";
    FILE *file=fopen("data.txt","a");
    if(file==NULL){
        printf("error opening file");
        return;
    }
    fprintf(file,"%s",name);
    printf("data is append to the file");
    fclose(file);
}