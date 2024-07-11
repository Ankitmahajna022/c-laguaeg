#include<stdio.h>
#include<conio.h>

int main()

{
	int a,b,c,d,x,y;
	
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	
	//a,b
	if(a<b)
	{
		//a<c
		if(a<c)
		{
		   //a<d
		   if(a<d)
		   {
		   	//a<x
		   	if(a<x)
		   	{
		   		//a<y
		   		if(a<y)
		   		{
		   			printf("a is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
		   }
		   else
		   {
		   	//d<x
		   	if(d<x)
		   	{
		   		//d<y
		   		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
				
					
		   		 
				   
			}
			else
			{
				//x<y
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
			
		   }
		}
		else
		{
			//c<d
		  if(c<d)
		  {
		  	//c<x
		  	if(c<x)
		  	{
		  		//c>y
		  	 if(c<y)
		  	 {
		  	 	printf("c is minmum");
			 }
			 else
			 {
			  printf("y is minmum");
			 }
			}
		  }
		  else
		  {
		  	//d<x
		  	if(d<x)
		  	{
		  		//d<y
		  		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
		  		
			}
			else
			{
				//x<y
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minmum");
				}
			}
		  }
		}
		
	}
	else
	{
		//b<c
		if(b<c)
		{
			//b<d
			if(b<d)
			{
				//b<x
				if(b>x)
				{
					//b<y
					if(b>y)
					{
						printf("b is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
				else
				{
					//x<y
					if(x<y)
					{
						printf("x is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
			}
			else
			{
				//d<x
				if(d<x)
				{
					//d<y
					if(d<y)
					{
						printf("d is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
				else
				{
					//x<y
					if(x<y)
					{
						printf("x is minmum");
					}
					else
					{
						printf("y is minmum");
					}
				}
			}
		}
		else
		{
			//c<d
			if(c<d)
		    {
			
				//c<x
		  	if(c<x)
		  	{
		  		//c<y
		  	 if(c<y)
		  	 {
		  	 	printf("c is minmum");
			 }
			 else
			 {
			  printf("y is minmum");
			 }
			}
		  }
		  else
		  {
		  	//d<x
		  	if(d<x)
		  	{
		  		//d<y
		  		if(d<y)
		   		{
		   			printf("d is minmum");
				} 
				else
				{
					printf("y is minmum");
				}
		  		
			}
			else
			{
				//x<y
				if(x<y)
				{
					printf("x is minmum");
				}
				else
				{
					printf("y is minumu");
				}
		    
		}
			}
		}
	}

}
