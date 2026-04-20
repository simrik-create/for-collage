#include <stdio.h>

int main()
{
    int id;               // Employee ID (integer)
    char name[50];        // Employee name (string/character array)
    float salary;         // Employee salary (floating-point)

    // Input employee data
    printf("Enter Employee ID: ");
    scanf("%d", &id);

    // To read a string with spaces, use ' ' in scanf or fgets
    printf("Enter Employee Name: ");
    scanf(" %[^\n]s", name);  // %[^\n] reads until newline

    printf("Enter Employee Salary: ");
    scanf("%f", &salary);

    // Display employee data
    printf("\nEmployee Details:\n");
    printf("ID     : %d\n", id);
    printf("Name   : %s\n", name);
    printf("Salary : %.2f\n", salary);

    return 0;
}
