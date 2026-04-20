/*
syntx:
if (condition){//condition output--->
|       //code to exicute if condition is true
}
executes block only when condition is true
*/
//WAP a program to print you can vote if age>=18;
#include <stdio.h>
int main()
{
    int age =19;
    if (age>=18)
    {
        printf("you can vote/n");
    }
    else
     {
        printf("you can not vote/n");
    }
    return 0;
}