#include<stdio.h>
#include<conio.h>
int main()
{
   int num,rem,sum=0,temp;

   printf("enter digits:");
   scanf("%d",&num);

   temp=num;

   while(temp!=0)
   {
       rem=temp%10;
       sum=sum+rem;
       temp=temp/10;
   }
   printf("sum of digit= %d",sum);
   getch();
}
