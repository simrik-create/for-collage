#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
     //different modes of f open()
     printf("=== file opening modes ===\n");

     //1. "r" read mode (file must exist)
     fp= fopen ("existingfile.txt","r");
     if(fp==NULL)
     {
        printf("1. "r" mode :file does not exist-fopen() returns null\n");
     }
     else
     {
        printf("1. "r" mode : file opened successfully for reading\n");
        fclose(fp);
     }

    //2. "w" write mode (creates new file or truncates existing file)
    fp= fopen ("newfile.txt","w");
    if(fp==NULL)
    {
        printf("2. "w" mode : error opening file for writing\n");
        fprint
    }
    else
    {
        printf("2. "w" mode : file opened successfully for writing\n");
        fclose(fp);
    }
}