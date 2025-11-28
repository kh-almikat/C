#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,result;
    printf("enter two number:");
    scanf("%d %d",&n1,&n2);

    result=n1+n2;
    printf("sum: %d\n",result);

     result=n1-n2;
    printf("subtract: %d\n",result);

     result=n1*n2;
    printf("multiply: %d\n",result);

     result=n1/n2;
    printf("divide: %d\n",result);

     result=n1%n2;
    printf("remember: %d\n",result);
    getch();
}

