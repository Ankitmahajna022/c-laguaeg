#include<stdio.h>


void main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
		 (j%2==0)?printf("0 "):printf("1 ");
		}
		printf("\n");
	}
}