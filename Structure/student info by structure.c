#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};
//function prototype
struct Student inputStudent();
void displayStudent(struct Student s);

int main() {
    int n, i;
    printf("How many students? ");
    scanf("%d", &n);

    struct Student st[n];  // array of struct

    // Input loop
    for(i = 0; i < n; i++) {
        printf("\nEnter info for student %d:\n", i+1);
        st[i] = inputStudent();   // প্রত্যেকবার return করে array তে রাখছি
    }

    // Output loop
    printf("\n--- All Students Information ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i+1);
        displayStudent(st[i]);
    }

    return 0;
}

struct Student inputStudent() {
    struct Student s;

    printf("Enter student ID: ");
    scanf("%d", &s.id);

    printf("Enter student Name: ");
    fflush(stdin);
    gets(s.name);

    printf("Enter student Marks: ");
    scanf("%f", &s.marks);

    return s;
}

void displayStudent(struct Student s) {
    printf("ID    : %d\n", s.id);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}
