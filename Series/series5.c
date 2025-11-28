#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,result=1;
    printf("enter last digit:");
    scanf("%d",&n);

    printf("1*2*3*....*%d",n);

    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    printf("= %d",result);
    getch();
}
