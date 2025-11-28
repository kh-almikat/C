#include<stdio.h>
void add(int n1,int n2)  //main functoin e result return na hoile void
{
    int sum=n1+n2;
    printf("sum= %d",sum);
    sub();  //sub function call
}
void sub()
{
    int n1,n2,sub;
    n1=10,n2=20;
    sub=n1-n2;
    printf("sub= %d",sub);
}
int main()
{
    add(10,20);
    add(30,40);
    sub();
    return 0;
}


