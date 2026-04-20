#include <stdio.h>

int main() {
    int a, b, i, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Find HCF
    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }

    // Find LCM using formula
    lcm = (a * b) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}