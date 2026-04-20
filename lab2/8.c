#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if number is negative
    if (n < 0) {
        printf("Factorial of a negative number is not defined.");
    } 
    else {
        for(i = 1; i <= n; i++) {
            factorial = factorial * i;
        }
        printf("Factorial of %d = %lld", n, factorial);
    }

    return 0;
}