#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Numbers in the string: ");
    while(str[i] != '\0') {
        if(isdigit(str[i])) {
            // print consecutive digits as a number
            while(isdigit(str[i])) {
                printf("%c", str[i]);
                i++;
            }
            printf(" "); // separate numbers
        } else {
            i++;
        }
    }
    printf("\n");

    return 0;
}