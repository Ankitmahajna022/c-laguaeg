#include<stdio.h>
#include<conio.h>

int main()

{
	//Write a Program to find the minimum number from the given 3 numbers using nested
    //if else. Also, draw a Flowchart in your book.
    
    int x,y,z;
    
    printf("Enter the value x:");
    scanf("%d",&x);
    printf("Enter the value y:");
    scanf("%d",&y);
    printf("Enter the value z:");
    scanf("%d",&z);
    
    if(x<y)
    {
    	//x,z
    	if(x<z)
    	{
    		//x
    		printf("x is minmum");
		}
		else
		{
			//z
			printf("z is minmum");
		}
	}
	else
	{
		//y,z
		if(y<z)
		{
			//y
			printf("y is minmum");
		}
		else
		{
			//z
			printf("z is miumum");
		}
	}
}