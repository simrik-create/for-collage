#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    float sum = 0, avg;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];   // Add each element to sum
    }

    // Calculate average
    avg = sum / n;

    // Output results
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}