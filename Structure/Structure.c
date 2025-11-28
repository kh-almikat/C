#include<stdio.h>

struct person    //global structure
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;  // local variable

    person1.age=27;
    person1.salary=27500.02;
    printf("1st person\n");
    printf("age=%d\n",person1.age);
    printf("salary=%f\n",person1.salary);

    person2.age=20;
    person2.salary=7500.02;
    printf("\n2nd person\n");
    printf("age=%d\n",person2.age);
    printf("salary=%f\n",person2.salary);

    return 0;

}
