#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    char *words[50]; // array of pointers for words
    int wordCount = 0, i, j;
    char *temp;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';

    // Split sentence into words
    char *token = strtok(str, " ");
    while(token != NULL) {
        words[wordCount++] = token;
        token = strtok(NULL, " ");
    }

    // Sort words alphabetically using simple bubble sort
    for(i = 0; i < wordCount - 1; i++) {
        for(j = i + 1; j < wordCount; j++) {
            if(strcmp(words[i], words[j]) > 0) {
                temp = words[i];
                words[i] = words[j];
                words[j] = temp;
            }
        }
    }

    // Print sorted words
    printf("Words in alphabetical order: ");
    for(i = 0; i < wordCount; i++) {
        printf("%s", words[i]);
        if(i < wordCount - 1) printf(" ");
    }
    printf("\n");

    return 0;
}