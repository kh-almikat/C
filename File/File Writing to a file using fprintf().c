
#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","w"); // "w" = write,
    char name[100];
    int age;

    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open\n");
        printf("enter Name:");
        gets(name);

        printf("enter age:");
        scanf("%d",&age);
        //fprintf(file pointer,file specifiers,variable)
        fprintf(f,"Name=%s Age=%d\n",name,age);

        printf("Succesfully Written");

        fclose(f);
    }
    return 0;
}

