#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h,k;

	for(a=5;a>=1;a--)
	{
		for(k=2;k<=a;k++)
		{
			printf("  ");
		}
		for(h=a;h<=5;h++)
		{
			printf("%d ",h);
		}
		printf("\n");
	}
}
