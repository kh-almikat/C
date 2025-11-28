#include <stdio.h>

void inputMatrix(int a[10][10], int r, int c);
void printMatrix(int a[10][10], int r, int c);
void addMatrix(int a[10][10], int b[10][10], int r, int c);
void multiplyMatrix(int a[10][10], int b[10][10], int r, int c);

int main(){
    int a[10][10], b[10][10], r, c, choice;
    printf("Enter rows and columns: ");
    scanf("%d%d",&r,&c);
    inputMatrix(a,r,c);
    inputMatrix(b,r,c);
    while(1){
        printf("\n--- Matrix Menu ---\n");
        printf("1. Add\n2. Multiply\n3. Display\n4. Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: addMatrix(a,b,r,c); break;
            case 2: multiplyMatrix(a,b,r,c); break;
            case 3: printf("Matrix A:\n"); printMatrix(a,r,c);
                    printf("Matrix B:\n"); printMatrix(b,r,c); break;
            case 4: return 0;
        }
    }
}

void inputMatrix(int a[10][10], int r, int c){
    printf("Enter elements (%dx%d):\n",r,c);
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
}

void printMatrix(int a[10][10], int r, int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

void addMatrix(int a[10][10], int b[10][10], int r, int c){
    int sum[10][10];
    printf("Addition Result:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int r, int c){
    int m[10][10]={0};
    printf("Multiplication Result:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            for(int k=0;k<c;k++)
                m[i][j]+=a[i][k]*b[k][j];
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}

