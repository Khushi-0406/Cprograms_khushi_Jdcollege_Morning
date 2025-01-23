#include<stdio.h>
void main()
{
	int n,*p,fact=1,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	p=&fact;
	for(i=1;i<=n;i++)
	{
		*p=*p*i;
	}
	printf("factorial of n is :%d",*p);
	
	
}