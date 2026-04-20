#include <stdio.h>

int main() {
    char str[100];
    int i = 0, digits = 0, spaces = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0') {
        char ch = str[i];

        if(ch >= '0' && ch <= '9') {
            digits++;
        }
        else if(ch == ' ') {
            spaces++;
        }
        else if(ch != '\n') {  // ignore newline character
            special++;
        }

        i++;
    }

    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Special characters: %d\n", special);

    return 0;
}