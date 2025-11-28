#include<stdio.h>
#include<conio.h>
int main()
{
    int num,temp,sum=0,rev,rem;
    printf("enter a number:");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+(rem*rem*rem);
        temp=temp/10;
    }
    if(num==sum)
        printf("%d is a armstrong",num);
    else
        printf("%d is not a armstrong",num);
    getch();
}
