#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
    char str[200], word[50], shortest[50];
    int i = 0, j = 0;
    int minLength = INT_MAX; // initialize with maximum integer

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';

    shortest[0] = '\0'; // initialize shortest word

    while(1) {
        // Build a word character by character
        if(str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            word[j++] = str[i];
        } else {
            if(j != 0) { // end of word
                word[j] = '\0';
                if(j < minLength) { // update shortest word
                    minLength = j;
                    strcpy(shortest, word);
                }
                j = 0; // reset word index
            }
            if(str[i] == '\0') break; // end of sentence
        }
        i++;
    }

    printf("Shortest word: %s\n", shortest);
    printf("Length: %d\n", minLength);

    return 0;
}