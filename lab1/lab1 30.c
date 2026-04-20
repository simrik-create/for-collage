#include <stdio.h>
int main()
{
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;
    char grade;
    printf("Enter marks of 5 subjects:\n");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500.0) * 100;
    if (percentage >= 80)
        grade = 'A';
    else if (percentage >= 70)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 50)
        grade = 'D';
    else
        grade = 'F';
    printf("\nTotal Marks = %d", total);
    printf("\nPercentage = %.2f%%", percentage);
    printf("\nGrade = %c", grade);
    return 0;
}