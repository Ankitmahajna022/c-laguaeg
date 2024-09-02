#include<stdio.h>
#include<conio.h>

void divisible()
{
	int n;
	
	printf("Erter the n:");
	scanf("%d",&n);
	
	
  if(n%3==0 && n%5==0)
  {
  	printf("The given number is divisible by both 3 & 5");
  }
  else if(n%3==0)
  {
  	printf("The given number is divisible 3 only");
  }
   else if(n%5==0)
  {
  	printf("The given number is divisible 5 only");
  }
  else
  {
  	printf("The given number is not divisible by both 3 & 5");
  }
  printf("\n\n");
}

void main()
{
	divisible();
	divisible();
	divisible();
}