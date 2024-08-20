#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h,k;

	for(a=1;a<=5;a++)
	{
		for(k=a;k<=4;k++)
		{
			printf("  ");
		}
		for(h=a;h>=1;h--)
		{
			printf("%d ",h);
		}
		printf("\n");
	}
}
