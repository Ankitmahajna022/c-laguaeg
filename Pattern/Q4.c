#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h;
	
	for(a=5;a>=1;a--)
	{
		for(h=5;h>=a;h--)
		{
			printf("%d",h);
		}
		printf("\n");
	}
}