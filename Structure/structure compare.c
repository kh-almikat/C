#include<stdio.h>

struct person    //global structure
{
    int age;
};
int main()
{
    struct person person1,person2;  // local variable

    printf("enter age for person 1:");
    scanf("%d",&person1.age);

    printf("enter age for person 2:");
    scanf("%d",&person2.age);

    printf("1st person\n");
    printf("age=%d\n",person1.age);

    printf("\n2nd person\n");
    printf("age=%d\n",person2.age);

    if(person1.age == person2.age)
        printf("\nSame ");
    else
        printf("\nNot same");

    return 0;

}

