#include<stdio.h>
#include<math.h>
int main()
{
    double a,x,y,z;
    printf("enter a number:");
    scanf("%lf",&a);

     x=log(a);
     printf("log= %lf\n",x);

     y=exp(a);
     printf("exp= %lf\n",y);

     z=sin(a);
     printf("sin= %lf",z);
     return 0;
}
