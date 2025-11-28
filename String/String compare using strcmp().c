#include<stdio.h>
int main()
{
    char s1[]="khondoker almikat ";
    char s2[]="almikat ";

    int a=strcmp(s1,s2);

    if(a==0)
    {
        printf("string are same ");
    }
    else
    {
        printf("string are not same");
    }
    return 0;
}
