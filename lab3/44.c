#include <stdio.h>
#include <string.h>

int main() {
    char str[200], temp[50];
    char *words[50];  // array of pointers to store words
    int wordCount = 0, i;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if(str[len-1] == '\n') str[len-1] = '\0';

    // Split sentence into words
    char *token = strtok(str, " ");
    while(token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // Print words in reverse order
    printf("Reversed sentence: ");
    for(i = wordCount - 1; i >= 0; i--) {
        printf("%s", words[i]);
        if(i > 0) printf(" ");
    }
    printf("\n");

    return 0;
}