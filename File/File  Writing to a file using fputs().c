
#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","a"); //a=add
    char name[100];

    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open\n");
        printf("enter anything:");
        gets(name);
        fputs(name,f);  //fputs=input string
        fputs("\n",f);
        fclose(f);
    }
    return 0;
}
