#include <stdio.h>

int main() {
    int i, j, n, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];  // to track counted elements

    printf("Enter elements of array:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;   // initialize as not visited
    }

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;  // mark as counted
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}