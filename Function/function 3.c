#include<stdio.h>
int add(int num1,int num2)
{
    int sum=num2+num1;
}
void result(int sum)
{
    printf("%d",sum);
}
int main()
{
    int num1,num2;

    printf("enter two number:");
    scanf("%d %d",&num1,&num2);

    result(add(num1,num2));
    return 0;
}
