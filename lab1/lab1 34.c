#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    /* Swapping using a temporary variable */
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using temporary variable:\n");
    printf("a = %d, b = %d\n", a, b);

    /* Swapping without using a temporary variable */
    a = a + b;
    b = a - b;
    a = a - b;

    printf("\nAfter swapping without using temporary variable:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
