#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Remove spaces
    i = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            str[j] = str[i]; // copy non-space character
            j++;
        }
        i++;
    }
    str[j] = '\0'; // null terminate

    printf("String without spaces: %s\n", str);

    return 0;
}