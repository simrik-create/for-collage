//matrix addition 2*3 and 2*3
#include <stdio.h>
int main()
{
    int firstmatrix[2][3];
    int secondmatrix[2][3];
    int summatrix[2][3];
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("enter element [%d][%d]of first matrix:",i,j);
            scanf("%d",&firstmatrix[i][j]);
        }

    }
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("enter element [%d][%d] of second matrix:",i,j);
            scanf("%d",&secondmatrix[i][j]);
        }
    }
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            summatrix[i][j]=firstmatrix[i][j]+secondmatrix[i][j];
        }
    }
    printf("sum of matrix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",summatrix[i][j]);
        }
        printf("\n");
    
        
    }
    
    return 0;

}