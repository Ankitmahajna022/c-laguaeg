#include <stdio.h>
#include<conio.h>

// Function to find the length of a string
int stringLength(const char* str) 
{
    int length = 0;
    while (str[length] != '\0') 
	{
        length++;
    }
    return length;
}

int main() 
{
    char inputString[100];

    // Input a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate the length using the UDF
    int len = stringLength(inputString);

    // Output the result
    printf("Length of the string: %d\n", len);

    return 0;
}

