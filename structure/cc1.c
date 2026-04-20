//write a program to enter data of 10 students (name, roll number, address) display student name start with s first letter. 
//using structure and display it on the screen.
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
    for (int i = 0; i < 10; i++)
    {
        printf("Enter student name: ");
        scanf("%s", s[i].name);

        printf("Enter student roll number: ");
        scanf("%d", &s[i].roll_no);

        printf("Enter student marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\nStudent Details:\n");
    for (int i = 0; i < 10; i++)
    {
    if(s[i].name[0] == 'S' || s[i].name[0] == 's')
    {
        printf("Name: %s\n", s[i].name);
        printf("Roll Number: %d\n", s[i].roll_no);
        printf("Marks: %.2f\n", s[i].marks);
    }
    }
    return 0;
}