#include<stdio.h>
void counter ()
{
    static int count=0; //static variable
    count++;
    printf("counter=%d\n",count);
}
void counter1()
{
    auto int count=0; //static local variable
    count++;
    printf("counter1=%d\n",count);
}
int main()
{
    counter();
    counter();
    counter();
    counter1();
    counter1();
    counter1();
    return 0;
}