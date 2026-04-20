//Print a diamond pattern for odd N with input validation (ensure Nisodd). 
#include <stdio.h>
int main() {
    int n, i, j;

    printf("Enter an odd number: ");
    scanf("%d", &n);

    // Input validation
    if (n % 2 == 0) {
        printf("Error: Please enter an odd number.\n");
        return 0;
    }

    int mid = n / 2 + 1;

    // Upper half of diamond
    for (i = 1; i <= mid; i++) {
        for (j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower half of diamond
    for (i = mid - 1; i >= 1; i--) {
        for (j = 1; j <= mid - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}