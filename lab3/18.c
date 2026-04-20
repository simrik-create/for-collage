#include <stdio.h>

int main() {
    int i, j, n, isIdentity = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter elements of matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Check identity matrix
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i == j && A[i][j] != 1) {
                isIdentity = 0;
                break;
            }
            if(i != j && A[i][j] != 0) {
                isIdentity = 0;
                break;
            }
        }
    }

    if(isIdentity == 1)
        printf("The matrix is an Identity Matrix.\n");
    else
        printf("The matrix is NOT an Identity Matrix.\n");

    return 0;
}