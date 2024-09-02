#include<stdio.h>
#include<conio.h>

void cube()
{
	int n;
	
	printf("Enter the n:");
	scanf("%d",&n);
	
	printf("Cube is:%d \n \n",n*n*n);
}

void main()
{
	cube();
	cube();
	cube();
}