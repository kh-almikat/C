#include<stdio.h>

struct person    //global structure
{
    int age;
    float salary;
};
int main()
{
    struct person person1,person2;  // local variable

    printf("enter age for person 1:");
    scanf("%d",&person1.age);
    printf("enter salary:");
    scanf("%f",&person1.salary);

    printf("enter age for person 2:");
    scanf("%d",&person2.age);
    printf("enter salary:");
    scanf("%f",&person2.salary);


    printf("1st person\n");
    printf("age=%d\n",person1.age);
    printf("salary=%.1f\n",person1.salary);

    printf("\n2nd person\n");
    printf("age=%d\n",person2.age);
    printf("salary=%.1f\n",person2.salary);

    return 0;

}

