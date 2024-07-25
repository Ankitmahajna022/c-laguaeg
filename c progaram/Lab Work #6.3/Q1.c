#include<stdio.h>
#include<conio.h>

void main()
{

int a=1;
int n ,sum=0;

printf("Entre n value:");
scanf("%d",&n);


	while(a<=n)
	{
		sum+=a;
		a++;
	}
	printf("%d",sum);
	
}
