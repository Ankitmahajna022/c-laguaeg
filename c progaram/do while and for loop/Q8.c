#include<stdio.h>
#include<conio.h>

void main()
{
	int r=1,n,sum=0;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	r=1;
	do
	{
		sum=sum+r;
		r++;
	}while(r<=n);
	printf("sum is:%d",sum);
}
