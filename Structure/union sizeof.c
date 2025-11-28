#include<stdio.h>
union test1
{
    int x,y;
};
union test2
{
    double a;
    int x;
};
union test3
{
    char name[20];
    float z;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;

    printf("test1=%d\n",sizeof(t1));
    printf("test2=%d\n",sizeof(t2));
    printf("test3=%d\n",sizeof(t3));
}
