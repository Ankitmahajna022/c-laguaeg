 #include<stdio.h>
#include<conio.h>

int main()

{
	float x,y,z,AverageMark;
	printf("Enter your marks maths: ");
    scanf("%f",&x);
    
	printf("Enter your marks english:");
	scanf("%f",&y);
	
	printf("Enter your marks science: ");
	scanf("%f",&z);
	
	if(x>=100 && y>=100 && z>=100)
	{
	AverageMark=(x+y+z)/3;
    printf("Averagemark is %d",AverageMark);
    
	}
}
    
