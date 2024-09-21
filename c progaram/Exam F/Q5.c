#include<stdio.h>
#include<conio.h>

//wap in c to find the sum of all elements of the array...

void main()
{
	int n,i,sum=0;
	
	printf("Enter size of array:");
	scanf("%d",&n);
	
	int a[n];
	

	for(i=0;i<n;i++)
	{
	printf("Enter the a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	printf("%d ",a[i]);
	}
		
	for(i=0;i<n;i++)
	{
	 sum=sum+a[i];
	}
	printf("\n");
	
	printf("array sum is :%d",sum);
	
	
	
	
}
