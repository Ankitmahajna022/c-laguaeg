#include<stdio.h>
#include<conio.h>

int main()
{

	int x,y,z;
	
	printf("Enter the value of x:");
	scanf("%d",&x);
	
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	printf("Enter the value of z:");
	scanf("%d",&z);
	
	printf("(x-y-z)3=%d",(x*x*x)-(y*y*y) -(z*z*z)-3*(x*x*y)+3*(x*y*y)-3*(y*y*z)-3*(y*z*z)+3*(x*z*z)-3*(x*x*z)+6*(x*y*z));
}
