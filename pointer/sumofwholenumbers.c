//add 2 number using pointer
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter first number: ");
    scanf("%d",&a);
    printf("enter second number: ");
    scanf("%d",&b);
    int *p,*q;// here we are declaring two pointer variable p and q
    // while declearing pointer w use * sign
    // int *p means it only points or holds the address of integer variable
    p=&a; // it is called refereancing here we are storing the address of a in pointer p
    q=&b; // here we are storing the address of b in pointer q
    int sum=*p+*q; // it is called dereferancing
    //dereferancing -->address of a , in that adderss of a the value is stored
    printf("the sum of %d and %d is %d",a,b,sum);   
    return 0;

}