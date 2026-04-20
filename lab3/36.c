#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in uppercase: ");
    fgets(str, sizeof(str), stdin);

    // Convert uppercase to lowercase
    while(str[i] != '\0') {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A'); // convert to lowercase
        }
        i++;
    }

    printf("Lowercase string: %s", str);

    return 0;
}