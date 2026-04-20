/*Write a program to check if a number is odd or even.
 If the numberisodd, calculate and display its cube. If the number is even, calculateand display its square.*/
 #include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0)
    {
        printf("The number is Even.\n");
        printf("Square = %d", num * num);
    }
    else
    {
        printf("The number is Odd.\n");
        printf("Cube = %d", num * num * num);
    }

    return 0;
}