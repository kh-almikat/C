#include<stdio.h>
int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("X value = %d\n", x);          // 5
    printf("Address of X = %p\n", &x);   // x এর address
    printf("Pointer value = %p\n", ptr); // ptr এর মধ্যে যা আছে = x এর address
    printf("Pointer dereference = %d\n", *ptr); // *ptr = 5
    printf("Address of ptr = %p\n", &ptr);     // ptr এর নিজের address

    return 0;
}
