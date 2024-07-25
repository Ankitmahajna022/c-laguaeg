#include<stdio.h>
#include<conio.h>

void main()
{

int a=1;
int n ,b=1;

printf("Entre n value:");
scanf("%d",&n);

	while(a<=n)
	{
		b=b*a;
		a++;
	}
	printf("%d",b);
	
}
