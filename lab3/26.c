#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // takes full line input

    printf("You entered: %s", str);

    return 0;
}