#include<stdio.h>
int main()
{
    char s1[50]="My name is ";
    char s2[]="Khondoker Almikat";

    int i=0,len=0,j=0;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[len+j]=s2[j];
        j++;
    }
    printf("%s",s1);

    return 0;
}
