#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    i = 0;
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    // Find length
    while(str[length] != '\0') {
        length++;
    }

    // Check palindrome
    for(i = 0; i < length / 2; i++) {
        if(str[i] != str[length - 1 - i]) {
            flag = 1; // not a palindrome
            break;
        }
    }

    if(flag == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}