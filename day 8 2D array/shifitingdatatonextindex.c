#include <stdio.h>
void main()
{
    int a[50] ,size, value, index, i, j ;
                   //new value store karega at specifice index
   
printf("enter the size of the array:-");
scanf("%d", &size);

printf("enter the elemets of the array:- ");   //array liya store kiya
for(i=0;i<size;i++)
{    
        scanf("%d", &a[i]);    
        
}

//value and index liya
printf("enter the index number where u want to put new value:-");
scanf("%d",&index);

printf("enter the value which u want to inter at the %d index:-", index);
scanf("%d", &value);

printf("the updated array is:- ");

    for (int i = size; i > index; i--) {
        a[i] = a[i - 1];

    }

for(i=0;i<size;i++)
{
            
 a[index]=value; 
        printf("%d ", a[i]);
}
         size++;


}