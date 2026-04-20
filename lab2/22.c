#include <stdio.h>

int main() {
    int n, i, j;
    char ch = 'A';

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;   // move to next ASCII character
        }
        printf("\n");
    }

    return 0;
}