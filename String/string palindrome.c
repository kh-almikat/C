#include<stdio.h>
int main()
{
    char s1[30],s2[30];

    printf("enter a word:");
    scanf("%s",&s1);
    int i=0,len=0,j;

    while(s1[i]!='\0')
    {
        len++;
        i++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];
    }
    s2[j]='\0';

  int d=strcmp(s1,s2);
    if(d==0)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}
