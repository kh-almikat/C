//ax^2+bx+c
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;
    printf("enter a b c:");
    scanf("%lf %lf %lf",&a,&b,&c);

    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*c);
    x2=(-b-d)/(2*c);

    printf("x1= %lf\n",x1);
    printf("x2= %lf",x2);
    getch();



}
