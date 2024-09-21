#include<stdio.h>
#include<conio.h>

//wap in c to calculate profit and loos on a transaction..

void main()
{
	int transationA,transationL,transationV;
	
	printf("Enter The transationA:");
	scanf("%d",&transationA);
	
	printf("Enter The ransattionL:");
	scanf("%d",&transationL);
	
	
	transationV=transationA-transationL;
	
	printf("transationV is :%d ",transationV);
	
	if(transationV>0)
	{
		printf("Transation is Profit");
	}
	else if(transationV<0)
	{
		printf("Transation is Loss");
	}
	else
	{
		printf("Transation is No Profit And No Loss");
	}
	
}
