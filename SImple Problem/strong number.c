// 145=1!+4!+5!=1+24+120=145
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i,sum=0,temp,rem,fact;
    printf("enter a number:");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
        printf("%d is a strong number",num);
    else
        printf("%d is not a strong number",num);
    getch();
}
