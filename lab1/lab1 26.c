#include <stdio.h>

int main()
{
    float num1, num2, result;
    char op;

    // Input two numbers and operator
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Note the space before %c to skip any leftover newline

    // Perform operation based on the operator
    if(op == '+')
        result = num1 + num2;
    else if(op == '-')
        result = num1 - num2;
    else if(op == '*')
        result = num1 * num2;
    else if(op == '/')
    {
        if(num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1; // Exit program with error
        }
    }
    else
    {
        printf("Invalid operator entered.\n");
        return 1; // Exit program with error
    }

    // Display result
    printf("Result: %.2f %c %.2f = %.2f\n", num1, op, num2, result);

    return 0;
}
