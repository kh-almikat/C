#include<stdio.h>
int main()
{
    char source []="C programing";
    char target[100];

    strcpy(target,source);

    printf("target=%s",target);
    return 0;
}
