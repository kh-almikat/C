#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="bangladesh";
    char s2[]="almikat";
    char temp[30];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("%s\n",s1);
    printf("%s",s2);

    return 0;
}
