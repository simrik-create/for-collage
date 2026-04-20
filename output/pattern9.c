#include <stdio.h>

int main() {
    int i, j;
    int rows = 4;

    for(i = rows; i >= 1; i--) 
    {
        for(j = 1; j <= rows - i; j++) 
        {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
            if(j != i) {
                printf("  "); 
            }
        }
        printf("\n");
    }

    return 0;
}
