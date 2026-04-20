#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Function to generate permutations
void permute(char *str, int l, int r) {
    int i;
    if(l == r) {
        printf("%s\n", str); // print current permutation
    } else {
        for(i = l; i <= r; i++) {
            swap(&str[l], &str[i]);     // swap current index with loop index
            permute(str, l + 1, r);     // recursive call
            swap(&str[l], &str[i]);     // backtrack
        }
    }
}

int main() {
    char str[20];
    int n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);
    printf("All permutations of the string:\n");
    permute(str, 0, n - 1);

    return 0;
}