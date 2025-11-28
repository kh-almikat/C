#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure for employee
struct Employee {
    int id;
    char name[50];
    float salary;
};

// function prototypes
void addEmployee(struct Employee emp[], int *count);
void displayEmployees(struct Employee emp[], int count);
void searchEmployee(struct Employee emp[], int count);
void saveToFile(struct Employee emp[], int count);

int main() {
    struct Employee emp[100];
    int count = 0, choice;

    while (1) {
        printf("\n==============================\n");
        printf(" Employee Record Management\n");
        printf("==============================\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Save to File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            addEmployee(emp, &count);
            break;
        case 2:
            displayEmployees(emp, count);
            break;
        case 3:
            searchEmployee(emp, count);
            break;
        case 4:
            saveToFile(emp, count);
            break;
        case 5:
            printf("Exiting program...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Add employee info
void addEmployee(struct Employee emp[], int *count) {
    printf("Enter Employee ID: ");
    scanf("%d", &emp[*count].id);
    getchar(); // clear buffer

    printf("Enter Employee Name: ");
    fflush(stdin);
    gets(emp[*count].name);

    printf("Enter Employee Salary: ");
    scanf("%f", &emp[*count].salary);

    (*count)++;
    printf(" Employee added successfully!\n");
}

// Display all employees
void displayEmployees(struct Employee emp[], int count) {
    if (count == 0) {
        printf("No employee records found!\n");
        return;
    }

    printf("\n--- Employee List ---\n");
    printf("ID\tName\t\tSalary\n");
    printf("-----------------------------\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t %s\t %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}

// Search by ID
void searchEmployee(struct Employee emp[], int count) {
    int id, found = 0;
    printf("Enter Employee ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found:\n");
            printf("ID: %d\nName: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
            found = 1;
            break;
        }
    }
    if (!found)
        printf(" Employee not found!\n");
}

// Save to file
void saveToFile(struct Employee emp[], int count) {
    FILE *file = fopen("employee.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\t%s\t%.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
    fclose(file);
    printf(" Data saved to 'employee.txt' successfully!\n");
}

