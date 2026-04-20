/*4 types of define function
1. funcction with argument
int add(int a,int b)
{
2. function without written return type with argument
void sum(int a,int b)
3.  function without written return type without argument
void sum()
4. function with written return type without argument
int sum()
*/
#include <stdio.h>
int sum(int,int);    //function declaration or function prototype
//inform complier about my function
//return type int -->name is sum -->parameters int and int
//in decleration never pass variable only data type
//always declear function before main function
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    int result=sum(a,b);//function call
    //when function is called use only name dont call the function with data type
    //here a and b are actual parameters or argument 
    //when we call a function, the value of a and b are passed to the function and stored in x and y respectively
    //the function sum is excuted and the result is returned to the main function and stored in the variable result
    printf("The sum of %d and %d is %d\n",a,b,result);
    return 0;
}
int sum(int x,int y)//function definition
//here x and y are formal parameters or arguments
{
    return x+y;//function body
}