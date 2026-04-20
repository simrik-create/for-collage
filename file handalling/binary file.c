#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    //binary file - stores data in raw binary format
    fp = fopen("binaryfile.bin", "wb"); // w= write, b= binary mode
    if (fp == NULL)
    {
        printf("Error creating binary file\n");
        exit(1);
    }

    // write number as binary data
    int num = 12345;
    fwrite(&num, sizeof(int), 1, fp); // store as 4 byte number (machinical representation)
    fclose(fp);

    printf("binary file created : stores '12345' as 4 byte of binary format\n");
    printf("size comparison : text file uses 5 byte, binary file uses 4 byte\n");
    return 0;
}