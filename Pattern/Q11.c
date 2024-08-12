#include<stdio.h>
#include<conio.h>

void main()
{
	int a,h,k=1;
	
	for(a=1;a<=5;a++)
	{
		for(h=1;h<=a;h++)
		{
			(h%2==0)?printf("0 "):printf("1 ");
		}
		printf("\n");
	}
}
