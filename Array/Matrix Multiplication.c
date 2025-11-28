#include<stdio.h>
int main()
{
    int first[10][10],second[10][10],result[10][10];
    int r1,c1,r2,c2,i,j,k,sum=0;
    printf("enter row and col for 1st:");
    scanf("%d %d",&r1,&c1);

    printf("enter row and col for 2nd:");
    scanf("%d %d",&r2,&c2);

    while(c1 != r2)
    {
        printf("error.try again\n");

        printf("enter row and col for 1st:");
        scanf("%d %d",&r1,&c1);

        printf("enter row and col for 2nd:");
        scanf("%d %d",&r2,&c2);
    }
    //first matrix input
    printf("\nenter 1st matrix:\n");
    for(i=0;i<r1;i++)  //row
    {
        for(j=0;j<c1;j++)  //col
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
        printf("\n");
    }
    //second matrix input
    printf("\nenter 2nd matrix:\n");
     for(i=0;i<r2;i++)  //row
    {
        for(j=0;j<c2;j++)  //col
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
        printf("\n");
    }
    //multiply matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+first[i][k]*second[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    //first matrix print
    printf("\nfirst matrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
     //second matrix print
    printf("\nsecond matrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    //matrix result
    printf("\nmatrix result=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;


}
