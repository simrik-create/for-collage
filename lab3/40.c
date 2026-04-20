#include <stdio.h>

int main() {
    char str[200];
    int i = 0, j = 0;
    int spaceFlag = 0; // track consecutive spaces

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    while(str[i] != '\0') {
        if(str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while(str[i] != '\0') {
        if(str[i] != ' ') {
            str[j++] = str[i];
            spaceFlag = 0; // reset flag
        } else {
            if(spaceFlag == 0) { // first space after word
                str[j++] = ' ';
                spaceFlag = 1;
            }
            // else ignore extra spaces
        }
        i++;
    }

    // Remove trailing space if any
    if(j > 0 && str[j-1] == ' ')
        j--;

    str[j] = '\0'; // null terminate

    printf("String after removing extra spaces: %s\n", str);

    return 0;
}