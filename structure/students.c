#include <stdio.h>

int main() {
    char name[5][50];
    int roll[5];
    float marks[5][5];   // marks[i][0]=Math, [1]=English, [2]=Physics, [3]=Chemistry, [4]=Computer
    float total[5], percentage[5];
    int i, j;

    // Input details of students
    for(i = 0; i < 5; i++) {
        printf("\nEnter details of Student %d\n", i+1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        total[i] = 0; // initialize total

        // Input marks of 5 subjects
        char subjects[5][10] = {"Math", "English", "Physics", "Chemistry", "Computer"};
        for(j = 0; j < 5; j++) {
            printf("%s Marks: ", subjects[j]);
            scanf("%f", &marks[i][j]);
            total[i] += marks[i][j]; // add to total
        }

        percentage[i] = total[i] / 5; // calculate percentage
    }

    // Display student details
    printf("\n\nStudent Details\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("Name\tRoll\tMath\tEng\tPhy\tChem\tComp\tTotal\tPercentage\n");
    printf("-----------------------------------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%s\t%d", name[i], roll[i]);
        for(j = 0; j < 5; j++) {
            printf("\t%.0f", marks[i][j]);
        }
        printf("\t%.0f\t%.2f%%\n", total[i], percentage[i]);
    }

    return 0;
}