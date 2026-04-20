//write a program to swap two values using pointers
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    int *p,*q;//* sign only used while declaring pointer variable and dereferancing
    p=&a;
    q=&b; 
    int swap=*p; 
    *p=*q; 
    *q=swap; 
    printf("after swapping the value of a is %d and value of b is %d",a,b);   
    return 0;
}