#include <stdio.h>
int main() {
    int totalDays, years, weeks, days;
    printf("Enter number of days: ");
    scanf("%d", &totalDays);
    years = totalDays / 365;          // 1 year = 365 days
    weeks = (totalDays % 365) / 7;   // remaining days converted to weeks
    days = (totalDays % 365) % 7;    // remaining days after weeks
    printf("%d days = %d year(s), %d week(s), %d day(s)\n", totalDays, years, weeks, days);
    return 0;
}