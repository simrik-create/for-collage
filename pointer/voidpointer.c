#include <stdio.h>
int main()
{
    int a=10;
    float b=5.5;
    char c='A';
    // when using void pointer do not forget to tyoe cast the value
    void *ptr; // void pointer can hold the address of any data type
    
    ptr=&a;
    printf("the integer value of a is %d\n",*(int*)ptr); 

    ptr=&b;
    printf("the float value of b is %f\n",*(float*)ptr);

    ptr=&c;
    printf("the char value of c is %c\n",*(char*)ptr);

    return 0;
}