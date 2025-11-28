#include<stdio.h>
int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}
int main()
{
    int num1, num2, choice;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("\nEnter your choice (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch(choice) {
        case 1:
            printf("sum = %d\n",add(num1,num2));
            break;
        case 2:
            printf("sub= %d\n",sub(num1,num2));
            break;
        case 3:
            printf("mul = %d\n",mul(num1,num2));
            break;
        case 4:
            if(num2 == 0)
                printf("Error! Division by zero not allowed.\n");
            else {
                printf("div = %.2f\n", div(num1,num2));
            }
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
