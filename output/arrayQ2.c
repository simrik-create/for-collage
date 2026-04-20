//w a p to enter 5 element od array and calculate there sum
#include <stdio.h>
int main()
{
    int array[5];
    int i;
    for(i = 0; i < 5; i++) {
        printf("Enter element array %d: ", i);
        scanf("%d", &array[i]);
    }
    int sum=0;
    for(i = 0; i < 5; i++) {
       sum=sum+array[i];
    }
    printf("\nSum of array elements = %d", sum);
    return 0;
}
