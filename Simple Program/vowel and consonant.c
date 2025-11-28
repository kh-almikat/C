#include<stdio.h>
#include<conio.h>
int main()
{
    char x;
    printf("enter a letter =");
    scanf("%c",&x);

    if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )// logical or = ||
        printf("vowel");
    else
        printf("consonant");
    getch();
}
