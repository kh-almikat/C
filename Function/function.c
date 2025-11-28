#include<stdio.h>

// function prototype
int add(int n1, int n2);

int main()
{
    int sum;
    sum = add(10, 20);  // function call
    printf("sum = %d\n", sum);
    return 0;
}

// function definition
int add(int n1, int n2)
{
    int sum = n1 + n2;
    return sum;   // return value
}
