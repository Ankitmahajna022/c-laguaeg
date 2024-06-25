#include<stdio.h>
#include<conio.h>

main()
{
	int FirstAngle,SecondAngle,ThirdAngle;
	
	printf("Enter FirstAngle:");
	scanf("%d",&FirstAngle);
	
	printf("Enter SecondAngle:");
	scanf("%d",&SecondAngle);
	
	ThirdAngle=180-FirstAngle-SecondAngle;
	
	printf("ThirdAngle=%d",ThirdAngle);
	
	
	

}

