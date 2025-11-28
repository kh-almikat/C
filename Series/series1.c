#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0;
    printf("enter last number of a series:");
    scanf("%d",&num);

    printf("1+2+3+....+%d",num);

    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("= %d",sum);
    getch();
}
