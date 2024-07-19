#include<stdio.h>
#include<conio.h>

int main()
{

int a=1;
int n ,b;

printf("Entre n value:");
scanf("%d",&n);

	while(a<=n)
	{
		b=n*a;
		a++;
	}
	printf("%d",b);
	
}