#include <stdio.h>

void triangle(int n);
void pyramid(int n);
void diamond(int n);

int main() {
    int choice,n,row,col;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("1. Triangle\n2. Pyramid\n3. Diamond\nChoose pattern: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: triangle(n); break;
        case 2: pyramid(n); break;
        case 3: diamond(n); break;
        default: printf("Invalid choice!\n");
    }
    return 0;
}

void triangle(int n)
{
    int row,col;
    for (row=1;row<=n;row++)
        {
        for (col=1;col<=row;col++)
           {
            printf("* ");
           }
        printf("\n");
        }
}

void pyramid(int n)
{
   int row,col;
  for(row=1;row<=n;row++)
     {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);// %d r por space dile pyramid shape
        }
        printf("\n");
     }
}

void diamond(int n)
{
    int row,col;
    for(row=1; row<=n; row++)//upper part
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }


    for(row=n-1; row>=1; row--)//lower part
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }

}

