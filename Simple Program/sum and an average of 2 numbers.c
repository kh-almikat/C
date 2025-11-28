#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,s;
    float avarage;
    printf("enter two number:");
    scanf("%d %d",&n1,&n2);
    s=n1+n2;
    printf("sum is %d \n",s);

    avarage=(float)s/2;
    printf("avarage is: %f",avarage);
    getch();
}
