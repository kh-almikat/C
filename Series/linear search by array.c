#include<stdio.h>
int main()
{
    int number[]={1,5,10,15,20,23,60,45,53,77,82,100,19,34,89,98,72,36};
    int target,i,found=-1;
    printf("enter search number(1-100):");
    scanf("%d",&target);

    for(i=0;i<18;i++)
    {
        if(number[i]==target)
          {
              found=i;
             break;
          }
    }
    if(found==-1)
        printf("number is not found");
    else
    {
        printf("number is found\n");
        printf("number found in %d position",found+1);
    }
    return 0;
}
