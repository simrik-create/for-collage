//write a program to enter 5 elements of array using for loop and dasplay that result
#include <stdio.h>

int main() {
    int array[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter element array %d: ", i);
        scanf("%d", &array[i]);
    }
    printf("\nArray elements are:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
