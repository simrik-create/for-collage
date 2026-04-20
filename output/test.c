#include <stdio.h>

int main() {
    int a = 10;
    float b = 5.5;
    float result;

    result = a + b;   // int 'a' is automatically converted to float
    printf("Result = %.2f\n", result);

    return 0;
}

