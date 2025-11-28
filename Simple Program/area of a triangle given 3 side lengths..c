#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter triangle 3 vluae:");
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("triangle area is : %.2f",area);
    getch();
}
