#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h;
	
	for(a=1;a<=5;a++)
	{
		for(h=1;h<=a;h++)
		{
			printf("%d",h);
		}
		printf("\n");
	}
}