#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("enter a year:");
    scanf("%d",&y);
    if(y%400==0)
        printf("leap year");
    else if(y%4==0&&y%100!=0)
        printf("leap year");
    else printf("notleap year");
    getch();
}
