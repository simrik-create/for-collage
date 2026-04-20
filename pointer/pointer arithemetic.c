/* what is pointer to pointer*/
#include <stdio.h>
int main()
{
    int arr[5]={ 10,20,30,40,50};
    int *ptr =arr; // here we are storing the address of first element of array in pointer variable ptr
    printf("array element using pointer arithmetic\n");
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr); // here we are dereferencing the pointer variable ptr to get the value of array element
        ptr++; // here we are incrementing the pointer variable ptr to point to the next element of array
        
    }
    printf("\n");
    return 0;
}