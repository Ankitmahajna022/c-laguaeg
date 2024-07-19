#include<stdio.h>
#include<conio.h>

int main()
{

int a;
int n;

printf("Entre a value:");
scanf("%d",&a);

printf("Entre n value:");
scanf("%d",&n);


	while(a<=n)
	{
		if(a%4==0)
		{
			printf("%d\n",a);
		}
        a++;
		
	}
}