#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char email[100];
    int i, atCount = 0, dotAfterAt = 0;
    int valid = 1; // assume valid initially

    printf("Enter an email address: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline character if present
    int len = strlen(email);
    if(email[len - 1] == '\n') email[len - 1] = '\0';

    for(i = 0; email[i] != '\0'; i++) {
        if(email[i] == '@') {
            atCount++;
        } else if(email[i] == '.' && atCount == 1) {
            dotAfterAt = 1;
        } else if(email[i] == ' ') {
            valid = 0; // spaces are invalid
            break;
        }
    }

    if(atCount != 1 || !dotAfterAt) valid = 0;

    if(valid)
        printf("Valid email address.\n");
    else
        printf("Invalid email address.\n");

    return 0;
}