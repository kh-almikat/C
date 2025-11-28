
#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","w"); //file name, file mode
    char name[]="khondker almikat";
    int len=strlen(name);

    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open");
        for(int i=0;i<len;i++)
        {
            fputc(name[i],f);
        }
        printf("\nSuccesfully written!");
        fclose(f);
    }
    return 0;
}
