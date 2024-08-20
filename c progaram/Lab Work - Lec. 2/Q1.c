#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h,k;

	for(a=5;a>=1;a--)
	{
		for(k=4;k>=a;k--)
		{
			printf("  ");
		}
		for(h=a;h>=1;h--)
		{
			(h%2==0)?printf("0 "):printf("1 ");
		}
		printf("\n");
	}
}
