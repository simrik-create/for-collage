#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define a structure
typedef struct
{
    int roll_no;
    char name[50];
    float marks;
    char grade;
} Student;
// Function to display student data
void displayStudent(Student s)
{
    printf("Roll no:%d\n",s.roll_no);
      printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
    printf("Grade: %c\n", s.grade);
    printf("---------------------------\n");
}
int main()
{
    FILE *fp;
    Student students[3];
    Student read_students[3];
    int i;

    // Initialize student data
    strcpy(students[0].name, "John Doe");
    students[0].roll_no = 101;
    students[0].marks = 85.5;
    students[0].grade = 'A';

    strcpy(students[1].name, "Jane Smith");
    students[1].roll_no = 102;
    students[1].marks = 92.0;
    students[1].grade = 'A';

    strcpy(students[2].name, "Bob Johnson");
    students[2].roll_no = 103;
    students[2].marks = 78.5;
    students[2].grade = 'B';
    // Writing using fwrite()
    printf("=== fwrite() - Writing structure to binary file ===\n");
    fp = fopen("students.dat", "wb");
    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Writing %d student records to file...\n\n", 3);
    for (i = 0; i < 3; i++)
    {
        printf("Writing record %d:\n", i + 1);
        displayStudent(students[i]);
        // fwrite(ptr, size, count, file_ptr)
        fwrite(&students[i], sizeof(Student), 1, fp);
    }
    fclose(fp);
    // Reading using fread()
    printf("\n=== fread() - Reading structure from binary file ===\n\n");
    fp = fopen("students.dat", "rb");
    if (fp == NULL)
 {
        printf("Error opening file for reading!\n");
        exit(1);
}
printf("Reading student records from file...\n\n");
i = 0;
// fread(ptr, size, count, file_ptr)
while (fread(&read_students[i], sizeof(Student), 1, fp) == 1)
 {
printf("Record %d read:\n", i + 1);
displayStudent(read_students[i]);
i++;
 }
     printf("Total records read: %d\n", i);
    fclose(fp);
    // fread() with array of structures
    printf("\n=== fread() - Reading entire array at once ===\n");
    fp = fopen("students.dat", "rb");
    if (fp == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    //Read all 3 records at once
    fread(read_students,sizeof(Student),3,fp);
    printf("All records read in one operation:\n\n");
    for(i=0;i<3;i++){
        displayStudent(read_students[i]);
    }
    fclose(fp);
    //writing array using fwrite()
     printf("\n=== fwrite() - Writing entire array at once ===\n");
    fp = fopen("students_batch.dat", "wb");
    if (fp == NULL)
    {
           printf("Error opening file!\n");
        exit(1);
    }
    // Write all 3 records at once
    fwrite(students, sizeof(Student), 3, fp);
    printf("All 3 records written in one operation!\n");
    fclose(fp);
    return 0;
}