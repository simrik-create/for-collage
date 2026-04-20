#include <stdio.h>

int main() {
    int i, j, rows, cols;
    int zero = 0, nonZero = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Count zeros and non-zeros
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(A[i][j] == 0)
                zero++;
            else
                nonZero++;
        }
    }

    // Check sparse condition
    if(zero > nonZero)
        printf("The matrix is a Sparse Matrix.\n");
    else
        printf("The matrix is NOT a Sparse Matrix.\n");

    return 0;
}
