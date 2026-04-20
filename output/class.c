//write a C program to enter mask obtained in 5 subjects and ca;lculate total marks ,percentage and division. (full marks 100)
#include <stdio.h>
int main()
{
    int math, science, english, computer, nepali;
    float total_marks,percentage;
   printf("Enter marks obtained (out of 100) in each subject:\n");
    printf("Math:\n ");
    scanf("%d", &math);
    printf("Science:\n ");
    scanf("%d", &science);
    printf("English:\n ");
    scanf("%d", &english);
    printf("Computer:\n ");
    scanf("%d", &computer);
    printf("Nepali:\n ");
    scanf("%d", &nepali);
    total_marks = math+science+english+computer+nepali;
    percentage = (total_marks/5);
    printf("total marks obtained : %,2f\n",total_marks);
    printf("percentage: %.2f%%\n,percentage");
    if(percentage>=80 && percentage<=100);
    {
        printf("A+");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("A");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("b+");
    }
    else if(percentage>=50 && percentage<60)
    {
        printf("b");
    }
    else if(percentage>=40 && percentage<50)
    {
        printf("c+");
    }
    else if(percentage>=30 && percentage<40)
    {
        printf("c");
    }
    else
    {
        printf("fail"):
    }
    return 0; 

}