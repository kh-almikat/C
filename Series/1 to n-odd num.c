#include<stdio.h>
#include<conio.h>
int main()
{
     int n,i,sum=0;
     printf("enter last number:");
     scanf("%d",&n);

     for(i=1;i<=n;i=i+2)
     {
         sum=sum+i;
         printf("%d,",i);
    }
     printf("\n total odd num sum:%d ",sum);

    return 0;

}
