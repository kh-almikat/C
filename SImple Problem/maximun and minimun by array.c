#include<stdio.h>
int main()
{
    int number[100],n,i;

    printf("how many number:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }
    int max=number[0],mini=number[0];

    for(i=1;i<n;i++)//0=max,mini, 1 teke suru tai i=1
    {
        if(max<number[i])
        {
            max=number[i];
        }
        if(mini>number[i])
        {
            mini=number[i];
        }
    }


    printf("maximun number is=%d\n",max);
    printf("minimun number is=%d\n",mini);
    return 0;
}
