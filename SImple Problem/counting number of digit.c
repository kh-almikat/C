#include<stdio.h>
#include<conio.h>
int main()
{
    int n,count=0;
    printf("enter a digit:");
    scanf("%d",&n);

    while(n!=0)
    {
        n=n/10;
        ++count;
    }
    printf(" number of digit %d",count);
    getch();
}

