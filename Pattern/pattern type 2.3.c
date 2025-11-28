#include<stdio.h>
int main()
{
    int n, col,row;
    printf("enter number of row:");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",col+64); // row+64
        }
        printf("\n");
    }
    return 0;
}

