#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,n;
	int x=0;
	int y=1;
	int ars=x+y;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	printf("0 1 ");
	
	for(a=1;a<=n;a++)
	{
		printf("%d ",ars);
		x=y;
		y=ars;
		ars=x+y;
	}
}