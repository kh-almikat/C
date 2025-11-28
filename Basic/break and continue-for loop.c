#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    for(i=1;i<30;i=i+1)
    {
        if(i%3==0)
            continue;
        printf("%d\n",i);

        if(i==25)
            break;
    }
    getch();
}
