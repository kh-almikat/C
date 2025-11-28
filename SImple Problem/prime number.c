#include<stdio.h>

int main()
{
    int num,i,count=0;
    printf("enter a number:");
    scanf("%d",&num);

    if(num<=1)
    {
        printf("%d is not a prime number",num);
    }
    else
    {
        for(i=2;i<num;i++)
        {
            if(num % i == 0)
              {
               count = 1; //???
               break;
              }
        }

        if(count == 0) //???
            printf("%d is a prime number",num);
        else
            printf("%d is not a prime number",num);

    }
    return 0;
}
