#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    printf("Enter total units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 2.50;
    } 
    else if (units <= 100) {
        bill = (50 * 2.50) + (units - 50) * 3.50;
    } 
    else if (units <= 200) {
        bill = (50 * 2.50) + (50 * 3.50) + (units - 100) * 5.00;
    } 
    else {
        bill = (50 * 2.50) + (50 * 3.50) + (100 * 5.00) + (units - 200) * 7.00;
    }

    printf("Total Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
