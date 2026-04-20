#include <stdio.h>
int sum (int,int);
int sub();
void mul(int,int);
void div();
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("Sum: %d\n", sum(a,b));
    int x = sub();
    printf("Sub returned value: %d\n", x);
    
    return 0;   
}
int sub()

{
   int a =10, b=5;
    int diff = a-b;
    printf("Sub: %d\n", diff);
    return diff; 
}
