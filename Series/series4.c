//1+1/2+1/3 +....+1/n
#include<stdio.h>
#include<conio.h>
int main()
{
    double n,i,sum=0;
    printf("enter N:");
    scanf("%lf",&n);

printf("1+1/2+1/3+....+1/%.1lf",n);

    for(i=1;i<=n;i++)
       {
          sum=sum+(i/n);
       }
    printf("= %lf",sum);
    getch();
}
