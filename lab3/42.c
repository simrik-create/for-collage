#include <stdio.h>

int main() {
    char str[200];
    char find, replace;
    int i = 0;

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

    printf("Enter the character to find: ");
    scanf(" %c", &find);

    printf("Enter the character to replace with: ");
    scanf(" %c", &replace);

    // Replace occurrences
    i = 0;
    while(str[i] != '\0') {
        if(str[i] == find) {
            str[i] = replace;
        }
        i++;
    }

    printf("Modified string: %s\n", str);

    return 0;
}