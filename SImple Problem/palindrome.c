#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,rev=0,rem;
    printf("enter number:");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(num==rev)
        printf("%d is a palindrome",num);
    else
        printf("%d is not a palindrome",num);
    getch();
}
