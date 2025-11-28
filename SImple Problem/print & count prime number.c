#include<stdio.h>

int main()
{
    int num, i, n, count,numofprime=0;

    printf("Enter a range: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);

    for(num = 2; num <= n; num++)   // 2 থেকে শুরু, কারণ 0 আর 1 prime নয়
    {
        count = 0;  // reset every time

        for(i = 2; i < num; i++)
        {
            if(num % i == 0)
            {
                count = 1; // not prime
                break;
            }
        }

        if(count == 0) // prime হলে print করো
        {
            printf("%d ", num);
            numofprime++;
        }

    }
    printf("\ntotal prime number:%d",numofprime);

    return 0;
}
