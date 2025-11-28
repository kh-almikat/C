#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("student.txt", "a"); // append mode

    char name[100];
    int age, phone, num;

    if(file == NULL)
        printf("File not opened!\n");
    else
    {
        printf("File opened successfully.\n");

        printf("Enter number of students: ");
        scanf("%d", &num);

        for(int i = 0; i < num; i++)
        {
            printf("\nStudent %d name: ", i+1);
            fflush(stdin);
            gets(name);

            printf("Student %d age: ", i+1);
            scanf("%d", &age);

            printf("Student %d phone number: ", i+1);
            scanf("%d", &phone);

            fprintf(file, "%s\t%d\t%d\n", name, age, phone);
        }

        fclose(file);
        printf("\nAll data saved to file successfully.\n");
    }

    return 0;
}
