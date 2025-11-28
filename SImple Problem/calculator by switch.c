#include<stdio.h>
#include<conio.h>
int main()
{
    float n,m,s;
    char x;
    printf("enter a operator(+,-,*,/):");
    scanf("%c",&x);
    printf("enter two number:");
    scanf("%f %f",&n,&m);

    switch(x)
    {
        case '+':
      {
          s=n+m;
          printf("sum:%.2f",s);
          break;
      }
        case '-':
          {
              s=n-m;
              printf("subtract:%0.2f",s);
              break;
          }
        case '*':
            {
                s=n*m;
                printf("multiply:%f",s);
                break;
            }
        case '/':
            {
                s=n/m;
                printf("divide:%f",s);
                break;

            }

    }
  getch();
}
