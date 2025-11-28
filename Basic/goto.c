#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;

     mikat:
         printf("%d\n",i);
         i++; //i=i+1

    if (i<10)
        goto mikat;
    getch();
}
