#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","r"); //r=reading
    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open\n");
        while(!feof(f))  //feof=end
        {
            char ch=fgetc(f); //fgetc()=charector by charector
            printf("%c",ch);
        }
        fclose(f);
    }
    return 0;
}

