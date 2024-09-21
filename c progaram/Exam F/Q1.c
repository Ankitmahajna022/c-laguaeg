#include<stdio.h>
#include<conio.h>

//wap in c to cheke whether a number is Even or Odd using a user  defined function..

void main()
{
	int n;
    
    printf("Enter the n: ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
    	printf("Numbaer is Even");
	}
	else
	{
		printf("Numbaer is Odd");
	}

}

