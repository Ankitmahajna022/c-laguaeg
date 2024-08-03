#include<stdio.h>
#include<conio.h>

void main()
{
	int a,c;
		
		printf("Enter a Year:");
		scanf("%d",&a);
		
		printf("Enter c Year:");
		scanf("%d",&c);
		
		do
		{
			if(a%4==0)
			{
				printf("%d \n",a);
			}
			a++;
		}while((a<=c));
		
}
