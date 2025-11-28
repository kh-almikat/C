#include<stdio.h>
#include<conio.h>
int main()
{
    float c,f;
    printf("enter a centigrade temperature:");
    scanf("%f",&c);

     f=(c*1.8)+32;//  9/5=1.8
     printf("fahernhiet temperature is: %.1f",f);
     getch();
}
