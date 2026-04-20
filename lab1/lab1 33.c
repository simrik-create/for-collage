#include <stdio.h>

int main() {
    int a = 10, b = 5;

    /* Arithmetic Operators */
    printf("Arithmetic Operators:\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);

    /* Relational Operators */
    printf("Relational Operators:\n");
    printf("a == b : %d\n", a == b);
    printf("a != b : %d\n", a != b);
    printf("a > b  : %d\n", a > b);
    printf("a < b  : %d\n", a < b);
    printf("a >= b : %d\n", a >= b);
    printf("a <= b : %d\n\n", a <= b);

    /* Logical Operators */
    printf("Logical Operators:\n");
    printf("(a > b) && (a != b) : %d\n", (a > b) && (a != b));
    printf("(a < b) || (a == b) : %d\n", (a < b) || (a == b));
    printf("!(a == b)           : %d\n", !(a == b));

    return 0;
}
