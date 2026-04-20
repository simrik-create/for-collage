#include <stdio.h>

int main() {
    int i, j, n, isLeader;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Leaders in the array are:\n");

    for(i = 0; i < n; i++) {
        isLeader = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] <= arr[j]) {
                isLeader = 0;
                break;
            }
        }

        if(isLeader)
            printf("%d ", arr[i]);
    }

    return 0;
}