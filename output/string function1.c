#include<stdio.h>
#include<string.h>
int  main()
{
char str1[50]="hello";
char str2[50]="world";
char str3[50];
int length,result;
length=strlen(str1);//length of the string
printf("Length of str1=%d\n",length);
strcpy(str3,str1);//copy of the string 
printf("After strcpy,str3=%s\n",str3);
strcat(str1,str2);//str1+str2=helloworld
printf("After strcat,str1=%s\n",str1);

//strcmp=compare two string
//return value
//0=both string equal
//<0=s1 is smaller than s2
//>0=s1 is greater than s2
/*
step by step working
example 1
strcmp("cat","cat")
comparison
c==c
a==a
t==t
\0==\0 null terminating character
all characters match
return->0
example 2
strcmp("apple","apricot")
comparison
a==a
p==p
p==r  -->mismatch
ASCII values:
p=112
r=114
calculation
112-114=-2
negative valuyed return 
apple<apricot
example 3
strcmp("bat","ball")
comparison
b==b
a==a
t!=l
ASCII:
t=116
l=108
calculation
116-108=+8
positive valued returned
bat>ball

*/
result=strcmp(str1,str2);
if(result==0)
printf("str1 and str2 are equal\n");
else if (result>0)
printf("str1 is greater than str2");
else 
printf("str1 is smaller than str2");
/*
strlwr()-->lowercase
strupr()-->uppercase
strrev()-->reverse

*/
return 0;
}
