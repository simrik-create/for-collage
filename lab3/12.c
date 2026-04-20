#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j;
    int sum = 0;

    // Input rows and columns
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }

    // Display result
    printf("Sum of all elements = %d\n", sum);

    return 0;
}