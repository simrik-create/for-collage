// write a program to swap 2 variables using user define function
#include<stdio.h>
void swap(int ,int )
{
    int a,b;
    //printf("Enter the value of a and b\n");
    //1 scanf("%d%d",&a,&b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d and b=%d\n",a,b);
}
int main()
{
    int a,b;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping a=%d and b=%d\n",a,b);
    swap(a,b);
    return 0;
}