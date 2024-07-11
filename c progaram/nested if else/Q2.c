#include<stdio.h>
#include<conio.h>

int main()

{
	//Write a Program to find the maximum number from the given 4 numbers using nested
    //if else. Also, draw a Flowchart in your book.
    
	int a,b,c,d;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	
	//a,b
	if(a>b)
	{
		//a,c
	    if(a>c)
	    {
	      //a,d
		  if(a>d)
		  {
		  	//a
		  	printf("a is maxmum");
		  }
		  else
		  {
		  	//d
		  	printf("d is maxmum");
		  }
		}
		else
		{
		 //c,d
		 if(c>d)
		 {
		 	//c
		 	printf("c is maxmum");
		 }
		 else
		 {
		    //d
		 	printf("d is maxmum");
		 }
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("b is maxmum");
			}
			else
			{
				//d
				printf("d is maxmum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("c is maxmum");
			}
			else
			{
				//d
				printf("d is maxmum");
			}
		}
	}
}