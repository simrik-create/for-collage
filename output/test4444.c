#include<stdio.h> 
int main() 
{
    int i, j;
    for (i = 1;i <=4;i++) 
    {
        for (j = 1;j <=4-i+1;j++) 
        {
            printf(" ");
        }
        for (j=1;j<=i;j++) 
        {
            printf("* ");
        }

        printf("\n");
    }
    int row=4;
    for(int i=1;i<row;i++)
    {
        for(int j=i;j<i;j++)
        { 
            printf(" ");
        }
     for(int j=row;j>i;j--)
     {
        printf("*");

     }
     printf("\n");
    }
    return 0;
}