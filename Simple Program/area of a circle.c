#include<stdio.h>
#include<conio.h>
int main()
{
    float radius,area;
    printf("enter a circle radius:");
    scanf("%f",&radius);

    area=3.1416*radius*radius;
    printf("area is : %f",area);
    getch();
}
