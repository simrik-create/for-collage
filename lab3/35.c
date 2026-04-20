#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    // Convert lowercase to uppercase
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); // convert to uppercase
        }
        i++;
    }

    printf("Uppercase string: %s", str);

    return 0;
}