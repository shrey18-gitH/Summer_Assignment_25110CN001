#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100
#define NAME_LEN 50
#define DEPT_LEN 30

struct Employee {
    int id;
    char name[NAME_LEN];
    char department[DEPT_LEN];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int choice, count = 0, i;
    char search[NAME_LEN];

    do {
        printf("\n--- Mini Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Search Employee by Name\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // consume newline

        switch (choice) {
            case 1:
                if (count < MAX_EMPLOYEES) {
                    printf("Enter Employee ID: ");
                    scanf("%d", &employees[count].id);
                    getchar();

                    printf("Enter Employee Name: ");
                    fgets(employees[count].name, NAME_LEN, stdin);
                    employees[count].name[strcspn(employees[count].name, "\n")] = '\0';

                    printf("Enter Department: ");
                    fgets(employees[count].department, DEPT_LEN, stdin);
                    employees[count].department[strcspn(employees[count].department, "\n")] = '\0';

                    printf("Enter Salary: ");
                    scanf("%f", &employees[count].salary);

                    count++;
                    printf("Employee added successfully!\n");
                } else {
                    printf("Employee list is full!\n");
                }
                break;

            case 2:
                printf("\n--- Employee List ---\n");
                for (i = 0; i < count; i++) {
                    printf("ID: %d\n", employees[i].id);
                    printf("Name: %s\n", employees[i].name);
                    printf("Department: %s\n", employees[i].department);
                    printf("Salary: %.2f\n", employees[i].salary);
                    printf("-----------------------\n");
                }
                break;

            case 3:
                {
                    int searchId;
                    printf("Enter ID to search: ");
                    scanf("%d", &searchId);
                    for (i = 0; i < count; i++) {
                        if (employees[i].id == searchId) {
                            printf("Employee Found! Name: %s, Department: %s, Salary: %.2f\n",
                                   employees[i].name, employees[i].department, employees[i].salary);
                            break;
                        }
                    }
                    if (i == count) printf("Employee not found!\n");
                }
                break;

            case 4:
                printf("Enter name to search: ");
                fgets(search, NAME_LEN, stdin);
                search[strcspn(search, "\n")] = '\0';

                for (i = 0; i < count; i++) {
                    if (strcasecmp(employees[i].name, search) == 0) {
                        printf("Employee Found! ID: %d, Department: %s, Salary: %.2f\n",
                               employees[i].id, employees[i].department, employees[i].salary);
                        break;
                    }
                }
                if (i == count) printf("Employee not found!\n");
                break;

            case 5:
                printf("Exiting system...\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
