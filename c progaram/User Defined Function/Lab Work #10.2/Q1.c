#include<stdio.h>
#include<conio.h>

void sum()
{
	int n,i,sum=0;
	
	printf("Enter array size: ");
    scanf("%d", &n);
    
    int a[n];
      
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) 
	{
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    for (i = 0; i < n; i++) 
	{
        sum += a[i];
    }
    
    printf("The sum of an Array:%d",sum);


}

void main()
{
	sum();
}
