#include <stdio.h>

void main() {
    int i, j, n = 5;

    // Upper part of the pyramid
    for (i = 1; i <= n; i++) 
	{
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // Lower part of the pyramid
    for (i = n-1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

}

