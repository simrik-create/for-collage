#include <stdio.h>

int main() {
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters if any
    while(str1[i] != '\0') {
        if(str1[i] == '\n') {
            str1[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while(str2[i] != '\0') {
        if(str2[i] == '\n') {
            str2[i] = '\0';
            break;
        }
        i++;
    }

    // Find end of first string
    i = 0;
    while(str1[i] != '\0') {
        i++;
    }

    // Concatenate second string
    j = 0;
    while(str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // null terminate

    printf("Concatenated string: %s\n", str1);

    return 0;
}