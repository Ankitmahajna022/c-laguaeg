#include<stdio.h>
#include<conio.h>

void main()
{
	int fisrtangle,sconangle,triangle;
	
	printf("Enter fisrtangle value: ");
	scanf("%d",&fisrtangle);
	
	printf("Enter sconangle value: ");
	scanf("%d",&sconangle);
	
    triangle= 180-fisrtangle-sconangle;
    
    printf("triangle is :%d",triangle);
}