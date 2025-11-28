#include<stdio.h>
void swap(int *ptr1, int *ptr2)
{
    int temp;

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("X=%d\n",*ptr1);
    printf("Y=%d",*ptr2);
}
int main()
{
    int x=10,y=20,temp;

    swap(&x,&y);

    return 0;

}
