#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    float math, english, physics, chemistry, computer;
    float marks[5];
}s;
int main()
int s[5];
{
    struct Student s[5];
    for(int i =0;i<5;i++)
    {
        printf("enter the name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("enter the roll number of student %d: ",i+1);
        scanf("%d",&s[i].roll);
        for (int j=0;j<5;j++)
        {
            printf("enter the marks of subject %d: ",j+1);
            scanf("%f",&s[i].marks[j]);
            
            printf("Enter Roll Number: ");
            scanf("%d", &s[i].roll);

            printf("Math Marks: ");
            scanf("%f", &s[i].math);

            printf("English Marks: ");
            scanf("%f", &s[i].english);

            printf("Physics Marks: ");
            scanf("%f", &s[i].physics);

            printf("Chemistry Marks: ");
            scanf("%f", &s[i].chemistry);

            printf("Computer Marks: ");
            scanf("%f", &s[i].computer);
            s[i].total = s[i].math + s[i].english + s[i].physics + s[i].chemistry + s[i].computer;
            s[i].percentage = s[i].total / 5;
        }
    }
}