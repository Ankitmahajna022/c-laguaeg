#include<stdio.h>
#include<conio.h>


void main()
{
	int i,j,k,l;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
			for(k=i;k<=4;k++)
		{
			printf("    ");
		}
		printf("\n");
	}
		
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
			for(k=i;k<=4;k++)
		{
			printf("    ");
		}
	
		printf("\n");
	}
}
