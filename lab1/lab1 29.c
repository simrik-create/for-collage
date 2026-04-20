#include <stdio.h>
int main() {
    int a, b;
    float result;
    printf("Enter integer a: ");
    scanf("%d", &a);
    printf("Enter integer b: ");
    scanf("%d", &b);
    result = (float)a / b;
    printf("Result of division = %.2f\n", result);
    return 0;
}