#include<stdio.h>
int main()
{
    char s[100],x;
    int i,vowel,consonent,digit,word,other;

    printf("enter a sentance:");
    gets(s);

    i=vowel=consonent=digit=word=other=0;

    while ((x = s[i]) != '\0')

    {
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' ||
           x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            vowel++;
        else if((x>='a' && x<='z') || (x>='A' && x<='Z'))
            consonent++;
        else if(x>='0' && x<='9')
            digit++;
        else if(x==' ')
            word++;
        else
            other++;
        i++;
    }
    word++;
    printf("number of vowel     =%d\n",vowel);
    printf("number of consonent =%d\n",consonent);
    printf("number of digit     =%d\n",digit);
    printf("number of word      =%d\n",word);
    printf("number of other     =%d\n",other);

    return 0;
}
