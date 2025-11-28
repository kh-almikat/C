#include <stdio.h>

// Define a constant macro
#define PI 3.1416

// Define a function-like macro
#define SQUARE(x) (x * x)

// Conditional compilation
#define DEBUG

int main() {
    int r = 5;
    float area;

    area = PI * SQUARE(r);
    printf("Area of circle = %.2f\n", area);

#ifdef DEBUG
    printf("Debug Info:\n");
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
#endif

    return 0;
}
