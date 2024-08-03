#include<stdio.h>
#include<conio.h>

void main()

{
	int o=1,n;
	
	printf("Enter your n table:");
	scanf("%d",&n);
	
	 printf("Multiplication table of %d:\n", n);
	 
	 o=1;
	 do
	 {
	 	printf("%d*%d=%d\n",o,n,o*n);
	 	o++;
	 }while(o<=10);
}
