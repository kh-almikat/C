#include<stdio.h>
int main ()
{
    int row,col,i,j,m[10][10],transpose[10][10];
    printf("Enter row and col number: ");
    scanf("%d %d",&row,&col);

    printf("Enter matrix\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    // transpose তৈরি
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=m[i][j];
        }
    }

    // মূল matrix প্রিন্ট
    printf("\nMatrix is:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    // transpose প্রিন্ট
    printf("\nTranspose is:\n");
    for(i=0;i<col;i++)   // transpose এর row = মূল col
    {
        for(j=0;j<row;j++) // transpose এর col = মূল row
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
