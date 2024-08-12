#include<stdio.h>
#include<conio.h>

void main()
{
	char a,h,k='A';
	
	for(a='A';a<='E';a++)
	{
		for(h='A';h<=a;h++)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}
