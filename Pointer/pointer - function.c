#include<stdio.h>
void sum(int *ptr1,int *ptr2)
{
    int sum=*ptr1+*ptr2;
    printf("sum=%d",sum);
}

int main()
{
    int num1=20,num2=30;

    int *ptr1=&num1;
    int *ptr2=&num2;
    sum(ptr1,ptr2);
    return 0;
}
