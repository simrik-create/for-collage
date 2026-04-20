#include <stdio.h>
#include <string.h>

int main() {
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';

    longest[0] = '\0'; // initialize longest word

    while (1) {
        // Build a word character by character
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if (j != 0) { // end of word
                word[j] = '\0';
                if (j > maxLength) {
                    maxLength = j;
                    strcpy(longest, word);
                }
                j = 0; // reset word index
            }
            if (str[i] == '\0') break; // end of sentence
        }
        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}