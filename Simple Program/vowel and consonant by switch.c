#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter a letter:");
    scanf("%c",&x);

    switch (x)
    {
    case 'a':
         case 'e':
          case 'i':
           case 'o':
            case 'u':
    printf("vowel");
    break;
       default:
        printf("consonant");

    }
    getch();
}
