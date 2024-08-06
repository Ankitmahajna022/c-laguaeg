#include<stdio.h>
#include<conio.h>

void main()
{
	int n,ld;
	
    printf("Enter n value: ");
	scanf("%d",&n);
	
	ld=n%10;
	
	while(n>9)
	{
		n=n/10;
			
    }
     printf("sum is:%d",n+ld);
   
}