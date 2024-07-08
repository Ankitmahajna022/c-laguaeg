#include<stdio.h>
#include<conio.h>

int main()

{
	int x;
	printf("Enter the value x:");
	scanf("%d",&x);
	
	if(x==0)
	{
		printf("This number is Neutral");
	}
	else if(x<=0)
	{
		printf("This number is Negative");
	}
	else if(x>=0)
	{
		printf("This number is Positive");
	}
}