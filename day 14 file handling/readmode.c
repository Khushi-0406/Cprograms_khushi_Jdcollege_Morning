#include<stdio.h>
void main(){
    int rollno;
    int marks;
    FILE *file=fopen("data.txt","r");
    if(file==NULL){
        printf("error openinng file");
        return;

    }
    fscanf(file,"%d",&rollno);
    fscanf(file,"%d",&marks);
    printf("rollno is %d\n",rollno);
    printf("marks is %d\n",marks);
    fclose(file);
}
