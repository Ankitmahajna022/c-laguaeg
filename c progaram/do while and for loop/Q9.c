#include<stdio.h>
#include<conio.h>

void main()
{
	int q=1,n,factorial=1;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	q=1;
	do
	{
		factorial=factorial*q;
		q++;
	}while(q<=n);
	printf("factorial is:%d",factorial);
}

