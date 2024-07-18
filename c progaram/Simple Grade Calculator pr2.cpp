#include<stdio.h>
#include<conio.h>

int main()

{
	int mark;
	char grade;
	
	printf("Entern Your Mark:");
	scanf("%d",&mark);
	
	(mark>=80 && mark<=100)?printf("Your grade is A", grade='A'):
	                                   (mark>=70&& mark<80)?
	                                          printf("Your grade is B",grade='B') :
																(mark>=60&& mark<70)?
																				printf("Your grade is C",grade='C'):
																									 (mark>=33&& mark<60)?
																													printf("Your grade is D",grade='D'):
																																		(mark>=0&& mark<30)?
																																				printf("Your grade is F", grade='F'):
																																							         printf("Enter the valid Input ",grade='E');
																																							         
switch(grade)
{
	case'A':printf("Excellent work!");
	break;
	case'B':printf("Well done!");
	break;
	case'C':printf("Good job!");
	break;
	case'D':printf("You passed, but you could do better!");
	break;
	case'F':printf("Sorry, you failed!");
	break;
	case'E':printf("Enter the valid Input ");
	break;
}


	
	if(grade=='A'|| grade=='B'|| grade=='C'||grade=='D')
	{
		printf("You are eligible for the next level.");
	}
	else
	{
	 printf(",Please try again next time");	
    }
          
}
