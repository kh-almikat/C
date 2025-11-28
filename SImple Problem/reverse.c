#include<stdio.h>
#include<conio.h>
int main()
{
    int num,rem,temp,rev=0;
    printf("enter digits:");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    printf("reverse= %d",rev);
    getch();
}
