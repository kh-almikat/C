#include<stdio.h>
int main()
{
    char s[100];
    printf("enter a sentence:");
    gets(s);

    int i,capital,small,digit;
    i=capital=small=digit=0;

    while(s[i] !='\0')
    {
        if(s[i]>=65 && s[i]<=90)
            capital++;
        else if(s[i]>=97 && s[i]<=122)
            small++;
        else if(s[i]>=48 && s[i]<=57)
            digit++;
       i++;
    }
    printf("number of capital   =%d\n",capital);
    printf("number of small     =%d\n",small);
    printf("number of digit     =%d\n",digit);
    return 0;
}
