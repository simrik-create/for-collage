#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, C Programming!";
    char str3[50];
    int length, result;

    /* 1. strlen() */
    length = strlen(str1);
    printf("Length of str1: %d\n", length);

    /* 2. strcpy() - copy one string to another */
    strcpy(str3, str1);
    printf("After strcpy: %s\n", str3);

    /* 3. strcat() - concatenate two strings */
    strcat(str1, str2);
    printf("After strcat: %s\n", str1);

    /* 4. strcmp() - compare two strings */
    result = strcmp(str1, str2);

    if(result == 0)
        printf("str1 and str2 are equal\n");
    else if(result < 0)
        printf("str1 is less than str2\n");
    else
        printf("str1 is greater than str2\n");

    /* 5. Convert to lowercase (not standard in all compilers) */
    for(int i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] >= 'A' && str1[i] <= 'Z')
            str1[i] = str1[i] + 32;
    }

    printf("Lowercase str1: %s\n", str1);

    return 0;
}