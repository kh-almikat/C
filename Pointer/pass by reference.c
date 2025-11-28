#include<stdio.h>

void modify(int *num)
{
    *num = *num + 10;   // variable modify
}

int main()
{
    int x = 10;
    printf("before modification = %d\n", x);

    modify(&x);   // address send
    printf("after modification = %d\n", x);

    return 0;
}
