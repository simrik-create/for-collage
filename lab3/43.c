#include <stdio.h>

int main() {
    char str[200];
    int i = 0, words = 0;
    int inWord = 0; // flag to track if inside a word

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Count words
    while(str[i] != '\0') {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            if(inWord == 0) {
                words++;    // new word found
                inWord = 1; // set flag
            }
        } else {
            inWord = 0; // space or tab ends a word
        }
        i++;
    }

    printf("Number of words: %d\n", words);

    return 0;
}