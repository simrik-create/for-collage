#include <stdio.h>

int main() {
    int a[5] = {5, 4, 3, 2, 1};
    int i, j, temp;

    printf("Original numbers:\n");
    for(int i = 0; i < 5; i++) {
        printf("enter element %d",i);
        scanf("%d ",&a[i]);

    }

    // Bubble Sort
    for(i = 0; i < 5; i++) {
        for(j = i+1; j < 5 ; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\n\nSorted numbers in ascending order:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
