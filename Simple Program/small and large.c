#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);

    if (num1>num2)
        printf("large= %d",num1);
    else if (num2>num1)
        printf("large= %d",num2);
    else
        printf("number are equal");
    getch();
}
