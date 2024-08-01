#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,n;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	a=1;
	do
	{
		printf("%d ",n);
		n--;
	}while(n>=a);
}
