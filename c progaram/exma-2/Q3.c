#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,sum=0;
	
	printf("Enter the n:");
	scanf("%d",&n);
	
	do
	{
		
		sum=sum+i;
		i++;
		
	}while(i<=n);
	
   printf("sum is:%d",sum);
}
