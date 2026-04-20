#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Capitalize first letter of each word
    if(str[0] >= 'a' && str[0] <= 'z') {
        str[0] = str[0] - ('a' - 'A'); // first character
    }

    for(i = 1; str[i] != '\0'; i++) {
        if(str[i-1] == ' ' && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // capitalize first letter after space
        }
    }

    printf("Capitalized sentence: %s\n", str);

    return 0;
}