#include<stdio.h>
int main()
{
    int m[3][3],i,j,sum=0;

    printf("Enter matrix(3*3)\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("[%d][%d]=",i,j);
            scanf("%d",&m[i][j]);
        }
    }

     printf(" \nmatrix is \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
           if(i=j)
           {
               sum=sum+m[i][j];
           }
        }
    }
    printf("sum of diagonal element:%d",sum);

    return 0;

}
