/*write a c program to create menu driven calculator where ask user to enter two integers 
and choice (+,-,*,/)and perform calculation and display result*/
#include<stdio.h>
#include <math.h>
int main()
{
     int a, b;
    char choice;

    printf("Enter two numbers: ");
    scanf("%d%d", &a,&b);

    printf("\nChoose an option:\n");
    printf("+  Addition\n");
    printf("-  Subtraction\n");
    printf("*  Multiplication\n");
    printf("/  Division\n");

    printf("\nEnter your choice: ");
    scanf(" %c", &choice);   
    switch (choice) {
        case '+':
            printf("Result = %d", a + b);
            pow (a,b);
            break;

        case '-':
            printf("Result = %d", a - b);
            break;

        case '*':
            printf("Result = %d", a * b);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d", a / b);
            else
                printf("Division by zero is not allowed");
            break;

        default:
            printf("Invalid choice");
            break;
    }

    return 0;
}