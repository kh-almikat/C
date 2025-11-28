#include<stdio.h>
int main()
{
    FILE *f;
    f= fopen("text.txt","w"); //file name, file mode

    if(f==NULL)
        printf("file not open");
    else
    {
        printf("file open");
        fclose(f);
    }
    return 0;
}
