#include<stdio.h>
#include<conio.h>

int main()

{
	int x,y;
	
	printf("Enter the value of x:");
	scanf("%d",&x);
	
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("(x-y)3=%d",(x*x*x)-(y*y*y)-((3*x*y)*(x+y)));
}
