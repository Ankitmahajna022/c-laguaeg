#include<stdio.h>
#include<conio.h>

void main()
{
int age;

printf("Enter Your Age:");
scanf("%d",&age);

if(age>=100)
{
	printf("you Enter valdi age");
}
else if(age<=0)
{
	printf("You Enter valdi age");
}
else if(age>=18)
{
	printf("You are eligiblr for vote");
}
else if(age<=18)
{
	printf("You are not eligiblr for vote");
}
else
{
	printf("Enter The valdi Inupt");
}
}