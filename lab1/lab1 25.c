#include <stdio.h>

int main() {
    int a = 5, b = 5;

    printf("Initial value of a = %d\n", a);
    printf("Initial value of b = %d\n\n", b);

    // Prefix increment
    printf("Using prefix increment (++a)\n");
    printf("Value of ++a = %d\n", ++a);
    printf("Value of a after prefix increment = %d\n\n", a);

    // Postfix increment
    printf("Using postfix increment (b++)\n");
    printf("Value of b++ = %d\n", b++);
    printf("Value of b after postfix increment = %d\n", b);

    return 0;
}