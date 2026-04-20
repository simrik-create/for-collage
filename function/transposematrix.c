#include <stdio.h>
// function prototype:transpose a 3x3 matrix and print the result
// the function does not return any value, so it declared as void
void transpose(int [][3]);
int main()
{
    int matrix[3][3];
    printf("enter the element of the matrix :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the original matrix is :\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    //compute and print the transposed matrix
    printf("the transposed matrix is :\n");
    transpose(matrix);// call transpose function
    return 0;
}
// the transpose is obtained by swipping the rows and columns of the original matrix
// parameter : matrix - the original matrix 3x3
//returns no thing
void transpose(int matrix[][3])
{
    int transposed[3][3];// temporary matrix to hold the transpose 
    // compute transpose : element (j,i) int transposed gets element (i,j) from original
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)        {
            transposed[j][i] = matrix[i][j];
        }
    }
    // print the transpose matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", transposed[i][j]);
        }   
        printf("\n");
    }   
}      