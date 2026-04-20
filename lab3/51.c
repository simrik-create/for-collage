#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i = 0, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int len = strlen(str);
    if(str[len - 1] == '\n') str[len - 1] = '\0';

    printf("Run-length encoded string: ");

    while(str[i] != '\0') {
        char current = str[i];
        count = 1;

        // Count consecutive occurrences
        while(str[i + 1] != '\0' && str[i + 1] == current) {
            count++;
            i++;
        }

        printf("%c%d", current, count);
        i++;
    }

    printf("\n");
    return 0;
}