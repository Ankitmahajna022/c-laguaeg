#include<stdio.h>
#include<conio.h>

int main()

{
int a,b,c,d,e;

	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("Enter the value of c:");
	scanf("%d",&c);
	printf("Enter the value of d:");
	scanf("%d",&d);
	printf("Enter the value of e :");
	scanf("%d",&e);
	
	//a>b
	if(a>b)
	{
		//a>c
		if(a>c)
		{
			//a>d
			if(a>d)
			{
				//a>e
				if(a>e)
				{
					printf("a is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
			else
			{
				//d>e
				if(d>e)
				{
					printf("d is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
		}
		else
		{
			//c>d
			if(c>d)
			{
				//c>e
				if(c>e)
				{
					printf("c is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
			else
			{
				//d>e
				if(d>e)
				{
					printf("d is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
		}
	}
	else
	{
		//b>c
		if(b>c)
		{
			//b>d
			if(b>d)
			{
				//b>e
	            if(b>e)
				{
					printf("b is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}		
			}
			else
			{
				//d>e
				if(d<e)
				{
					printf("d is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
		}
		else
		{
			//c>d
			if(c>d)
			{
				//c>e
				if(c>e)
				{
					printf("c is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
			else
			{
				//d>e
				if(d>e)
				{
					printf("d is maxmum");
				}
				else
				{
					printf("e is maxmum");
				}
			}
		}
	}
}
