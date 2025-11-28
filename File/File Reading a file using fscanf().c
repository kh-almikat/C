#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","r"); //file name, file mode
     char name[100];

    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open");

      //fscanf(file pointer,file specifier,variable)
        fscanf(f,"%s",name);
        printf("%s",name);
        fclose(f);
    }
    return 0;
}

