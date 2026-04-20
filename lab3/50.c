#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, k;
    int len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    len = strlen(str);
    if(str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All possible substrings:\n");

    // Generate substrings
    for(i = 0; i < len; i++) {          // start index
        for(j = 1; j <= len - i; j++) { // length of substring
            for(k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}