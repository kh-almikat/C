#include<stdio.h>
#include<conio.h>
int main()
{
    int num,a,sum=0;
    printf("enter last number of a series:");
    scanf("%d",&num);
    printf("1+3+5+...+%d",num);

    while(a<=num)
    {
        sum=sum+a;
        a=a+2;
    }
    printf("= %d",sum);
    getch();
}
