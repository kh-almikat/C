#include<stdio.h>
int main()
{
    char s1[]="khondoker almikat";
    int i=0,len=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }

    printf("length= %d",len);
    return 0;
}
