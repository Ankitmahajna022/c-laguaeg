#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h,k;

	for(a=5;a>=1;a--)
	{
		for(k=a;k<=4;k++)
		{
			printf("  ");
		}
		for(h=a;h>=1;h--)
		{
			printf("* ");
		}
		printf("\n");
	}
}
