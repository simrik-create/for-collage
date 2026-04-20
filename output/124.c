/*switch (expression)
{
case constant expression:
    / code /
    break;

default:
    break;
}
write a c program to ask user to enter intiger number from 1 to 7 display corrosponding days of a week using switch case     
*/
#include <stdio.h>
int main()
{
    int day;
    printf("Enter a number (1 to 7): ");
    scanf("%d", &day);
    switch(day) 
    {
        case 1:
            printf("1.Sunday\n");
            break;
        case 2:
            printf("2.Monday\n");
            break;
        case 3:
            printf("3.Tuesday\n");
            break;
        case 4:
            printf("4.Wednesday\n");
            break;
        case 5:
            printf("5.Thursday\n");
            break;
        case 6:
            printf("6.Friday\n");
            break;
        case 7:
            printf("7.Saturday\n");
            break;
        default:
            printf(" error !enter a number betn 1 and 7 \n");
            break;
    }

    return 0;
}