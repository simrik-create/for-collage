
/*
Debug the following C program that is supposed to calculate simpleinterest but contains errors:
#include<stdio.h>
main()
{
int p, r, t, SI;
printf("Enter principal, rate and time: ")
scanf("%d%d%d", p, r, t);
SI = (p*r*t)/100;
printf("Simple Interest = %d", si);
}
currected code   |
                 | 
                \|/*/
#include <stdio.h>

int main() {
    int p, r, t, SI;
    printf("Enter principal, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    SI = (p * r * t) / 100;
    printf("Simple Interest = %d", SI);
    return 0;
}

