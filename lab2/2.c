/*Write a C program to enter marks for five distinct subjects. Calculate the aggregate total and percentage. Based on the
percentage, display the division of the student (Distinction, First
Division, Second Division, Third Division, or Fail).*/
#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5;
    float total, percentage;

    printf("Enter marks of 5 subjects:\n");
    printf("math: ");
    scanf("%f", &s1);
    printf("physics: ");
    scanf("%f", &s2);
    printf("chemistry: ");
    scanf("%f", &s3);
    printf("english: ");
    scanf("%f", &s4);
    printf("nepali: ");
    scanf("%f", &s5);

    total = s1 + s2 + s3 + s4 + s5;
    percentage = total / 5;

    printf("\nTotal Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (percentage >= 75)
        printf("Division: Distinction");
    else if (percentage >= 60)
        printf("Division: First Division");
    else if (percentage >= 50)
        printf("Division: Second Division");
    else if (percentage >= 40)
        printf("Division: Third Division");
    else
        printf("Division: Fail");

    return 0;
}