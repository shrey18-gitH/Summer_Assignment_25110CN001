#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

// Function to calculate gross salary
float calculateGross(float basic, float hra, float da) {
    return basic + hra + da;
}

void addEmployee(struct Employee employees[], int *count) {
    printf("\nEnter Employee ID: ");
    scanf("%d", &employees[*count].id);
    printf("Enter Name: ");
    scanf(" %[^\n]", employees[*count].name);
    printf("Enter Basic Salary: ");
    scanf("%f", &employees[*count].basicSalary);
    printf("Enter HRA: ");
    scanf("%f", &employees[*count].hra);
    printf("Enter DA: ");
    scanf("%f", &employees[*count].da);

    employees[*count].grossSalary = calculateGross(employees[*count].basicSalary,
                                                   employees[*count].hra,
                                                   employees[*count].da);
    (*count)++;
    printf("Employee salary record added successfully!\n");
}

void displayEmployees(struct Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo salary records found.\n");
        return;
    }
    printf("\n--- Salary Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
               employees[i].id, employees[i].name,
               employees[i].basicSalary, employees[i].hra,
               employees[i].da, employees[i].grossSalary);
    }
}

void searchEmployee(struct Employee employees[], int count) {
    int id;
    printf("\nEnter Employee ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Record Found: ID: %d | Name: %s | Basic: %.2f | HRA: %.2f | DA: %.2f | Gross: %.2f\n",
                   employees[i].id, employees[i].name,
                   employees[i].basicSalary, employees[i].hra,
                   employees[i].da, employees[i].grossSalary);
            return;
        }
    }
    printf("No record found with ID %d.\n", id);
}

void updateSalary(struct Employee employees[], int count) {
    int id;
    printf("\nEnter Employee ID to update salary: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (employees[i].id == id) {
            printf("Enter new Basic Salary: ");
            scanf("%f", &employees[i].basicSalary);
            printf("Enter new HRA: ");
            scanf("%f", &employees[i].hra);
            printf("Enter new DA: ");
            scanf("%f", &employees[i].da);

            employees[i].grossSalary = calculateGross(employees[i].basicSalary,
                                                      employees[i].hra,
                                                      employees[i].da);
            printf("Salary updated successfully!\n");
            return;
        }
    }
    printf("No record found with ID %d.\n", id);
}

void deleteEmployee(struct Employee employees[], int *count) {
    int id;
    printf("\nEnter Employee ID to delete: ");
    scanf("%d", &id);
    for (int i = 0; i < *count; i++) {
        if (employees[i].id == id) {
            for (int j = i; j < *count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            (*count)--;
            printf("Employee salary record deleted successfully!\n");
            return;
        }
    }
    printf("No record found with ID %d.\n", id);
}

int main() {
    struct Employee employees[100];
    int count = 0, choice;

    while (1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Employee Salary Record\n");
        printf("2. Display Salary Records\n");
        printf("3. Search Employee Salary\n");
        printf("4. Update Employee Salary\n");
        printf("5. Delete Employee Salary Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addEmployee(employees, &count); break;
            case 2: displayEmployees(employees, count); break;
            case 3: searchEmployee(employees, count); break;
            case 4: updateSalary(employees, count); break;
            case 5: deleteEmployee(employees, &count); break;
            case 6: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
