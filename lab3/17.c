#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int A[n][n], mainDiag=0, antiDiag=0;

    printf("Enter elements of matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &A[i][j]);

    for(i=0;i<n;i++){
        mainDiag += A[i][i];          // Main diagonal
        antiDiag += A[i][n-1-i];      // Anti-diagonal
    }

    printf("Sum of main diagonal = %d\n", mainDiag);
    printf("Sum of anti-diagonal = %d\n", antiDiag);
    return 0;
}