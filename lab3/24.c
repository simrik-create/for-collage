#include <stdio.h>

int main() {
    int i, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    printf("Enter %d elements (from 1 to %d with one missing):\n", n, n+1);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int total = (n + 1) * (n + 2) / 2;

    int missing = total - sum;

    printf("Missing number is: %d\n", missing);

    return 0;
}