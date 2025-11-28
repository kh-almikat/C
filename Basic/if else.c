// if keyword: if,else if,else

#include<stdio.h>
#include<conio.h>
int main()
{
    int time;
    scanf("%d",&time);

    if (time == 8 || time == 9 || time == 10)
    {
        printf("good morning\n");
        printf("almikat");
    }
    else
    {
        printf("sorry its not morning\n");
        printf("almikat");
    }
    getch();
}
