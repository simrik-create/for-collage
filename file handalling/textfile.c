#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;// special type of pointer that hold/point the address of file in memory
    // TEXT file - store data in human readable format  
    fp = fopen("textfile.txt", "w"); // fopen= open a file.w = writeing mode ---> if file doesnot exist new file is created 
    // textfile.exe - file name with extension and full path 
    if (fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }
    // writeing number as text
    int num = 12345;
    fprintf(fp, "%d", num); // stores as '1' '2' '3' '4' '5'
    fclose(fp);// dont forget to close the file after use or operation is done

    printf("text file created : stores '12345' as 5 byte of ascii characters\n");
    return 0;

}