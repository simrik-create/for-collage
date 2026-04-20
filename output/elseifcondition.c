/*
syntax:
if(condition)
{
  // code if condition is true

}
else if (condition2)
{
  //code if condition is false 
}
else if (condition3)
{
  //code if condition is false 
}
else
{
// default code
}
multiple condition checks in sequence 
we never test condition in else statement
/*GPA>3.6--A+
3.2---.A
2.8---B+
2.4---B
2.0-->C+
1.6---}c
1--->D
OTHERWISE NG
*/
#include <stdio.h>
int main(){
    float GPA;
    printf("enter your GPA:");
    scanf("%f",&gpa);
    if (gpa>=3.6 && GPA<=4.0)
    {
        printf("your grade is A+");
    }
    else if (gpa>=3.2 && gpa<3.6)
    {
        printf("your grade is A");
    }
    else if (gpa>=2.8 && gpa<3.2)
    {
        printf("your grade is B+");
    }else if (gpa>=2.8 && gpa<2.4)
        printf("your grade is b");
    }else if (gpa>=2.4 && gpa<2.0)
    {
        printf("your grade is C+");
    }
    else if (gpa>=2.0 && gpa<1.6)
    {
        printf("your grade is c ");
    }else if (gpa>=3.2 && gpa<3.6)
    {
        printf("your grade is A");
    }
    
}
