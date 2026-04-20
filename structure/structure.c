/*struct_name{
    data_type member1;
    data_type member2;
    ...
    data_type memberN;
};
tructure_variable_name;
*/
#include <stdio.h>
int main()
{
    struct student
    {
        char name[40];
        int age;
        float marks;
    };
    struct student s1 = {"SIMRIK", 18, 85.5};
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}