#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,n;
	 
	 printf("Enter n:");
	 scanf("%d",&n);
	 
	 a=1;
	 do
	 {
	 	if(a%2==0)
	 	{
	 		printf("%d ",a);
		}
	    a++;
	 }while(a<=n);
}