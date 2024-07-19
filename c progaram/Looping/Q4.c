#include<stdio.h>
#include<conio.h>

int main()
{


int n;

printf("Entre n value:");
scanf("%d",&n);


	while(n>=1)
	{
		if(n%2==1)
		{
			printf("%d",n);
		}
        n--;
		
	}
}