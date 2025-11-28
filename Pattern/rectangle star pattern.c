#include<stdio.h>
int main()
{
    int n,col,row;
    printf("enter number of row:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
                printf("* ");
            else
            printf("  ");//double space
        }
        printf("\n");
    }
    return 0;
}
