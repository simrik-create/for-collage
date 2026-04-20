#include <stdio.h>

int main() {
    int arr[100], n, i;
    int largest, secondLargest;
    int smallest, secondSmallest;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize values
    largest = secondLargest = arr[0];
    smallest = secondSmallest = arr[0];

    // Find largest and smallest first
    for(i = 1; i < n; i++) {
        if(arr[i] > largest)
            largest = arr[i];
        if(arr[i] < smallest)
            smallest = arr[i];
    }

    // Find second largest and second smallest
    secondLargest = smallest;   // initial low value
    secondSmallest = largest;   // initial high value

    for(i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];

        if(arr[i] < secondSmallest && arr[i] > smallest)
            secondSmallest = arr[i];
    }

    // Display result
    printf("Second Largest = %d\n", secondLargest);
    printf("Second Smallest = %d\n", secondSmallest);

    return 0;
}