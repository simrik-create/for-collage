#include <stdio.h>

int main() {
    int i, j, rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int A[rows][cols], B[rows][cols], diff[rows][cols];

    printf("Enter elements of first matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of second matrix:\n");
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf("%d", &B[i][j]);

    // Subtracting matrices
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            diff[i][j] = A[i][j] - B[i][j];

    printf("Difference of matrices:\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    return 0;
}