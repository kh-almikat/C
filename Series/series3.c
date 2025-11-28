#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2,a,b,sum=0;
    printf("enter n1 & n2:");
    scanf("%d %d",&num1,&num2);

    printf("1*2+2*3+3*4+....+%d*%d",num1,num2);

    while(a<=num1 && b<=num2)
    {
        sum=sum+a*b;
        a=a+1;
        b=b+1;
    }
    printf("= %d",sum);
    getch();
}
