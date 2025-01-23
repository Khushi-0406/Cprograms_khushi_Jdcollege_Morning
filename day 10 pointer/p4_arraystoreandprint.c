#include<stdio.h>
void main()
{
	int n;
	printf("enter the value of n ");
	scanf("%d",&n);
	int a[n],i,*p1;
	p1=&a[0];
	printf("enter the element:");
	for(i=0;i<n;i++)
	{
		scanf("%d",p1+i);
		
	}
   for(i=0;i<n;i++)
   {
   	printf("\nthe elements are:%d",*p1);
   	p1++;
}
}