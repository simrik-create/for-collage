#include <stdio.h>

int main()
{
    struct student
    {
        char name[40];
        int roll_no;
        float marks;
    };

    struct student s[10];
    for (int i = 0; i < 3; i++)
    {


    printf("Enter student name: ");
    scanf("%s", s[i].name);

    printf("Enter student roll number: ");
    scanf("%d", &s[i].roll_no);

    printf("Enter student marks: ");
    scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }
    return 0;
}