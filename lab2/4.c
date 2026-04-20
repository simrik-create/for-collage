//Write a program to enter a number and find out if it's odd or even.
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("The number is Even.");
    }
    else
    {
        printf("The number is Odd.");
    }

    return 0;
}