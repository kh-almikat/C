#include<stdio.h>
int main()
{
    int number[]={10,14,35,25,3255};
    int *ptr=&number[0];

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(ptr+i));
    }
    return 0;
}
