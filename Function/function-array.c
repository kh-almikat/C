#include <stdio.h>

// Function prototype
void printArray(int arr[], int size);

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int size=sizeof(numbers)/sizeof(numbers[0]);

    printArray(numbers, size);  // function call

    return 0;
}

// Function definition
void printArray(int arr[], int size) {
    int i;
    printf("Array elements: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

