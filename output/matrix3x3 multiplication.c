//write a program to multiply 3x3 matrices and show the result
#include <stdio.h>

int main() {
    int firstmatrix[3][3], secondmatrix[3][3], thirdmatrix[3][3];
    int i, j, k;

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("enter element [%d][%d]of first matrix:",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }

    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("enter element [%d][%d] of second matrix:",i,j);
            scanf("%d",&secondmatrix[i][j]);
        }
    }
     for(i = 0; i < 3; i++) 
     {
        for(j = 0; j < 3; j++) {
            thirdmatrix[i][j] = 0;
        }
    }
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            for(k = 0; k < 3; k++) {
                thirdmatrix[i][j] += firstmatrix[i][k] * secondmatrix[k][j];
            }
        }
    }
    printf("\nFirstmatrix");
    {
        for(j=0;j<3;j++){
            printf("%d\t",firstmatrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nsecondmatrix");
    {
        for(j=0;j<3;j++){
            printf("%d\t",secondmatrix[i][j]);
        }
        printf("\n");
    }
    printf("\nthirdmatrix");
    {
        for(j=0;j<3;j++){
            printf("%d\t",thirdmatrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}