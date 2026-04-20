#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Calculate length manually
    while(str[i] != '\0') {
        if(str[i] != '\n')   // to ignore newline from fgets
            length++;
        i++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}