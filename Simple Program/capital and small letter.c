
#include<stdio.h>
#include<conio.h>
int main()

{
  int x;
  printf("enter a letter:");
  scanf("%c",&x);

   if (x>='a' && x<='z')
     printf("small");
   else if (x>='A' && x<='Z')
    printf("capital");
   else
    printf("not a letter");
   getch();
}
