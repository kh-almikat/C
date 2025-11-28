#include<stdio.h>
int main()
{
    char s1[]="khondoker almikat";
    char s2[30];

    int i=0,len=0,j;

    while (s1[i]!='\0')
    {
        len++;
        i++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';
    printf("%s",s2);
    return 0;
}
