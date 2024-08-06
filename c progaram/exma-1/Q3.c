#include<stdio.h>
#include<conio.h>

void main()
{
	int n,reverde=0,ld,i;
	
	printf("Enter a n:");
	scanf("%d",&n);
	

	
while(n>0)
{
	ld=n %10;
	reverde=reverde*10+ld;
	n/10;
	
    printf("%d",n);			
}

}
