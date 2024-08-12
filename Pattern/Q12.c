#include<stdio.h>
#include<conio.h>

void main()
{
	char a,h;
	
	for(a='A';a<='E';a++)
	{
		for(h='A';h<=a;h++)
		{
			printf("%c ",h);
		}
		printf("\n");
	}
}
