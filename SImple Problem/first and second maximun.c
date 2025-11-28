#include<stdio.h>
int main()
{
    int num[100];
    int n,i,first,second;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    if(n < 2)
        printf("Sorry! Need at least 2 elements.\n");
    else
    {
        printf("Enter numbers: ");
        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }

         first=second=num[0];


        // Find first and second largest
        for(i=2; i<n; i++)
        {
            if(num[i] > first) {
                second = first;
                first = num[i];
            }
            else if(num[i] > second && num[i] != first) {
                second = num[i];
            }
        }

        printf("First largest = %d\n", first);
        printf("Second largest = %d\n", second);
    }

    return 0;
}
