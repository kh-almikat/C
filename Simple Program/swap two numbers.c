#include<stdio.h>
#include<conio.h>
int main()
{
    int num1=20,num2=5;

    num1=num1-num2;//15
    num2=num1+num2;//20
    num1=num2-num1;//15

    printf("num1= %d\n",num1);
    printf("num2= %d",num2);
    getch();
}
