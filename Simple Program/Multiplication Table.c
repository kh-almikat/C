#include<stdio.h>
#include<conio.h>
int main()


{while(1)
{
    int num,i;
    printf("enter a number:");
    scanf("%d",&num);

    for(i=1;i<=10;i++)
        printf("%d x %d = %d\n",num,i,num*i);
    getch();
}
}
