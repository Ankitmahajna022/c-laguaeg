#include<stdio.h>
#include<conio.h>

void main()
{
   //1,11,111,1111,11111
   int num=0,n,i;
   
   printf("Enter n:");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++)
   {
   	num=num*10+1;
   	 printf("%d ",num);
   }
 
}
