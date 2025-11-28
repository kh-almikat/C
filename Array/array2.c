#include<stdio.h>
int main()
{
    int number[10],sum=0;

    for(int index=0;index<10;index++)
    {
        printf("number %d:",index+1);
        scanf("%d",&number[index]);
    }

    for(int index=0;index<10;index++)
    {
      sum=sum+number[index];
    }
    printf("sum=%d",sum);
    return 0;
}
