#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h;
	
	for(a=1;a<=5;a++)
	{
		for(h=a;h>=1;h--)
		{
			printf("%d",h);
		}
		printf("\n");
	}
}