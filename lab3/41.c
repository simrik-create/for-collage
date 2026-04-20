#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};  // frequency array for all ASCII characters
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of each character
    while(str[i] != '\0') {
        if(str[i] != '\n') { // ignore newline
            freq[(unsigned char)str[i]]++;
        }
        i++;
    }

    // Display frequencies
    printf("Character frequencies:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}