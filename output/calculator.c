#include <stdio.h>

int sum (int,int);
int multiply (int,int);
int subtract (int,int);
float division (float,float);
int main()
{
    float  a, b, result;
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter second number: ");
    scanf("%f", &b);
//sum
    int x =sum(a,b);
    printf("Sum: %d\n", x);
//multiply
    int y =multiply(a,b);
    printf("Product: %d\n", y);
//subtract  
    int z =subtract(a,b);
    printf("Difference: %d\n", z);
//division
    float d = division(a,b);
    printf("Division: %f\n", d);


   return 0;
}
int sum (int x, int y)
{
    return x + y;
}
int multiply (int x, int y)
{
    return x * y;
}
int subtract (int x, int y)
{
    return x - y;
}
float division (float x, float y)
{
    return x / y;// or return(float)x / (float)y);
}