#include<stdio.h>
#include<conio.h>

void main()
{

int a=1;
int n ;

printf("Entre n value:");
scanf("%d",&n);
 printf("Multiplication table of %d:\n", n);


	while(a<=10)
	{
        printf("%d*%d=%d\n",a,n,a*n);
		a++;
	}

	
}
