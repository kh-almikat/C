#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    float y,s;
    printf("1. fahrenhiet to celsius\n");
    printf("2. celsius to fahrenhiet\n");
    printf("enter your choice:");
    scanf("%d",&x);

    switch (x)
    {
    case 1:
        {
            printf("enter fahrenhiet temp:");
            scanf("%f",&y);
            s=(y-32)/1.8;
            printf("celsius:%f",s);
            break;

        }
    case 2:
        {
            printf("enter celsius temp:");
            scanf("%f",&y);
            s=(y-32)/1.8;
            printf("fahrenhiet:");
            break;

        }
    }
    getch();
}
