#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void addStudent(struct Student students[], int *count) {
    printf("\nEnter Roll Number: ");
    scanf("%d", &students[*count].rollNo);
    printf("Enter Name: ");
    scanf(" %[^\n]", students[*count].name);
    printf("Enter Marks: ");
    scanf("%f", &students[*count].marks);
    (*count)++;
    printf("Student added successfully!\n");
}

void displayStudents(struct Student students[], int count) {
    if (count == 0) {
        printf("\nNo records found.\n");
        return;
    }
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < count; i++) {
        printf("Roll No: %d | Name: %s | Marks: %.2f\n",
               students[i].rollNo, students[i].name, students[i].marks);
    }
}

void searchStudent(struct Student students[], int count) {
    int roll;
    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);
    for (int i = 0; i < count; i++) {
        if (students[i].rollNo == roll) {
            printf("Record Found: Roll No: %d | Name: %s | Marks: %.2f\n",
                   students[i].rollNo, students[i].name, students[i].marks);
            return;
        }
    }
    printf("No record found with Roll No %d.\n", roll);
}

void deleteStudent(struct Student students[], int *count) {
    int roll;
    printf("\nEnter Roll Number to delete: ");
    scanf("%d", &roll);
    for (int i = 0; i < *count; i++) {
        if (students[i].rollNo == roll) {
            for (int j = i; j < *count - 1; j++) {
                students[j] = students[j + 1];
            }
            (*count)--;
            printf("Record deleted successfully!\n");
            return;
        }
    }
    printf("No record found with Roll No %d.\n", roll);
}

int main() {
    struct Student students[100];
    int count = 0, choice;

    while (1) {
        printf("\n--- Student Record Management System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(students, &count); break;
            case 2: displayStudents(students, count); break;
            case 3: searchStudent(students, count); break;
            case 4: deleteStudent(students, &count); break;
            case 5: exit(0);
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
