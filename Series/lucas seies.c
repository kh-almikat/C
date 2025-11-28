#include<stdio.h>
int main()
{
    int num,first=2,second=1,next,i;
    printf("enter range of series:");
    scanf("%d",&num);

    printf("%d %d ",first,second);
    for(i=3;i<=num;i++)
    {
        next=first+second;
        printf ("%d ",next);
        first=second;
        second=next;
    }
    return 0;
}
