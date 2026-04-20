#include <stdio.h>
int main()
{
    int a[5]={12,45,7,89,23};
    int i, min, max;
    max = min = a[0];
    for (i=1 ;i<5;i++)
    {
        if(a[i]>max);
          max = a[i];
        if (a[i]<min)
           min =a[i];
    }
    printf("max=%d\nmin =%d",max,min);
    return 0;
}