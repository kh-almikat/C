#include<stdio.h>
#include<math.h>
int main()
{
    double x,y,a;
    printf("enter x:");
    scanf("%lf",&x);

    printf("enter y:");
    scanf("%lf",&y);

    a= pow(x,y);
    printf("ans:%.2lf",a);
    return 0;
}
