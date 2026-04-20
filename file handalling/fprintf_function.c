#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;// file pointer---> hold the address of file
     
    //open file for writing
    fp = fopen("output.txt", "w"); // w= write mode.file open in write mode
    if (fp == NULL)//test file was created or not 
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("write data using fprintf function\n");

    // different format specifiers with fprintf
    //1 first string
    fprintf(fp,"1.string: %s\n", "i anm csit atudent");
    //fprintf function print the data in the file
    // 2.integer
    int roll_no =12345;         
    fprintf(fp,"2.integer:roll number %d\n", roll_no);

    // 3.floating point number
    float percentage = 85.5;
    fprintf(fp,"3.float: percentage %.2f\n", percentage);

    // 4.character
    char grade = 'A';
    fprintf(fp,"4.character: grade %c\n", grade);

    // 5.multiple values
    char name[] = "John Doe";
    int age = 30;
    fprintf(fp,"5.multiple values: name %s, age %d\n", name, age);

    // 6.hexadecimal and octal
    int num = 255;
    fprintf(fp,"6.hexadecimal: num in hex %x\n,octal: num in octal %o", num, num);

    // 7.table format
    fprintf(fp,"\n7. table format : \n ");
    fprintf(fp,"%-10s %-10s %-10s\n","subject","marks","grade");
    fprintf(fp,"%-10s %-10s %-10s\n","-------","-----","-----");
    fprintf(fp,"%-10s %-10d %-10c\n","math",95,'A');
    fprintf(fp,"%-10s %-10d %-10c\n","physic",88,'b');
    fprintf(fp,"%-10s %-10d %-10c\n","chamistry",92,'a');

    fclose(fp);
    // display the written content
    printf("content written to 'fprintf_demo.text':\n");
    printf("=========================================\n");

    fp=fopen("fprintf_demo.text","r");
    char ch;
    while((ch = fgetc(fp))!=EOF)
    {
        printf("%c", ch);
    }
    fclose(fp);

    return 0;
}